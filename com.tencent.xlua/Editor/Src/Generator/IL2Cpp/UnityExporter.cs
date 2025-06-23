using System;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEditor;
using UnityEngine;
using XLua;

namespace XLua.Generator
{
    public class UnityExporter
    {
        public static void ClearPrevGen(string saveTo, string pattern)
        {
            // clear prev gen
            if (Directory.Exists(saveTo))
            {
                string[] files = Directory.GetFiles(saveTo);

                pattern = $@"^{pattern}Def\d+\.cpp(.meta)?$";

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
                            Debug.LogException(e);
                        }
                    }
                }
            }
        }

        internal static void GenWrap(
            string saveTo,
            LuaEnvEditor luaEnv,
            FileExporter.CppWrappersInfo cppWrapInfo,
            string output,
            string lua)
        {
            using var textWriter = new StreamWriter(Path.Combine(saveTo, $"{output}.cpp"), false, Encoding.UTF8);
            var path = Path.Combine(luaEnv.root, $"Editor/Resources/xlua/templates/{lua}.tpl.lua");
            var bytes = File.ReadAllBytes(path);
            luaEnv.env.DoString<LuaFunction>(bytes, path);
            var gen = luaEnv.env.Global.Get<LuaFunction>("Gen");
            var fileContext = gen.Func<FileExporter.CppWrappersInfo, string>(cppWrapInfo);
            textWriter.WriteLine(fileContext);
            textWriter.Flush();
            ClearPrevGen(saveTo, output);
            GenDef(saveTo, luaEnv, cppWrapInfo, output, lua);
        }

        private static void GenDef(
            string saveTo,
            LuaEnvEditor luaEnv,
            FileExporter.CppWrappersInfo cppWrapInfo,
            string output,
            string lua)
        {
            var saveFileName = $"{output}Def.cpp";
            using (StreamWriter textWriter = new StreamWriter(Path.Combine(saveTo, saveFileName), false, Encoding.UTF8))
            {
                Debug.Log($"{output}Def" + saveFileName + " with " + cppWrapInfo.WrapperInfos.Count + " wrappers!");
                var path = Path.Combine(luaEnv.root, $"Editor/Resources/xlua/templates/{lua}def.tpl.lua");
                var bytes = File.ReadAllBytes(path);
                luaEnv.env.DoString<LuaFunction>(bytes, path);
                var gen = luaEnv.env.Global.Get<LuaFunction>("Gen");
                var fileContext = gen.Func<FileExporter.CppWrappersInfo, string>(cppWrapInfo);
                textWriter.Write(fileContext);
                textWriter.Flush();
            }
        }
#if UNITY_EXPORT
        private static void GenUnityWrap(string saveTo)
        {
            var luaUnityClasses = LuaUtility.GetLuaUnityClasses();
            var wrapperInfos = new List<FileExporter.SignatureInfo>(luaUnityClasses.Length);
            for (var i = 0; i < luaUnityClasses.Length; i++)
            {
                wrapperInfos[i].Signature = LuaUtility.GetMethodSignature(luaUnityClasses[i].methods[0]);
            }
            using var luaEnv = FileExporter.CreateLuaEnv();

            var cppWrapInfo = new FileExporter.CppWrappersInfo()
            {
                WrapperInfos = wrapperInfos
            };
            GenWrap(saveTo, luaEnv, cppWrapInfo, "LuaUnityWrapper", "UnityWrapper");
        }

        [MenuItem("XLua/Generate Unity")]
        public static void GenUnity()
        {
            var saveTo = Path.GetFullPath("DevAssets/Unity");
            GenUnityWrap(saveTo);
        }
#endif

    }
}
