--package.cpath = package.cpath .. ';C:/Users/zentiali/AppData/Roaming/JetBrains/Rider2024.1/plugins/EmmyLua/debugger/emmy/windows/x64/?.dll'
--local dbg = require('emmy_core')
--dbg.tcpConnect('localhost', 9966)

require('tte')

local function compare(a, b)
    return a.name < b.name
end

function getAssemblyInfo(genTypes)
    if not genTypes then
        return {}
    end
    local assemblyInfo = {}
    for i = 1, genTypes.Count do
        local type = genTypes[i - 1]
        local assemblyName = type.Assembly:GetName(false).Name
        if not assemblyInfo[assemblyName] then
            assemblyInfo[assemblyName] = {}
        end
        if assemblyName == "mscorlib" then
            local a = 0
        end
        local types = assemblyInfo[assemblyName]
        if type.IsGenericType then
            local input = type.FullName

            local genericType = string.match(input, "^(.-`%d+)")
            -- 提取两个类型
            local ltypes = {}
            for type in string.gmatch(input, "%[(.-)%]") do
                -- 分割类型和其他信息
                local typeName = string.match(type, "([^,]+)")
                if typeName then
                    while string.startsWith(typeName, '[') do
                        typeName = string.sub(typeName, 2)
                    end
                    local result = string.gsub(typeName, '+', '/')
                    table.insert(ltypes, result)
                end
            end

            local a = genericType
            if #ltypes > 0 then
                a = a .. "&lt;" .. ltypes[1]
            end
            for i = 2, #ltypes do
                a = a .. "," .. ltypes[i]
            end
            a = a .. "&gt;"
            table.insert(types, a)
        elseif type.IsNested then
            local result = string.gsub(type.FullName, '+', '/')
            table.insert(types, result)
        else
            table.insert(types, type.FullName)
        end
    end
    local ret = {}
    for i, v in pairs(assemblyInfo) do
        table.insert(ret, { name = i, types = v })
    end
    table.sort(ret, compare)
    return ret
end

function LinkXMLTemplate(genTypes)
    return string.format([[
<linker>
%s
</linker>]], FOR(getAssemblyInfo(genTypes), function(assemblyInfo)
        return string.format([[
    <assembly fullname="%s">
%s
    </assembly>
    ]], assemblyInfo.name, FOR(assemblyInfo.types, function(type)
            return string.format([[
        <type fullname="%s" preserve="all"/>
]], type)
        end))
    end))
end
