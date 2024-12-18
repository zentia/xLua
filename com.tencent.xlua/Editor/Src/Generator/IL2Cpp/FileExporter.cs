using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Reflection;
using System.Runtime.CompilerServices;
using Newtonsoft.Json;
using XLua.TypeMapping;
using XLua;
using Utils = XLua.Editor.Generator.Utils;
using XLua.Editor.Generator;
using Object = System.Object;


#if !PUERTS_GENERAL && !UNITY_WEBGL
using Mono.Reflection;
using UnityEngine;
using XLua.LuaDLL;

namespace XLuaIl2cpp.Editor
{
    namespace Generator
    {
        public class FileExporter
        {
            public static List<string> GetValueTypeFieldSignatures(Type type)
            {
                List<string> ret = new List<string>();
                if (type.BaseType != null && type.BaseType.IsValueType) ret.Add(XLuaIl2cpp.TypeUtils.GetTypeSignature(type.BaseType));
                foreach (var field in type.GetFields(BindingFlags.DeclaredOnly | BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic))
                {
                    ret.Add(XLuaIl2cpp.TypeUtils.GetTypeSignature(field.FieldType));
                }
                return ret;
            }

            class ValueTypeInfo
            {
                public string Signature;
                public string CsName;
                public List<string> FieldSignatures;
                public int NullableHasValuePosition;
            }

            class SignatureInfo
            {
                public string Signature;
                public string CsName;
                public string ReturnSignature;
                public string ThisSignature;
                public List<string> ParameterSignatures;
            }

            class CppWrappersInfo
            {
                public List<ValueTypeInfo> ValueTypeInfos;

                public List<SignatureInfo> WrapperInfos;

                public List<SignatureInfo> BridgeInfos;

                public List<SignatureInfo> FieldWrapperInfos;
            }

            public static Type GetUnrefParameterType(ParameterInfo parameterInfo)
            {
                return (parameterInfo.ParameterType.IsByRef || parameterInfo.ParameterType.IsPointer) ? parameterInfo.ParameterType.GetElementType() : parameterInfo.ParameterType;
            }

            private static void GenericArgumentInInstructions(MethodBase node, HashSet<Type> result, HashSet<MethodBase> proceed, Func<MethodBase, IEnumerable<MethodBase>> callingMethodsGetter)
            {
                var declaringType = node.DeclaringType;
                if (proceed.Contains(node)) return;
                if (node.IsGenericMethod && !node.IsGenericMethodDefinition)
                {
                    foreach (var t in node.GetGenericArguments())
                    {
                        if (!t.IsDefined(typeof(CompilerGeneratedAttribute)))
                        {
                            result.Add(t);
                        }
                    }
                }
                if (declaringType != null && Utils.shouldNotGetArgumentsInInstructions(node)) return;

                proceed.Add(node);

                var callingMethods = callingMethodsGetter(node);
                foreach (var callingMethod in callingMethods)
                {
                    GenericArgumentInInstructions(callingMethod, result, proceed, callingMethodsGetter);
                }
            }

            private static bool IterateAllValueType(Type type, List<ValueTypeInfo> list)
            {
                if (Utils.isDisallowedType(type)) return false;
                if (type.IsPrimitive)
                {
                    return true;
                }
                Type baseType = type.BaseType;
                while (baseType != null && baseType != typeof(System.Object))
                {
                    if (baseType.IsValueType)
                    {
                        if (!IterateAllValueType(baseType, list)) return false;
                    }
                    baseType = baseType.BaseType;
                }

                foreach (var field in type.GetFields(BindingFlags.DeclaredOnly | BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic))
                {
                    if (field.FieldType.IsValueType && !field.FieldType.IsPrimitive)
                        if (!IterateAllValueType(field.FieldType, list)) return false;
                }

                int value = -1;
                if (Nullable.GetUnderlyingType(type) != null)
                {
                    var fields = type.GetFields(BindingFlags.DeclaredOnly | BindingFlags.Instance | BindingFlags.Public | BindingFlags.NonPublic);
                    for (var i = 0; i < fields.Length; i++)
                    {
                        if (fields[i].Name == "hasValue" || fields[i].Name == "has_value")
                        {
                            value = i;
                            break;
                        }
                    }
                }

                list.Add(new ValueTypeInfo
                {
                    Signature = XLuaIl2cpp.TypeUtils.GetTypeSignature(type),
                    CsName = type.Name,
                    FieldSignatures = GetValueTypeFieldSignatures(type),
                    NullableHasValuePosition = value
                });
                return true;
            }

