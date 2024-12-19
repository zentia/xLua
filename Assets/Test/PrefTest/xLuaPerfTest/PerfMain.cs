using UnityEngine;
using System.Collections;
using XLua;
using System.IO;
using System;
using System.Collections.Generic;
using System.Reflection;
using XLua.LuaDLL;
using XLuaIl2cpp;

[LuaCallCSharp]
public static class TestUtils
{
    public static bool IsAndroid()
    {
#if UNITY_ANDROID
        return true;
#else
        return false;
#endif
    }
}

[CSharpCallLua]
public delegate void PerfTest(int load);

public class PerfMain : MonoBehaviour
{

    internal static byte[] LoadFromStreamingAssetsPath(ref string filename)
    {
        try
        {
            filename = filename.Replace('.', '/') + ".lua";
            var filepath = UnityEngine.Application.streamingAssetsPath + "/" + filename;
#if UNITY_ANDROID && !UNITY_EDITOR
            UnityEngine.WWW www = new UnityEngine.WWW(filepath);
            while (true)
            {
                if (www.isDone || !string.IsNullOrEmpty(www.error))
                {
                    System.Threading.Thread.Sleep(50);
                    if (!string.IsNullOrEmpty(www.error))
                    {
                        return null;
                    }
                    else
                    {
                        return www.bytes;
                    }
                    break;
                }
            }
#else
            if (File.Exists(filepath))
            {
                // string text = File.ReadAllText(filepath);
                return File.ReadAllBytes(filepath);

            }
#endif
        }
        catch (System.Exception e)
        {
            
        }
        return null;
    }


    string resultPath = "";

    public static LuaEnv luaenv;

    StreamWriter sw;

    System.Diagnostics.Stopwatch stopWatch = new System.Diagnostics.Stopwatch();
    [LuaEval("StartTest")]
    private Action StartTest;

    // Use this for initialization
    void Start()
    {
        
#if UNITY_ANDROID || UNITY_IOS
#if XLUA_IL2CPP
        resultPath = Application.persistentDataPath + "/il2cpp";
#else
        resultPath = Application.persistentDataPath + "/noil2cpp";
#endif
#elif UNITY_STANDALONE_WIN
#if XLUA_IL2CPP
        resultPath = Application.dataPath + "/../../../../il2cpp";
#else
        resultPath = Application.dataPath + "/../../../../noil2cpp";
#endif
#endif
        var start = Time.realtimeSinceStartup;
        var startMem = System.GC.GetTotalMemory(true);
#if UNITY_EDITOR || XLUA_IL2CPP
        luaenv = new LuaEnv();
#else
		luaenv = new LuaEnv(typeof(DelegateBridgeWrap), typeof(ObjectTranslatorWrap));
#endif
        luaenv.AddLoader(LoadFromStreamingAssetsPath);
        Debug.Log("start cost: " + (Time.realtimeSinceStartup - start));
        var endMem = System.GC.GetTotalMemory(true);
        Debug.Log("startMem: " + startMem + ", endMem: " + endMem + ", " + "cost mem: " + (endMem - startMem));
        luaenv.DoString("require 'luaTest'");
        LuaEvalAttribute.Bind(this, luaenv);
    }

    void HandleLog(string logString, string stackTrace, LogType type)
    {
        sw.WriteLine(logString);
        sw.Flush();
    }

