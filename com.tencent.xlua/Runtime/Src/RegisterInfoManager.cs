using System;
using System.Collections.Generic;

namespace XLua
{
    public enum BindingMode {
        FastBinding = 1024, // static wrapper
        LazyBinding = 128,  // reflect during first call
        SlowBinding = 32,   // reflection to call
        DontBinding = 2,    // not able to called in runtime. Also will not generate d.ts
    }
    
    namespace TypeMapping
    {
        public enum MemberType
        {
            Constructor = 1,

            Method = 2,
            
            Property = 3,
        }

        public class MemberRegisterInfo 
        {
            public string Name;

            public bool IsStatic;

            public MemberType MemberType; 

            public BindingMode UseBindingMode;
        }

        public class RegisterInfo 
        {
            public bool OnlySelf = false;

            public Dictionary<string, MemberRegisterInfo> Members;
        }

        internal class RegisterInfoManager
        {
            Dictionary<Type, Func<RegisterInfo>> RegisterInfoGetters = new Dictionary<Type, Func<RegisterInfo>>();
            protected BindingMode _DefaultBindingMode = BindingMode.FastBinding;
            public BindingMode DefaultBindingMode 
            {
                get
                {
                    return _DefaultBindingMode;
                }
                internal set
                {
                    _DefaultBindingMode = value;
                }
            }
            
            internal void Add(Type type, Func<RegisterInfo> RegisterInfoGetter)
            {
                if (RegisterInfoGetters.ContainsKey(type)) return;
                RegisterInfoGetters.Add(type, RegisterInfoGetter);
            }

            internal bool TryGetValue(Type key, out Func<RegisterInfo> value)
            {
                return RegisterInfoGetters.TryGetValue(key, out value);
            }

            internal bool Remove(Type type)
            {
                return RegisterInfoGetters.Remove(type);
            }
        }
    }
}