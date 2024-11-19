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

public class PerfMain : MonoBehaviour {
	string resultPath = "";

	LuaEnv luaenv;

	StreamWriter sw;

    System.Diagnostics.Stopwatch stopWatch = new System.Diagnostics.Stopwatch();

	// Use this for initialization
	void Start ()
	{
		var arr = typeof(ClassLuaCallCS).GetEvents(BindingFlags.DeclaredOnly | BindingFlags.Instance | BindingFlags.Static | BindingFlags.Public);
#if UNITY_ANDROID && !UNITY_EDITOR
	    resultPath = "/sdcard/testResult_android";
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
#if UNITY_EDITOR || !XLUA_IL2CPP        
        luaenv.DoString("require 'luaTest'");
#else
        luaenv.DoResourcesString("luaTest.lua");
#endif
    }

	private void OnGUI()
    {
        const float height = 50;
        const float width = 300;
        if (GUI.Button(new Rect(0,0,width, height), "GC"))
        {
            luaenv.FullGc();
            luaenv.GC();
        }
        
        for (var i = 1; i < 7; i++)
        {
            var loopTimes = (int)Math.Pow(10, i-1);
            if (GUI.Button(new Rect(0, i * height, width, height), $"All Test {loopTimes}"))
            {
                Process(loopTimes);
            }
            if (GUI.Button(new Rect(width*1, i * height, width, height), $"struct parameter function {loopTimes}"))
            {
                ProcessStructParameterFunction(loopTimes);
            }
            if (GUI.Button(new Rect(width*2, i * height, width, height), $"Construct Struct {loopTimes}"))
            {
                ProcessConstructStruct(loopTimes);
            }
        }
    }

    private void Process(int loopTimes)
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

    private void ProcessConstructStruct(int loopTimes)
    {
        var fs = new FileStream($"{resultPath}ConstructStruct{loopTimes}.log", FileMode.Create);
        sw = new StreamWriter(fs);
        var func = luaenv.Global.Get<PerfTest>("LuaConstructStruct");
        PerformanceTest("lua construct struct : ", loopTimes, func);
        sw.Close();
    }
    private void ProcessStructParameterFunction(int loopTimes)
    {
        var fs = new FileStream($"{resultPath}ConstructStruct{loopTimes}.log", FileMode.Create);
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
        Debug.Log ("C# call lua :");
		sw.WriteLine ("C# call lua :");

		FuncBasePara funcBaseParm = luaenv.Global.Get<FuncBasePara>("FuncBasePara");
        PerformanceTest("C# call lua : base parameter function :", loopTimes, loop_times =>
        {
            for (int i = 0; i < loop_times; i++)
            {
                funcBaseParm(i);
            }
        });

        FuncClassPara funcClassPara = luaenv.Global.Get<FuncClassPara> ("FuncClassPara");
		ParaClass paraClass = new ParaClass ();
        PerformanceTest("C# call lua : class parameter function :", loopTimes, loop_times =>
        {
            for (int i = 0; i < loop_times; i++)
            {
                funcClassPara(paraClass);
            }
        });

        FuncStructPara funcStructPara = luaenv.Global.Get<FuncStructPara> ("FuncStructPara");
		ParaStruct paraStruct = new ParaStruct ();
        PerformanceTest("C# call lua : struct parameter function :", loopTimes, loop_times =>
        {
            for (int i = 0; i < loop_times; i++)
            {
                funcStructPara(paraStruct);
            }
        });

        FuncTwoBasePara funcTwoBasePara = luaenv.Global.Get<FuncTwoBasePara> ("FuncTwoBasePara");
        PerformanceTest("C# call lua : two base parameter function :", loopTimes, loop_times =>
        {
            for (int i = 0; i < loop_times; i++)
            {
                funcTwoBasePara(i, i);
            }
        });

        sw.WriteLine ("C# access lua table : ");

		var iTAccess = luaenv.Global.Get<List<int>> ("luaTable");
        PerformanceTest("C# access lua table : access member, get : ", loopTimes, loop_times =>
        {
            for (int i = 0; i < loop_times; i++)
            {
                int x = iTAccess[0];
            }
        });
    }