    private void OnGUI()
    {
        const float height = 100;
        const float width = 400;
        if (GUI.Button(new Rect(0, 0, width, height), "StartTest"))
        {
            string path = Path.Combine(Application.persistentDataPath, "log.txt");
            sw = new StreamWriter(path);
            Application.logMessageReceived += HandleLog;
            StartTest();
            Application.logMessageReceived -= HandleLog;
            sw.Close();
        }

        var loopTimes = 1000000;
        if (GUI.Button(new Rect(0, height, width, height), $"AllTest{loopTimes}"))
        {
            var fs = new FileStream($"{resultPath}AllTest{loopTimes}.log", FileMode.Create);
            sw = new StreamWriter(fs);
            StartCSCallLua(loopTimes);
            StartLuaCallCS(loopTimes);
            StartAddRemoveCB(loopTimes);
            StartCSCallLuaCB(loopTimes);
            StartConstruct(loopTimes);
            sw.Close();
        }
        if (GUI.Button(new Rect(width * 1, height, width, height), "FuncBasePara"))
        {
            var fs = new FileStream($"{resultPath}FuncBasePara.log", FileMode.Create);
            sw = new StreamWriter(fs);
            FuncBasePara funcBaseParm = luaenv.Global.Get<FuncBasePara>("FuncBasePara");
            PerformanceTest("C# call lua : base parameter function :", loopTimes, loop_times =>
            {
                for (int i = 0; i < loop_times; i++)
                {
                    funcBaseParm(i);
                }
            });
            sw.Close();
        }
        if (GUI.Button(new Rect(width * 2, height, width, height), $"FuncClassPara"))
        {
            var fs = new FileStream($"{resultPath}FuncClassPara.log", FileMode.Create);
            sw = new StreamWriter(fs);
            FuncClassPara funcClassPara = luaenv.Global.Get<FuncClassPara>("FuncClassPara");
            ParaClass paraClass = new ParaClass();
            PerformanceTest("C# call lua : class parameter function :", loopTimes, loop_times =>
            {
                for (int i = 0; i < loop_times; i++)
                {
                    funcClassPara(paraClass);
                }
            });
            sw.Close();
        }
        if (GUI.Button(new Rect(width * 3, height, width, height), $"FuncStructPara"))
        {
            var fs = new FileStream($"{resultPath}FuncStructPara.log", FileMode.Create);
            sw = new StreamWriter(fs);
            FuncStructPara funcStructPara = luaenv.Global.Get<FuncStructPara>("FuncStructPara");
            ParaStruct paraStruct = new ParaStruct();
            PerformanceTest("C# call lua : struct parameter function :", loopTimes, loop_times =>
            {
                for (int i = 0; i < loop_times; i++)
                {
                    funcStructPara(paraStruct);
                }
            });
            sw.Close();
        }
        if (GUI.Button(new Rect(width * 4, height, width, height), $"FuncTwoBasePara"))
        {
            var fs = new FileStream($"{resultPath}FuncTwoBasePara.log", FileMode.Create);
            sw = new StreamWriter(fs);
            FuncTwoBasePara funcTwoBasePara = luaenv.Global.Get<FuncTwoBasePara>("FuncTwoBasePara");
            PerformanceTest("C# call lua : two base parameter function :", loopTimes, loop_times =>
            {
                for (int i = 0; i < loop_times; i++)
                {
                    funcTwoBasePara(i, i);
                }
            });
            sw.Close();
        }
        if (GUI.Button(new Rect(width * 5, height, width, height), $"luaTable"))
        {
            var fs = new FileStream($"{resultPath}luaTable.log", FileMode.Create);
            sw = new StreamWriter(fs);
            var iTAccess = luaenv.Global.Get<List<int>>("luaTable");
            PerformanceTest("C# access lua table : access member, get : ", loopTimes, loop_times =>
            {
                for (int i = 0; i < loop_times; i++)
                {
                    int x = iTAccess[0];
                }
            });
            sw.Close();
        }


        if (GUI.Button(new Rect(0, height*2, width, height), $"LuaAccessCSBaseMemberFunc"))
        {
            var fs = new FileStream($"{resultPath}LuaAccessCSBaseMemberFunc.log", FileMode.Create);
            sw = new StreamWriter(fs);
            var func = luaenv.Global.Get<PerfTest>("LuaAccessCSBaseMemberFunc");
            PerformanceTest("lua call C# member function : base parameter member function : ", loopTimes, func);
            sw.Close();
        }
        if (GUI.Button(new Rect(width * 1, height*2, width, height), "LuaConstructClass"))
        {
            var fs = new FileStream($"{resultPath}LuaConstructClass.log", FileMode.Create);
            sw = new StreamWriter(fs);
            sw.WriteLine("lua call construct :");
            PerfTest func = luaenv.Global.Get<PerfTest>("LuaConstructClass");
            PerformanceTest("lua construct class : ", loopTimes, func);
            sw.Close();
        }
        if (GUI.Button(new Rect(width * 2, height*2, width, height), $"FuncClassPara"))
        {
            var fs = new FileStream($"{resultPath}FuncClassPara.log", FileMode.Create);
            sw = new StreamWriter(fs);
            FuncClassPara funcClassPara = luaenv.Global.Get<FuncClassPara>("FuncClassPara");
            ParaClass paraClass = new ParaClass();
            PerformanceTest("C# call lua : class parameter function :", loopTimes, loop_times =>
            {
                for (int i = 0; i < loop_times; i++)
                {
                    funcClassPara(paraClass);
                }
            });
            sw.Close();
        }
        if (GUI.Button(new Rect(width * 3, height*2, width, height), $"FuncStructPara"))
        {
            var fs = new FileStream($"{resultPath}FuncStructPara.log", FileMode.Create);
            sw = new StreamWriter(fs);
            FuncStructPara funcStructPara = luaenv.Global.Get<FuncStructPara>("FuncStructPara");
            ParaStruct paraStruct = new ParaStruct();
            PerformanceTest("C# call lua : struct parameter function :", loopTimes, loop_times =>
            {
                for (int i = 0; i < loop_times; i++)
                {
                    funcStructPara(paraStruct);
                }
            });
            sw.Close();
        }
        if (GUI.Button(new Rect(width * 4, height*2, width, height), $"FuncTwoBasePara"))
        {
            var fs = new FileStream($"{resultPath}FuncTwoBasePara.log", FileMode.Create);
            sw = new StreamWriter(fs);
            FuncTwoBasePara funcTwoBasePara = luaenv.Global.Get<FuncTwoBasePara>("FuncTwoBasePara");
            PerformanceTest("C# call lua : two base parameter function :", loopTimes, loop_times =>
            {
                for (int i = 0; i < loop_times; i++)
                {
                    funcTwoBasePara(i, i);
                }
            });
            sw.Close();
        }
        if (GUI.Button(new Rect(width * 5, height*2, width, height), $"luaTable"))
        {
            var fs = new FileStream($"{resultPath}luaTable.log", FileMode.Create);
            sw = new StreamWriter(fs);
            var iTAccess = luaenv.Global.Get<List<int>>("luaTable");
            PerformanceTest("C# access lua table : access member, get : ", loopTimes, loop_times =>
            {
                for (int i = 0; i < loop_times; i++)
                {
                    int x = iTAccess[0];
                }
            });
            sw.Close();
        }
    }

