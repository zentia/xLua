require('tte')

function PreLoadInfoTemplate(normalTypes)
    local normal = listToLuaArray(normalTypes)
    local arg1 = FOR(normal, function(item)
        local t = CS.XLua.TypeExtensions.GetLuaFriendlyName(item, nil, false)
        if t == '' then
            return t
        end
        return string.format('\nt = %s', t)
    end)
    --local eval = listToLuaArray(evalTypes)
    --local arg2 = FOR(eval, function(item)
    --    local t = CS.XLua.TypeExtensions.GetLuaFriendlyName(item, nil, false)
    --    if t == '' then
    --        return t
    --    end
    --    return string.format('\n    t = %s', t)
    --end)
    return string.format([[
local t    
%s
]], arg1)
end