            private static void IterateAllType(Type type, HashSet<Type> allTypes, HashSet<MethodInfo> delegateTypes)
            {
                while (type != null)
                {
                    if (!allTypes.Add(type))
                        return;
                    if (type.IsPrimitive || typeof(string) == type || type == typeof(Type) || type.IsArray || type == typeof(void) || type.IsEnum)
                        return;
                    
                    var fields = type.GetFields(BindingFlags.DeclaredOnly | BindingFlags.Instance | BindingFlags.Public);
                    foreach (var field in fields)
                    {
                        if (type == field.FieldType)
                            continue;
                        IterateAllType(field.FieldType, allTypes, delegateTypes);
                    }

                    var methods = type.GetMethods(BindingFlags.DeclaredOnly | BindingFlags.Instance | BindingFlags.Public);
                    foreach (var method in methods)
                    {
                        if (method.Name == "Invoke")
                            delegateTypes.Add(method);
                        if (method.ReturnType == type)
                        {
                            continue;
                        }
                        IterateAllType(method.ReturnType, allTypes, delegateTypes);
                    }
                    var methodBases = methods.Cast<MethodBase>().Concat(type.GetConstructors(BindingFlags.DeclaredOnly | BindingFlags.Instance | BindingFlags.Public));
                    foreach (var methodBase in methodBases)
                    {
                        foreach (var parameter in methodBase.GetParameters())
                        {
                            if (parameter.ParameterType == type || parameter.ParameterType.IsPrimitive || parameter.ParameterType == typeof(string))
                            {
                                continue;
                            }
                            IterateAllType(parameter.ParameterType, allTypes, delegateTypes);
                        }
                    }
                    type = type.BaseType;
                }
            }

            private static readonly string[] ExcludeTypes =
            {
                "Assets.Scripts.GameLogic.NewbieGuideUIPathValidate, Scripts",
                "ElectronQQLogin, Scripts"
            };

            private static readonly string[] WhiteList =
            {
                
            };

            private static readonly Type[] XLuaDelegates =
            {
                typeof(Func<float>), // luaboot使用
                typeof(Func<string, XLua.LuaTable>),
                typeof(Func<XLua.LuaTable, string, string>),
                typeof(Func<XLua.LuaTable, string, int>),
                typeof(Func<XLua.LuaTable, string, uint>),
                typeof(Func<XLua.LuaTable, string, long>),
                typeof(Func<XLua.LuaTable, string, ulong>),
                typeof(Func<XLua.LuaTable, string, short>),
                typeof(Func<XLua.LuaTable, string, ushort>),
                typeof(Func<XLua.LuaTable, string, float>),
                typeof(Func<XLua.LuaTable, string, double>),
                typeof(Func<XLua.LuaTable, string, XLua.LuaTable>)
            };

            public class Method
            {
                [JsonProperty("ReturnType")]
                public string ReturnType { get; set; }
                [JsonProperty("ParameterType")]
                public List<string> ParameterType { get; set; }

                public bool IsEmpty()
                {
                    return string.IsNullOrEmpty(ReturnType) && (ParameterType == null || ParameterType.Count == 0);
                }
            }

            public class Script
            {
                [JsonProperty("Fields")]
                public List<string> Fields { get; set; }
                [JsonProperty("Methods")]
                public Dictionary<string,Method> Methods { get; set; }