    private void PerformanceTest(string title, int loopTimes, PerfTest execute)
    {
        stopWatch.Reset();
        stopWatch.Start();
        execute(loopTimes);
        stopWatch.Stop();
        var log = $"{loopTimes} {title}{stopWatch.ElapsedMilliseconds}ms";
        Debug.Log(log);
        sw.WriteLine(log);
    }

    private void StartCSCallLua(int loopTimes)
    {
        Debug.Log("C# call lua :");
        sw.WriteLine("C# call lua :");

        FuncBasePara funcBaseParm = luaenv.Global.Get<FuncBasePara>("FuncBasePara");
        PerformanceTest("C# call lua : base parameter function :", loopTimes, loop_times =>
        {
            for (int i = 0; i < loop_times; i++)
            {
                funcBaseParm(i);
            }
        });

        FuncClassPara funcClassPara = luaenv.Global.Get<FuncClassPara>("FuncClassPara");
        ParaClass paraClass = new ParaClass();
        PerformanceTest("C# call lua : class parameter function :", loopTimes, loop_times =>
        {
            for (int i = 0; i < loop_times; i++)
            {
                funcClassPara(paraClass);
            }
        });

        FuncStructPara funcStructPara = luaenv.Global.Get<FuncStructPara>("FuncStructPara");
        ParaStruct paraStruct = new ParaStruct();
        PerformanceTest("C# call lua : struct parameter function :", loopTimes, loop_times =>
        {
            for (int i = 0; i < loop_times; i++)
            {
                funcStructPara(paraStruct);
            }
        });

        FuncTwoBasePara funcTwoBasePara = luaenv.Global.Get<FuncTwoBasePara>("FuncTwoBasePara");
        PerformanceTest("C# call lua : two base parameter function :", loopTimes, loop_times =>
        {
            for (int i = 0; i < loop_times; i++)
            {
                funcTwoBasePara(i, i);
            }
        });

        sw.WriteLine("C# access lua table : ");

        var iTAccess = luaenv.Global.Get<List<int>>("luaTable");
        PerformanceTest("C# access lua table : access member, get : ", loopTimes, loop_times =>
        {
            for (int i = 0; i < loop_times; i++)
            {
                int x = iTAccess[0];
            }
        });
    }

