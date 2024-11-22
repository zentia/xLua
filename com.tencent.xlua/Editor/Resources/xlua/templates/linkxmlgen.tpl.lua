--package.cpath = package.cpath .. ';C:/Users/Administrator/AppData/Roaming/JetBrains/Rider2024.2/plugins/EmmyLua/debugger/emmy/windows/x64/?.dll'
--local dbg = require('emmy_core')
--dbg.tcpConnect('localhost', 9966)

require('tte')

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
        local types = assemblyInfo[assemblyName]
        if type.IsGenericType then
            table.insert(types, string.split(type.FullName, '[')[1])
        elseif type.IsNested then
            local result = string.gsub(type.FullName, '+', '/')
            table.insert(types, result)
        else
            table.insert(types, type.FullName)
        end
    end
    local ret = {}
    for i, v in pairs(assemblyInfo) do
        table.insert(ret, {name = i, types = v})
    end
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