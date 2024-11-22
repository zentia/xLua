using System;
using System.Collections.Generic;
using System.IO;
using UnityEditor;
using UnityEngine;

namespace XLua.Editor
{
    namespace Generator
    {
        public class UnityMenu
        {
            public static void GenRegisterInfo(List<Type> types)
            {
                var saveTo = Configure.GetCodeOutputDirectory();
                FileExporter.GenRegisterInfo(saveTo, types);
            }
        }    
    }
}
