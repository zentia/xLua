local TTFor = {}
TTFor.__index = TTFor
function TTFor:new(str)
    local self = setmetatable({}, TTFor)
    self.str = str
    return self
end
function TTFor:toString()
    return self.str
end
local TTIf = {}
TTIf.__index = TTIf
function TTIf:new(exp)
    local self = setmetatable({}, TTIf)
    self.b = not not exp
    return self
end
function TTIf:isTrue()
    return self.b
end
function TTIf:isFalse()
    return not self.b
end
function TTIf:toString()
    error('invalid TTE use. please sure that you use the template literal as tagged template')
end
local TTEndif = { }
local TTElse = { }
local TTElseif = {}
TTElseif.__index = TTElseif
function TTElseif:new(exp)
    local self = setmetatable({}, TTElseif)
    self.b = not not exp
    return self
end
function TTElseif:isTrue()
    return self.b
end
function TTElseif:isFalse()
    return not self.b
end
function TTElseif:toString()
    error('invalid TTE use. please sure that you use the template literal as tagged template')
end    
function isInstanceOf(obj, class)
    local mt = getmetatable(obj)
    while mt do
        if mt == class then
            return true
        end
        mt = getmetatable(mt)
    end
    return false
end
local scopeLevel = 0
local resultInScope = {}
function enterScope() 
    scopeLevel = scopeLevel + 1
    local curScopeLevel = scopeLevel
    resultInScope[curScopeLevel] = {}
    return curScopeLevel
end
function exitScope(curScopeLevel) 
    local ret = resultInScope[curScopeLevel]
    resultInScope[curScopeLevel] = {}
    scopeLevel = scopeLevel - 1
    return ret
end
---@param s string
function string.lastIndexOf(s, pattern)
    local lastPos = nil
    local startPos = 1

    while true do
        local foundPos = string.find(s, pattern, startPos, true)
        if not foundPos then
            break
        end
        lastPos = foundPos
        startPos = foundPos + 1
    end

    if lastPos then
        return lastPos
    else
        return -1
    end
end
function string.trim(s)
    return string.gsub(s, "^%s*(.-)%s*$", "%1")
end
function string.startsWith(str, prefix)
    return string.sub(str, 1, string.len(prefix)) == prefix
end
function string.endsWith(str, suffix)
    return string.sub(str, -string.len(suffix)) == suffix
end

function string.split(s, sep)
    if sep == nil or sep == '' then
        sep = '%s'
    end
    local t = {}
    local pattern = '([^' .. sep .. ']+)'
    for str in string.gmatch(s, pattern) do
        table.insert(t, str)
    end
    return t
end

function table.filter(tbl, fn)
    local t = {}
    for i, v in ipairs(tbl) do
        if fn(v, i) then
            table.insert(t, v)
        end
    end
    return t
end

function ternary(condition, true_value, false_value)
    if condition then
        return true_value
    else
        return false_value
    end
end

