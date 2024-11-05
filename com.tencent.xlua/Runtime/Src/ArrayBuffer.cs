using System;
using System.Collections.Generic;
using System.Linq;
using System.Reflection;

namespace XLua
{
    public class ArrayBuffer
    {
        public byte[] Bytes;
        public int Count;

        public ArrayBuffer(byte[] bytes)
        {
            Bytes = bytes;
            if (Bytes != null)
            {
                Count = Bytes.Length;
            }
        }

        public ArrayBuffer(byte[] bytes, int count)
        {
            Bytes = bytes;
            if (Bytes != null)
            {
                if (count > 0 && count < Bytes.Length)
                {
                    Count = count;
                }
                else
                {
                    Count = Bytes.Length;
                }
            }
        }

#if ENABLE_IL2CPP
        [UnityEngine.Scripting.Preserve]
#endif
        public ArrayBuffer(IntPtr ptr, int length)
        {
            if (ptr != IntPtr.Zero)
            {
                Bytes = new byte[length];
                Count = length;
                System.Runtime.InteropServices.Marshal.Copy(ptr, Bytes, 0, length);
            }
        }
        
#if ENABLE_IL2CPP
        [UnityEngine.Scripting.Preserve]
#endif
        public ArrayBuffer(IntPtr ptr, int length, int notuse) : this(ptr, length) // call by il2cpp
        {
        }
    }

}