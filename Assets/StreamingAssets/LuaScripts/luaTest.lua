--package.cpath = package.cpath .. ';C:/Users/Administrator/AppData/Roaming/JetBrains/Rider2024.2/plugins/EmmyLua/debugger/emmy/windows/x64/?.dll'
--local dbg = require('emmy_core')
--dbg.tcpConnect('localhost', 9966)
require("TypePreload")
local LogTag = CS.PerfMain.GetLogTagValues()
CS.PerfMain.LuaDoLog(CS.Log.Type.None,LogTag.Network,"a")
function FuncBasePara(x)
end

function FuncClassPara(x)
end

function FuncStructPara(x)
end

function FuncTwoBasePara(x, y)
end

CS.ParaStruct()
local Int32 = CS.System.Int32
local list_int32 = CS.System.Collections.Generic.List(Int32)

luaTable = list_int32()
luaTable:Add(1)

g = 0

local ClassLuaCallCS = CS.ClassLuaCallCS

function LuaAccessCSBaseMember_get(num)
    local csObj = ClassLuaCallCS()
    for i = 1, num do
        local x = csObj.id
    end
end

function LuaAccessCSBaseMember_set(num)
    local csObj = ClassLuaCallCS()
    for i = 1, num do
        csObj.id = 0
    end
end

function LuaAccessCSClassMember_get(num)
    local csObj = ClassLuaCallCS()
    for i = 1, num do
        local x = csObj.paraClass
    end
end

function LuaAccessCSClassMember_set(num)
    local csObj = ClassLuaCallCS()
    local x = CS.ParaClass()
    for i = 1, num do
        csObj.paraClass = x
    end
end

function LuaAccessStructMember_get(num)
    local csObj = ClassLuaCallCS()
    for i = 1, num do
        local x = csObj.paraStruct
    end
end

function LuaAccessStructMember_set(num)
    local csObj = ClassLuaCallCS()
    local x = CS.ParaStruct()
    for i = 1, num do
        csObj.paraStruct = x
    end
end

function LuaAccessVec3Member_get(num)
    local csObj = ClassLuaCallCS()
    for i = 1, num do
        local x = csObj.vec3Member
    end
end

function LuaAccessVec3Member_set(num)
    local csObj = ClassLuaCallCS()
    local x = CS.UnityEngine.Vector3(0, 0, 0)
    for i = 1, num do
        local x = csObj.vec3Member
    end
end

function LuaAccessCSBaseMemberFunc(num)
    local csObj = ClassLuaCallCS()
    for i = 1, num do
        csObj:funcBaseParam(0)
    end
end

function LuaAccessCSClassMemberFunc(num)
    local csObj = ClassLuaCallCS()
    local clsObj = CS.ParaClass()
    for i = 1, num do
        csObj:funcClassParam(CS.ClassLuaCallCS.LuaEnum.ONE, clsObj)
    end
end

LuaAccessCSClassMemberFunc(1)

function LuaAccessCSStructMemberFunc(num)
    local csObj = ClassLuaCallCS()
    local clsObj = CS.ParaStruct()
    for i = 1, num do
        csObj:funcStructParam(clsObj)
    end
end

function LuaAccessCSVec3MemberFunc(num)
    local csObj = ClassLuaCallCS()
    local clsObj = CS.UnityEngine.Vector3(0, 0, 0)
    for i = 1, num do
        csObj:funcVec3Param(clsObj)
    end
end

function LuaAccessCSInMemberFunc(num)
    local csObj = ClassLuaCallCS()
    local x = 0
    for i = 1, num do
        csObj:funcInParam(x)
    end
end

function LuaAccessCSOutMemberFunc(num)
    local csObj = ClassLuaCallCS()
    local x
    for i = 1, num do
        x = csObj:funcOutParam()
    end
end

function LuaAccessCSInOutMemberFunc(num)
    local csObj = ClassLuaCallCS()
    local x = 0
    local y
    for i = 1, num do
        y = csObj:funcInOutParam(x)
    end
end

function LuaAccessCSTwoMemberFunc(num)
    local csObj = ClassLuaCallCS()
    for i = 1, num do
        y = csObj:funcTwoParam(0, 0)
    end
end

