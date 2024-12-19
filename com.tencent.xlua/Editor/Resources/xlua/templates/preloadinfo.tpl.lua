require('tte')

function PreLoadInfoTemplate(TypeRegisterInfo)
    local typeRegisterInfo = listToLuaArray(TypeRegisterInfo)
    local arg = FOR(typeRegisterInfo, function(item)
        local t = CS.XLua.TypeExtensions.GetLuaFriendlyName(item.Type)
        if t == '' then
            return t
        end
        return string.format('\nt = %s', t)
    end)
    return string.format([[
local t    
%s  
]], arg)
end