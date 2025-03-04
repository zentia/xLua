--package.cpath = package.cpath .. ';C:/Users/Administrator/AppData/Roaming/JetBrains/Rider2024.2/plugins/EmmyLua/debugger/emmy/windows/x64/?.dll'
--local dbg = require('emmy_core')
--dbg.tcpConnect('localhost', 9966)

require("tte")

function unityenv_for_xlua(definesList) 
    local defines = listToLuaArray(definesList)
    return table.join(table.map(defines, function(d)
        return string.format([[#ifndef %s
    #define %s
#endif]], d, d)
    end), '\n')
end