require('tte')

function RegisterInfoTemplate(TypeRegisterInfo)
    local typeRegisterInfos = listToLuaArray(TypeRegisterInfo)
    local arg1 = FOR(typeRegisterInfos, function(item)
        local a1 = item.BlittableCopy
        local a2 = FOR(listToLuaArray(item.Members), function(member)
            local aa1 = ''
            if member.IsStatic then
                aa1 = '_static'
            end
            local aa2 = ''
            if member.UseBindingMode == 'FastBinding' then
                aa2 = referWrapperMember(item.WrapperName, member.Constructor, member.Method, member.PropertyGetter,
                    member.PropertySetter)
            end
            return string.format([[
            {"%s%s, new MemberRegisterInfo { Name = "%s", IsStatic = %s, MemberType= MemberType.%s, UseBindingMode = BindingMode.%s
#if !EXPERMENTAL_IL2CPP_XLUA
            %s
#endif
            }},
            ]], aa1, member.name, tostring(member.IsStatic), member.MemberType, member.UseBindingMode, aa2)
        end)
        return string.format([[
        public static RegisterInfo GetRegisterInfo_%s()
        {
            return new RegisterInfo
            {
#if !EXPERIMENTAL_IL2CPP_XLUA
                BlittableCopy = %s,
#endif

                Members = new System.Collections.Generic.Dictionary<string, MemberRegisterInfo>
                {
                    %s
                }
            };
         }
            ]], a1, a2)
    end)
    local arg2 = FOR(typeRegisterInfos, function(item)
        local ret = string.format([[
                luaEnv.AddRegisterInfoGetter(typeof(%s), GetRegisterInfo_%s);]], CS.XLua.TypeExtensions.GetFriendlyName(),
            item.WrapperName)
        if item.BlittableCopy then
            local a1 = ''
            if item.BlittableCopy then
                a1 = item.WrapperName .. '.InitBlittableCopy(luaEnv);'
            end
            ret = ret + string.format([[
#if !EXPERIMENTAL_IL2CPP_XLUA
        %s
#endif        ]], a1)
        end
        return ret
    end)
    return string.format([[
using XLua.TypeMapping;
using XLua;

namespace XLuaStaticWrap
{
#if !XLUA_GENERAL
    [UnityEngine.Scripting.Preserve]
#endif
    public static class XLuaRegisterInfo_Gen
    {
        %s

        public static void AddRegisterInfoGetterIntoLuaEnv(LuaEnv luaEnv)
        {
            %s
        }
    }
}]], arg1, arg2)
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
