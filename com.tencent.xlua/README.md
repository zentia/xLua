# Install
## Escher
1. 替换Tools/Escher所有文件和目录
2. 替换Escher/Action.cs文件
3. `ModifyXcodeProj.cs`
## XLua
1. 删除GameScritps/Xlua里面的文件
2. 删除Assets/XLua里面的文件
3. 复制com.tencent.xlua目录到同级目录
4.  - 删除`GameScripts/Assets/Scripts/Framework/Lua/Interaction/LuaEval.cs`
    - 替换`GameScripts/Assets/Scripts/Framework/Lua/Interaction/LuaSession.cs`
    - `GameScripts/Assets/Scripts/Framework/Lua/LuaService.cs`
    - TimiDropDown.cs
    - DataSampleManager.cs
    - PrefUtils.cs
5. 替换Package/manifest.json ProjectCache ProjectCache.md5
6. 替换
    - Env.lua
    - init_il2cpp.lua
    - `Logic/Timeline/ActionService.lua`
    - PlayBroadcastService.lua
    - UICSharpPrefabClass.lua
    - UILuaPrefabService.lua
    - `UIHeroDetailInfoShowData.lua`
    - `UIHeroDetailInfoShowDataOldXD.lua`
    - 删除UIShopBase.lua中的 private_accessible
    - `UICardHeroItem_Collection.lua`
7. 增加宏XLUA_IL2CPP,XLUA_FULL
8. 执行XLua/Generator Code，刷新一下UNITY
9. 提交所有变更
# 差异
1. 不在支持table自动转IList和IDictionary和任意CS对象
2. Array List Dictionary优先使用get_Item和set_Item取值
3. 不再支持`private_accessible`