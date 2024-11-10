local UnityEngine_Debug = xlua.loadType('UnityEngine.Debug')
function print(...)
    local args = { ... }
    local s = ''
    for index, value in ipairs(args) do
        s = s .. tostring(value) .. '\t'
    end
    UnityEngine_Debug.Log(string.format("LUA: %s", s))
end
