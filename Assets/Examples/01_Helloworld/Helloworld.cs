using UnityEngine;
using XLua;

namespace XLuaTest
{
    public class Helloworld : MonoBehaviour
    {
        // Use this for initialization
        void Start()
        {
            LuaEnv luaenv = new LuaEnv(null);
            luaenv.DoString("CS.UnityEngine.Debug.Log('hello world')");
            luaenv.Dispose();
        }
    }
}
