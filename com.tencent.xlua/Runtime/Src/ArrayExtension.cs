using System;
using XLua;

namespace XLua
{
    [LuaCallCSharp]
    public static class ArrayExtension
    {
        [UnityEngine.Scripting.Preserve] public static int get_Item(this int[] arr, int idx) { return arr[idx]; }
        [UnityEngine.Scripting.Preserve] public static float get_Item(this float[] arr, int idx) { return arr[idx]; }
        [UnityEngine.Scripting.Preserve] public static double get_Item(this double[] arr, int idx) { return arr[idx]; }
        [UnityEngine.Scripting.Preserve] public static bool get_Item(this bool[] arr, int idx) { return arr[idx]; }
        [UnityEngine.Scripting.Preserve] public static long get_Item(this long[] arr, int idx) { return arr[idx]; }
        [UnityEngine.Scripting.Preserve] public static ulong get_Item(this ulong[] arr, int idx) { return arr[idx]; }
        [UnityEngine.Scripting.Preserve] public static sbyte get_Item(this sbyte[] arr, int idx) { return arr[idx]; }
        [UnityEngine.Scripting.Preserve] public static byte get_Item(this byte[] arr, int idx) { return arr[idx]; }
        [UnityEngine.Scripting.Preserve] public static ushort get_Item(this ushort[] arr, int idx) { return arr[idx]; }
        [UnityEngine.Scripting.Preserve] public static short get_Item(this short[] arr, int idx) { return arr[idx]; }
        [UnityEngine.Scripting.Preserve] public static char get_Item(this char[] arr, int idx) { return arr[idx]; }
        [UnityEngine.Scripting.Preserve] public static uint get_Item(this uint[] arr, int idx) { return arr[idx]; }
        [UnityEngine.Scripting.Preserve] public static string get_Item(this string[] arr, int idx) { return arr[idx]; }
        [UnityEngine.Scripting.Preserve] public static object get_Item(this System.Array arr, int idx) { return arr.GetValue(idx); }
        [UnityEngine.Scripting.Preserve] public static void set_Item(this int[] arr, int idx, int val) { arr[idx] = val; }
        [UnityEngine.Scripting.Preserve] public static void set_Item(this float[] arr, int idx, float val) { arr[idx] = val; }
        [UnityEngine.Scripting.Preserve] public static void set_Item(this double[] arr, int idx, double val) { arr[idx] = val; }
        [UnityEngine.Scripting.Preserve] public static void set_Item(this bool[] arr, int idx, bool val) { arr[idx] = val; }
        [UnityEngine.Scripting.Preserve] public static void set_Item(this long[] arr, int idx, long val) { arr[idx] = val; }
        [UnityEngine.Scripting.Preserve] public static void set_Item(this ulong[] arr, int idx, ulong val) { arr[idx] = val; }
        [UnityEngine.Scripting.Preserve] public static void set_Item(this sbyte[] arr, int idx, sbyte val) { arr[idx] = val; }
        [UnityEngine.Scripting.Preserve] public static void set_Item(this byte[] arr, int idx, byte val) { arr[idx] = val; }
        [UnityEngine.Scripting.Preserve] public static void set_Item(this ushort[] arr, int idx, ushort val) { arr[idx] = val; }
        [UnityEngine.Scripting.Preserve] public static void set_Item(this short[] arr, int idx, short val) { arr[idx] = val; }
        [UnityEngine.Scripting.Preserve] public static void set_Item(this char[] arr, int idx, char val) { arr[idx] = val; }
        [UnityEngine.Scripting.Preserve] public static void set_Item(this uint[] arr, int idx, uint val) { arr[idx] = val; }

        [UnityEngine.Scripting.Preserve]
        public static void set_Item(this string[] arr, int idx, string val)
        {
            arr[idx] = val;
        }

        [UnityEngine.Scripting.Preserve]
        public static void set_Item(this System.Array arr, int idx, object val)
        {
#if UNITY_EDITOR || !XLUA_IL2CPP
            var t = arr.GetType();
            if (t == typeof(int[]))
            {
                ((int[])arr)[idx] = Convert.ToInt32(val);
            }
            else if (t == typeof(float[]))
            {
                ((float[])arr)[idx] = Convert.ToSingle(val);
            }
            else if (t == typeof(double[]))
            {
                ((double[])arr)[idx] = Convert.ToDouble(val);
            }
            else if (t == typeof(bool[]))
            {
                ((bool[])arr)[idx] = Convert.ToBoolean(val);
            }
            else if (t == typeof(long[]))
            {
                ((long[])arr)[idx] = Convert.ToInt64(val);
            }
            else if (t == typeof(ulong[]))
            {
                ((ulong[])arr)[idx] = Convert.ToUInt64(val);
            }
            else if (t == typeof(bool[]))
            {
                ((bool[])arr)[idx] = Convert.ToBoolean(val);
            }
            else if (t == typeof(sbyte[]))
            {
                ((sbyte[])arr)[idx] = Convert.ToSByte(val);
            }
            else if (t == typeof(byte[]))
            {
                ((byte[])arr)[idx] = Convert.ToByte(val);
            }
            else if (t == typeof(ushort[]))
            {
                ((ushort[])arr)[idx] = Convert.ToUInt16(val);
            }
            else if (t == typeof(char[]))
            {
                ((char[])arr)[idx] = Convert.ToChar(val);
            }
            else if (t == typeof(uint[]))
            {
                ((uint[])arr)[idx] = Convert.ToUInt32(val);
            }
            else
#endif

            arr.SetValue(val, idx);
        }
    }
}