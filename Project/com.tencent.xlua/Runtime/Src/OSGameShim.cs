using System;
using System.Text;
using UnityEngine;

// Standalone shim that replaces the game-engine ("OSGame") logging and
// object-lifecycle types which are not available in this xLua-only build.
// These are referenced from ObjectPool.cs / LuaEnv.cs / StaticLuaCallbacks.cs
// / LuaEvalAttribute.cs (and the Editor's FileExporter.cs).

public class osgame_log
{
    public class Categories
    {
        public int Lua;
        public int GameCore;
    }

    public static readonly Categories cat = new Categories();

    public static void info(object category, string format, params object[] args)
    {
        Write(LogType.Log, format, args);
    }

    public static void debug(object category, string format, params object[] args)
    {
        Write(LogType.Log, format, args);
    }

    public static void warning(object category, string format, params object[] args)
    {
        Write(LogType.Warning, format, args);
    }

    public static void error(object category, string format, params object[] args)
    {
        Write(LogType.Error, format, args);
    }

    public static void fatal(object category, string format, params object[] args)
    {
        Write(LogType.Error, format, args);
    }

    private static void Write(LogType type, string format, object[] args)
    {
        Debug.unityLogger.Log(type, Format(format, args));
    }

    private static string Format(string format, object[] args)
    {
        if (args == null || args.Length == 0)
        {
            return format;
        }

        var sb = new StringBuilder();
        int pos = 0;
        int argIndex = 0;

        while (pos < format.Length)
        {
            int open = format.IndexOf('{', pos);
            if (open < 0)
            {
                sb.Append(format, pos, format.Length - pos);
                break;
            }

            sb.Append(format, pos, open - pos);
            int close = format.IndexOf('}', open);
            if (close < 0)
            {
                sb.Append(format, open, format.Length - open);
                break;
            }

            sb.Append(argIndex < args.Length ? args[argIndex++] : format.Substring(open, close - open + 1));
            pos = close + 1;
        }

        return sb.ToString();
    }
}

namespace osgame.common
{
    public static class UnityObjectDestroyEvent
    {
        public static Action<UnityEngine.Object> onDestroyByLuaInvoke;

        public static void RegisterDestroyByLua(UnityEngine.Object obj)
        {
            // No-op in standalone xLua.
        }

        public static void UnregisterDestroyByLua(UnityEngine.Object obj)
        {
            // No-op in standalone xLua.
        }
    }
}
