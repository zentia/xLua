using System.IO;
using System;
using System.Collections.Generic;
using UnityEditor;

namespace XLuaIl2cpp.Editor
{
    namespace Generator
    {
        public static class UnityMenu
        {
            [MenuItem("XLua/Generate For xIl2cpp mode (all in one)", false, 2)]
            public static void Gen()
            {
                var types = GenerateCppWrappers();
                GenerateExtensionMethodInfos(types);
                GenerateLinkXML(types);
                GenerateCppPlugin();
                XLua.Editor.Generator.UnityMenu.GenRegisterInfo(types);
                AssetDatabase.Refresh();
            }

            public static void GenerateCppPlugin()
            {
                var saveTo = Path.Combine(Path.GetFullPath("Packages/com.tencent.xlua/"), "Plugins/xlua_il2cpp/");
                FileExporter.CopyXIl2cppCPlugin(saveTo);
                FileExporter.GenMarcoHeader(saveTo);
            }

            public static List<Type> GenerateCppWrappers()
            {
                var saveTo = Path.Combine(Path.GetFullPath("Packages/com.tencent.xlua/"), "Plugins/xlua_il2cpp/");
                Directory.CreateDirectory(saveTo);
                return FileExporter.GenCPPWrap(saveTo);
            }

            public static void GenerateExtensionMethodInfos(List<Type> types)
            {
                var saveTo = XLua.Configure.GetCodeOutputDirectory();
                Directory.CreateDirectory(saveTo);
                FileExporter.GenExtensionMethodInfos(saveTo, types);
            }

            public static void GenerateLinkXML(List<Type> types)
            {
                var saveTo = XLua.Configure.GetCodeOutputDirectory();
                FileExporter.GenLinkXml(saveTo, types);
            }
        }
    }
}
