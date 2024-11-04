using System.IO;
using System;
#if !XLUA_GENERAL
using UnityEditor;
using UnityEngine;
#endif

#if !XLUA_GENERAL
namespace XLuaIl2cpp.Editor
{
    namespace Generator {

        public static class UnityMenu {
            [MenuItem("XLua/Generate For xIl2cpp mode (all in one)", false, 2)]
            public static void GenV2() {
                GenerateCppWrappers();
                GenerateExtensionMethodInfos();
                GenerateLinkXML();
                GenerateCppPlugin();
                XLua.Editor.Generator.UnityMenu.GenRegisterInfo();
            }

            [MenuItem("XLua/Generate/xIl2cpp c file", false, 6)]
            public static void GenerateCppPlugin()
            {   
                var saveTo = Path.Combine(Path.GetFullPath("Packages/com.tencent.xlua/"), "Plugins/xlua_il2cpp/");
                Directory.CreateDirectory(saveTo);
                FileExporter.CopyXIl2cppCPlugin(saveTo);
                FileExporter.GenMarcoHeader(saveTo);
            }

            [MenuItem("XLua/Generate/xIl2cpp wrapper bridge", false, 6)]
            public static void GenerateCppWrappers()
            {   
                var start = DateTime.Now;
                var saveTo = Path.Combine(Path.GetFullPath("Packages/com.tencent.xlua/"), "Plugins/xlua_il2cpp/");
                Directory.CreateDirectory(saveTo);
                FileExporter.GenCPPWrap(saveTo);
                Debug.Log("finished! use " + (DateTime.Now - start).TotalMilliseconds + " ms Outputed to " + saveTo);
            }
  
            [MenuItem("XLua/Generate/xIl2cpp ExtensionMethodInfos_Gen.cs", false, 6)]
            public static void GenerateExtensionMethodInfos()
            {
                var start = DateTime.Now;
                var saveTo = XLua.Configure.GetCodeOutputDirectory();
                
                Directory.CreateDirectory(saveTo);
                FileExporter.GenExtensionMethodInfos(saveTo);
                Debug.Log("finished! use " + (DateTime.Now - start).TotalMilliseconds + " ms Outputed to " + saveTo);
                AssetDatabase.Refresh();
            }

            [MenuItem("XLua/Generate/Link.xml", false, 6)]
            public static void GenerateLinkXML()
            {
                var start = DateTime.Now;
                var saveTo = XLua.Configure.GetCodeOutputDirectory();
                Directory.CreateDirectory(saveTo);
                FileExporter.GenLinkXml(saveTo);
                Debug.Log("finished! use " + (DateTime.Now - start).TotalMilliseconds + " ms Outputed to " + saveTo);
                AssetDatabase.Refresh();
            }
        }
    }
}
#endif