    private void StartLuaCallCS(int loopTimes)
    {
        Debug.Log("lua call C# member : ");
        sw.WriteLine("lua call C# member : ");

        PerfTest func = luaenv.Global.Get<PerfTest>("LuaAccessCSBaseMember_get");
        PerformanceTest("lua call C# member : base member, get : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSBaseMember_set");
        PerformanceTest("lua call C# member : base member, set : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSClassMember_get");
        PerformanceTest("lua call C# member : class member, get : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSClassMember_set");
        PerformanceTest("lua call C# member : class member, set : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessStructMember_get");
        PerformanceTest("lua call C# member : struct member, get : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessStructMember_set");
        PerformanceTest("lua call C# member : struct member, set : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessVec3Member_get");
        PerformanceTest("lua call C# member : vector3 member, get : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessVec3Member_set");
        PerformanceTest("lua call C# member : vector3 member, set : ", loopTimes, func);

        Debug.Log("lua call C# member function : ");
        sw.WriteLine("lua call C# member function : ");

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSBaseMemberFunc");
        PerformanceTest("lua call C# member function : base parameter member function : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSClassMemberFunc");
        PerformanceTest("lua call C# member function : class parameter member function : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStructMemberFunc");
        PerformanceTest("lua call C# member function : struct parameter member function : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSVec3MemberFunc");
        PerformanceTest("lua call C# member function : vector3 parameter member function : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSInMemberFunc");
        PerformanceTest("lua call C# member function : input parameter member function : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSOutMemberFunc");
        PerformanceTest("lua call C# member function : output parameter member function : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSInOutMemberFunc");
        PerformanceTest("lua call C# member function : in & output parameter member function : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSTwoMemberFunc");
        PerformanceTest("lua call C# member function : two parameter member function : ", loopTimes, func);

        Debug.Log("lua call static member : ");
        sw.WriteLine("lua call static member :");

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticBaseMember_get");
        PerformanceTest("lua call C# static member : base member, get : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticBaseMember_set");
        PerformanceTest("lua call C# static member : base member, set : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticClassMember_get");
        PerformanceTest("lua call C# static member : class member, get : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticClassMember_set");
        PerformanceTest("lua call C# static member : class member, set : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticStructMember_get");
        PerformanceTest("lua call C# static member : struct member, get : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticStructMember_set");
        PerformanceTest("lua call C# static member : struct member, set : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticVec3Member_get");
        PerformanceTest("lua call C# static member : vector3 member, get : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticVec3Member_set");
        PerformanceTest("lua call C# static member : vector3 member, set : ", loopTimes, func);

        Debug.Log("lua call C# static member function : ");
        sw.WriteLine("lua call C# static member function : ");

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticBaseMemberFunc");
        PerformanceTest("lua call C# static member function : base parameter member function : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticClassMemberFunc");
        PerformanceTest("lua call C# static member function : class parameter member function : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticStructMemberFunc");
        PerformanceTest("lua call C# static member function : struct parameter member function : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticVec3MemberFunc");
        PerformanceTest("lua call C# static member function : vector3 parameter member function : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticInMemberFunc");
        PerformanceTest("lua call C# static member function : input parameter member function : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticOutMemberFunc");
        PerformanceTest("lua call C# static member function : output parameter member function : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticInOutMemberFunc");
        PerformanceTest("lua call C# static member function : in & output parameter member function : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticTwoMemberFunc");
        PerformanceTest("lua call C# static member function : two parameter member function : ", loopTimes, func);

        Debug.Log("lua call C# array & num : ");
        sw.WriteLine("lua call C# array & enum : ");

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSEnumFunc_get");
        PerformanceTest("lua call C# member : enum member, get : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSEnumFunc_set");
        PerformanceTest("lua call C# member : enum member, set : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSArrayFunc_get");
        PerformanceTest("lua call C# member : array member, get : ", loopTimes, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSArrayFunc_set");
        PerformanceTest("lua call C# member : array member, set : ", loopTimes, func);
    }

    private void StartConstruct(int LOOP_TIMES)
    {
        Debug.Log("lua call construct :");
        sw.WriteLine("lua call construct :");
        PerfTest func = luaenv.Global.Get<PerfTest>("LuaConstructClass");
        PerformanceTest("lua construct class : ", LOOP_TIMES, func);

        func = luaenv.Global.Get<PerfTest>("LuaConstructStruct");
        PerformanceTest("lua construct struct : ", LOOP_TIMES, func);
    }

    private void StartAddRemoveCB(int LOOP_TIMES)
    {
        Debug.Log("lua add & remove callback : ");
        sw.WriteLine("lua add & remove call back : ");

        PerfTest func = luaenv.Global.Get<PerfTest>("LuaAddRemoveCB");
        PerformanceTest("lua add & remove callback : ", LOOP_TIMES, func);
    }

    private void StartCSCallLuaCB(int LOOP_TIMES)
    {
        Debug.Log("C# call lua callbak :");
        sw.WriteLine("C# call lua callbak :");

        PerfTest func = luaenv.Global.Get<PerfTest>("LuaBaseParaCB");
        PerformanceTest("invoke base param callback : ", LOOP_TIMES, func);

        func = luaenv.Global.Get<PerfTest>("LuaClassParaCB");
        PerformanceTest("invoke class param callback : ", LOOP_TIMES, func);

        func = luaenv.Global.Get<PerfTest>("LuaStructParaCB");
        PerformanceTest("invoke struct param callback : ", LOOP_TIMES, func);

        func = luaenv.Global.Get<PerfTest>("LuaVec3ParaCB");
        PerformanceTest("invoke vector3 param callback : ", LOOP_TIMES, func);
    }

    [CSharpCallLua]
    public delegate void FuncBasePara(int x);
    [CSharpCallLua]
    public delegate void FuncClassPara(ParaClass x);
    [CSharpCallLua]
    public delegate void FuncStructPara(ParaStruct x);
    [CSharpCallLua]
    public delegate void FuncTwoBasePara(int x, int y);

}

[CSharpCallLua]
public delegate void BaseParaEventHandler(int x);
[CSharpCallLua]
public delegate void ClassParaEventHandler(ParaClass x);
[CSharpCallLua]
public delegate void StructParaEventHandler(ParaStruct x);
[CSharpCallLua]
public delegate void Vec3ParamEventHandler(Vector3 x);
[CSharpCallLua]
public delegate void NullEventHandler();

[LuaCallCSharp]
public class ParaClass
{
    public virtual int FuncA()
    {
        UnityEngine.Debug.Log("Base FunA");
        return 0;
    }
    ~ParaClass()
    {
        Debug.Log("~ParaClass()");
    }
}

[GCOptimize]
[LuaCallCSharp]
public struct ParaStruct
{ }

[CSharpCallLua]
public interface ITableAccess
{
    int id { get; set; }
    void func();
}

[LuaCallCSharp]
public class ClassLuaCallCS : ParaClass
{
    public int[] array;
    public List<string> list = new List<string>(){"a","b"};
    public Dictionary<string, int> dictionary;

