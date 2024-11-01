require("tte")
require("il2cpp_snippets")

function genFuncWrapper(wrapperInfo)
    local parameterSignatures = listToLuaArray(wrapperInfo.ParameterSignatures)
    
    return TaggedTemplateEngine([[
// ]], wrapperInfo.CsName, [[
bool w_]], wrapperInfo.Signature, [[(MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData) {
    // PLog("Running w_]], wrapperInfo.Signature, [[");
    
    ]], declareTypeInfo(wrapperInfo), [[
    
    int lua_args_len = pesapi_get_args_len(info);
    
]], table.join(table.map(parameterSignatures, function(x, i) return string.format('    pesapi_value_sv%d = pesapi_get_arg(info, %d);', i, i) end), '\n'), [[

    if (]], #table.filter(parameterSignatures, function(s) return s[1] == 'D' end) > 0 and 'true' or 'checkLuaArgument', [[) {
        if (]], genArgsLenCheck(parameterSignatures), [[) return false;
        ]], FOR(parameterSignatures, function(x, i) return TaggedTemplateEngine([[
        ]], checkLuaArg(x, i), [[
        ]]) end), [[
    }
]], table.join(table.map(parameterSignatures, function(x, i) return LuaValToCSVal(x, string.format('_sv%d', i), string.format('p%d', i)) end), '\n'), [[

    typedef ]], SToCPPType(wrapperInfo.ReturnSignature), ' (*FuncToCall)(', needThis(wrapperInfo) and 'void*,' or '', '', table.join(table.map(table.map(parameterSignatures, function(S, i) return string.format('%s p%d', SToCPPType(S), i)  end), function(s) return string.format('%s, ', s) end), ''), [[const void* method);
    ]], IF(wrapperInfo.ReturnSignature ~= 'V'), '', SToCPPType(wrapperInfo.ReturnSignature), ' ret = ', ENDIF(), '((FuncToCall)methodPointer)(', needThis(wrapperInfo) and 'self,' or '', ' ', table.join(table.map(parameterSignatures, function(_, i) return string.format('p%d, ',i)  end),''), [[ method);
    
    ]], FOR(parameterSignatures, function(x, i) return TaggedTemplateEngine([[
    ]], refSetback(x, i, wrapperInfo), [[
    ]]) end), [[
    
    ]], IF(wrapperInfo.ReturnSignature ~= 'v'), [[
    ]], returnToLua(wrapperInfo.ReturnSignature), [[
    ]], ENDIF(), [[
    return true;
}]])
end

function Gen(genInfos) 
    local wrapperInfos = listToLuaArray(genInfos.WrapperInfos)
    return TaggedTemplateEngine([[// Auto Gen
    
#include "il2cpp-api.h"
#include "il2cpp-class-internals.h"
#include "il2cpp-object-internals.h"
#include "vm/InternalCalls.h"
#include "vm/Object.h"
#include "vm/Array.h"
#include "vm/Runtime.h"
#include "vm/Reflection.h"
#include "vm/MetadataCache.h"
#include "vm/Field.h"
#include "vm/GenericClass.h"
#include "vm/Thread.h"
#include "vm/Method.h"
#include "vm/Parameter.h"
#include "vm/Image.h"
#include "utils/StringUtils.h"
#include "gc/WriteBarrier.h"
#include "pesapi.h"
#include "TDataTrans.h"
#include "XLuaValueType.h"

namespace xlua
{

]], table.join(table.map(wrapperInfos,  genFuncWrapper), '\n'), [[

}

]])
end