	private void StartLuaCallCS(int LOOP_TIMES)
	{
        Debug.Log ("lua call C# member : ");
		sw.WriteLine ("lua call C# member : ");

		PerfTest func = luaenv.Global.Get<PerfTest> ("LuaAccessCSBaseMember_get");
        PerformanceTest("lua call C# member : base member, get : ", LOOP_TIMES, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSBaseMember_set");
        PerformanceTest("lua call C# member : base member, set : ", LOOP_TIMES, func);

        func = luaenv.Global.Get<PerfTest> ("LuaAccessCSClassMember_get");
        PerformanceTest("lua call C# member : class member, get : ", LOOP_TIMES, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSClassMember_set");
        PerformanceTest("lua call C# member : class member, set : ", LOOP_TIMES, func);

		func = luaenv.Global.Get<PerfTest> ("LuaAccessStructMember_get");
        PerformanceTest("lua call C# member : struct member, get : ", LOOP_TIMES, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessStructMember_set");
        PerformanceTest("lua call C# member : struct member, set : ", LOOP_TIMES, func);

		func = luaenv.Global.Get<PerfTest> ("LuaAccessVec3Member_get");
        PerformanceTest("lua call C# member : vector3 member, get : ", LOOP_TIMES, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessVec3Member_set");
        PerformanceTest("lua call C# member : vector3 member, set : ", LOOP_TIMES, func);

		Debug.Log ("lua call C# member funtion : ");
		sw.WriteLine ("lua call C# member funtion : ");

		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSBaseMemberFunc");
        PerformanceTest("lua call C# member funtion : base parameter member function : ", LOOP_TIMES, func);

		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSClassMemberFunc");
        PerformanceTest("lua call C# member funtion : class parameter member function : ", LOOP_TIMES, func);

		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSStructMemberFunc");
        PerformanceTest("lua call C# member funtion : struct parameter member function : ", LOOP_TIMES, func);

		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSVec3MemberFunc");
        PerformanceTest("lua call C# member funtion : vector3 parameter member function : ", LOOP_TIMES, func);

		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSInMemberFunc");
        PerformanceTest("lua call C# member funtion : input parameter member function : ", LOOP_TIMES, func);

		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSOutMemberFunc");
        PerformanceTest("lua call C# member funtion : output parameter member function : ", LOOP_TIMES, func);

		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSInOutMemberFunc");
        PerformanceTest("lua call C# member funtion : in & output parameter member function : ", LOOP_TIMES, func);

		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSTwoMemberFunc");
        PerformanceTest("lua call C# member funtion : two parameter member function : ", LOOP_TIMES, func);

		Debug.Log ("lua call static memeber : ");
		sw.WriteLine ("lua call static memeber :");

		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSStaticBaseMember_get");
        PerformanceTest("lua call C# static member : base member, get : ", LOOP_TIMES, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticBaseMember_set");
        PerformanceTest("lua call C# static member : base member, set : ", LOOP_TIMES, func);
		
		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSStaticClassMember_get");
        PerformanceTest("lua call C# static member : class member, get : ", LOOP_TIMES, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticClassMember_set");
        PerformanceTest("lua call C# static member : class member, set : ", LOOP_TIMES, func);
		
		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSStaticStructMember_get");
        PerformanceTest("lua call C# static member : struct member, get : ", LOOP_TIMES, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticStructMember_set");
        PerformanceTest("lua call C# static member : struct member, set : ", LOOP_TIMES, func);
		
		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSStaticVec3Member_get");
        PerformanceTest("lua call C# static member : vector3 member, get : ", LOOP_TIMES, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSStaticVec3Member_set");
        PerformanceTest("lua call C# static member : vector3 member, set : ", LOOP_TIMES, func);

		Debug.Log ("lua call C# static member funtion : ");
		sw.WriteLine ("lua call C# member funtion : ");
		
		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSStaticBaseMemberFunc");
        PerformanceTest("lua call C# static member funtion : base parameter member function : ", LOOP_TIMES, func);
		
		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSStaticClassMemberFunc");
        PerformanceTest("lua call C# static member funtion : class parameter member function : ", LOOP_TIMES, func);
		
		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSStaticStructMemberFunc");
        PerformanceTest("lua call C# static member funtion : struct parameter member function : ", LOOP_TIMES, func);
		
		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSStaticVec3MemberFunc");
        PerformanceTest("lua call C# static member funtion : vector3 parameter member function : ", LOOP_TIMES, func);
		
		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSStaticInMemberFunc");
        PerformanceTest("lua call C# static member funtion : input parameter member function : ", LOOP_TIMES, func);
		
		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSStaticOutMemberFunc");
        PerformanceTest("lua call C# static member funtion : output parameter member function : ", LOOP_TIMES, func);
		
		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSStaticInOutMemberFunc");
        PerformanceTest("lua call C# static member funtion : in & output parameter member function : ", LOOP_TIMES, func);

		func = luaenv.Global.Get<PerfTest> ("LuaAccessCSStaticTwoMemberFunc");
        PerformanceTest("lua call C# static member funtion : two parameter member function : ", LOOP_TIMES, func);

        Debug.Log("lua call C# array & num : ");
        sw.WriteLine("lua call C# array & enum : ");

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSEnumFunc_get");
        PerformanceTest("lua call C# member : enum member, get : ", LOOP_TIMES, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSEnumFunc_set");
        PerformanceTest("lua call C# member : enum member, set : ", LOOP_TIMES, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSArrayFunc_get");
        PerformanceTest("lua call C# member : array member, get : ", LOOP_TIMES, func);

        func = luaenv.Global.Get<PerfTest>("LuaAccessCSArrayFunc_set");
        PerformanceTest("lua call C# member : array member, set : ", LOOP_TIMES, func);
	}

	private void StartConstruct(int LOOP_TIMES)
	{
        Debug.Log ("lua call construct :");
        sw.WriteLine("lua call construct :");
        PerfTest func = luaenv.Global.Get<PerfTest> ("LuaConstructClass");
        PerformanceTest("lua construct class : ", LOOP_TIMES, func);
		
		func = luaenv.Global.Get<PerfTest> ("LuaConstructStruct");
        PerformanceTest("lua construct struct : ", LOOP_TIMES, func);
	}

	private void StartAddRemoveCB(int LOOP_TIMES)
	{
        Debug.Log ("lua add & remove callback : ");
		sw.WriteLine ("lua add & remove call back : ");

		PerfTest func = luaenv.Global.Get<PerfTest> ("LuaAddRemoveCB");
        PerformanceTest("lua add & remove callback : ", LOOP_TIMES, func);
	}

	private void StartCSCallLuaCB(int LOOP_TIMES)
	{
        Debug.Log ("C# call lua callbak :");
		sw.WriteLine ("C# call lua callbak :");

		PerfTest func = luaenv.Global.Get<PerfTest> ("LuaBaseParaCB");
        PerformanceTest("invoke base param callback : ", LOOP_TIMES, func);

		func = luaenv.Global.Get<PerfTest> ("LuaClassParaCB");
        PerformanceTest("invoke class param callback : ", LOOP_TIMES, func);

		func = luaenv.Global.Get<PerfTest> ("LuaStructParaCB");
        PerformanceTest("invoke struct param callback : ", LOOP_TIMES, func);

		func = luaenv.Global.Get<PerfTest> ("LuaVec3ParaCB");
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
{}

[GCOptimize]
[LuaCallCSharp]
public struct ParaStruct
{}

[CSharpCallLua]
public interface ITableAccess
{
	int id { get; set;}
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
	public ParaClass paraClass = new ParaClass ();
	public ParaStruct paraStruct = new ParaStruct();
	public Vector3 vec3Member;

	public void funcBaseParam(int x)
	{}

	public void funcClassParam(ParaClass x)
	{}

	public void funcStructParam(ParaStruct x)
	{}

	public void funcVec3Param(Vector3 x)
	{}

	public void funcInParam(ref int x)
	{}

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
	{}
	
	public static void sFuncClassParam(ParaClass x)
	{}
	
	public static void sFuncStructParam(ParaStruct x)
	{}
	
	public static void sFuncVec3Param(Vector3 x)
	{}
	
	public static void sFuncInParam(ref int x)
	{}
	
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
		for (int i = 0; i < 1000000; i++) {
			BaseParaEvent(0);
		}
	}

	public void InvokeClassParaCB()
	{
		ParaClass paraCls = new ParaClass ();
		for (int i = 0; i < 1000000; i++) {
			ClassParaEvent(paraCls);
		}
	}

	public void InvokeStructParaCB()
	{
		ParaStruct paraStruct = new ParaStruct ();
		for (int i = 0; i < 1000000; i++) {
			StructParaEvent(paraStruct);
		}
	}

	public void InvokeVec3ParaCB()
	{
		Vector3 paraVec3 = new Vector3 (0, 0, 0);
		for (int i = 0; i < 1000000; i++) {
			Vec3ParaEvent(paraVec3);
		}
	}
}
