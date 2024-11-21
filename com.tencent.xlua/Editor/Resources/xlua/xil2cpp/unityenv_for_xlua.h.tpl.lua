--package.cpath = package.cpath .. ';C:/Users/Administrator/AppData/Roaming/JetBrains/Rider2024.2/plugins/EmmyLua/debugger/emmy/windows/x64/?.dll'
--local dbg = require('emmy_core')
--dbg.tcpConnect('localhost', 9966)

require("tte")

function unityenv_for_xlua(newerthan2021, shared) 
    return TaggedTemplateEngine('', IF(newerthan2021), [[
#ifndef UNITY_2021_1_OR_NEWER
    #define UNITY_2021_1_OR_NEWER
#endif
]], ENDIF(), [[

]], IF(shared), [[
#ifndef XLUA_SHARED
    #define XLUA_SHARED
#endif
]], ENDIF(), '')
end