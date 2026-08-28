-- 启动调试器，这部分应该在出档的时候抹除或者关闭
package.cpath = package.cpath .. ";G:/OSGame/Client_proj/Tools/osg-dev-kit/Debugger/?.dll;I:/xLua/Tools/osg-dev-kit/Debugger/?.dll"
-- Enhance variable and function display
function enhance_debugger()
    if not emmyHelper.enhanced then
        local _query = emmyHelper.queryVariable
        emmyHelper.queryVariable = function(variable, obj, typeName, depth)
            if typeName == "userdata" then
                -- Check if this is a C# object
                local succeed, result = pcall(function()
                    if type(obj.GetType) == "function" then
                        return _query(variable, obj, typeName, depth)
                    end
                end)
                if succeed then
                    return result
                else
                    -- Otherwise check if this object supports __pairs
                    if not succeed or not result then
                        local mt = getmetatable(obj)
                        if mt and mt.__pairs then
                            variable.valueTypeName = tostring(mt)
                            variable.value = tostring(obj)
                            for k, v in pairs(obj) do
                                ---@suppress NOT_A_MEMBER
                                local node = emmyHelper.createNode()
                                node.name = tostring(k)
                                node.valueTypeName = type(obj)
                                ---@suppress NOT_A_MEMBER
                                node:query(v, depth - 1, true)
                                ---@suppress NOT_A_MEMBER
                                variable:addChild(node)
                            end
                            return true
                        end
                    end
                end
                return false
            end

            if typeName == "table" then
                local mt = getmetatable(obj)
                if mt and mt.__tostring then
                    variable.value = tostring(obj)
                    variable.valueType = 7
                    for k, v in pairs(obj) do
                        ---@suppress NOT_A_MEMBER
                        local node = emmyHelper.createNode()
                        node.name = tostring(k)
                        node.valueTypeName = type(obj)
                        ---@suppress NOT_A_MEMBER
                        node:query(v, depth - 1, true)
                        ---@suppress NOT_A_MEMBER
                        variable:addChild(node)
                    end
                    return true
                end
            end

            if typeName == "function" and function_tostring then
                variable.value = function_tostring(obj)
                variable.valueType = 6
                return true
            end
        end

        emmyHelper.queryParentThread = function()
            if type(get_parent_thread) == 'function' then
                return get_parent_thread()
            end
        end

        emmyHelper.enhanced = true
    end
end

-- If `emmyHelper` has already been created then enhance it
if emmyHelper then
    pcall(enhance_debugger)
    -- Otherwise defer the enhancement later
else
    local success, emmy_core = pcall(require, "emmy_core")
    if not success then
        local msg = "[Debugger] require 'emmy_core' failed: " .. tostring(emmy_core)
        print(msg)
        pcall(function() CS.UnityEngine.Debug.Log(msg) end)
    end
    -- after this `require` a new `emmyHelperInit` will be created
    if success then
        local function dbglog(msg)
            msg = "[Debugger] " .. tostring(msg)
            print(msg)
            pcall(function() CS.UnityEngine.Debug.Log(msg) end)
        end
        dbglog("emmy_core loaded, connecting ...")

        -- 诊断：打印调用栈各层 source，确认运行时 chunkname（决定断点路径能否匹配）
        pcall(function()
            for i = 1, 6 do
                local info = debug.getinfo(i, "S")
                if info and info.source then
                    dbglog(string.format("stack[%d] source=%s", i, info.source))
                end
            end
        end)

        local _emmyHelperInit = emmyHelperInit
        emmyHelperInit = function()
            dbglog("emmyHelperInit invoked")
            pcall(_emmyHelperInit)
            pcall(enhance_debugger)
        end

        local ok, res = pcall(emmy_core.tcpConnect, "127.0.0.1", 9966)
        dbglog(string.format("tcpConnect ok=%s res=%s", tostring(ok), tostring(res)))
        if not ok then
            dbglog("tcpConnect failed -> tcpListen 9967")
            local ok2, res2 = pcall(emmy_core.tcpListen, "127.0.0.1", 9967)
            dbglog(string.format("tcpListen ok=%s res=%s", tostring(ok2), tostring(res2)))
        end
    end
end
