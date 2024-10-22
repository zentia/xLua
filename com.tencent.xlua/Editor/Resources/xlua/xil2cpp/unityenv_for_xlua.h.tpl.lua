require("tte")

function unityenv_for_xlua(newerthan2021, shared) 
    return TaggedTemplateEngine({[[
]],[[
#ifndef UNITY_2021_1_OR_NEWER
    #define UNITY_2021_1_OR_NEWER
#endif
]],[[

]],[[
#ifndef XLUA_SHARED
    #define XLUA_SHARED
#endif
]],''},IF(newerthan2021), ENDIF(), IF(shared), ENDIF())
end