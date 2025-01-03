using System;
using UnityEngine.Bindings;

namespace UnityEngine.Lua
{
    [NativeHeader("Modules/Lua/Public/Lua_Bindings.h")]
    public static class Native
    {
        [FreeFunction("Lua_Bindings::GetEngineAPI")]
        public static extern IntPtr GetEngineAPI();
    }
}