function LuaAccessCSStaticBaseMember_get(num)
    for i = 1, num do
        local x = ClassLuaCallCS.sId
    end
end

function LuaAccessCSStaticBaseMember_set(num)
    for i = 1, num do
        ClassLuaCallCS.sId = 0
    end
end

function LuaAccessCSStaticClassMember_get(num)
    for i = 1, num do
        local x = ClassLuaCallCS.sParamClass
    end
end

function LuaAccessCSStaticClassMember_set(num)
    local x = CS.ParaClass()
    for i = 1, num do
        ClassLuaCallCS.sParamClass = x
    end
end

function LuaAccessCSStaticStructMember_get(num)
    for i = 1, num do
        local x = ClassLuaCallCS.sParamStruct
    end
end

function LuaAccessCSStaticStructMember_set(num)
    local x = CS.ParaStruct()
    for i = 1, num do
        ClassLuaCallCS.sParamStruct = x
    end
end

function LuaAccessCSStaticVec3Member_get(num)
    for i = 1, num do
        local x = ClassLuaCallCS.sParamVec3
    end
end

function LuaAccessCSStaticVec3Member_set(num)
    local x = CS.UnityEngine.Vector3(0, 0, 0)
    for i = 1, num do
        ClassLuaCallCS.sParamVec3 = x
    end
end

function LuaAccessCSStaticBaseMemberFunc(num)
    for i = 1, num do
        ClassLuaCallCS.sFuncBaseParam(0)
    end
end

function LuaAccessCSStaticClassMemberFunc(num)
    local clsObj = CS.ParaClass()
    for i = 1, num do
        ClassLuaCallCS.sFuncClassParam(clsObj)
    end
end

function LuaAccessCSStaticStructMemberFunc(num)
    local clsObj = CS.ParaStruct()
    for i = 1, num do
        ClassLuaCallCS.sFuncStructParam(clsObj)
    end
end

function LuaAccessCSStaticVec3MemberFunc(num)
    local clsObj = CS.UnityEngine.Vector3(0, 0, 0)
    for i = 1, num do
        ClassLuaCallCS.sFuncVec3Param(clsObj)
    end
end

function LuaAccessCSStaticInMemberFunc(num)
    local x = 0
    for i = 1, num do
        ClassLuaCallCS.sFuncInParam(x)
    end
end

function LuaAccessCSStaticOutMemberFunc(num)
    local x
    for i = 1, num do
        x = ClassLuaCallCS.sFuncOutParam()
    end
end

function LuaAccessCSStaticInOutMemberFunc(num)
    local x = 0
    local y
    for i = 1, num do
        y = ClassLuaCallCS.sFuncInOutParam(x)
    end
end

function LuaAccessCSStaticTwoMemberFunc(num)
    for i = 1, num do
        y = ClassLuaCallCS.sFuncTwoParam(0, 0)
    end
end

function LuaAccessCSEnumFunc_get(num)
    local csObj = ClassLuaCallCS()
    for i = 1, num do
        local x = csObj.enumParam
    end
end

function LuaAccessCSEnumFunc_set(num)
    local csObj = ClassLuaCallCS()
    local one = ClassLuaCallCS.LuaEnum.ONE
    for i = 1, num do
        csObj.enumParam = one
    end
end

function LuaAccessCSArrayFunc_get(num)
    local csObj = ClassLuaCallCS()
    local csArray = csObj.array
    for i = 1, num do
        --local x = csArray:get_Item(0)
    end
end

function LuaAccessCSArrayFunc_set(num)
    local csObj = ClassLuaCallCS()
    local csArray = csObj.array
    for i = 1, num do
        --csArray:set_Item(0, 1)
    end
end

function LuaAddRemoveCB(num)
    local csObj = ClassLuaCallCS();
    local function cb()
    end
    --local fn = CS.NullEventHandler(cb)
    --for i = 1, num do
    --    csObj:add_NullEvent(fn)
    --    csObj:remove_NullEvent(fn)
    --end
end

function LuaBaseParaCB()
    --local csObj = ClassLuaCallCS();
    --csObj:add_BaseParaEvent(CS.BaseParaEventHandler(function(x)
    --end))
    --csObj:InvokeBaseParaCB()
end

