using XLua.TypeMapping;
using System.Reflection;
using System.Collections.Generic;
using System.Linq;
using System;

namespace XLua.Editor
{
    namespace Generator
    {
        internal class MemberRegisterInfoForGenerate : MemberRegisterInfo
        {
            new public string MemberType;

            new public string UseBindingMode;

            public string Constructor;

            public string Method;

            public string PropertyGetter;

            public string PropertySetter;

        }
        internal class RegisterInfoForGenerate : RegisterInfo
        {
            public Type Type;

            public string WrapperName;

            public new List<MemberRegisterInfoForGenerate> Members;
        }
        internal class RegisterInfoGenerator
        {
            private class MRICollector
            {

                private Dictionary<string, MemberRegisterInfoForGenerate> Collector = new Dictionary<string, MemberRegisterInfoForGenerate>();
                private Dictionary<string, MemberRegisterInfoForGenerate> CollectorStatic = new Dictionary<string, MemberRegisterInfoForGenerate>();

                internal void Add(string Name, MemberRegisterInfoForGenerate newMRI, bool isStatic)
                {
                    Dictionary<string, MemberRegisterInfoForGenerate> dict = isStatic ? CollectorStatic : Collector;
                    MemberRegisterInfoForGenerate oldMRI;
                    if (dict.TryGetValue(Name, out oldMRI))
                    {
                        if ((int)Enum.Parse(typeof(BindingMode), newMRI.UseBindingMode) > (int)Enum.Parse(typeof(BindingMode), oldMRI.UseBindingMode))
                            oldMRI.UseBindingMode = newMRI.UseBindingMode;
                    }
                    else
                    {
                        dict.Add(Name, newMRI);
                    }
                }

                internal List<MemberRegisterInfoForGenerate> GetAllMember()
                {
                    return Collector.Select(kv => kv.Value).Concat(CollectorStatic.Select(kv => kv.Value)).ToList();
                }
            }

