using System.Collections.Generic;
using System.Linq;
using System.Reflection;
using System.Collections;
using System;

/************************************************************************************************
    *  配置
    *  1、Binding、BlittableCopy、Filter须放到一个打了Configure标签的类里；
    *  2、Binding、BlittableCopy、Filter均用打了相应标签的属性来表示；
    *  3、Binding、BlittableCopy、Filter配置须放到Editor目录下；
*************************************************************************************************/

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
        public static Dictionary<string, List<KeyValuePair<object, int>>> GetConfigureByTags(List<string> tags)
        {
            var types = from assembly in AppDomain.CurrentDomain.GetAssemblies()
                        where !(assembly.ManifestModule is System.Reflection.Emit.ModuleBuilder)
                        from type in assembly.GetTypes()
                        where type.IsDefined(typeof(ConfigureAttribute), false)
                        select type;
            var tagsMap = tags.ToDictionary(t => t, t => new List<KeyValuePair<object, int>>());

            foreach(var type in types)
            {
                foreach (var prop in type.GetProperties(BindingFlags.Static | BindingFlags.Public
                    | BindingFlags.NonPublic | BindingFlags.DeclaredOnly))
                {
                    if (typeof(IEnumerable).IsAssignableFrom(prop.PropertyType))
                    {
                        foreach (var ca in prop.GetCustomAttributes(false))
                        {
                            int flag = 0;
                            var fp = ca.GetType().GetProperty("Flag");
                            if (fp != null)
                            {
                                flag = (int)fp.GetValue(ca, null);
                            }
                            List<KeyValuePair<object, int>> infos;
                            if (tagsMap.TryGetValue(ca.GetType().ToString(), out infos))
                            {
                                foreach (var applyTo in prop.GetValue(null, null) as IEnumerable)
                                {
                                    infos.Add(new KeyValuePair<object, int>(applyTo, flag));
                                }
                            }
                        }
                    }
                }
            }
            return tagsMap;
        }

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

        public static string GetCodeOutputDirectory()
        {
            return CSObjectWrapEditor.GeneratorConfig.common_path;
        }
    }
}