function TaggedTemplateEngine(str, ...)
    local exps = {...}
    --for i, v in ipairs(exps) do
    --    print(v)
    --end
    local ret = ''
    local justAddedAnEmptyExp = false
    local ifStack = {}
    local i = 0
    
    ---@param str1 string
    ---@param str2 string
    function WillConnectWithAnEmptyLine(str1, str2)
        if (not str1 or not str2) then return {} end
        local str1LastLineSeq = str1:lastIndexOf('\n')
        local str2FirstLineSeq = str2:find('\n')
        if str1LastLineSeq ~= -1 and str1:sub(str1LastLineSeq):trim()== "" and str2FirstLineSeq ~= -1 and str2:sub(0, str2FirstLineSeq):trim() == "" then
            return str1LastLineSeq, str2FirstLineSeq
        else
            return {}
        end
    end

    ---@param s string
    function appendStr(s)
        -- 如果一行里除了 IF ELSE ELSEIF ENDIF没有其它东西，最终会形成一个空行，可以切掉。
        if (justAddedAnEmptyExp) then
            local retLastLineSeq, strFirstLineSeq = WillConnectWithAnEmptyLine(ret, s)
            if (retLastLineSeq ~= nil and strFirstLineSeq ~= nil) then
                ret = string.sub(s, 0, retLastLineSeq)
                s = string.sub(s, strFirstLineSeq)
            end
        end
        if s == nil then
            for j, v in pairs(str) do
                print(string.format('%d->%s',j, v))
            end
        end
        ret = ret .. s
    end
    while i < #str - 2 do
        i = i + 1
        -- handle str
        if #ifStack == 0 or ifStack[#ifStack]:isTrue() then
            appendStr(str[i])
        end
        justAddedAnEmptyExp = false

        -- handle exp
        if (exps[i] == IF) then error('tte.IF must be used as a function') end
        if (exps[i] == ENDIF) then error('tte.ENDIF must be used as a function') end
        if (exps[i] == ELSE) then error('tte.ELSE must be used as a function') end
        if (exps[i] == ELSEIF) then error('tte.ELSEIF must be used as a function') end
        local continue = false
        if (#ifStack > 0) then
            if (exps[i] == TTEndif) then
                table.remove(ifStack)
                justAddedAnEmptyExp = true
                continue = true
            elseif (exps[i] == TTElse) then
                local curif = ifStack[#ifStack]
                curif.b = not curif.b
                justAddedAnEmptyExp = true
                continue = true
            elseif (isInstanceOf(exps[i], TTElseif)) then
                local curif = ifStack[#ifStack]
                curif.b = not curif.b and exps[i].b
                justAddedAnEmptyExp = true
                continue = true
            elseif (ifStack[#ifStack]:isFalse()) then
                if (isInstanceOf(exps[i], TTIf)) then
                    ifStack.push(IF:new(false))
                end
                continue = true                
            end
        end
        if (not continue and isInstanceOf(exps[i] ,TTIf)) then
            table.insert(ifStack, exps[i])
            justAddedAnEmptyExp = true
            continue = true
        end
        if (not continue and exps[i] == TTElse) then error('unexpected else') end
        if (not continue and isInstanceOf(exps[i], TTElseif)) then error('unexpected elseif') end
        if (not exps[i] == TTEndif) then error('unexpected endif') end

        if (not continue and isInstanceOf(exps[i], TTFor)) then
            justAddedAnEmptyExp = true
        end
        appendStr(tostring(exps[i]))

        if (type(exps[i]) == 'string' and string.trim(exps[i]) == "") then
            justAddedAnEmptyExp = true
        end
    end
    appendStr(str[i + 1])
    
    if scopeLevel > 0 then
        table.insert(resultInScope[scopeLevel], ret)
    end
    return ret
end

local Elser = {}
Elser.__index = Elser
function Elser:new(b, contentFn)
    if b then
        local scope = enterScope()
        local ret = contentFn()
        local scopeRet = exitScope(scope)
        self.content = ret or scopeRet:join('')
        self.done = true
    end
end
function Elser:ELSE(contentFn)
    if not self.done then
        local scope = enterScope()
        local ret = contentFn()
        local scopeRet = exitScope(scope)
        self.content = ret or scopeRet:join('')
        self.done = true
    end
    return self
end
function Elser:ELSEIF(b, contentFn)
    if not self.done and b then
        local scope = enterScope()
        local ret = contentFn()
        local scopeRet = exitScope(scope)
        self.content = ret or scopeRet:join('')
        self.done = true
    end
    return self
end
function Elser:toString()
    return self.content or ""
end
function IF(b, contentFn) 
    if (not contentFn) then
        return TTIf:new(b)
    else 
        return Elser:new(b, contentFn)
    end
end
function ELSE() 
    return TTElse
end
function ELSEIF(b) 
    return TTElseif:new(b)
end
function ENDIF() 
    return TTEndif
end
function FOR(arr, fn, joiner)
    if not joiner then
        joiner = ''
    end
    if (not arr or type(arr) ~= 'table') then return '' end

    local scope = enterScope()
    local ret = {}
    for i, v in ipairs(arr) do
        table.insert(ret, fn(v, i))
    end
    local retInScope = exitScope(scope)

    if #ret == 0 then
        ret = retInScope
    end
    local t = {}
    for i, v in ipairs(ret) do
        if type(v) ~= 'string' then
            table.insert(t, v)
        else
            local s = string.trim(v) 
            if s ~= '' then
                local lastLineSeq = string.lastIndexOf(s, '\n')
                local t1 = string.sub(s, lastLineSeq)
                if string.trim(t1) == '' then
                    table.insert(t, string.sub(s, 1, lastLineSeq))
                else
                    table.insert(t, s)    
                end
            end
        end
    end
    return table.concat(t, joiner)
end