                public bool isWhiteList;
            }

            private static Type ParseNestedType(string key)
            {
                return null;
            }

            // EventProxy`1[System.Boolean, mscorlib], Scripts
            private static Type ParseGenericType(string key)
            {
                if (string.IsNullOrEmpty(key))
                    return null;
                var index1 = key.IndexOf('[');
                var index2 = key.IndexOf(']');
                if (index1 < 0 || index2 < 0)
                    return null;
                var input = key[..index1] + key[(index2+1)..];
                var type = Type.GetType(input);
                if (type == null)
                    return null;
                input = key[(index1+1)..index2];
                var args = input.Split(',');
                var count = args.Length / 2;
                var types = new Type[count];
                for (var i = 0; i < count; i++)
                {
                    var typeString = $"{args[i*2]},{args[i * 2 + 1]}";
                    var item = Type.GetType(typeString);
                    if (item == null)
                        return null;
                    types[i] = item;
                }

                return type.MakeGenericType(types);
            }

            public static Dictionary<Type, Script> GenCPPWrap(string saveTo)
            {
                
                var jsonString = File.ReadAllText("DevAssets/CSTypeUsedInLua.json");
                var scripts = JsonConvert.DeserializeObject<Dictionary<string, Script>>(jsonString);

                foreach (var type in WhiteList)
                {
                    if (scripts.TryGetValue(type, out var value))
                    {
                        value.isWhiteList = true;
                    }
                    else
                    {
                        scripts.Add(type, new Script
                        {
                            isWhiteList = true
                        });
                    }
                }

                var types = new Dictionary<Type, Script>();
                foreach (var line in scripts)
                {
                    if (ExcludeTypes.Any(e=>e == line.Key))
                    {
                        continue;
                    }
                    var type = Type.GetType(line.Key);
                    if (type != null)
                    {
                        types.Add(type, line.Value);
                    }
                    else
                    {
                        type = ParseGenericType(line.Key);
                        if (type != null)
                            types.Add(type, line.Value);
                        else
                        {
                            Debug.LogError(line.Key);
                        }
                    }
                }

                Utils.SetFilters(Configure.GetFilters());
                var ctorToWrapper = new List<ConstructorInfo>();
                var methodToWrap = new List<MethodInfo>();
                var fieldToWrapper = new List<FieldInfo>();
                var propertyToWrapper = new List<PropertyInfo>();
                var eventToWrapper = new List<EventInfo>();
                var nestedToWrapper = new List<Type>();
                var evalTypes = new HashSet<Type>();
                const BindingFlags flag = BindingFlags.DeclaredOnly | BindingFlags.Instance | BindingFlags.Static | BindingFlags.Public;
                foreach (var type in types)
                {
                    foreach (var constructorInfo in type.Key.GetConstructors(flag))
                    {
                        ctorToWrapper.Add(constructorInfo);
                    }
#if XLUA_FULL
                    foreach (var methodInfo in type.Key.GetMethods(flag))
                    {
                        methodToWrap.Add(methodInfo);
                    }

                    foreach (var fieldInfo in type.Key.GetFields(flag))
                    {
                        fieldToWrapper.Add(fieldInfo);
                    }
#else
                    foreach (var valueMethod in type.Value.Methods)
                    {
                        var parameterType = valueMethod.Value.ParameterType;
                        var pT = new Type[parameterType.Count];
                        var found = true;
                        for (int i = 0; i < parameterType.Count; i++)
                        {
                            var t = Type.GetType(parameterType[i]);
                            if (t != null)
                            {
                                pT[i] = t;
                            }
                            else
                            {
                                t = ParseGenericType(parameterType[i]);
                                if (t != null)
                                {
                                    pT[i] = t;
                                }
                                else
                                {
                                    Debug.LogError($"{type.Key.FullName}:{valueMethod.Key}:{parameterType[i]}");
                                    found = false;
                                    break;
                                }
                            }
                        }

                        if (found)
                        {
                            var methodInfo = type.Key.GetMethod(valueMethod.Key, pT);
                            if (methodInfo != null)
                            {
                                methodToWrap.Add(methodInfo);
                            }
                            else
                            {
                                Debug.LogError($"{type.Key.FullName}:{valueMethod.Key}");
                            }
                        }
                    }

                    foreach (var valueField in type.Value.Fields)
                    {
                        var field = type.Key.GetField(valueField);
                        if (field != null)
                        {
                            fieldToWrapper.Add(field);
                        }
                        else
                        {
                            try
                            {
                                var property = type.Key.GetProperty(valueField);
                                if (property != null)
                                {
                                    propertyToWrapper.Add(property);
                                }
                                else
                                {
                                    var e = type.Key.GetEvent(valueField);
                                    if (e != null)
                                    {
                                        eventToWrapper.Add(e);
                                    }
                                    else
                                    {
                                        Debug.LogError($"{type.Key.FullName}:{valueField}");
                                    }
                                }
                            }
                            catch (Exception e)
                            {
                                Debug.LogError($"{type.Key.FullName}:{valueField}:{e}");
                            }
                        }
                    }
#endif

                        nestedToWrapper.AddRange(type.Key.GetNestedTypes());
                }

                
                var assemblies = AppDomain.CurrentDomain.GetAssemblies();
                foreach (var assembly in assemblies)
                {
                    var item = assembly.GetTypes();
                    foreach (var type in item)
                    {
                        var fields = type.GetFields(BindingFlags.Public | BindingFlags.NonPublic | BindingFlags.Instance);
                        foreach (var fieldInfo in fields)
                        {
                            if (fieldInfo.GetCustomAttribute<LuaEvalAttribute>(false) != null)
                            {
                                evalTypes.Add(fieldInfo.FieldType);
                            }
                        }
                    }
                }
                var wrapperUsedTypes = types.Keys
                    .Concat(ctorToWrapper.SelectMany(c => c.GetParameters()).Select(pi => GetUnrefParameterType(pi)))
                    .Concat(methodToWrap.SelectMany(m => m.GetParameters()).Select(pi => GetUnrefParameterType(pi)))
                    .Concat(methodToWrap.Select(m => m.ReturnType))
                    .Concat(fieldToWrapper.Select(f => f.FieldType))
                    .Concat(propertyToWrapper.Select(p=>p.PropertyType))
                    .Concat(eventToWrapper.Select(e=>e.GetType()))
                    .Distinct();

                HashSet<Type> typeInGenericArgument = new HashSet<Type>();
                HashSet<MethodBase> processed = new HashSet<MethodBase>();
                foreach (var method in methodToWrap)
                {
                    GenericArgumentInInstructions(method, typeInGenericArgument, processed, mb =>
                    {
                        try
                        {
                            if (mb.GetMethodBody() == null || mb.IsGenericMethodDefinition || mb.IsAbstract) return new MethodBase[] { };
                            return mb.GetInstructions()
                                .Select(i => i.Operand)
                                .Where(o => o is MethodBase)
                                .Cast<MethodBase>();
                        }
                        catch (Exception e)
                        {
                            Debug.LogWarning(string.Format("get instructions of {0} ({2}:{3}) throw {1}", mb, e.Message, mb.DeclaringType == null ? "" : mb.DeclaringType.Assembly.GetName().Name, mb.DeclaringType));
                            return new MethodBase[] { };
                        }
                    });
                }
                HashSet<Type> allTypes = new HashSet<Type>();
                HashSet<MethodInfo> delegateInvokes = new HashSet<MethodInfo>();
                foreach (var type in wrapperUsedTypes.Concat(XLuaDelegates).Concat(typeInGenericArgument).Concat(evalTypes).Concat(nestedToWrapper))
                {
                    IterateAllType(type, allTypes, delegateInvokes);
                }

                var delegateUsedTypes = delegateInvokes.SelectMany(m => m.GetParameters()).Select(pi => GetUnrefParameterType(pi))
                    .Concat(delegateInvokes.Select(m => m.ReturnType));

                var valueTypeInfos = new List<ValueTypeInfo>();
                foreach (var type in wrapperUsedTypes.Concat(delegateUsedTypes))
                {
                    IterateAllValueType(type, valueTypeInfos);
                }

                valueTypeInfos = valueTypeInfos
                    .GroupBy(s => s.Signature)
                    .Select(s => s.FirstOrDefault())
                    .ToList();

                var bridgeInfos = delegateInvokes
                    .Select(m => new SignatureInfo
                    {
                        Signature = TypeUtils.GetMethodSignature(m, true),
                        CsName = m + " declare in " + (m.DeclaringType != null ? m.DeclaringType : "unknown class"),
                        ReturnSignature = XLuaIl2cpp.TypeUtils.GetTypeSignature(m.ReturnType),
                        ThisSignature = null,
                        ParameterSignatures = m.GetParameters().Select(p => XLuaIl2cpp.TypeUtils.GetParameterSignature(p)).ToList()
                    })
                    .GroupBy(s => s.Signature)
                    .Select(s => s.FirstOrDefault())
                    .ToList();
                bridgeInfos.Sort((x, y) => string.CompareOrdinal(x.Signature, y.Signature));

                var wrapperInfos = methodToWrap
                    .Where(m => !m.IsGenericMethodDefinition && !m.IsAbstract)
                    .Select(m =>
                    {
                        var isExtensionMethod = m.IsDefined(typeof(ExtensionAttribute));
                        return new SignatureInfo
                        {
                            Signature = XLuaIl2cpp.TypeUtils.GetMethodSignature(m, false, isExtensionMethod),
                            CsName = m + " declare in " + (m.DeclaringType != null ? m.DeclaringType : "unknown class"),
                            ReturnSignature = XLuaIl2cpp.TypeUtils.GetTypeSignature(m.ReturnType),
                            ThisSignature = XLuaIl2cpp.TypeUtils.GetThisSignature(m, isExtensionMethod),
                            ParameterSignatures = m.GetParameters().Skip(isExtensionMethod ? 1 : 0).Select(p => TypeUtils.GetParameterSignature(p)).ToList()
                        };
                    })
                    .Concat(
                        ctorToWrapper
                            .Select(m =>
                            {
                                var isExtensionMethod = false;
                                return new SignatureInfo
                                {
                                    Signature = XLuaIl2cpp.TypeUtils.GetMethodSignature(m, false, isExtensionMethod),
                                    CsName = m + " declare in " +  (m.DeclaringType != null ? m.DeclaringType : "unknown class"),
                                    ReturnSignature = "v",
                                    ThisSignature = "t",
                                    ParameterSignatures = m.GetParameters().Skip(isExtensionMethod ? 1 : 0).Select(p => XLuaIl2cpp.TypeUtils.GetParameterSignature(p)).ToList()
                                };
                            })
                    )
                    .GroupBy(s => s.Signature)
                    .Select(s => s.FirstOrDefault())
                    .ToList();
                wrapperInfos.Sort((x, y) => string.CompareOrdinal(x.Signature, y.Signature));

                var fieldWrapperInfos = fieldToWrapper
                    .Select(f => new SignatureInfo
                    {
                        Signature = (f.IsStatic ? "" : "t") + TypeUtils.GetTypeSignature(f.FieldType),
                        CsName = f + " declare in " + (f.DeclaringType != null ? f.DeclaringType : "unknown class"),
                        ReturnSignature = TypeUtils.GetTypeSignature(f.FieldType),
                        ThisSignature = (f.IsStatic ? "" : "t"),
                        ParameterSignatures = null
                    })
                    .GroupBy(s => s.Signature)
                    .Select(s => s.FirstOrDefault())
                    .ToList();
                fieldWrapperInfos.Sort((x, y) => string.CompareOrdinal(x.Signature, y.Signature));

                using (var luaEnv = new LuaEnv())
                {
                    var assetPath = Path.GetFullPath("Packages/com.tencent.xlua/");
                    assetPath = assetPath.Replace("\\", "/");
                    luaEnv.DoString($"package.path = package.path..';{assetPath + "Editor/Resources/xlua/templates"}/?.lua'");

                    var cppWrapInfo = new CppWrappersInfo
                    {
                        ValueTypeInfos = valueTypeInfos,
                        WrapperInfos = wrapperInfos,
                        BridgeInfos = bridgeInfos,
                        FieldWrapperInfos = fieldWrapperInfos
                    };

                    using (var textWriter = new StreamWriter(Path.Combine(saveTo, "XLuaIl2CppWrapper.cpp"), false, Encoding.UTF8))
                    {
                        var path = Path.Combine(assetPath, "Editor/Resources/xlua/templates/il2cppwrapper.tpl.lua");
                        var bytes = File.ReadAllBytes(path);
                        luaEnv.DoString<LuaFunction>(bytes, path);
                        var gen = luaEnv.Global.Get<LuaFunction>("Gen");
                        var fileContext = gen.Func<CppWrappersInfo, string>(cppWrapInfo);
                        textWriter.Write(fileContext);
                        textWriter.Flush();
                    }

                    using (var textWriter = new StreamWriter(Path.Combine(saveTo, "XLuaValueType.h"), false, Encoding.UTF8))
                    {
                        var path = Path.Combine(assetPath, "Editor/Resources/xlua/templates/il2cppvaluetype.tpl.lua");
                        var bytes = File.ReadAllBytes(path);
                        luaEnv.DoString<LuaFunction>(bytes, path);
                        var gen = luaEnv.Global.Get<LuaFunction>("Gen");
                        var fileContext = gen.Func<CppWrappersInfo, string>(cppWrapInfo);
                        textWriter.Write(fileContext);
                        textWriter.Flush();
                    }

                    using (var textWriter = new StreamWriter(Path.Combine(saveTo, "XLuaIl2CppFieldWrapper.cpp"), false, Encoding.UTF8))
                    {
                        var path = Path.Combine(assetPath, "Editor/Resources/xlua/templates/il2cppfieldwrapper.tpl.lua");
                        var bytes = File.ReadAllBytes(path);
                        luaEnv.DoString<LuaFunction>(bytes, path);
                        var gen = luaEnv.Global.Get<LuaFunction>("Gen");
                        var fileContext = gen.Func<CppWrappersInfo, string>(cppWrapInfo);
                        textWriter.Write(fileContext);
                        textWriter.Flush();
                    }

                    using (var textWriter = new StreamWriter(Path.Combine(saveTo, "XLuaIl2cppBridge.cpp"), false, Encoding.UTF8))
                    {
                        var path = Path.Combine(assetPath, "Editor/Resources/xlua/templates/il2cppbridge.tpl.lua");
                        var bytes = File.ReadAllBytes(path);
                        luaEnv.DoString<LuaFunction>(bytes, path);
                        var gen = luaEnv.Global.Get<LuaFunction>("Gen");
                        var fileContext = gen.Func<CppWrappersInfo, string>(cppWrapInfo);
                        textWriter.Write(fileContext);
                        textWriter.Flush();
                    }

                    // clear prev gen
                    if (Directory.Exists(saveTo))
                    {
                        string[] files = Directory.GetFiles(saveTo);

                        string pattern = @"^XLuaIl2cppWrapperDef\d+\.cpp(.meta)?$";

                        foreach (var file in files)
                        {
                            string fileName = Path.GetFileName(file);
                            if (System.Text.RegularExpressions.Regex.IsMatch(fileName, pattern))
                            {
                                try
                                {
                                    File.Delete(file);
                                }
                                catch (Exception e)
                                {
                                    Console.WriteLine($"Error deleting file {fileName}: {e.Message}");
                                }
                            }
                        }
                    }

                    const int MAX_WRAPPER_PER_FILE = 1000;
                    for (int i = 0; i < wrapperInfos.Count; i += MAX_WRAPPER_PER_FILE)
                    {
                        var saveFileName = "XLuaIl2cppWrapperDef" + (i / MAX_WRAPPER_PER_FILE) + ".cpp";
                        using (StreamWriter textWriter = new StreamWriter(Path.Combine(saveTo, saveFileName), false, Encoding.UTF8))
                        {
                            cppWrapInfo.WrapperInfos = wrapperInfos.GetRange(i, Math.Min(MAX_WRAPPER_PER_FILE, wrapperInfos.Count - i));
                            Debug.Log("XLuaIl2cppWrapperDef" + saveFileName + " with " + cppWrapInfo.WrapperInfos.Count + " wrappers!");
                            var path = Path.Combine(assetPath, "Editor/Resources/xlua/templates/il2cppwrapperdef.tpl.lua");
                            var bytes = File.ReadAllBytes(path);
                            luaEnv.DoString<LuaFunction>(bytes, path);
                            var gen = luaEnv.Global.Get<LuaFunction>("Gen");
                            var fileContext = gen.Func<CppWrappersInfo, string>(cppWrapInfo);
                            textWriter.Write(fileContext);
                            textWriter.Flush();
                        }
                    }
                }

                return types;
            }

