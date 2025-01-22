# Install
## Escher
1. 替换Tools/Escher所有文件和目录
2. 替换`GameScripts/Assets/Editor/Escher/Action.cs`
3. 替换`GameScripts/Assets/Editor/Escher/ModifyXcodeProj.cs`
## XLua
1. 删除GameScritps/Assets/Xlua里面的文件
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
7. 增加宏XLUA_IL2CPP,XLUA_FULL,OSG_GAME
8. 执行XLua/Generator Code，刷新一下UNITY
9. 提交所有变更
# Feature
1. 不在支持table自动转IList和IDictionary和任意CS对象，仅支持table转Array，但是由于table转Array其实也是在C#或者il2cpp层帮你生成了一个新的Array对象，所以最好还是手动传入一个Array对象
    - 之前写法`local facadeInfo = {} ---@type Assets.Scripts.UI.CardComponent.Item.UICardItemShowData.stFacade`
    - 现在写法`local facadeInfo = CS.Assets.Scripts.UI.CardComponent.Item.UICardItemShowData.stFacade() ---@type Assets.Scripts.UI.CardComponent.Item.UICardItemShowData.stFacade`
    - 我们看是否可以去掉table转array这种写法，因为table转array实际只实现了一层，如果是多层嵌套，实际是不支持的。
2. Array List Dictionary优先使用get_Item和set_Item取值，由于通过索引器求值本质也是调用的`get_Item`和`set_Item`，而且还要增加一层调用，所以要比直接调用`get_Item`和`set_Item`更费
    - 之前写法`corners[0]`
    - 推荐写法`corners:get_Item(0)`
    - 我看项目实际上只有Array是使用[]这种写法的，而且使用场景也不是很多，看看我们是否可以去掉[]这种使用方式
3. 不再支持`private_accessible`
4. 泛型优化（0gc）
    - C#的泛型支持，实际上是通过生成反射函数，然后去调用的，而在传入object[]的时候，几乎都有装箱和拆箱的操作，这样会造成GC。
    - il2cpp的泛型支持，传入的是实际的类型，不会有装箱拆箱的操作，所以不会有GC。
    - 但是C#和il2cpp实际返回的函数都是delegate，这是一个C#对象，所以需要尽量持有，而不是每次都申请。这样会造成频繁GC。
    - 之前写法
    ```lua
    local sendaction_generic = xlua.get_generic_method(CS.Assets.Scripts.Framework.UI.UIPrefab2DClass, 'SendAction')
    self.sendaction_int = sendaction_generic(CS.System.Int32)
    ```
    - 现在写法
    ```lua
    self.sendaction_int = xlua.get_generic_method(CS.Assets.Scripts.Framework.UI.UIPrefab2DClass, 'SendAction', CS.System.Int32)
    ```
5. 枚举
    - 在之前枚举是一个真实的C#对象，但是我们实际只需要把他当作一个number去访问。
    - 之前写法
    `TssSDKService:Ioctl(TssSDKService.TssSDKIoctlCMD.CommQuery.value__, "UserAgreedPS")`
    - 现在写法
    `TssSDKService:Ioctl(TssSDKService.TssSDKIoctlCMD.CommQuery, "UserAgreedPS")`
    - 也就是说，在lua中，任何用到C#枚举的地方，本质是一个number。
6. 事件
    - 这个是[]本质是一个东西，C#对于事件的签名本质是`add_event`和`remove_event`，xlua为了迎合用户习惯，篡改了签名，我们这里又改回原始签名
    - 之前写法
    ```lua
    self:GetWeb():WebViewRetEvents("+", listener)
    self:GetWeb():WebViewRetEvents("-", listener)
    ```
    - 现在写法
    ```lua
    self:GetWeb():add_WebViewRetEvents(listener)
    self:GetWeb():remove_WebViewRetEvents(listener)
    ```
7. LuaEvalAttribute
    - 只支持字段，不再支持属性
8. 支持预载，会生成PreLoad文件
9. 不支持Nullable，对ref/out取原始对象，而不进行装箱，以返回值的方式去做