using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;

namespace UnityEngine.UI
{
    internal static class ListPool<T>
    {
        // Object pool to avoid allocations.
        // private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(null, l => l.Clear());
        private static readonly ObjectPool<List<T>> s_ListPool = new ObjectPool<List<T>>(()=>new List<T>(), l => l.Clear()); // sgame_unity2021_predev 

        public static List<T> Get()
        {
            return s_ListPool.Get();
        }

        public static void Release(List<T> toRelease)
        {
            s_ListPool.Release(toRelease);
        }
    }
}