            public static void GenExtensionMethodInfos(string outDir, Dictionary<Type, FileExporter.Script> types)
            {
                var genTypes = types.Keys
                    .Where(t => !t.IsGenericTypeDefinition && !t.Name.StartsWith("<"))
                    .Distinct()
                    .ToList();

                genTypes.Add(typeof(ArrayExtension));
                var extendedType2extensionType = (from type in genTypes
                                                  from method in type.GetMethods(BindingFlags.Static | BindingFlags.Public).Select(method => TypeUtils.HandleMaybeGenericMethod(method)).Where(method => method != null)
                                                  where Utils.isDefined(method, typeof(ExtensionAttribute))
                                                  group type by Utils.getExtendedType(method)).ToDictionary(g => g.Key, g => (g as IEnumerable<Type>).Distinct().ToList()).ToList();

                using (var luaEnv = new LuaEnv())
                {
                    var assetPath = Path.GetFullPath("Packages/com.tencent.xlua/");
                    assetPath = assetPath.Replace("\\", "/");
                    luaEnv.DoString($"package.path = package.path..';{assetPath + "Editor/Resources/xlua/templates"}/?.lua'");
                    var path = Path.Combine(assetPath, "Editor/Resources/xlua/templates/extension_methods_gen.tpl.lua");
                    var bytes = File.ReadAllBytes(path);
                    luaEnv.DoString<LuaFunction>(bytes, path);
                    var func = luaEnv.Global.Get<LuaFunction>("TypingTemplate");
                    var fileContent = func.Func<List<KeyValuePair<Type, List<Type>>>, string>(extendedType2extensionType);
                    var filePath = outDir + "ExtensionMethodInfos_Gen.cs";
                    using (var textWriter = new StreamWriter(filePath, false, Encoding.UTF8))
                    {
                        textWriter.Write(fileContent);
                        textWriter.Flush();
                    }
                }
            }

