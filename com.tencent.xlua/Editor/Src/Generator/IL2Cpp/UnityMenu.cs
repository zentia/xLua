/*
* Tencent is pleased to support the open source community by making XLua available.
* Copyright (C) 2020 THL A29 Limited, a Tencent company.  All rights reserved.
* XLua is licensed under the BSD 3-Clause License, except for the third-party components listed in the file 'LICENSE' which may be subject to their corresponding license terms. 
* This file is subject to the terms and conditions defined in file 'LICENSE', which is part of this source code package.
*/

using System.Reflection;
using System.IO;
using System;
#if !XLUA_GENERAL
using UnityEditor;
using UnityEngine;
#endif

#if !XLUA_GENERAL && !UNITY_WEBGL
namespace XLuaIl2cpp.Editor
{
    namespace Generator {

        public class UnityMenu {
            [MenuItem("XLua/Generate For xIl2cpp mode (all in one)", false, 2)]
            public static void GenV2() {
                XLuaIl2cpp.Editor.Generator.UnityMenu.GenerateCppWrappers();
                XLuaIl2cpp.Editor.Generator.UnityMenu.GenerateExtensionMethodInfos();
                XLuaIl2cpp.Editor.Generator.UnityMenu.GenerateLinkXML();
                XLuaIl2cpp.Editor.Generator.UnityMenu.GenerateCppPlugin();
                XLua.Editor.Generator.UnityMenu.GenRegisterInfo();
            }

            [MenuItem("XLua/Generate/xIl2cpp c file", false, 6)]
            public static void GenerateCppPlugin()
            {   
#if CPP_OUTPUT_TO_NATIVE_SRC
                var saveTo = Path.Combine(Application.dataPath, "com.tencent.xlua/Plugins/xlua_il2cpp/");
#else
                var saveTo = Path.Combine(Path.GetFullPath("Packages/com.tencent.xlua/"), "Plugins/xlua_il2cpp/");
#endif
                Directory.CreateDirectory(saveTo);
                FileExporter.CopyXIl2cppCPlugin(saveTo);
                FileExporter.GenMarcoHeader(saveTo);
            }

            [MenuItem("XLua/Generate/xIl2cpp FunctionBridge.Gen.h", false, 6)]
            public static void GenerateCppWrappers()
            {   
                var start = DateTime.Now;
                var saveTo = Path.Combine(Path.GetFullPath("Packages/com.tencent.xlua/"), "../", "native_src_il2cpp", "Src");
                Directory.CreateDirectory(saveTo);
                FileExporter.GenCPPWrap(saveTo);
                Debug.Log("finished! use " + (DateTime.Now - start).TotalMilliseconds + " ms Outputed to " + saveTo);
            }
            
            [MenuItem("XLua/Generate/xIl2cpp FunctionBridge.Gen.h(Configure)", false, 6)]
            public static void GenerateCppWrappersInConfigure()
            {
                var start = DateTime.Now;
#if CPP_OUTPUT_TO_NATIVE_SRC
                var saveTo = Path.Combine(Application.dataPath, "..", "native_src_il2cpp", "Src");
#else
                var saveTo = Path.Combine(Path.GetFullPath("Packages/com.tencent.xlua/"), "../../../", "native_src_il2cpp", "Src");
#endif
                Directory.CreateDirectory(saveTo);
                FileExporter.GenCPPWrap(saveTo, true);
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
