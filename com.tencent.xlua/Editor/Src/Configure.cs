using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System;
using UnityEngine;

namespace XLua
{
    //放置配置的类
    [AttributeUsage(AttributeTargets.Class)]
    public class ConfigureAttribute : Attribute
    {

    }

    [AttributeUsage(AttributeTargets.Method)]
    public class FilterAttribute : Attribute
    {
    }

    public enum FilterAction
    {
        BindingMode = 1,
        MethodInInstructions = 2,
        DisallowedType = 3
    }

    public static class Configure
    {
        public static List<MethodInfo> GetFilters()
        {
            var types = from assembly in AppDomain.CurrentDomain.GetAssemblies()
                        where !(assembly.ManifestModule is System.Reflection.Emit.ModuleBuilder)
                        from type in assembly.GetTypes()
                        where type.IsDefined(typeof(ConfigureAttribute), false)
                        select type;

            List<MethodInfo> filters = new List<MethodInfo>();
            foreach (var type in types)
            {
                foreach (var method in type.GetMethods(BindingFlags.Static | BindingFlags.Public
                    | BindingFlags.NonPublic | BindingFlags.DeclaredOnly))
                {
                    if(method.IsDefined(typeof(FilterAttribute), false))
                    {
                        filters.Add(method);
                    }
                }
            }
            return filters;
        }
#if OSGAME
        public static string RootDir => "RawAssets";
#else
        public static string RootDir => Application.streamingAssetsPath;
#endif

    }
}
