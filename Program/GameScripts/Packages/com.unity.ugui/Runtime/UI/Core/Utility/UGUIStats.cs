using System;
using UnityEngine.Profiling;

namespace UnityEngine.UI
{
    /// <summary>
    ///     修改必须同步修改 StatsMarkerTags 中UGUI的专属段
    /// </summary>
    public enum UGUIStatsMarkerTags : UInt16
    {
        UGUI_Begin = 17,
        UGUI_CanvasUpdate_Prelayout = 17,
        UGUI_CanvasUpdate_Layout,
        UGUI_CanvasUpdate_PostLayout,
        UGUI_CanvasUpdate_PreRender,
        UGUI_CanvasUpdate_LatePreRender,

        UGUI_End = 33,
    }

    /// <summary>
    ///     修改必须同步修改 StatsSampleId 中UGUI的专属段
    /// </summary>
    public enum UGUIStatsSampleId : Int16
    {
        UGUI_Begin,
        UGUI = 301,
        UGUI_CanvasUpdate_Prelayout,
        UGUI_CanvasUpdate_Layout,
        UGUI_CanvasUpdate_PostLayout,
        UGUI_CanvasUpdate_PreRender,
        UGUI_CanvasUpdate_LatePreRender,
        UGUI_ClipperRegistry_Cull,
        UGUI_TextGenerator_Populate,
        UGUI_UpdateClipParent,
        UGUI_OnEnable,
        UGUI_OnDisabled,


        UGUI_Max = 400,
    }

    public class UGUIStats
    {
        private static Func<Int16, string, Int32> beginSampleCallback;
        private static Func<Int16, Int32, Int32> beginSampleNameIdCallback;
        private static Func<Int16, Int32, Int32> beginSampleNameIdLightCallback;
        private static Action<Int32> endSampleCallback;
        private static Func<Int16, string, Int32> beginSampleLightCallback;
        private static Action<Int32> endSampleLightCallback;
        private static Func<string, Int32> registerCustomSampleCallback;

        private static Action<UInt16, string> addMarkerStringCallback;
        private static Action<UInt16, int> addMarkerStringIdCallback;

        [System.Diagnostics.Conditional("OSG_PROFILE")]
        public static void InitUGUIStats(
            Func<Int16, string, Int32> beginCallback,
            Func<Int16, Int32, Int32> beginSampleNameId,
            Action<Int32> endCallback,
            Func<Int16, string, Int32> beginLightCallback,
            Func<Int16, Int32, Int32> beginSampleNameIdLight,
            Action<Int32> endLightCallback,
            Action<UInt16, string> markerStringCallback,
            Action<UInt16, int> markerStringIdCallback,
            Func<string, Int32> registerCustomSample
        )
        {
#if !OSG_STATS_DEEP_PROFILING
            beginSampleCallback = beginCallback;
            endSampleCallback = endCallback;
            beginSampleNameIdCallback = beginSampleNameId;
            beginSampleLightCallback = beginLightCallback;
            beginSampleNameIdLightCallback = beginSampleNameIdLight;
            endSampleLightCallback = endLightCallback;
            addMarkerStringCallback = markerStringCallback;
            addMarkerStringIdCallback = markerStringIdCallback;
            registerCustomSampleCallback = registerCustomSample;
#endif
        }

        public static bool LightSampleOnly()
        {
            return beginSampleCallback == null;
        }

        [System.Diagnostics.Conditional("OSG_PROFILE")]
        public static void BeginSample(UGUIStatsSampleId sampleId, ref Int32 sampleIndex)
        {
#if !OSG_STATS_DEEP_PROFILING
            if (beginSampleCallback != null)
            {
                sampleIndex = beginSampleCallback((Int16) sampleId, null);
            }
            else
#endif
            {
                sampleIndex = -1;
            }
        }

        [System.Diagnostics.Conditional("OSG_PROFILE")]
        public static void BeginSample(UGUIStatsSampleId sampleId, string customName, ref Int32 sampleIndex)
        {
#if !OSG_STATS_DEEP_PROFILING
            if (beginSampleCallback != null)
            {
                sampleIndex = beginSampleCallback((Int16) sampleId, customName);
            }
            else
#endif
            {
                sampleIndex = -1;
            }
        }
        [System.Diagnostics.Conditional("OSG_PROFILE")]
        public static void BeginSample(UGUIStatsSampleId sampleId, Int32 customNameId, ref Int32 sampleIndex)
        {
#if !OSG_STATS_DEEP_PROFILING
            if (beginSampleNameIdCallback != null)
            {
                sampleIndex = beginSampleNameIdCallback((Int16) sampleId, customNameId);
            }
            else
#endif
            {
                sampleIndex = -1;
            }
        }

        [System.Diagnostics.Conditional("OSG_PROFILE")]
        public static void EndSampleByIndex(ref Int32 sampleIndex)
        {
#if !OSG_STATS_DEEP_PROFILING
            if (endSampleCallback != null)
                endSampleCallback(sampleIndex);
#endif
            sampleIndex = -1;
        }

        [System.Diagnostics.Conditional("OSG_PROFILE")]
        public static void BeginSample_Light(UGUIStatsSampleId sampleId, ref Int32 sampleIndex)
        {
#if !OSG_STATS_DEEP_PROFILING
            if (beginSampleLightCallback != null)
            {
                sampleIndex = beginSampleLightCallback((Int16) sampleId, null);
            }
            else
#endif
            {
                sampleIndex = -1;
            }
        }

        [System.Diagnostics.Conditional("OSG_PROFILE")]
        public static void BeginSample_Light(UGUIStatsSampleId sampleId, string customName, ref Int32 sampleIndex)
        {
#if !OSG_STATS_DEEP_PROFILING
            if (beginSampleLightCallback != null)
            {
                sampleIndex = beginSampleLightCallback((Int16) sampleId, customName);
            }
            else
#endif
            {
                sampleIndex = -1;
            }
        }

        [System.Diagnostics.Conditional("OSG_PROFILE")]
        public static void EndSampleByIndex_Light(ref Int32 sampleIndex)
        {
#if !OSG_STATS_DEEP_PROFILING
            if (endSampleLightCallback != null)
                endSampleLightCallback(sampleIndex);
#endif
            sampleIndex = -1;
        }

        public static Int32 RegisterCustomName(string customName)
        {
#if !OSG_STATS_DEEP_PROFILING
            if (registerCustomSampleCallback != null)
                return registerCustomSampleCallback(customName);

#endif
            return -1;
        }


        [System.Diagnostics.Conditional("OSG_PROFILE")]
        public static void AddMarkerString(ushort tag, string str)
        {
#if !OSG_STATS_DEEP_PROFILING
            if (addMarkerStringCallback != null)
                addMarkerStringCallback(tag, str);
#endif
        }

        [System.Diagnostics.Conditional("OSG_PROFILE")]
        public static void AddMarkerStringId(ushort tag, int stringId)
        {
#if !OSG_STATS_DEEP_PROFILING
            if (addMarkerStringIdCallback != null)
                addMarkerStringIdCallback(tag, stringId);
#endif
        }
    }
}
