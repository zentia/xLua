require "tte"
require("il2cpp_snippets")

function genBridgeArgs(parameterSignatures)
    if #parameterSignatures > 0 then
        if parameterSignatures[#parameterSignatures]:sub(1, 1) ~= 'V' then
            return table.join(table.map(parameterSignatures, function(ps, i)
                return string.format('%s;',
                    CSValToLuaVal(ps:sub(1, 1) == 'D' and string.sub(ps, 2) or ps, string.format('p%d', i - 1)) or
                    'apis->create_undefined(env)')
            end), '\n\t')
        else
            local si = string.sub(parameterSignatures[#parameterSignatures], 2)
            local unpackMethod = 'Params<Il2CppObject>::UnPackRefOrBoxedValueType'
            if PrimitiveSignatureCppTypeMap[si] then
                unpackMethod = string.format('Param<%s>::UnPackPrimitive', PrimitiveSignatureCppTypeMap[si])
            elseif isStructOrNullableStruct(si) then
                unpackMethod = string.format('Params<%s>::UnPackValueType', si)
            end
            return string.format([[auto arrayLength = il2cpp::vm::Array::GetLength(p%d);
    %s
    %s(apis, env, p%d, arrayLength, TIp%d);
            ]],
                #parameterSignatures - 1,
                table.join(table.map(table.slice(parameterSignatures, 1, -1), function(ps, i)
                    return string.format("%s;",
                        CSValToLuaVal(ps, string.format('p%d', i - 1)) or 'apis->create_undefined(env)')
                end), '\n\t'),
                unpackMethod,
                #parameterSignatures - 1,
                #parameterSignatures - 1,
                #parameterSignatures - 1)
        end
    else
        return 'pesapi_value *argv = nullptr;'
    end
end

function genBridge(bridgeInfo)
    local parameterSignatures = listToLuaArray(bridgeInfo.ParameterSignatures)
    local hasVarArgs = #parameterSignatures > 0 and parameterSignatures[#parameterSignatures]:sub(1, 1) == 'V'
    return TaggedTemplateEngine([[
// ]], bridgeInfo.CsName, [[

static ]], SToCPPType(bridgeInfo.ReturnSignature), ' b_', bridgeInfo.Signature, '(void* target, ',
        table.join(
            table.map(
                table.map(parameterSignatures, function(S, i) return string.format('%s p%d', SToCPPType(S), i - 1) end),
                function(s) return string.format('%s, ', s) end), ''), [[MethodInfo* method) {
    // PLog("Running b_]], bridgeInfo.Signature, [[");
    ]],
        IF(bridgeInfo.ReturnSignature and
            not PrimitiveSignatureCppTypeMap[getSignatureWithoutRefAndPrefix(bridgeInfo.ReturnSignature)]), [[

    auto TIret = GetReturnType(method);
    ]], ENDIF(), '',
        FOR(parameterSignatures, function(ps, index)
            return TaggedTemplateEngine([[
        ]], IF(not PrimitiveSignatureCppTypeMap[getSignatureWithoutRefAndPrefix(ps)]), [[

    auto TIp]], index - 1, ' = GetParameterType(method, ', index - 1, [[);
        ]], ENDIF(), [[
    ]])
        end), [[

    PObjectRefInfo* delegateInfo = GetPObjectRefInfo(target);
    struct pesapi_ffi* apis = delegateInfo->Apis;

    pesapi_env env = apis->get_ref_associated_env(delegateInfo->ValueRef);
    if (!env)
    {
        il2cpp::vm::Exception::Raise(xlua::GetLuaException("LuaEnv had been destroy"));
]], IF(bridgeInfo.ReturnSignature ~= 'v'), [[
        return {};
]], ENDIF(), [[
    }
    AutoValueScope valueScope(apis, env);
    auto err_func = apis->prepare_function(env);
    auto func = apis->get_value_from_ref(env, delegateInfo->ValueRef);
    ]], genBridgeArgs(parameterSignatures), [[

    auto luaret = apis->call_function(env, err_func, ]], #parameterSignatures, '',
        hasVarArgs and ' + arrayLength - 1' or '', [[);

    if (apis->has_caught(env))
    {
        auto msg = apis->get_exception_as_string(env, true);
        il2cpp::vm::Exception::Raise(xlua::GetLuaException(msg));
]], IF(bridgeInfo.ReturnSignature == 'v'), [[
    }
]], ELSE(), [[
        return {};
    }
]], returnToCS(bridgeInfo.ReturnSignature), [[
    ]], ENDIF(), [[

}]]
    )
end

function Gen(genInfos)
    local bridgeInfos = listToLuaArray(genInfos.BridgeInfos)
    print(string.format('bridge:%d', #bridgeInfos))

    return TaggedTemplateEngine([[// Auto Gen

#include "il2cpp-api.h"
#include "il2cpp-class-internals.h"
#include "il2cpp-object-internals.h"
#include "vm/Array.h"
#include "pesapi.h"
#include "TDataTrans.h"
#include "LuaValueType.h"
#include "vm/Exception.h"

namespace xlua
{
]], table.join(table.map(bridgeInfos, genBridge), '\n'), [[

static BridgeFuncInfo g_bridgeFuncInfos[] = {
    ]], FOR(bridgeInfos, function(info)
        return TaggedTemplateEngine([[
    {"]], info.Signature, '", (Il2CppMethodPointer)b_', info.Signature, [[},
    ]])
    end), [[
    {nullptr, nullptr}
};

Il2CppMethodPointer FindBridgeFunc(const char* signature)
{
    auto begin = &g_bridgeFuncInfos[0];
    auto end = &g_bridgeFuncInfos[sizeof(g_bridgeFuncInfos) / sizeof(BridgeFuncInfo) - 1];
    auto first = std::lower_bound(begin, end, signature, [](const BridgeFuncInfo& x, const char* signature) {return strcmp(x.Signature, signature) < 0;});
    if (first != end && strcmp(first->Signature, signature) == 0) {
        return first->Method;
    }
    return nullptr;
}

}

]]
    )
end
