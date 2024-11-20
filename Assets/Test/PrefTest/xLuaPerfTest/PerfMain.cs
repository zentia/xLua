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
    string resultPath = "";

    LuaEnv luaenv;

    StreamWriter sw;

    System.Diagnostics.Stopwatch stopWatch = new System.Diagnostics.Stopwatch();

    // Use this for initialization
    void Start()
    {
        UnityEngine.Debug.SetParseFromLocal(true);
#if UNITY_ANDROID
#if XLUA_IL2CPP
        resultPath = Application.temporaryCachePath + "/il2cpp";
#else
        resultPath = Application.temporaryCachePath + "/noil2cpp";
#endif

#elif UNITY_IPHONE || UNITY_IOS
	    resultPath = Application.persistentDataPath + "/testResult_iOS";
#elif UNITY_STANDALONE_WIN
#if XLUA_IL2CPP
        resultPath = Application.dataPath + "/../../../../il2cpp";
#else
        resultPath = Application.dataPath + "/../../../../noil2cpp";
#endif
#else
        resultPath = "";
#endif
        var start = Time.realtimeSinceStartup;
        var startMem = System.GC.GetTotalMemory(true);
#if UNITY_EDITOR || XLUA_IL2CPP
        luaenv = new LuaEnv();
#else
		luaenv = new LuaEnv(typeof(DelegateBridgeWrap), typeof(ObjectTranslatorWrap));
#endif

        Debug.Log("start cost: " + (Time.realtimeSinceStartup - start));
        var endMem = System.GC.GetTotalMemory(true);
        Debug.Log("startMem: " + startMem + ", endMem: " + endMem + ", " + "cost mem: " + (endMem - startMem));
#if UNITY_EDITOR || !XLUA_IL2CPP || UNITY_ANDROID     
        luaenv.DoString("require 'luaTest'");
#else
        luaenv.DoResourcesString("luaTest.lua");
#endif
    }

    private void OnGUI()
    {
        const float height = 100;
        const float width = 400;
        if (GUI.Button(new Rect(0, 0, width, height), "GC"))
        {
            luaenv.FullGc();
            luaenv.GC();
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
        if (GUI.Button(new Rect(width * 1, height, width, height), "CSCallLuaBaseParameterFunction"))
        {
            var fs = new FileStream($"{resultPath}CSCallLuaBaseParameterFunction.log", FileMode.Create);
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
        if (GUI.Button(new Rect(width * 2, height, width, height), $"CSCallLuaClassParameterFunction"))
        {
            var fs = new FileStream($"{resultPath}CSCallLuaClassParameterFunction.log", FileMode.Create);
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
        if (GUI.Button(new Rect(width * 3, height, width, height), $"CSCallLuaStructParameterFunction"))
        {
            var fs = new FileStream($"{resultPath}CSCallLuaStructParameterFunction.log", FileMode.Create);
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
        if (GUI.Button(new Rect(width * 4, height, width, height), $"CSCallLuaTwoBaseParameterFunction"))
        {
            var fs = new FileStream($"{resultPath}CSCallLuaTwoBaseParameterFunction.log", FileMode.Create);
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
        if (GUI.Button(new Rect(width * 5, height, width, height), $"CSAccessLuaTableAccessMemberGet"))
        {
            var fs = new FileStream($"{resultPath}CSAccessLuaTableAccessMemberGet.log", FileMode.Create);
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


        if (GUI.Button(new Rect(0, height*2, width, height), $"LuaCallCSMemberFuncBaseParamMemberFunc"))
        {
            LuaCallCSMemberFuncBaseParamMemberFunc(loopTimes);
        }
        if (GUI.Button(new Rect(width * 1, height*2, width, height), "CSCallLuaBaseParameterFunction"))
        {
            var fs = new FileStream($"{resultPath}CSCallLuaBaseParameterFunction.log", FileMode.Create);
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
        if (GUI.Button(new Rect(width * 2, height*2, width, height), $"CSCallLuaClassParameterFunction"))
        {
            var fs = new FileStream($"{resultPath}CSCallLuaClassParameterFunction.log", FileMode.Create);
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
        if (GUI.Button(new Rect(width * 3, height*2, width, height), $"CSCallLuaStructParameterFunction"))
        {
            var fs = new FileStream($"{resultPath}CSCallLuaStructParameterFunction.log", FileMode.Create);
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
        if (GUI.Button(new Rect(width * 4, height*2, width, height), $"CSCallLuaTwoBaseParameterFunction"))
        {
            var fs = new FileStream($"{resultPath}CSCallLuaTwoBaseParameterFunction.log", FileMode.Create);
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
        if (GUI.Button(new Rect(width * 5, height*2, width, height), $"CSAccessLuaTableAccessMemberGet"))
        {
            var fs = new FileStream($"{resultPath}CSAccessLuaTableAccessMemberGet.log", FileMode.Create);
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

    private void LuaCallCSMemberFuncBaseParamMemberFunc(int loopTimes)
    {
        var fs = new FileStream($"{resultPath}LuaCallCSMemberFuncBaseParamMemberFunc.log", FileMode.Create);
        sw = new StreamWriter(fs);
        var func = luaenv.Global.Get<PerfTest>("LuaAccessCSBaseMemberFunc");
        PerformanceTest("lua call C# member function : base parameter member function : ", loopTimes, func);
        sw.Close();
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
{ }

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
public class ClassLuaCallCS
{
    public int[] array = new int[5];

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

    public int id;
    public ParaClass paraClass = new ParaClass();
    public ParaStruct paraStruct = new ParaStruct();
    public Vector3 vec3Member;

    public void funcBaseParam(int x)
    { }

    public void funcClassParam(ParaClass x)
    { }

    public void funcStructParam(ParaStruct x)
    { }

    public void funcVec3Param(Vector3 x)
    { }

    public void funcInParam(ref int x)
    { }

    public void funcOutParam(out int x)
    {
        x = 0;
    }

    public void funcInOutParam(ref int x, out int y)
    {
        y = 0;
    }

    public void funcTwoParam(int x, int y)
    {
    }

    public static int sId;
    public static ParaClass sParamClass = new ParaClass();
    public static ParaStruct sParamStruct = new ParaStruct();
    public static Vector3 sParamVec3;

    public static void sFuncBaseParam(int x)
    { }

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
        for (int i = 0; i < 1000000; i++)
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
}