    [LuaCallCSharp]
    public enum LuaEnum
    {
        ONE,
        TWO,
        THREE,
        FOUR,
        FIVE
    };

    public LuaEnum enumParam;


    public event BaseParaEventHandler BaseParaEvent;
    public event ClassParaEventHandler ClassParaEvent;
    public event StructParaEventHandler StructParaEvent;
    public event Vec3ParamEventHandler Vec3ParaEvent;
    public event NullEventHandler NullEvent;

    public char u1;
    public ushort u2;
    public uint u4;
    public ulong u8;

    public sbyte i1;
    public short i2;
    public int i4;
    public long i8;

    public string s;

    public float f;
    public double d;

    public static char su1;
    public static ushort su2;
    public static uint su4;
    public static ulong su8;

    public static sbyte si1;
    public static short si2;
    public static int si4;
    public static long si8;

    public static string ss;

    public static float sf;
    public static double sd;

    public char pu1
    {
        get;
        set;
    }

    public ushort pu2
    {
        get;
        set;
    }

    public static char spu1
    {
        get;
        set;
    }

    public static ushort spu2
    {
        get;
        set;
    }

    public ParaClass paraClass = new ParaClass();
    public ParaStruct paraStruct = new ParaStruct();
    public Vector3 vec3Member;

    public override int FuncA()
    {
        UnityEngine.Debug.Log("Driver FuncA");
        return 1;
    }

    public int funcBaseParam(int x)
    {
        return x;
    }

    public int funcBaseParam(int x, int y)
    {
        return x + y;
    }

