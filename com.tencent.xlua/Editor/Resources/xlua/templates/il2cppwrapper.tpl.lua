require("tte")
require("il2cpp_snippets")

function Gen(genInfos)
    local wrapperInfos = listToLuaArray(genInfos.WrapperInfos)
    print(string.format('wrappers:%d', #wrapperInfos))
    return TaggedTemplateEngine([[// Auto Gen

#include <memory>
#include "il2cpp-api.h"
#include "il2cpp-class-internals.h"
#include "il2cpp-object-internals.h"
#include "pesapi.h"
#include "TDataTrans.h"

namespace xlua
{
]],
        table.join(
            table.map(wrapperInfos,
                function(wrapperInfo)
                    return string.format(
                        'bool w_%s(struct pesapi_ffi* apis, MethodInfo* method, Il2CppMethodPointer methodPointer, pesapi_callback_info info, pesapi_env env, void* self, bool checkLuaArgument, WrapData* wrapData);',
                        wrapperInfo.Signature)
                end), '\n'), [[


static WrapFuncInfo g_wrapFuncInfos[] = {
]], FOR(wrapperInfos, function(info)
            return TaggedTemplateEngine([[
    {"]], info.Signature, '", w_', info.Signature, [[},
    ]])
        end), [[
    {nullptr, nullptr}
};

WrapFuncPtr FindWrapFunc(const char* signature)
{
    auto begin = &g_wrapFuncInfos[0];
    auto end = &g_wrapFuncInfos[sizeof(g_wrapFuncInfos) / sizeof(WrapFuncInfo) - 1];
    auto first = std::lower_bound(begin, end, signature, [](const WrapFuncInfo& x, const char* signature) {return strcmp(x.Signature, signature) < 0;});
    if (first != end && strcmp(first->Signature, signature) == 0) {
        return first->Method;
    }
    return nullptr;
}

}

]])
end
