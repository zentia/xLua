#if ENABLE_IL2CPP && XLUA_IL2CPP

namespace XLuaIl2cpp
{
    public class ObjectPool
    {
        const int LIST_END = -1;
        const int ALLOCED = -2;
        struct Slot
        {
            public int next;
            public object obj;

            public Slot(int next, object obj)
            {
                this.next = next;
                this.obj = obj;
            }
        }

        private Slot[] list = new Slot[512];
        private int freelist = LIST_END;
        private int count = 0;

        public object this[int i]
        {
            get
            {
                if (i >= 0 && i < count)
                {
                    return list[i].obj;
                }

                return null;
            }
        }

        public void Clear()
        {
            freelist = LIST_END;
            count = 0;
            list = new Slot[512];
        }

        void extend_capacity()
        {
            Slot[] new_list = new Slot[list.Length * 2];
            for (int i = 0; i < list.Length; i++)
            {
                new_list[i] = list[i];
            }
            list = new_list;
        }

        //call by native, do no throw!!
        public int Add(object obj)
        {
            int index = LIST_END;

            if (freelist != LIST_END)
            {
                index = freelist;
                list[index].obj = obj;
                freelist = list[index].next;
                list[index].next = ALLOCED;
            }
            else
            {
                if (count == list.Length)
                {
                    extend_capacity();
                }
                index = count;
                list[index] = new Slot(ALLOCED, obj);
                count = index + 1;
            }

            //UnityEngine.Debug.Log(string.Format("ObjectPool.Add {0} id {1}, type:{2}", obj, index, obj == null ? "null": obj.GetType().ToString()));

            return index;
        }

        //call by native, do no throw!!
        public object Remove(int index)
        {
            if (index >= 0 && index < count && list[index].next == ALLOCED)
            {
                object o = list[index].obj;
                list[index].obj = null;
                list[index].next = freelist;
                freelist = index;

                //UnityEngine.Debug.Log(string.Format("ObjectPool.Remove {0} id {1}, type:{2}", o, index, o == null ? "null" : o.GetType().ToString()));

                return o;
            }

            return null;
        }
    }
}

#endif
