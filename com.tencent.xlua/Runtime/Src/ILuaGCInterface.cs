namespace XLua
{
    // C#需要自定义GC的时候，可通过此接口实现
    public interface ILuaGCInterface
    {
        void OnLuaGC();
    }
}
