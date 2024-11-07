using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;

namespace XLua.Editor
{
    namespace Generator
    {
        public class FileExporter
        {
            public static void GenRegisterInfo(string outDir)
            {
                var configure = XLua.Configure.GetConfigureByTags(new List<string>()
                {
                    "XLua.BindingAttribute",
                    "XLua.BlittableCopyAttribute"
                });
                var genTypes = configure["XLua.BindingAttribute"].Select(kv => kv.Key)
                    .Where(o => o is Type)
                    .Cast<Type>()
                    .Where(t => !t.IsGenericTypeDefinition && !t.Name.StartsWith("<"))
                    .Distinct()
                    .ToList();

                var blittableCopyTypes = new HashSet<Type>(configure["XLua.BlittableCopyAttribute"].Select(kv => kv.Key)
                    .Where(o => o is Type)
                    .Cast<Type>()
                    .Where(t => !t.IsPrimitive && Utils.isBlittableType(t))
                    .Distinct());

                if (!Utils.HasFilter)
                {
                    Utils.SetFilters(Configure.GetFilters());
                }
                
                var RegisterInfos = RegisterInfoGenerator.GetRegisterInfos(genTypes, blittableCopyTypes);

                using (var luaEnv = new LuaEnv())
                {
                    var assetPath = Path.GetFullPath("Packages/com.tencent.xlua/");
                    assetPath = assetPath.Replace("\\", "/");
                    luaEnv.DoString($"package.path = package.path..';{assetPath + "Editor/Resources/xlua/templates"}/?.lua'");
                    var path = Path.Combine(assetPath, "Editor/Resources/xlua/templates/registerinfo.tpl.lua");
                    var bytes = File.ReadAllBytes(path);
                    luaEnv.DoString<LuaFunction>(bytes, path);
                    var func = luaEnv.Global.Get<LuaFunction>("RegisterInfoTemplate");
                    var registerInfoContent = func.Func<List<RegisterInfoForGenerate>, string>(RegisterInfos);
                    var registerInfoPath = outDir + "RegisterInfo_Gen.cs";
                    using (var textWriter = new StreamWriter(registerInfoPath, false, Encoding.UTF8))
                    {
                        textWriter.Write(registerInfoContent);
                        textWriter.Flush();
                    }
                }
            }
        }    
    }
    
}