            public static void GenLinkXml(string outDir, Dictionary<Type, FileExporter.Script> types)
            {
                var genTypes = types.Keys
                    .Where(t => !t.IsGenericTypeDefinition && !t.Name.StartsWith("<"))
                    .Distinct()
                    .ToList();
                using (var luaEnv = new LuaEnv())
                {
                    var assetPath = Path.GetFullPath("Packages/com.tencent.xlua/");
                    assetPath = assetPath.Replace("\\", "/");
                    luaEnv.DoString($"package.path = package.path..';{assetPath + "Editor/Resources/xlua/templates"}/?.lua'");
                    var path = Path.Combine(assetPath, "Editor/Resources/xlua/templates/LinkXmlGen.tpl.lua");
                    var bytes = File.ReadAllBytes(path);
                    luaEnv.DoString<LuaFunction>(bytes, path);
                    var func = luaEnv.Global.Get<LuaFunction>("LinkXMLTemplate");
                    var linkXMLContent = func.Func<List<Type>, string>(genTypes);
                    var linkXMLPath = outDir + "link.xml";
                    using (var textWriter = new StreamWriter(linkXMLPath, false, Encoding.UTF8))
                    {
                        textWriter.Write(linkXMLContent);
                        textWriter.Flush();
                    }
                }
            }