            public static List<RegisterInfoForGenerate> GetRegisterInfos(Dictionary<Type, XLuaIl2cpp.Editor.Generator.FileExporter.Script> genTypes, bool isFull)
            {
                BindingFlags flag = BindingFlags.DeclaredOnly | BindingFlags.Instance | BindingFlags.Static | BindingFlags.Public;

                return genTypes.Where(type => !(type.Key.IsEnum || type.Key.IsArray || (Utils.IsDelegate(type.Key) && type.Key != typeof(Delegate))))
                    .Select(type =>
                    {
                        var Collector = new MRICollector();

                        if (isFull || type.Value.isWhiteList || type.Value.Methods.ContainsKey("ctor"))
                        {
                            var ctors = type.Key.GetConstructors(flag);
                            var hasParamlessCtor = false;
                            foreach (var m in ctors)
                            {
                                if (m.GetParameters().Length == 0)
                                    hasParamlessCtor = true;
                                Collector.Add(m.Name, new MemberRegisterInfoForGenerate
                                {
                                    Name = m.Name,
                                    UseBindingMode = Utils.getBindingMode(m).ToString(),
                                    MemberType = "Constructor",
                                    IsStatic = false,

                                    Constructor = "Constructor",
                                }, false);
                            }
                            if (!hasParamlessCtor && type.Key.IsValueType)
                            {
                                Collector.Add(".ctor", new MemberRegisterInfoForGenerate
                                {
                                    Name = ".ctor",
                                    UseBindingMode = "FastBinding",
                                    MemberType = "Constructor",
                                    IsStatic = false,

                                    Constructor = "Constructor",
                                }, false);
                            }
                        }
                        

                        foreach (var m in XLua.Utils.GetMethodAndOverrideMethod(type.Key, flag)
                                    .Where(m => !Utils.IsNotSupportedMember(m))
                                    .Where(m => XLua.Utils.IsNotGenericOrValidGeneric(m)))
                        {
                            if (!isFull && !type.Value.isWhiteList && !type.Value.Methods.ContainsKey(m.Name))
                                continue;

                            if (m.DeclaringType == type.Key && m.IsSpecialName && m.Name.StartsWith("op_") && m.IsStatic)
                            {
                                if (m.Name == "op_Explicit" || m.Name == "op_Implicit") continue;
                                Collector.Add(m.Name, new MemberRegisterInfoForGenerate
                                {
                                    Name = m.Name,
                                    UseBindingMode = Utils.getBindingMode(m).ToString(),
                                    MemberType = "Method",
                                    IsStatic = m.IsStatic,

                                    Method = "O_" + m.Name,
                                }, false);
                            }
                            else if (!m.IsSpecialName)
                            {

                                Collector.Add(m.Name, new MemberRegisterInfoForGenerate
                                {
                                    Name = m.Name,
                                    UseBindingMode = Utils.getBindingMode(m).ToString(),
                                    MemberType = "Method",
                                    IsStatic = m.IsStatic,

                                    Method = (m.IsStatic ? "F_" : "M_") + m.Name,
                                }, m.IsStatic);
                            }
                        }

                        foreach (var m in Utils.GetExtensionMethods(type.Key, new HashSet<Type>(genTypes.Keys))
                                    .Where(m => !Utils.IsNotSupportedMember(m))
                                    .Where(m => !m.IsGenericMethodDefinition || XLua.Utils.IsNotGenericOrValidGeneric(m))
                                    .Where(m => genTypes.Keys.Contains(m.DeclaringType)))
                        {
                            if (!isFull && !type.Value.isWhiteList && !type.Value.Methods.ContainsKey(m.Name))
                                continue;

                            Collector.Add(m.Name, new MemberRegisterInfoForGenerate
                            {
                                Name = m.Name,
                                UseBindingMode = Utils.getBindingMode(m).ToString(),
                                MemberType = "Method",
                                IsStatic = false,

                                Method = "M_" + m.Name,
                            }, false);
                        }

                        foreach (var m in type.Key
                                    .GetEvents(Utils.Flags)
                                    .Where(m => !Utils.IsNotSupportedMember(m)))
                        {
                            if (!isFull && !type.Value.isWhiteList && !type.Value.Fields.Contains(m.Name))
                            {
                                continue;
                            }

                            var addMethod = m.GetAddMethod();
                            var removeMethod = m.GetRemoveMethod();

                            if (addMethod.IsPublic)
                            {
                                Collector.Add("add_" + m.Name, new MemberRegisterInfoForGenerate
                                {
                                    Name = "add_" + m.Name,
                                    UseBindingMode = Utils.getBindingMode(m).ToString(),
                                    MemberType = "Method",
                                    IsStatic = addMethod.IsStatic,

                                    Method = "A_" + m.Name,
                                }, false);
                            }
                            if (removeMethod.IsPublic)
                            {
                                Collector.Add("remove_" + m.Name, new MemberRegisterInfoForGenerate
                                {
                                    Name = "remove_" + m.Name,
                                    UseBindingMode = Utils.getBindingMode(m).ToString(),
                                    MemberType = "Method",
                                    IsStatic = removeMethod.IsStatic,

                                    Method = "R_" + m.Name,
                                }, false);
                            }
                        }

                        foreach (var m in type.Key
                                    .GetProperties(flag)
                                    .Where(m => !Utils.IsNotSupportedMember(m)))
                        {
                            if (!isFull && !type.Value.isWhiteList && !type.Value.Fields.Contains(m.Name))
                                continue;

                            if (m.GetIndexParameters().GetLength(0) == 1)
                            {
                                var getMethod = m.GetGetMethod();
                                var setMethod = m.GetSetMethod();
                                if (getMethod != null && getMethod.IsPublic)
                                {
                                    Collector.Add("get_Item", new MemberRegisterInfoForGenerate
                                    {
                                        Name = "get_Item",
                                        UseBindingMode = Utils.getBindingMode(m).ToString(),
                                        MemberType = "Method",
                                        IsStatic = getMethod.IsStatic,

                                        Method = "GetItem",
                                    }, false);
                                }
                                if (setMethod != null && setMethod.IsPublic)
                                {
                                    Collector.Add("set_Item", new MemberRegisterInfoForGenerate
                                    {
                                        Name = "set_Item",
                                        UseBindingMode = Utils.getBindingMode(m).ToString(),
                                        MemberType = "Method",
                                        IsStatic = setMethod.IsStatic,

                                        Method = "SetItem",
                                    }, false);
                                }
                            }
                            else if (m.GetIndexParameters().GetLength(0) == 0 && !m.IsSpecialName)
                            {

                                Collector.Add(m.Name, new MemberRegisterInfoForGenerate
                                {
                                    Name = m.Name,
                                    UseBindingMode = Utils.getBindingMode(m).ToString(),
                                    MemberType = "Property",
                                    IsStatic = m.GetAccessors(false).Any(x => x.IsStatic),

                                    PropertyGetter = m.GetGetMethod() != null ? "G_" + m.Name : null,
                                    PropertySetter = m.GetSetMethod() != null ? "S_" + m.Name : null,
                                }, m.GetAccessors(false).Any(x => x.IsStatic));
                            }
                        }

                        foreach (var m in type.Key
                            .GetFields(flag)
                            .Where(f => !Utils.IsNotSupportedMember(f)))
                        {
                            if (!isFull && !type.Value.isWhiteList && !type.Value.Fields.Contains(m.Name))
                                continue;

                            Collector.Add(m.Name, new MemberRegisterInfoForGenerate
                            {
                                Name = m.Name,
                                UseBindingMode = Utils.getBindingMode(m).ToString(),
                                MemberType = "Property",
                                IsStatic = m.IsStatic,

                                PropertyGetter = "G_" + m.Name,
                                PropertySetter = !m.IsInitOnly && !m.IsLiteral ? "S_" + m.Name : null,
                            }, m.IsStatic);
                        }

                        return new RegisterInfoForGenerate
                        {
                            WrapperName = Utils.GetWrapTypeName(type.Key),

                            Type = type.Key,

                            Members = Collector.GetAllMember(),
                        };
                    })
                    .ToList();
            }
        }
    }
}
