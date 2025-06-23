using System;
using System.Runtime.InteropServices;
using System.Text;

#if !ENABLE_IL2CPP || !XLUA_IL2CPP
namespace XLua
{
    internal static class Converter
    {
        private static class Converter_int64
        {
            internal static int toScript(pesapi_ffi apis, IntPtr env, Int64 value)
            {
                return apis.create_int64(env, value);
            }
            internal static Int64 toCpp(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.get_value_int64(env, value);
            }
            internal static bool accept(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.is_int64(env, value);
            }
        }

        private static class Converter_uint64
        {
            internal static int toScript(pesapi_ffi apis, IntPtr env, UInt64 value)
            {
                return apis.create_uint64(env, value);
            }
            internal static UInt64 toCpp(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.get_value_uint64(env, value);
            }
            internal static bool accept(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.is_uint64(env, value);
            }
        }
        private static class Converter_sbyte
        {
            internal static int toScript(pesapi_ffi apis, IntPtr env, sbyte value)
            {
                return apis.create_int32(env, value);
            }
            internal static sbyte toCpp(pesapi_ffi apis, IntPtr env, int value)
            {
                return (sbyte)apis.get_value_int32(env, value);
            }
            internal static bool accept(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.is_int32(env, value);
            }
        }
        private static class Converter_short
        {
            internal static int toScript(pesapi_ffi apis, IntPtr env, short value)
            {
                return apis.create_int32(env, value);
            }
            internal static short toCpp(pesapi_ffi apis, IntPtr env, int value)
            {
                return (short)apis.get_value_int32(env, value);
            }
            internal static bool accept(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.is_int32(env, value);
            }
        }
        private static class Converter_int32
        {
            internal static int toScript(pesapi_ffi apis, IntPtr env, Int32 value)
            {
                return apis.create_int32(env, value);
            }
            internal static Int32 toCpp(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.get_value_int32(env, value);
            }
            internal static bool accept(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.is_int32(env, value);
            }
        }

        private static class Converter_uint32
        {
            internal static int toScript(pesapi_ffi apis, IntPtr env, UInt32 value)
            {
                return apis.create_uint32(env, value);
            }
            internal static UInt32 toCpp(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.get_value_uint32(env, value);
            }
            internal static bool accept(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.is_uint32(env, value);
            }
        }
        private static class Converter_byte
        {
            internal static int toScript(pesapi_ffi apis, IntPtr env, byte value)
            {
                return apis.create_uint32(env, value);
            }
            internal static byte toCpp(pesapi_ffi apis, IntPtr env, int value)
            {
                return (byte)apis.get_value_uint32(env, value);
            }
            internal static bool accept(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.is_uint32(env, value);
            }
        }
        private static class Converter_char
        {
            internal static int toScript(pesapi_ffi apis, IntPtr env, char value)
            {
                return apis.create_uint32(env, value);
            }
            internal static char toCpp(pesapi_ffi apis, IntPtr env, int value)
            {
                return (char)apis.get_value_uint32(env, value);
            }
            internal static bool accept(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.is_uint32(env, value);
            }
        }
        private static class Converter_ushort
        {
            internal static int toScript(pesapi_ffi apis, IntPtr env, ushort value)
            {
                return apis.create_uint32(env, value);
            }
            internal static ushort toCpp(pesapi_ffi apis, IntPtr env, int value)
            {
                return (ushort)apis.get_value_uint32(env, value);
            }
            internal static bool accept(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.is_uint32(env, value);
            }
        }
        private static class Converter_float
        {
            internal static int toScript(pesapi_ffi apis, IntPtr env, float value)
            {
                return apis.create_double(env, value);
            }
            internal static float toCpp(pesapi_ffi apis, IntPtr env, int value)
            {
                return (float)apis.get_value_double(env, value);
            }
            internal static bool accept(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.is_double(env, value);
            }
        }
        private static class Converter_double
        {
            internal static int toScript(pesapi_ffi apis, IntPtr env, double value)
            {
                return apis.create_double(env, value);
            }
            internal static double toCpp(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.get_value_double(env, value);
            }
            internal static bool accept(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.is_double(env, value);
            }
        }
        private static class Converter_bool
        {
            internal static int toScript(pesapi_ffi apis, IntPtr env, bool value)
            {
                return apis.create_boolean(env, value);
            }
            internal static bool toCpp(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.get_value_bool(env, value);
            }
            internal static bool accept(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.is_boolean(env, value);
            }
        }
        private static class Converter_string
        {
            internal static int toScript(pesapi_ffi apis, IntPtr env, string value)
            {
                if (value == null)
                {
                    return apis.create_null(env);
                }
                byte[] bytes = Encoding.UTF8.GetBytes(value);
                return apis.create_string_utf8(env, bytes, bytes.Length);
            }
            internal static string toCpp(pesapi_ffi apis, IntPtr env, int value)
            {
                if (value == 0 || apis.is_null(env, value) || apis.is_undefined(env, value))
                {
                    return null;
                }

                int bufsize = 0;
                IntPtr str = apis.get_value_string_utf8(env, value, null, ref bufsize);
                if (str != IntPtr.Zero)
                {
                    var buffer = new byte[bufsize];
                    Marshal.Copy(str, buffer, 0, bufsize);
                    return Encoding.UTF8.GetString(buffer);
                }

                byte[] buff = new byte[bufsize + 1];
                str = apis.get_value_string_utf8(env, value, buff, ref bufsize);
                if (str != IntPtr.Zero)
                {
                    buff[bufsize] = 0;
                    return Encoding.UTF8.GetString(buff);
                }
                return null;
            }
            internal static bool accept(pesapi_ffi apis, IntPtr env, int value)
            {
                return apis.is_string(env, value) || apis.is_null(env, value) || apis.is_undefined(env, value);
            }
        }
        internal static class Specializer<T>
        {
            internal static Func<pesapi_ffi, IntPtr, T, int> toScript;
            internal static Func<pesapi_ffi, IntPtr, int, bool> accept;
            internal static Func<pesapi_ffi, IntPtr, int, T> toCpp;
        }

