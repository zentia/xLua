using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEngine;
using XLua.Editor.Generator;

namespace Editor.Src.Generator.IL2Cpp
{
    public class UnityExporter
    {
        private static void GenUnityWrap(string saveTo)
        {
            var luaUnityClasses = LuaUtility.GetLuaUnityClasses();
            var wrapperInfos = new List<FileExporter.SignatureInfo>(luaUnityClasses.Length);
            for (int i = 0; i < luaUnityClasses.Length; i++)
            {
                wrapperInfos[i].Signature = LuaUtility.GetMethodSignature(luaUnityClasses[i].methods[0]);
            }
            using var luaEnv = FileExporter.CreateLuaEnv();
                        
            using (var textWriter = new StreamWriter(Path.Combine(saveTo, "LuaUnityWrapper.cpp"), false, Encoding.UTF8))
            {
                
            }
        }

        public static void GenUnity()
        {
            var saveTo = Path.GetFullPath("DevAssets/Unity");
            GenUnityWrap(saveTo);
        }
    }
}