function LuaClassParaCB()
    --local csObj = ClassLuaCallCS();
    --csObj:add_ClassParaEvent(CS.ClassParaEventHandler(function(x)
    --end))
    --csObj:InvokeClassParaCB()
end

function LuaStructParaCB()
    --local csObj = ClassLuaCallCS();
    --csObj:add_StructParaEvent(CS.StructParaEventHandler(function(x)
    --end))
    --csObj:InvokeStructParaCB()
end

function LuaVec3ParaCB()
    --local csObj = ClassLuaCallCS();
    --csObj:add_Vec3ParaEvent(CS.Vec3ParamEventHandler(function(x)
    --end))
    --csObj:InvokeVec3ParaCB()
end

function LuaConstructClass(num)
    for i = 1, num do
        local clsObj = CS.ParaClass()
    end
end

function LuaConstructStruct(num)
    local obj
    for i = 1, num do
        obj = CS.UnityEngine.Color(1, 1, 1, 1)
    end
end

function StartTest()
    -- new class
    local classLuaCallCS = CS.ClassLuaCallCS()
    -- field set
    classLuaCallCS.u1 = 1
    classLuaCallCS.u2 = 2
    classLuaCallCS.u4 = 4
    classLuaCallCS.u8 = 8
    
    classLuaCallCS.i1 = -1
    classLuaCallCS.i2 = -2
    classLuaCallCS.i4 = -4
    classLuaCallCS.i8 = -8
    
    classLuaCallCS.s = 'Hello World!'
    
    classLuaCallCS.f = 0.1314526
    classLuaCallCS.d = 0.1314526659
    -- field get
    CS.UnityEngine.Debug.Log(string.format('u1 field get:%d',classLuaCallCS.u1))
    CS.UnityEngine.Debug.Log(string.format('u1 field get:%d',classLuaCallCS.u2))
    CS.UnityEngine.Debug.Log(string.format('u1 field get:%d',classLuaCallCS.u4))
    CS.UnityEngine.Debug.Log(string.format('u1 field get:%d',classLuaCallCS.u8))

    CS.UnityEngine.Debug.Log(string.format('i1 field get:%d',classLuaCallCS.i1))
    CS.UnityEngine.Debug.Log(string.format('i1 field get:%d',classLuaCallCS.i2))
    CS.UnityEngine.Debug.Log(string.format('i1 field get:%d',classLuaCallCS.i4))
    CS.UnityEngine.Debug.Log(string.format('i1 field get:%d',classLuaCallCS.i8))

    CS.UnityEngine.Debug.Log(string.format('s field get:%s',classLuaCallCS.s))

    CS.UnityEngine.Debug.Log(string.format('f field get:%f',classLuaCallCS.f))
    CS.UnityEngine.Debug.Log(string.format('d field get:%f',classLuaCallCS.d))

    -- property set
    classLuaCallCS.pu1 = 1
    classLuaCallCS.pu2 = 2

    -- property get
    CS.UnityEngine.Debug.Log(string.format('pu1 field get:%d',classLuaCallCS.pu1))
    CS.UnityEngine.Debug.Log(string.format('pu2 field get:%d',classLuaCallCS.pu2))
    
    -- static field set
    CS.ClassLuaCallCS.su1 = 1
    CS.ClassLuaCallCS.su2 = 2
    CS.ClassLuaCallCS.su4 = 4
    CS.ClassLuaCallCS.su8 = 8

    CS.ClassLuaCallCS.si1 = -1
    CS.ClassLuaCallCS.si2 = -2
    CS.ClassLuaCallCS.si4 = -4
    CS.ClassLuaCallCS.si8 = -8

    CS.ClassLuaCallCS.ss = 'Hello World!'

    CS.ClassLuaCallCS.sf = 0.1314526
    CS.ClassLuaCallCS.sd = 0.1314526659
    -- static field get
    CS.UnityEngine.Debug.Log(string.format('su1 field get:%d',CS.ClassLuaCallCS.su1))
    CS.UnityEngine.Debug.Log(string.format('su2 field get:%d',CS.ClassLuaCallCS.su2))
    CS.UnityEngine.Debug.Log(string.format('su1 field get:%d',CS.ClassLuaCallCS.su4))
    CS.UnityEngine.Debug.Log(string.format('su1 field get:%d',CS.ClassLuaCallCS.su8))

    CS.UnityEngine.Debug.Log(string.format('si1 field get:%d',CS.ClassLuaCallCS.si1))
    CS.UnityEngine.Debug.Log(string.format('si1 field get:%d',CS.ClassLuaCallCS.si2))
    CS.UnityEngine.Debug.Log(string.format('si1 field get:%d',CS.ClassLuaCallCS.si4))
    CS.UnityEngine.Debug.Log(string.format('si1 field get:%d',CS.ClassLuaCallCS.si8))

    CS.UnityEngine.Debug.Log(string.format('ss field get:%s',CS.ClassLuaCallCS.ss))

    CS.UnityEngine.Debug.Log(string.format('sf field get:%f',CS.ClassLuaCallCS.sf))
    CS.UnityEngine.Debug.Log(string.format('sd field get:%f',CS.ClassLuaCallCS.sd))
    
    -- static property set
    CS.ClassLuaCallCS.spu1 = 1
    CS.ClassLuaCallCS.spu2 = 2
    
    -- static property get
    CS.UnityEngine.Debug.Log(string.format('spu1 field get:%d',CS.ClassLuaCallCS.spu1))
    CS.UnityEngine.Debug.Log(string.format('spu2 field get:%d',CS.ClassLuaCallCS.spu2))
    
    -- array
    classLuaCallCS.array = CS.System.Array.CreateInstance(typeof(CS.System.Int32), 5)
    
    local array = classLuaCallCS.array
    for i, v in pairs(array) do
        CS.UnityEngine.Debug.Log(string.format('array->pair->%d:%d', i, array[i]))
    end

    for i, v in pairs(array) do
        array[i] = v + i
        CS.UnityEngine.Debug.Log(string.format('array->[]->%d:%d', i, array[i]))
    end

    for i, v in pairs(array) do
        array:set_Item(i, v + i)
        CS.UnityEngine.Debug.Log(string.format('array->get_Item/set_Item->%d:%d', i, array:get_Item(i)))
    end
    
    -- list
    --classLuaCallCS.list = CS.System.Collections.Generic.List(CS.System.String)()
    --classLuaCallCS.list:Add(1)

    local list = classLuaCallCS.list
    for i, v in pairs(list) do
        CS.UnityEngine.Debug.Log(string.format('list->pair->%d:%s', i, list[i]))
    end

    list[0] = '0'
    for i, v in pairs(list) do
        CS.UnityEngine.Debug.Log(string.format('list->[]->%d:%s', i, list[i]))
    end

    list:set_Item(0, 1)
    for i, v in pairs(list) do
        CS.UnityEngine.Debug.Log(string.format('list->get_Item/set_Item->%d:%s', i, list:get_Item(i)))
    end
    
    -- dictionary
    classLuaCallCS.dictionary = CS.System.Collections.Generic.Dictionary(CS.System.String, CS.System.Int32)()
    classLuaCallCS.dictionary:Add('a', 1)

    local dictionary = classLuaCallCS.dictionary
    for i, v in pairs(dictionary) do
        local ret, val = dictionary:TryGetValue(i)
        CS.UnityEngine.Debug.Log(string.format('dictionary->pair->%s:%d', i, val))
    end

    dictionary:set_Item('b', 1)
    for i, v in pairs(dictionary) do
        CS.UnityEngine.Debug.Log(string.format('dictionary->get_Item/set_Item->%s:%d', i, dictionary:get_Item(i)))
    end
    
    -- method call
    CS.UnityEngine.Debug.Log(string.format('funcBaseParam(int x) call: %d', classLuaCallCS:funcBaseParam(1000)))
    -- overload
    CS.UnityEngine.Debug.Log(string.format('funcBaseParam(int x, int y) call: %d', classLuaCallCS:funcBaseParam(1000, 2)))
    
    CS.UnityEngine.Debug.Log(string.format('funcBaseParam(int x, int y, int z = 9) call: %d', classLuaCallCS:funcBaseParam(1000, 2, 10)))
    
    local x = classLuaCallCS:funcInParam(9)

    CS.UnityEngine.Debug.Log(string.format('funcInParam(ref int x) call: %d', x))

    x, y = classLuaCallCS:funcInOutParam(9, 10)
    CS.UnityEngine.Debug.Log(string.format('funcInOutParam(ref int x, out int y) call: %d, %d', x, y))
    
    -- virtual method call
    classLuaCallCS:FuncA()
    -- function call
    CS.UnityEngine.Debug.Log(string.format('function call: %f', CS.ClassLuaCallCS.sFuncBaseParam(3.1415926)))
    
    -- op
    local v1 = CS.UnityEngine.Vector3(1,1,1)
    local v2 = CS.UnityEngine.Vector3(2,2,2)
    local v3 = v1 + v2
    CS.UnityEngine.Debug.Log(string.format('Vector3+Vector3=(%f,%f,%f)', v3.x,v3.y,v3.z))
    local v4 = v3 - v1
    CS.UnityEngine.Debug.Log(string.format('Vector3-Vector3=(%f,%f,%f)', v4.x,v4.y,v4.z))
    v4 = -v3
    CS.UnityEngine.Debug.Log(string.format('-Vector3=(%f,%f,%f)', v4.x,v4.y,v4.z))
    v4 = v3 * 1.1
    CS.UnityEngine.Debug.Log(string.format('Vector3*float=(%f,%f,%f)', v4.x,v4.y,v4.z))
    v4 = 1.1 * v3
    CS.UnityEngine.Debug.Log(string.format('float*Vector3=(%f,%f,%f)', v4.x,v4.y,v4.z))
    v4 = v3 / 3
    CS.UnityEngine.Debug.Log(string.format('Vector3/float=(%f,%f,%f)', v4.x,v4.y,v4.z))
    CS.UnityEngine.Debug.Log(('Vector3==Vector3=' .. tostring(v3 == v1)))
    CS.UnityEngine.Debug.Log(('Vector3~=Vector3=' .. tostring(v3 ~= v1)))
    
    -- get cs table
    local t = classLuaCallCS:GetTable({1,2,3,4,5,6})
    for i, v in ipairs(t) do
        CS.UnityEngine.Debug.Log((string.format('GetTable %d %d', i, v)))
    end
    
    -- event
    local func = function(x)
        CS.UnityEngine.Debug.Log(x)
    end
    -- cs call lua
    classLuaCallCS:add_BaseParaEvent(func)
    classLuaCallCS:InvokeBaseParaCB()
    classLuaCallCS:remove_BaseParaEvent(func)
    classLuaCallCS:InvokeBaseParaCB()
    
    -- enum
    CS.UnityEngine.Debug.Log((string.format('LuaEnum.ONE: %d', CS.ClassLuaCallCS.LuaEnum.ONE)))
    classLuaCallCS.enumParam = CS.ClassLuaCallCS.LuaEnum.TWO
    CS.UnityEngine.Debug.Log((string.format('classLuaCallCS.enumParam = %d', classLuaCallCS.enumParam)))
    
    -- table to array
    classLuaCallCS:CharArray({1,2,3,4,5})
    classLuaCallCS:BooleanArray({true,false,true,false,true})
    classLuaCallCS:UInt8Array({1,2,3,4,5})
    classLuaCallCS:UInt16Array({1,2,3,4,5})
    classLuaCallCS:UInt32Array({1,2,3,4,5})
    classLuaCallCS:UInt64Array({1,2,3,4,5})
    classLuaCallCS:Int16Array({-1,-2,-3,-4,-5})
    classLuaCallCS:Int32Array({-1,-2,-3,-4,-5})
    classLuaCallCS:Int64Array({-10000,-200000,-300000,-400000,-5000000})
    classLuaCallCS:StringArray({'a','b','c','d','f'})
    classLuaCallCS:StructArray({CS.ParaStruct(),CS.ParaStruct(),CS.ParaStruct(),CS.ParaStruct(),CS.ParaStruct()})
    classLuaCallCS:ClassArray({CS.ParaClass(),CS.ParaClass(),CS.ParaClass(),CS.ParaClass(),CS.ParaClass()})
    
    
end
-- dictionary
local dict = CS.System.Collections.Generic.Dictionary(CS.System.String, CS.System.String)()
dict:Add("a","1")