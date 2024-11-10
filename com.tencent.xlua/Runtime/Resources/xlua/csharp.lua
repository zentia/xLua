function csTypeToClass(csType)
    local cls = xlua.loadType(csType)

    if cls then
        local readonlyStaticMembers = cls.__xluaMetadata:get('readonlyStaticMembers')
        if readonlyStaticMembers then

        end

        local nestedTypes = xlua.getNestedTypes(csType)
        if nestedTypes then
            for i = 1, nestedTypes.Length do
                local ntype = nestedTypes:get_Item(i)
                if ntype.IsGenericType then
                else
                    cls[ntype.Name] = csTypeToClass(ntype)
                end
            end
        end
    end
end

function xlua.ref(x)
    return { x }
end

function xlua.unref(r)
    return r[1]
end

function createTypeProxy(namespace)
    local metatable = {
        __index = function(tbl, name)
            local fullName = namespace and (namespace .. '.' .. name) or name
            local cls = csTypeToClass(fullName)
            if cls then
                tbl[name] = cls
            else
                tbl[name] = createTypeProxy(fullName)
            end
            return cache[name]
        end
    }
    local ret = {}
    setmetatable(ret, metatable)
    return ret
end

local csharpModule = createTypeProxy()
_G.CS = csharpModule
