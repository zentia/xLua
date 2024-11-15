using System;
using System.Collections.Generic;
using XLua;

[Configure]
public class XLuaCfg {
    [LuaCallCSharp]
    public static List<Type> binding {
        get {
            return new List<Type>{
                typeof(UnityEngine.Color),
                typeof(Dictionary<int, int>),
                typeof(Dictionary<int, int>.Enumerator),
                typeof(List<int>.Enumerator),
            };
        }
    }
}