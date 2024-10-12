C#层`Debug.Log`的胶水层代码
```C#
[MonoPInvokeCallbackAttribute(typeof(LuaCSFunction))]
static int _m_Log_xlua_st_(RealStatePtr L)
{
    try {
    
        ObjectTranslator translator = ObjectTranslatorPool.Instance.Find(L);
    
    
    
        int gen_param_count = LuaAPI.lua_gettop(L);
    
        if(gen_param_count == 1&& translator.Assignable<object>(L, 1)) 
        {
            object _message = translator.GetObject(L, 1, typeof(object));
            
            UnityEngine.Debug.Log( _message );
            
            
            
            return 0;
        }
        if(gen_param_count == 2&& translator.Assignable<object>(L, 1)&& translator.Assignable<UnityEngine.Object>(L, 2)) 
        {
            object _message = translator.GetObject(L, 1, typeof(object));
            UnityEngine.Object _context = (UnityEngine.Object)translator.GetObject(L, 2, typeof(UnityEngine.Object));
            
            UnityEngine.Debug.Log( _message, _context );
            
            
            
            return 0;
        }
        
    } catch(System.Exception gen_e) {
        return LuaAPI.luaL_error(L, "c# exception:" + gen_e);
    }
    
    return LuaAPI.luaL_error(L, "invalid arguments to UnityEngine.Debug.Log!");
    
}
```
il2cpp层`Debug.Log`的胶水层代码
```C++
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityEngineDebugWrap__m_Log_xlua_st__m5A48FEBD49695F8004C418002750201597C95673 (intptr_t ___0_L, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectTranslator_Assignable_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_mD42EAE2571221E10287F942F121CA17DB54BA5E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectTranslator_Assignable_TisRuntimeObject_m50860A0F85DB3FE3F10CD09F874BAC6969CDFB7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAD66CF5BB2984393E5A5594CDE2BE4E2B0068EB);
		s_Il2CppMethodInitialized = true;
	}
	ObjectTranslator_t999B7A848139A54E2F4CFBB532D791F1827DB5DD* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	int32_t V_4 = 0;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* V_7 = NULL;
	Exception_t* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B4_0 = 0;
	int32_t G_B10_0 = 0;
	Exception_t* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	intptr_t G_B15_2;
	memset((&G_B15_2), 0, sizeof(G_B15_2));
	Exception_t* G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	intptr_t G_B14_2;
	memset((&G_B14_2), 0, sizeof(G_B14_2));
	String_t* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	intptr_t G_B16_2;
	memset((&G_B16_2), 0, sizeof(G_B16_2));
	{
	}
	try
	{
		{
			ObjectTranslatorPool_tA15F000810FE19526A8276619E038CC4666A2A89* L_0;
			L_0 = ObjectTranslatorPool_get_Instance_mCF9F175316148FEE01EE57818C4F9DB70C426A7A(NULL);
			intptr_t L_1 = ___0_L;
			NullCheck(L_0);
			ObjectTranslator_t999B7A848139A54E2F4CFBB532D791F1827DB5DD* L_2;
			L_2 = ObjectTranslatorPool_Find_m4601873B242F33EC7C27BDAA02DDD0C0AEB7488D(L_0, L_1, NULL);
			V_0 = L_2;
			intptr_t L_3 = ___0_L;
			int32_t L_4;
			L_4 = Lua_lua_gettop_mF7BA9ED4828AF24D5AD2E98210161FDC47EC6B5E(L_3, NULL);
			V_1 = L_4;
			int32_t L_5 = V_1;
			if ((!(((uint32_t)L_5) == ((uint32_t)1))))
			{
				goto IL_0023_1;
			}
		}
		{
			ObjectTranslator_t999B7A848139A54E2F4CFBB532D791F1827DB5DD* L_6 = V_0;
			intptr_t L_7 = ___0_L;
			NullCheck(L_6);
			bool L_8;
			L_8 = ObjectTranslator_Assignable_TisRuntimeObject_m50860A0F85DB3FE3F10CD09F874BAC6969CDFB7F(L_6, L_7, 1, ObjectTranslator_Assignable_TisRuntimeObject_m50860A0F85DB3FE3F10CD09F874BAC6969CDFB7F_RuntimeMethod_var);
			G_B4_0 = ((int32_t)(L_8));
			goto IL_0024_1;
		}

IL_0023_1:
		{
			G_B4_0 = 0;
		}

IL_0024_1:
		{
			V_2 = (bool)G_B4_0;
			bool L_9 = V_2;
			if (!L_9)
			{
				goto IL_004b_1;
			}
		}
		{
			ObjectTranslator_t999B7A848139A54E2F4CFBB532D791F1827DB5DD* L_10 = V_0;
			intptr_t L_11 = ___0_L;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.object_class->byval_arg) };
			il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
			Type_t* L_13;
			L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
			NullCheck(L_10);
			RuntimeObject* L_14;
			L_14 = ObjectTranslator_GetObject_mBC708114DBE25469AC736DF2B60C397261D3BDBA(L_10, L_11, 1, L_13, NULL);
			V_3 = L_14;
			RuntimeObject* L_15 = V_3;
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_15, NULL);
			V_4 = 0;
			goto IL_00de;
		}

IL_004b_1:
		{
			int32_t L_16 = V_1;
			if ((!(((uint32_t)L_16) == ((uint32_t)2))))
			{
				goto IL_0063_1;
			}
		}
		{
			ObjectTranslator_t999B7A848139A54E2F4CFBB532D791F1827DB5DD* L_17 = V_0;
			intptr_t L_18 = ___0_L;
			NullCheck(L_17);
			bool L_19;
			L_19 = ObjectTranslator_Assignable_TisRuntimeObject_m50860A0F85DB3FE3F10CD09F874BAC6969CDFB7F(L_17, L_18, 1, ObjectTranslator_Assignable_TisRuntimeObject_m50860A0F85DB3FE3F10CD09F874BAC6969CDFB7F_RuntimeMethod_var);
			if (!L_19)
			{
				goto IL_0063_1;
			}
		}
		{
			ObjectTranslator_t999B7A848139A54E2F4CFBB532D791F1827DB5DD* L_20 = V_0;
			intptr_t L_21 = ___0_L;
			NullCheck(L_20);
			bool L_22;
			L_22 = ObjectTranslator_Assignable_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_mD42EAE2571221E10287F942F121CA17DB54BA5E1(L_20, L_21, 2, ObjectTranslator_Assignable_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_mD42EAE2571221E10287F942F121CA17DB54BA5E1_RuntimeMethod_var);
			G_B10_0 = ((int32_t)(L_22));
			goto IL_0064_1;
		}

IL_0063_1:
		{
			G_B10_0 = 0;
		}

IL_0064_1:
		{
			V_5 = (bool)G_B10_0;
			bool L_23 = V_5;
			if (!L_23)
			{
				goto IL_00a7_1;
			}
		}
		{
			ObjectTranslator_t999B7A848139A54E2F4CFBB532D791F1827DB5DD* L_24 = V_0;
			intptr_t L_25 = ___0_L;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (&il2cpp_defaults.object_class->byval_arg) };
			il2cpp_codegen_runtime_class_init_inline(il2cpp_defaults.systemtype_class);
			Type_t* L_27;
			L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
			NullCheck(L_24);
			RuntimeObject* L_28;
			L_28 = ObjectTranslator_GetObject_mBC708114DBE25469AC736DF2B60C397261D3BDBA(L_24, L_25, 1, L_27, NULL);
			V_6 = L_28;
			ObjectTranslator_t999B7A848139A54E2F4CFBB532D791F1827DB5DD* L_29 = V_0;
			intptr_t L_30 = ___0_L;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
			Type_t* L_32;
			L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
			NullCheck(L_29);
			RuntimeObject* L_33;
			L_33 = ObjectTranslator_GetObject_mBC708114DBE25469AC736DF2B60C397261D3BDBA(L_29, L_30, 2, L_32, NULL);
			V_7 = ((Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)CastclassClass((RuntimeObject*)L_33, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var));
			RuntimeObject* L_34 = V_6;
			Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_35 = V_7;
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(L_34, L_35, NULL);
			V_4 = 0;
			goto IL_00de;
		}

IL_00a7_1:
		{
			goto IL_00cf;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00aa;
		}
		throw e;
	}

CATCH_00aa:
	{
		{
			Exception_t* L_36 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_8 = L_36;
			intptr_t L_37 = ___0_L;
			Exception_t* L_38 = V_8;
			Exception_t* L_39 = L_38;
			if (L_39)
			{
				G_B15_0 = L_39;
				G_B15_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE137CF67AB965A81399EE07205F2BF235B31671E));
				G_B15_2 = L_37;
				goto IL_00bc;
			}
			G_B14_0 = L_39;
			G_B14_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE137CF67AB965A81399EE07205F2BF235B31671E));
			G_B14_2 = L_37;
		}
		{
			G_B16_0 = ((String_t*)(NULL));
			G_B16_1 = G_B14_1;
			G_B16_2 = G_B14_2;
			goto IL_00c1;
		}

IL_00bc:
		{
			NullCheck(G_B15_0);
			String_t* L_40;
			L_40 = VirtualFuncInvoker0< String_t* >::Invoke(3, G_B15_0);
			G_B16_0 = L_40;
			G_B16_1 = G_B15_1;
			G_B16_2 = G_B15_2;
		}

IL_00c1:
		{
			String_t* L_41;
			L_41 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B16_1, G_B16_0, NULL);
			int32_t L_42;
			L_42 = Lua_luaL_error_m09401659B5AE45C29F1D77407A6FA8367BD27F9B(G_B16_2, L_41, NULL);
			V_4 = L_42;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_00de;
		}
	}

IL_00cf:
	{
		intptr_t L_43 = ___0_L;
		int32_t L_44;
		L_44 = Lua_luaL_error_m09401659B5AE45C29F1D77407A6FA8367BD27F9B(L_43, _stringLiteralFAD66CF5BB2984393E5A5594CDE2BE4E2B0068EB, NULL);
		V_4 = L_44;
		goto IL_00de;
	}

IL_00de:
	{
		int32_t L_45 = V_4;
		return L_45;
	}
}
```
xlua完整调用链
```C++
>	GameAssembly.dll!UnityEngineDebugWrap__m_Log_xlua_st__m5A48FEBD49695F8004C418002750201597C95673(__int64 ___0_L, const MethodInfo * method) 行 30339	C++
 	GameAssembly.dll!ReversePInvokeWrapper_UnityEngineDebugWrap__m_Log_xlua_st__m5A48FEBD49695F8004C418002750201597C95673(__int64 ___0_L) 行 28651	C++
 	xlua.dll!csharp_function_wrap(lua_State * L) 行 738	C
 	xlua.dll!luaD_precall(lua_State * L, lua_TValue * func, int nresults) 行 434	C
 	xlua.dll!luaV_execute(lua_State * L) 行 1134	C
 	xlua.dll!luaD_call(lua_State * L, lua_TValue * func, int nResults) 行 500	C
 	xlua.dll!luaD_callnoyield(lua_State * L, lua_TValue * func, int nResults) 行 510	C
 	xlua.dll!f_call(lua_State * L, void * ud) 行 944	C
 	xlua.dll!luaD_rawrunprotected(lua_State * L, void(*)(lua_State *, void *) f, void * ud) 行 145	C
 	xlua.dll!luaD_pcall(lua_State * L, void(*)(lua_State *, void *) func, void * u, __int64 old_top, __int64 ef) 行 729	C
 	xlua.dll!lua_pcallk(lua_State * L, int nargs, int nresults, int errfunc, __int64 ctx, int(*)(lua_State *, int, __int64) k) 行 969	C
 	xlua.dll!lua_pcall(lua_State * L, int nargs, int nresults, int errfunc) 行 146	C
 	GameAssembly.dll!Lua_lua_pcall_m452378B221BB670FAE8A61DE8F2317FD11F3239F(__int64 ___0_L, int ___1_nArgs, int ___2_nResults, int ___3_errfunc, const MethodInfo * method) 行 20147	C++
 	GameAssembly.dll!LuaEnv_DoString_m37B48E87E58FCF9502ABE61A8CDD7FCCBF7B4D65(LuaEnv_tABEDDCECA82444D19E6CCBF3F1CDE4A6D641F9E1 * __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 * ___0_chunk, String_t * ___1_chunkName, LuaTable_t4CB073BF39B101672B35261B231FED349B752EEB * ___2_env, const MethodInfo * method) 行 16678	C++
 	GameAssembly.dll!LuaEnv_DoString_mD0573C6DED0F5F813B9AF565B1557A4AC1D837E7(LuaEnv_tABEDDCECA82444D19E6CCBF3F1CDE4A6D641F9E1 * __this, String_t * ___0_chunk, String_t * ___1_chunkName, LuaTable_t4CB073BF39B101672B35261B231FED349B752EEB * ___2_env, const MethodInfo * method) 行 16741	C++

```
puerts 通用胶水层代码
```C++
// Void KeepAlive(System.Object)
static bool w_vO(void* method, MethodPointer methodPointer, const v8::FunctionCallbackInfo<v8::Value>& info, bool checkJSArgument, WrapData* wrapData) {
    // PLog(LogLevel::Log, "Running w_vO");
    
    auto TIp0 = wrapData->TypeInfos[0];

    v8::Isolate* isolate = info.GetIsolate();
    v8::Local<v8::Context> context = isolate->GetCurrentContext();

    if (checkJSArgument) {
        auto length = info.Length();
        if (length != 1) return false;
    }
    
    // JSValToCSVal o/O
    void* p0 = JsValueToCSRef(context, info[0], TIp0);

    typedef void (*FuncToCall)(void* p0, const void* method);
    ((FuncToCall)methodPointer)( p0,  method);

    
    return true;
}
```
puerts il2cpp完整调用链
```C++
 	GameAssembly.dll!Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(Il2CppObject * ___0_message, const MethodInfo * method) 行 12219	C++
>	puerts_il2cpp.dll!puerts::w_vO(void * method, void(*)() methodPointer, const v8::FunctionCallbackInfo<v8::Value> & info, bool checkJSArgument, puerts::WrapData * wrapData) 行 192599	C++
 	GameAssembly.dll!puerts::MethodCallback(pesapi_callback_info__ * info) 行 240	C++
 	puerts_il2cpp.dll!v8::internal::FunctionCallbackArguments::Call(class v8::internal::CallHandlerInfo)	C++
 	puerts_il2cpp.dll!v8::internal::CustomArguments<class v8::FunctionCallbackInfo<class v8::Value> >::GetReturnValue<class v8::internal::Object>(class v8::internal::Isolate *)	C++
 	puerts_il2cpp.dll!v8::internal::Builtin_HandleApiCallAsFunction(int,unsigned __int64 *,class v8::internal::Isolate *)	C++
 	puerts_il2cpp.dll!v8::internal::Builtin_HandleApiCall(int,unsigned __int64 *,class v8::internal::Isolate *)	C++
 	puerts_il2cpp.dll!Builtins_CEntry_Return1_DontSaveFPRegs_ArgvOnStack_BuiltinExit()	未知
 	puerts_il2cpp.dll!Builtins_InterpreterEntryTrampoline()	未知
 	puerts_il2cpp.dll!Builtins_InterpreterEntryTrampoline()	未知
 	puerts_il2cpp.dll!Builtins_JSEntryTrampoline()	未知
 	puerts_il2cpp.dll!Builtins_JSEntry()	未知
 	puerts_il2cpp.dll!v8::internal::Execution::CallWasm(class v8::internal::Isolate *,class v8::internal::Handle<class v8::internal::Code>,unsigned __int64,class v8::internal::Handle<class v8::internal::Object>,unsigned __int64)	C++
 	puerts_il2cpp.dll!v8::internal::Execution::Call(class v8::internal::Isolate *,class v8::internal::Handle<class v8::internal::Object>,class v8::internal::Handle<class v8::internal::Object>,int,class v8::internal::Handle<class v8::internal::Object> * const)	C++
 	puerts_il2cpp.dll!v8::Script::Run(class v8::Local<class v8::Context>)	C++
 	puerts_il2cpp.dll!pesapi_eval(pesapi_env__ * env, const unsigned char * code, unsigned __int64 code_size, const char * path) 行 683	C++
 	GameAssembly.dll!pesapi_eval(pesapi_env__ * env, const unsigned char * code, unsigned __int64 code_size, const char * path) 行 443	C
 	GameAssembly.dll!puerts::EvalInternal(__int64 ptr, Il2CppArray * __code, Il2CppString * __path, Il2CppReflectionType * __type) 行 1686	C++
 	GameAssembly.dll!NativeAPI_EvalInternal_mB5B55C73FD9945FD69FB4CE2641A00A95DEED4E3(__int64 ___0_envHolder, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031 * ___1_code, String_t * ___2_path, Type_t * ___3_type, const MethodInfo * method) 行 4876	C++
 	GameAssembly.dll!JsEnv_Eval_m2E967C65E425E54673FD7BFC1D747742D6FB9CE0(JsEnv_t375C30C17DF23F7D74F2817D12B8F2A4DAB3FD66 * __this, String_t * ___0_chunk, String_t * ___1_chunkName, const MethodInfo * method) 行 10856	C++
 	GameAssembly.dll!HelloWorlder_Update_m30CCEAC447BE29F826407570000CEF726FF9ABB6(HelloWorlder_t9E9B51B8730439FEA19BA448497B15B4EEE6220E * __this, const MethodInfo * method) 行 1395	C++

```
puerts由于il2cpp代码是自己生成的，没有复杂的类型检查、判空检查，类型初始化等逻辑，某些通用方法可以也可以减少代码段。
