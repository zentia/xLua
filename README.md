![](Assets/XLua/Doc/xLua.png)

[![license](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/Tencent/xLua/blob/master/LICENSE.TXT)
[![release](https://img.shields.io/badge/release-v2.1.15-blue.svg)](https://github.com/Tencent/xLua/releases)
[![PRs Welcome](https://img.shields.io/badge/PRs-welcome-blue.svg)](https://github.com/Tencent/xLua/pulls)
[![Build status](https://github.com/Tencent/xLua/actions/workflows/build.yml/badge.svg)](https://github.com/Tencent/xLua/actions/workflows/build.yml)

[(English Documents Available)](README_EN.md)

## C# 下 Lua 编程支持

xLua 为 Unity增加 Lua 脚本编程的能力，借助 xLua，这些 Lua 代码可以方便的和 C# 相互调用。
Unity只支持Android、iOS、WinPC、WinEditor，其他平台不在支持！

<br/>

## xLua 的突破

xLua 在功能、性能、易用性都有不少突破，这几方面分别最具代表性的是：

* 可以运行时把 C# 实现（方法，操作符，属性，事件等等）替换成 Lua 实现；
* 出色的 GC 优化，自定义 struct，枚举在 Lua 和 C# 间传递无 C# GC Alloc；
* 编辑器下无需生成代码，开发更轻量；

更详细的特性、平台支持介绍请参考 [xLua 文档: 功能特性](Assets/XLua/Doc/features.md)。

<br/>

## 安装

xLua 可以直接简单的安装在 Unity 项目中.

1. 从 [Releases](https://github.com/Tencent/xLua/releases) 中下载发行版, 或直接下载本仓库代码.
2. 打开下载下来的源码压缩包, 你会看到一个 Assets 目录, 这目录就对应 Unity 工程的 Assets 目录，保持这目录结构, 将其内容置入 Unity 项目即可.

> 注意, Assets/Examples 目录下为示例代码, 你应该在生产环境下删去他们.

如果希望安装到其它目录，请看 [FAQ](Assets/XLua/Doc/faq.md) 相关介绍。

<br/>

## 文档

* (必看) [XLua 教程](Doc/XLua教程.md)：教程，其配套代码[这里](Assets/Tutorial/)。
* (必看) [XLua 的配置](Doc/configure.md)：介绍如何配置xLua。
* [常见问题解答](Doc/faq.md)：常见问题都总结在这里，初使用大多数问题都可以在这里找到答案。
* [热补丁操作指南](Doc/hotfix.md)：介绍如何使用热补丁特性。
* [XLua增加删除第三方lua库](Doc/XLua增加删除第三方lua库.md)：如何增删第三方lua扩展库。
* [XLua API](Doc/XLua_API.md)：API文档。
* [生成引擎二次开发指南](Doc/custom_generate.md)：介绍如何做生成引擎的二次开发。

<br/>

## 快速入门

一个完整的例子仅需3行代码：

安装好xLua，建一个MonoBehaviour拖到场景，在Start加入如下代码：

```csharp
XLua.LuaEnv luaEnv = new XLua.LuaEnv();
luaEnv.DoString("CS.UnityEngine.Debug.Log('hello world')");
luaEnv.Dispose();
```

1. DoString 参数为 string，可输入任意合法的 Lua 代码，本示例在 Lua 里调用 C# 的 UnityEngine.Debug.Log 打印了个日志。
2. 一个 LuaEnv 实例对应 Lua 虚拟机，出于开销的考虑，建议全局唯一。

C#主动调用 Lua 也很简单，比如要调用 Lua 的系统函数，推荐方式是：

* 声明

  ```csharp
  [XLua.CSharpCallLua]
  public delegate double LuaMax(double a, double b);
  ```

* 绑定

  ```csharp
  var max = luaEnv.Global.GetInPath<LuaMax>("math.max");
  ```

* 调用

  ```csharp
  Debug.Log("max:" + max(32, 12));
  ```

注意, 请不要重复调用 `luaEnv.Global.GetInPath<LuaMax>`, 这没有任何必要.

<br/>

## 热补丁

除了使用 Lua 在 Unity 进行脚本编写, 你也可以使用 Lua 实现 "热补丁". xLua 提供了使用 Lua 逻辑替换 C# 方法逻辑的方案.

* 侵入性小，老项目原有代码不做任何调整就可使用。
* 运行时影响小，不打补丁基本和原有程序一样。
* 出问题了可以用 Lua 来打补丁，这时才会走到 Lua 代码逻辑；

参考使用指南: [xLua 文档: 热补丁](Assets/XLua/Doc/hotfix.md)

<br/>

## 更多示例

* [01_Helloworld](Assets/Examples/01_Helloworld/): 快速入门的例子。
* [02_U3DScripting](Assets/XLua/Examples/02_U3DScripting/): 展示怎么用 Lua 来写 MonoBehaviour。
* [03_UIEvent](Assets/XLua/Examples/03_UIEvent/): 展示怎么用 Lua 来写 UI 逻辑。
* [04_LuaObjectOrented](Assets/XLua/Examples/04_LuaObjectOrented/): 展示 Lua 面向对象和 C# 的配合。
* [05_NoGc](Assets/XLua/Examples/05_NoGc/): 展示怎么去避免值类型的GC。
* [06_Coroutine](Assets/XLua/Examples/06_Coroutine/): 展示 Lua 协程怎么和 Unity 协程相配合。
* [08_Hotfix](Assets/XLua/Examples/08_Hotfix/): 热补丁的示例（需要开启热补丁特性，如何开启请参考 [xLua 文档: 热补丁](Assets/XLua/Doc/hotfix.md)）。
* [09_GenericMethod](Assets/XLua/Examples/09_GenericMethod/): 泛化函数支持的演示。
* [10_SignatureLoader](Assets/XLua/Examples/10_SignatureLoader/): 展示如何读取经数字签名的lua脚本，参见[数字签名](Assets/XLua/Doc/signature.md)的文档介绍。
* [11_RawObject](Assets/XLua/Examples/11_RawObject/): 当 C# 参数是object时，如何把一个lua number指定以boxing后的int传递过去。
* [12_ReImplementInLua](Assets/XLua/Examples/12_ReImplementInLua/): 展示如何将复杂值类型改为 Lua 实现。
* [14_HotfixAsyncAwait](Assets/XLua/Examples/14_HotfixAsyncAwait/): 展示如何将异步函数和await关键字改为 Lua 实现。

<br/>
# 为Unity il2cpp特殊优化的模式 - xIl2cpp模式

优化仅针对Unity Il2cpp backend，由puerts的il2cpp优化启发。

简单粗浅地说，xIl2cpp模式是让il2cpp直接与xlua交互，不再经由C# PInvoke调用native plugin。减少跨语言的消耗。最终使得性能表现大幅提升

xIl2cpp模式在使用方式上会有较大的变化，比如需要自己编译Plugin与wrapper生成的步骤不同，API和使用机制上无需做任何改动。

## 安装
如果决定采用xIl2cpp模式，目前只建议使用[安装指南](../install)中提到的`GitHub Clone 并用 Unity UPM 安装`。且仓库地址需要改为`https://github.com/zentia/xlua.git`，添加的路径为`[xlua]/com.tencent.xlua/package.json`

之所以需要你把源码clone下来，是因为你需要自行编译xlua的二进制Plugin，才能使用到xIl2cpp的能力。

随后，你需要先了解一下[编译指南](../other/building)的内容，xIl2cpp版本的编译稍有不同但大致类似（比如不再需要自行下载backend）。

## 使用步骤
1. 按照上述步骤安装好XLua的upm包。
2. 编译mono版本plugin：cd到`xlua目录/unity/native_src/`，输入符合你平台的编译命令，比如`lua ../cli/cmd.lua make --platform win --arch x64 --config Debug`。（编译命令本身其实也会识别你的平台，所以你也可以只输入`lua ../cli/cmd.lua make --config Debug`）
3. 进入Unity的`Player Settings`，添加两个Scripting Define Symbols: `XLUA_IL2CPP`。顺便可将script backend切换为`il2cpp`。等待脚本编译。
4. 生成编译所需的代码：点击Unity的`XLua/Generate for xIl2cpp mode(All in One)`。然后切出去cd到`xlua目录/unity/native_src_il2cpp`，输入和步骤2相同的编译命令。

### 使用步骤里的一些详细解释
* 由于我们尽量让lua和il2cpp直接交互，所以il2cpp版本里，Wrapper就是C++的形式而非C#的形式。`Generate for xIl2cpp mode`里生成的FunctionBridge.h承担的就是原有的Static Wrapper角色。
* FunctionBridge.h目前是需要编译进nativePlugins的，所以xIl2cpp模式需要你经常自行编译native plugin。
* 不同函数签名的函数会在FunctionBridge.h里生成一个对应的wrapper函数。当然我们也支持反射的方式调用，性能略有损耗。
* `Generate for xIl2cpp mode`中，会全量遍历所有Assembly，生成所有函数的wrapper。另外也提供了`generate/FunctionBridge.h(Configure)`，只会为生成列表中配置的类生成wrapper，其余使用反射机制调用。
* `Generate/FunctionBridge.h`同时还会生成C#到Lua调用的bridge，因此不再需要UsingFunc和UsingAction

### FAQ
1. ios构建时报hash_map头找不到。
    Unity构建时，一部分头文件不会自动打包到产物xcode项目里(在2021及以下版本常见)。你可以在`你的Unity.app/Contents/il2cpp/external/`下找到缺失的内容，复制到`iosbuild目录/Libraries/external/`即可