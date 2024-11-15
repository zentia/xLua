--package.cpath = package.cpath .. ';C:/Users/Administrator/AppData/Roaming/JetBrains/Rider2024.2/plugins/EmmyLua/debugger/emmy/windows/x64/?.dll'
--local dbg = require('emmy_core')
--dbg.tcpConnect('localhost', 9966)

require('tte')

function RegisterInfoTemplate(TypeRegisterInfo)
    local typeRegisterInfos = listToLuaArray(TypeRegisterInfo)
    local arg1 = FOR(typeRegisterInfos, function(item)
        local a2 = FOR(listToLuaArray(item.Members), function(member)
            local aa1 = ''
            if member.IsStatic then
                aa1 = '_static'
            end
            return string.format([[
            {"%s%s", new MemberRegisterInfo { Name = "%s", IsStatic = %s, MemberType= MemberType.%s, UseBindingMode = BindingMode.%s
            }},
            ]], member.Name, aa1, member.Name, tostring(member.IsStatic), member.MemberType, member.UseBindingMode)
        end)
        return string.format([[
        public static RegisterInfo GetRegisterInfo_%s()
        {
            return new RegisterInfo
            {
                Members = new System.Collections.Generic.Dictionary<string, MemberRegisterInfo>
                {
                    %s
                }
            };
         }
         ]], item.WrapperName, a2)
    end)
    local arg2 = FOR(typeRegisterInfos, function(item)
        local ret = string.format([[
            luaEnv.AddRegisterInfoGetter(typeof(%s), GetRegisterInfo_%s);
                ]], CS.XLua.TypeExtensions.GetFriendlyName(item.Type),
            item.WrapperName)
        return ret
    end)
    return string.format([[
#if ENABLE_IL2CPP && XLUA_IL2CPP
using XLua.TypeMapping;
using XLua;

namespace XLuaStaticWrap
{
    [UnityEngine.Scripting.Preserve]
    public static class XLuaRegisterInfo_Gen
    {
%s

        public static void AddRegisterInfoGetterIntoLuaEnv(LuaEnv luaEnv)
        {
%s
        }
    }
}
#endif
]], arg1, arg2)
end

function referWrapperMember(wrapperName, constructorName, methodName, propertyGetterName, propertySetterName)
    local ret = ''
    if constructorName then
        ret = ', ' .. string.format('Constructor = %s.%s', wrapperName, constructorName)
    end
    if methodName then
        ret = ret .. ', '
        string.format('Method = %s.%s', wrapperName, methodName)
    end
    if propertyGetterName then
        ret = ret .. ', '
        string.format('PropertyGetter = %s.%s', wrapperName, propertyGetterName)
    end
    if propertySetterName then
        ret = ret .. ', '
        string.format('PropertySetter = %s.%s', wrapperName, propertySetterName)
    end
    return ret
end
