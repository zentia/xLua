using NiceIO;

namespace Modules.Lua
{
    class LuaModule : Module
    {
        public LuaModule()
        {
            GenerateBuiltinPackage = true;
        }
    }
}