            public static void GenMarcoHeader(string outDir)
            {
                var filePath = outDir + "unityenv_for_xlua.h";

                using (var luaEnv = new LuaEnv())
                {
                    var assetPath = Path.GetFullPath("Packages/com.tencent.xlua/");
                    assetPath = assetPath.Replace("\\", "/");
                    luaEnv.DoString($"package.path = package.path..';{assetPath + "Editor/Resources/xlua/templates"}/?.lua'");
                    var path = Path.Combine(assetPath, "Editor/Resources/xlua/templates/unityenv_for_xlua.h.tpl.lua");
                    var bytes = File.ReadAllBytes(path);
                    luaEnv.DoString<LuaFunction>(bytes, path);
                    var func = luaEnv.Global.Get<LuaFunction>("unityenv_for_xlua");
                    string macroHeaderContent = func.Func<bool, bool, string>(
#if UNITY_2023_2_OR_NEWER
                        true,
#else
                        false,
#endif

#if UNITY_IPHONE
                        false
#else
                        true
#endif
                    );

                    using (StreamWriter textWriter = new StreamWriter(filePath, false, Encoding.UTF8))
                    {
                        textWriter.Write(macroHeaderContent);
                        textWriter.Flush();
                    }
                }
            }

            public static void GenRegisterInfo(string outDir, Dictionary<Type, XLuaIl2cpp.Editor.Generator.FileExporter.Script> types)
            {
#if XLUA_FULL
                var registerInfos = RegisterInfoGenerator.GetRegisterInfos(types, true);
#else
                var registerInfos = RegisterInfoGenerator.GetRegisterInfos(types, false);
#endif
                using (var luaEnv = new LuaEnv())
                {
                    var assetPath = Path.GetFullPath("Packages/com.tencent.xlua/");
                    assetPath = assetPath.Replace("\\", "/");
                    luaEnv.DoString($"package.path = package.path..';{assetPath + "Editor/Resources/xlua/templates"}/?.lua'");
                    var path = Path.Combine(assetPath, "Editor/Resources/xlua/templates/registerinfo.tpl.lua");
                    var bytes = File.ReadAllBytes(path);
                    luaEnv.DoString<LuaFunction>(bytes, path);
                    var func = luaEnv.Global.Get<LuaFunction>("RegisterInfoTemplate");
                    var registerInfoContent = func.Func<List<RegisterInfoForGenerate>, string>(registerInfos);
                    var registerInfoPath = outDir + "RegisterInfo_Gen.cs";
                    using (var textWriter = new StreamWriter(registerInfoPath, false, Encoding.UTF8))
                    {
                        textWriter.Write(registerInfoContent);
                        textWriter.Flush();
                    }
                }
            }

            public static void Gen(string csPath)
            {
                var saveTo = Path.Combine(Path.GetFullPath("Packages/com.tencent.xlua/"), "Plugins/xlua_il2cpp/");
                var types = GenCPPWrap(saveTo);
                GenMarcoHeader(saveTo);
                GenLinkXml("Assets/XLua/", types);
                GenExtensionMethodInfos(csPath, types);
                GenRegisterInfo(csPath, types);
            }
        }
    }
}
#endif
