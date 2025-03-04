if not setfenv or not getfenv then
    local function getfunction(level)
        local info = debug.getinfo(level + 1, 'f')
        return info and info.func
    end

    function setfenv(fn, env)
        if type(fn) == 'number' then fn = getfunction(fn + 1) end
        local i = 1
        while true do
            local name = debug.getupvalue(fn, i)
            if name == '_ENV' then
                debug.upvaluejoin(fn, i, (function()
                    return env
                end), 1)
                break
            elseif not name then
                break
            end

            i = i + 1
        end

        return fn
    end

    function getfenv(fn)
        if type(fn) == 'number' then fn = getfunction(fn + 1) end
        local i = 1
        while true do
            local name, val = debug.getupvalue(fn, i)
            if name == '_ENV' then
                return val
            elseif not name then
                break
            end
            i = i + 1
        end
    end
end
