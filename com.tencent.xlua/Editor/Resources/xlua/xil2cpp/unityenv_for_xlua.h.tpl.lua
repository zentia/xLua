require("../templates/tte")

function unityenv_for_puerts(newerthan2021, shared) {
    return $`
${IF(newerthan2021)}
#ifndef UNITY_2021_1_OR_NEWER
    #define UNITY_2021_1_OR_NEWER
#endif
${ENDIF()}

${IF(shared)}
#ifndef XLUA_SHARED
    #define XLUA_SHARED
#endif
${ENDIF()}
    `
}