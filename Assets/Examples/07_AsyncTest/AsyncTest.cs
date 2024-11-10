#if !ENABLE_IL2CPP || !XLUA_IL2CPP

using UnityEngine;
using XLua;
using System.Collections.Generic;
using System;

namespace XLuaTest
{
    public class AsyncTest : MonoBehaviour
    {
        LuaEnv luaenv = null;

        void Start()
        {
            luaenv = new LuaEnv();
            luaenv.DoString("require 'async_test'");
        }

        // Update is called once per frame
        void Update()
        {
            if (luaenv != null)
            {
                luaenv.Tick();
            }
        }
    }
}


#endif
