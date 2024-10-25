require("tte")

function unityenv_for_xlua(newerthan2021, shared) 
    return TaggedTemplateEngine({ 1,[[
]] }, { 1,[[
#ifndef UNITY_2021_1_OR_NEWER
    #define UNITY_2021_1_OR_NEWER
#endif
]] }, { 1,[[

]] }, { 1,[[
#ifndef XLUA_SHARED
    #define XLUA_SHARED
#endif
]] }, { 1,'' }, { 2,IF(newerthan2021) }, { 2,ENDIF() }, { 2,IF(shared) }, { 2,ENDIF() })
end