function csTypeToClass(csType)
    local cls = xlua.loadType(csType)

    if cls then
        local nestedTypes = xlua.getNestedTypes(csType)
        if nestedTypes then
            for i = 1, nestedTypes.Length do
                local ntype = nestedTypes:get_Item(i - 1)
                if ntype.IsGenericType then
                else
                    rawset(cls, ntype.Name, csTypeToClass(ntype))
                end
            end
        end
    end
    return cls
end

function xlua.ref(x)
    return { x }
end

function xlua.unref(r)
    return r[1]
end

function makeGeneric(genericTypeInfo, ...)

end

function createTypeProxy(namespace)
    local metatable = {
        __index = function(tbl, name)
            if name == '__p_innerType' then
                return
            end
            local fullName = namespace and (namespace .. '.' .. name) or name
            local cls = csTypeToClass(fullName)
            if cls then
                rawset(cls, '.fqn', fullName)
                tbl[name] = cls
            else
                tbl[name] = createTypeProxy(fullName)
            end
            return tbl[name]
        end,
        __call = function(tbl, ...)
            local n = select('#', ...)
            local fqn = rawget(tbl, '.fqn')
            if n > 0 then
                local name = string.format('%s`%d[', fqn, n)
                local args = { ... }
                for i = 1, n - 1 do
                    local f = rawget(args[i], '.fqn')
                    name = name .. f .. ','
                end
                local f = rawget(args[n], '.fqn')
                name = name .. f .. ']'
                local ret = rawget(tbl, name)
                if not ret then
                    ret = csTypeToClass(name)
                    rawset(tbl, name, ret)
                end
                return ret
            end
        end
    }
    local ret = { ['.fqn'] = namespace }
    setmetatable(ret, metatable)
    return ret
end

local csharpModule = createTypeProxy()
_G.CS = csharpModule