    public int funcBaseParam(int x, int y, int z = 9)
    {
        return x + y + z;
    }

    public void funcClassParam(LuaEnum e, ParaClass x)
    { }

    public void funcStructParam(ParaStruct x)
    { }

    public void funcVec3Param(Vector3 x)
    { }

    public void funcInParam(ref int x)
    {
        x = 9527;
    }

    public void funcOutParam(out int x)
    {
        x = 0;
    }

    public void funcInOutParam(ref int x, out int y)
    {
        y = 9528;
    }

    public void funcTwoParam(int x, int y)
    {
    }

    public LuaTable GetTable(int[] a)
    {
        var env = PerfMain.luaenv;
        var table = env.NewTable();
        foreach (var i in a)
        {
            table.Set(i, i);
        }
        return table;
    }

    public static int sId;
    public static ParaClass sParamClass = new ParaClass();
    public static ParaStruct sParamStruct = new ParaStruct();
    public static Vector3 sParamVec3;

    public static float sFuncBaseParam(float x)
    {
        return x;
    }

    public static void sFuncClassParam(ParaClass x)
    { }

    public static void sFuncStructParam(ParaStruct x)
    { }

    public static void sFuncVec3Param(Vector3 x)
    { }

    public static void sFuncInParam(ref int x)
    { }

    public static void sFuncOutParam(out int x)
    {
        x = 0;
    }

    public static void sFuncInOutParam(ref int x, out int y)
    {
        y = 0;
    }

    public static void sFuncTwoParam(int x, int y)
    {

    }

    public void InvokeBaseParaCB()
    {
        if (BaseParaEvent != null)
        {
            BaseParaEvent(0);
        }
    }

    public void InvokeClassParaCB()
    {
        ParaClass paraCls = new ParaClass();
        for (int i = 0; i < 1000000; i++)
        {
            ClassParaEvent(paraCls);
        }
    }

    public void InvokeStructParaCB()
    {
        ParaStruct paraStruct = new ParaStruct();
        for (int i = 0; i < 1000000; i++)
        {
            StructParaEvent(paraStruct);
        }
    }

    public void InvokeVec3ParaCB()
    {
        Vector3 paraVec3 = new Vector3(0, 0, 0);
        for (int i = 0; i < 1000000; i++)
        {
            Vec3ParaEvent(paraVec3);
        }
    }

    public void CharArray(char[] param)
    {
        if (param != null)
        {
            foreach (var c in param)
            {
                Debug.Log(c);
            }
        }
    }

    public void BooleanArray(bool[] param)
    {
        if (param != null)
        {
            foreach (var b in param)
            {
                Debug.Log(b);
            }
        }
    }

    public void UInt8Array(byte[] param)
    {
        if (param != null)
        {
            foreach (var b in param)
            {
                Debug.Log(b);
            }
        }
    }

    public void UInt16Array(ushort[] param)
    {
        if (param != null)
        {
            foreach (var v in param)
            {
                Debug.Log(v);
            }
        }
    }

    public void UInt32Array(uint[] param)
    {
        if (param != null)
        {
            foreach (var v in param)
            {
                Debug.Log(v);
            }
        }
    }

    public void UInt64Array(ulong[] param)
    {
        if (param != null)
        {
            foreach (var v in param)
            {
                Debug.LogFormat("UInt64:{0}", v);
            }
        }
    }

    public void Int16Array(short[] param)
    {
        if (param != null)
        {
            foreach (var v in param)
            {
                Debug.LogFormat("Int16:{0}",v);
            }
        }
    }

    public void Int32Array(int[] param)
    {
        if (param != null)
        {
            foreach (var v in param)
            {
                Debug.LogFormat("Int32:{0}",v);
            }
        }
    }

    public void Int64Array(long[] param)
    {
        if (param != null)
        {
            foreach (var v in param)
            {
                Debug.Log(v);
            }
        }
    }

    public void StringArray(string[] param)
    {
        if (param != null)
        {
            foreach (var v in param)
            {
                Debug.Log(v);
            }
        }
    }

    public void StructArray(ParaStruct[] param)
    {
        if (param != null)
        {
            foreach (var v in param)
            {
                Debug.Log(v);
            }
        }
    }

    public void ClassArray(ParaClass[] param)
    {
        if (param != null)
        {
            foreach (var v in param)
            {
                Debug.Log(v);
            }
        }
    }
}
