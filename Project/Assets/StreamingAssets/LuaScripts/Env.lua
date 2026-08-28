UNITY_EDITOR = CS.UnityEngine.Application.isEditor
-- OSGame 专属 C# 类（LuaCallCSharpInteraction / UtilityPlugin）在 xLua perf/demo 包里不存在。
-- 若不保护，下面几行会在 require("Debugger") 之前抛 "attempt to index a nil value"，
-- 导致 Emmy 调试器永远无法拉起。这里用 pcall 兜底，缺类时回退为 false。
local function __osg_opt(value_fn)
    local ok, value = pcall(value_fn)
    if ok and value ~= nil then
        return value
    end
    return false
end
OSG_PUBLISH = __osg_opt(function() return CS.LuaCallCSharpInteraction.IsPublishVersion() end)
UNITY_2022_1_OR_NEWER = __osg_opt(function() return CS.UtilityPlugin.IsUnity2022 end)
OS_UNITY_UPGRADE_TEMP = __osg_opt(function() return CS.UtilityPlugin.IsUnityUpgradeTemp end)
OSG_DEVELOPMENT = __osg_opt(function() return CS.UtilityPlugin.IsOSGDevelopment end)
-- 专门给测试添加的快捷登陆宏，必须打开此宏，再加上快捷登陆事件发送才能够实现直接登陆
-- QUICK_LOGIN_TEST = false
-- if UNITY_EDITOR then
require("Debugger")
-- end

local __resume = coroutine.resume
local __thread_ownership = {}
local __thread_stack = {}
local __native_resume_begin = xlua and xlua.coroutine_resume_begin
local __native_resume_end = xlua and xlua.coroutine_resume_end

coroutine.resume = function(co, ...)
    table.insert(__thread_stack, co)
    __thread_ownership[co] = coroutine.running()
    if __native_resume_begin then
        __native_resume_begin(co)
    end
    local succeed, result = __resume(co, ...)
    if __native_resume_end then
        __native_resume_end(co)
    end
    __thread_ownership[co] = nil
    table.remove(__thread_stack)
    return succeed, result
end

function get_parent_thread(co)
    return __thread_ownership[co or coroutine.running()]
end

function get_top_thread()
    return __thread_stack[#__thread_stack]
end

function traceback()
    return debug.traceback(get_top_thread())
end

local ignore_files = {
    "Function.lua",
    "Promise.lua",
    "Class.lua",
    "Import.lua"
}

local ignore_files_str = string.format("\t<color=#888888>(callstack stripped from : %s)</color>",
    table.concat(ignore_files, ", "))

---@param info DebugInfo
local function should_walk(info, less_stack)
    if less_stack then
        if info.currentline < 0 then
            return false
        end
        local filename = info.short_src
        if filename then
            for _, pattern in pairs(ignore_files) do
                if string.endswith(filename, pattern) then
                    return false
                end
            end
        end
    end

    return true
end

---@alias WalkTraceCallBack fun(info:DebugInfo, thread:any, level:any)
---@param callback WalkTraceCallBack 加载回调闭包
function walk_trace(thread, level, less, callback)
    level = (level or 0) + 2
    while true do
        local info = nil
        if thread then
            info = debug.getinfo(thread, level)
        else
            info = debug.getinfo(level)
        end

        if info then
            if should_walk(info, less) then
                if not callback(info, thread, level) then
                    break
                end
            end

            level = level + 1
        else
            if thread then
                thread = __thread_ownership[thread]
            end

            if thread then
                level = 2
                if not callback(nil, thread, level) then
                    break
                end
            else
                break
            end
        end
    end
end

local function colorize(content)
    if UNITY_EDITOR then
        return string.format("<color=#1A7ECD><b>%s</b></color>", content)
    else
        return content
    end
end

debug.traceback = function(thread, message, level)
    if type(thread) ~= "thread" then
        thread, message, level = nil, thread, message
    end

    if message ~= nil and type(message) ~= "string" then
        return message
    else
        local lines = { message }

        if UNITY_EDITOR then
            lines[#lines + 1] = ignore_files_str
        end

        walk_trace(thread, level, true, function(info, _, _)
            if info then
                local funcname = nil

                if info.istailcall then
                    funcname = "(... tail calls ...)"
                else
                    if info.namewhat ~= "" then
                        funcname = string.format("%s %s", info.namewhat, colorize(info.name))
                    else
                        if info.what == "m" then
                            funcname = colorize("main chunk")
                        elseif info.what ~= "C" then
                            funcname = string.format("function %s",
                                colorize(string.format("%s:%d", info.short_src, info.linedefined)))
                        else
                            funcname = "?"
                        end
                    end
                end

                local location = info.currentline >= 0 and string.format("(at %s:%d)", info.short_src, info.currentline) or
                    "[C]"

                lines[#lines + 1] = string.format("\tin %s %s", funcname, location)
            else
                lines[#lines + 1] = "\t[--- in coroutine ---]"
                if UNITY_EDITOR then
                    lines[#lines + 1] = ignore_files_str
                end
            end
            return true
        end)

        return table.concat(lines, "\n")
    end
end
