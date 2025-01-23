using System;

namespace XLua.TypeMapping
{
    internal class TypeRegister
    {
        internal static RegisterInfoManager RegisterInfoManager = null;

        internal static void AddRegisterInfoGetter(Type type, Func<RegisterInfo> getter)
        {
            if (RegisterInfoManager == null) RegisterInfoManager = new RegisterInfoManager();

            RegisterInfoManager.Add(type, getter);
        }
    }
}