        internal static void Register()
        {
            Specializer<Int64>.toScript = Converter_int64.toScript;
            Specializer<Int64>.toCpp = Converter_int64.toCpp;
            Specializer<Int64>.accept = Converter_int64.accept;

            Specializer<UInt64>.toScript = Converter_uint64.toScript;
            Specializer<UInt64>.toCpp = Converter_uint64.toCpp;
            Specializer<UInt64>.accept = Converter_uint64.accept;

            Specializer<sbyte>.toScript = Converter_sbyte.toScript;
            Specializer<sbyte>.toCpp = Converter_sbyte.toCpp;
            Specializer<sbyte>.accept = Converter_sbyte.accept;

            Specializer<short>.toScript = Converter_short.toScript;
            Specializer<short>.toCpp = Converter_short.toCpp;
            Specializer<short>.accept = Converter_short.accept;

            Specializer<Int32>.toScript = Converter_int32.toScript;
            Specializer<Int32>.toCpp = Converter_int32.toCpp;
            Specializer<Int32>.accept = Converter_int32.accept;

            Specializer<byte>.toScript = Converter_byte.toScript;
            Specializer<byte>.toCpp = Converter_byte.toCpp;
            Specializer<byte>.accept = Converter_byte.accept;

            Specializer<ushort>.toScript = Converter_ushort.toScript;
            Specializer<ushort>.toCpp = Converter_ushort.toCpp;
            Specializer<ushort>.accept = Converter_ushort.accept;

            Specializer<char>.toScript = Converter_char.toScript;
            Specializer<char>.toCpp = Converter_char.toCpp;
            Specializer<char>.accept = Converter_char.accept;

            Specializer<UInt32>.toScript = Converter_uint32.toScript;
            Specializer<UInt32>.toCpp = Converter_uint32.toCpp;
            Specializer<UInt32>.accept = Converter_uint32.accept;

            Specializer<float>.toScript = Converter_float.toScript;
            Specializer<float>.toCpp = Converter_float.toCpp;
            Specializer<float>.accept = Converter_float.accept;

            Specializer<double>.toScript = Converter_double.toScript;
            Specializer<double>.toCpp = Converter_double.toCpp;
            Specializer<double>.accept = Converter_double.accept;

            Specializer<bool>.toScript = Converter_bool.toScript;
            Specializer<bool>.toCpp = Converter_bool.toCpp;
            Specializer<bool>.accept = Converter_bool.accept;

            Specializer<string>.toScript = Converter_string.toScript;
            Specializer<string>.toCpp = Converter_string.toCpp;
            Specializer<string>.accept = Converter_string.accept;
        }
    }
}
#endif
