using System;
using System.IO;
using UnityEditor;
using UnityEngine;

namespace XLua.Editor
{
    namespace Generator
    {
        public class UnityMenu
        {
            public static void GenRegisterInfo()
            {
                var start = DateTime.Now;
                var saveTo = Configure.GetCodeOutputDirectory();
                Directory.CreateDirectory(saveTo);
                FileExporter.GenRegisterInfo(saveTo);
                Debug.Log("finished! use " + (DateTime.Now - start).TotalMilliseconds + " ms Outputed to" + saveTo);
                AssetDatabase.Refresh();
            }
        }    
    }
    
}