local pwd = (...):match("(.-)[^%/]+$")

require(pwd .. "polyfill")

if luaEnv then
    require(pwd .. "init_il2cpp")
else
    require(pwd .. "init_xlua")
end
