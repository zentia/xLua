local metatable = {}
local import_type = xlua.import_type
local import_generic_type = xlua.import_generic_type

function metatable:__index(key)
    local fqn = rawget(self, '.fqn')
    fqn = ((fqn and fqn .. '.') or '') .. key

    local obj = import_type(fqn)

    if obj == nil then
        -- It might be an assembly, so we load it too.
        obj = { ['.fqn'] = fqn }
        setmetatable(obj, metatable)
    elseif obj == true then
        return rawget(self, key)
    end

    -- Cache this lookup
    rawset(self, key, obj)
    return obj
end

function metatable:__newindex()
    error('No such type: ' .. rawget(self, '.fqn'), 2)
end

-- A non-type has been called; e.g. foo = System.Foo()
function metatable:__call(...)
    local n = select('#', ...)
    local fqn = rawget(self, '.fqn')
    if n > 0 then
        local gt = import_generic_type(fqn, ...)
        if gt then
            return rawget(CS, gt)
        end
    end
    error('No such type: ' .. fqn, 2)
end

CS = CS or {}
setmetatable(CS, metatable)

typeof = function(t) return t.UnderlyingSystemType end
cast = xlua.cast


xlua.getmetatable = function(cs)
    return xlua.metatable_operation(cs)
end
xlua.setmetatable = function(cs, mt)
    return xlua.metatable_operation(cs, mt)
end
xlua.setclass = function(parent, name, impl)
    impl.UnderlyingSystemType = parent[name].UnderlyingSystemType
    rawset(parent, name, impl)
end

local base_mt = {
    __index = function(t, k)
        local csobj = t['__csobj']
        local func = csobj['<>xLuaBaseProxy_' .. k]
        return function(_, ...)
            return func(csobj, ...)
        end
    end
}
base = function(csobj)
    return setmetatable({ __csobj = csobj }, base_mt)
end

local __print = print

function print_func_ref_by_csharp(errorArray)
    local registry = debug.getregistry()
    for k, v in pairs(registry) do
        if type(k) == 'number' and type(v) == 'function' and registry[v] == k then
            if function_tostring then
                errorArray[#errorArray + 1] = function_tostring(v)
            else
                local info = debug.getinfo(v)
                errorArray[#errorArray + 1] = string.format('%s:%d', info.short_src, info.linedefined)
            end
        end
    end
end
