 --package.cpath = package.cpath .. ';C:/Users/Administrator/AppData/Roaming/JetBrains/Rider2024.2/plugins/EmmyLua/debugger/emmy/windows/x64/?.dll'
 --local dbg = require('emmy_core')
 --dbg.tcpConnect('localhost', 9966)

require("tte")
require("il2cpp_snippets")

function genGetField(fieldWrapperInfo)
    local signature = fieldWrapperInfo.ReturnSignature
    if isStructOrNullableStruct(signature) then
        if needThis(fieldWrapperInfo) then
            return [[
            
    auto ret = (char*)self + offset;
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));]]
        else
            return [[
    
    auto ret = GetValueTypeFieldPtr(nullptr, fieldInfo, offset);
    apis->add_return(info, apis->native_object_to_value(env, TIret, ret, false));]]
        end
    else
        return string.format([[
    
    %s ret;
    GetFieldValue(%s, fieldInfo, offset, &ret);

    %s]], SToCPPType(fieldWrapperInfo.ReturnSignature), needThis(fieldWrapperInfo) and 'self' or 'nullptr',
            returnToLua(fieldWrapperInfo.ReturnSignature))
    end
end

function genFieldWrapper(fieldWrapperInfo)
    return TaggedTemplateEngine(
            [[
static void ifg_]], fieldWrapperInfo.Signature, [[(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIret) {
    // PLog("Running ifg_]], fieldWrapperInfo.Signature, [[");
    pesapi_env env = apis->get_env(info);]], 
            IF(needThis(fieldWrapperInfo)), [[

    ]], getThis(fieldWrapperInfo.ThisSignature), [[

    ]], ENDIF(), [[
]], genGetField(fieldWrapperInfo), [[
    
}

static void ifs_]], fieldWrapperInfo.Signature, [[(struct pesapi_ffi* apis, pesapi_callback_info info, FieldInfo* fieldInfo, size_t offset, Il2CppClass* TIp) {
    // PLog("Running ifs_]], fieldWrapperInfo.Signature, [[");
    pesapi_env env = apis->get_env(info);]], 
            IF(needThis(fieldWrapperInfo)), [[

    ]], getThis(fieldWrapperInfo.ThisSignature), [[

    ]], ENDIF(), '', 
            LuaValToCSVal(fieldWrapperInfo.ReturnSignature, "apis->get_arg(info, 0)", "p"), [[
            
    SetFieldValue(]], needThis(fieldWrapperInfo) and 'self, ' or 'nullptr, ', 'fieldInfo, offset, ',
        table.indexOf({ 'o', 's', 'p', 'a' }, fieldWrapperInfo.Signature) ~= -1 and 'p' or '&p',[[);
}
]])
end

function Gen(genInfos)
    local fieldWrapperInfos = listToLuaArray(genInfos.FieldWrapperInfos)
    print(string.format('fieldWrapper:%d', #fieldWrapperInfos))
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
#include "XluaValueType.h"

namespace xlua
{
]], table.join(table.map(fieldWrapperInfos, genFieldWrapper), '\n'), [[

static FieldWrapFuncInfo g_fieldWrapFuncInfos[] = {
]], FOR(fieldWrapperInfos, function(info)
        return TaggedTemplateEngine([[
    {"]], info.Signature, '", ifg_', info.Signature, ', ifs_', info.Signature, [[},
    ]])
    end), [[
    {nullptr, nullptr, nullptr}
};

FieldWrapFuncInfo * FindFieldWrapFuncInfo(const char* signature)
{
    auto begin = &g_fieldWrapFuncInfos[0];
    auto end = &g_fieldWrapFuncInfos[sizeof(g_fieldWrapFuncInfos) / sizeof(FieldWrapFuncInfo) - 1];
    auto first = std::lower_bound(begin, end, signature, [](const FieldWrapFuncInfo& x, const char* signature) {return strcmp(x.Signature, signature) < 0;});
    if (first != end && strcmp(first->Signature, signature) == 0) {
        return first;
    }
    return nullptr;
}

}
]])
end
