using System;
using System.Collections.Generic;
using System.Text;
using UnityEngine.UI.Collections;
// ReSharper disable All

namespace UnityEngine.UI
{
    /// <summary>
    /// Values of 'update' called on a Canvas update.
    /// </summary>
    /// <remarks> If modifying also modify m_CanvasUpdateProfilerStrings to match.</remarks>
    public enum CanvasUpdate
    {
        /// <summary>
        /// Called before layout.
        /// </summary>
        Prelayout = 0,
        /// <summary>
        /// Called for layout.
        /// </summary>
        Layout = 1,
        /// <summary>
        /// Called after layout.
        /// </summary>
        PostLayout = 2,
        /// <summary>
        /// Called before rendering.
        /// </summary>
        PreRender = 3,
        /// <summary>
        /// Called late, before render.
        /// </summary>
        LatePreRender = 4,
        /// <summary>
        /// Max enum value. Always last.
        /// </summary>
        MaxUpdateValue = 5
    }

    /// <summary>
    /// This is an element that can live on a Canvas.
    /// </summary>
    public interface ICanvasElement
    {
        /// <summary>
        /// Rebuild the element for the given stage.
        /// </summary>
        /// <param name="executing">The current CanvasUpdate stage being rebuild.</param>
        void Rebuild(CanvasUpdate executing);

        /// <summary>
        /// Get the transform associated with the ICanvasElement.
        /// </summary>
        Transform transform { get; }

        /// <summary>
        /// Callback sent when this ICanvasElement has completed layout.
        /// </summary>
        void LayoutComplete();

        /// <summary>
        /// Callback sent when this ICanvasElement has completed Graphic rebuild.
        /// </summary>
        void GraphicUpdateComplete();

        /// <summary>
        /// Used if the native representation has been destroyed.
        /// </summary>
        /// <returns>Return true if the element is considered destroyed.</returns>
        bool IsDestroyed();

        public Int32 GetStatsNameId();

    }

    /// <summary>
    /// A place where CanvasElements can register themselves for rebuilding.
    /// </summary>
    public class CanvasUpdateRegistry
    {
        #if UNITY_EDITOR
        public static bool EnableRebuildDebugLog = false;

        private Dictionary<String, List<String>> m_DebugInfo = new Dictionary<String, List<String>>();

        #endif

        private static CanvasUpdateRegistry s_Instance;

        private bool m_PerformingLayoutUpdate;
        private bool m_PerformingGraphicUpdate;

        // This list matches the CanvasUpdate enum above. Keep in sync
        private string[] m_CanvasUpdateProfilerStrings = new string[]
        {
            "CanvasUpdate.Prelayout",
            "CanvasUpdate.Layout",
            "CanvasUpdate.PostLayout",
            "CanvasUpdate.PreRender",
            "CanvasUpdate.LatePreRender"
        };
        private UGUIStatsSampleId[] m_CanvasUpdateStatsSampleId = new []
        {
            UGUIStatsSampleId.UGUI_CanvasUpdate_Prelayout,
            UGUIStatsSampleId.UGUI_CanvasUpdate_Layout,
            UGUIStatsSampleId.UGUI_CanvasUpdate_PostLayout,
            UGUIStatsSampleId.UGUI_CanvasUpdate_PreRender,
            UGUIStatsSampleId.UGUI_CanvasUpdate_LatePreRender,
        };

        private UInt16[] m_CanvasUpdateStatsMarkerTags = new []
        {
            (UInt16)UGUIStatsMarkerTags.UGUI_CanvasUpdate_Prelayout,
            (UInt16)UGUIStatsMarkerTags.UGUI_CanvasUpdate_Layout,
            (UInt16)UGUIStatsMarkerTags.UGUI_CanvasUpdate_PostLayout,
            (UInt16)UGUIStatsMarkerTags.UGUI_CanvasUpdate_PreRender,
            (UInt16)UGUIStatsMarkerTags.UGUI_CanvasUpdate_LatePreRender,
        };


        private const string m_CullingUpdateProfilerString = "ClipperRegistry.Cull";

        private readonly IndexedSet<ICanvasElement> m_LayoutRebuildQueue = new IndexedSet<ICanvasElement>();
        private readonly IndexedSet<ICanvasElement> m_GraphicRebuildQueue = new IndexedSet<ICanvasElement>();

        protected CanvasUpdateRegistry()
        {
            Canvas.willRenderCanvases += PerformUpdate;
        }

        /// <summary>
        /// Get the singleton registry instance.
        /// </summary>
        public static CanvasUpdateRegistry instance
        {
            get
            {
                if (s_Instance == null)
                    s_Instance = new CanvasUpdateRegistry();
                return s_Instance;
            }
        }

        private bool ObjectValidForUpdate(ICanvasElement element)
        {
            var valid = element != null;

            var isUnityObject = element is Object;
            if (isUnityObject)
                valid = (element as Object) != null; //Here we make use of the overloaded UnityEngine.Object == null, that checks if the native object is alive.

            return valid;
        }

        private void CleanInvalidItems()
        {
            // So MB's override the == operator for null equality, which checks
            // if they are destroyed. This is fine if you are looking at a concrete
            // mb, but in this case we are looking at a list of ICanvasElement
            // this won't forward the == operator to the MB, but just check if the
            // interface is null. IsDestroyed will return if the backend is destroyed.

            var layoutRebuildQueueCount = m_LayoutRebuildQueue.Count;
            for (int i = layoutRebuildQueueCount - 1; i >= 0; --i)
            {
                var item = m_LayoutRebuildQueue[i];
                if (item == null)
                {
                    m_LayoutRebuildQueue.RemoveAt(i);
                    continue;
                }

                if (item.IsDestroyed())
                {
                    m_LayoutRebuildQueue.RemoveAt(i);
                    item.LayoutComplete();
                }
            }

            var graphicRebuildQueueCount = m_GraphicRebuildQueue.Count;
            for (int i = graphicRebuildQueueCount - 1; i >= 0; --i)
            {
                var item = m_GraphicRebuildQueue[i];
                if (item == null)
                {
                    m_GraphicRebuildQueue.RemoveAt(i);
                    continue;
                }

                if (item.IsDestroyed())
                {
                    m_GraphicRebuildQueue.RemoveAt(i);
                    item.GraphicUpdateComplete();
                }
            }
        }
#if OSG_PROFILE && !OSG_STATS_DEEP_PROFILING
        private Dictionary<ICanvasElement, Int32> m_ProfilerInfoDict = new ();
        private Int32 GetProfilerNameId(ICanvasElement element)
        {
            var nameId = element.GetStatsNameId();
            if(nameId != -1)
            {
                return nameId;
            }
            else
            {
// #if UNITY_EDITOjR
                // Debug.LogFormat(LogType.Warning, LogOption.NoStacktrace, null, "CanvasUpdateRegistry: Unhandled ICanvasElement type {0}", element.GetType().Name);
// #endif
                if(!m_ProfilerInfoDict.TryGetValue(element, out nameId))
                {

                    String canvasName = element.transform.gameObject.name;
                    Int32 id = UGUIStats.RegisterCustomName(canvasName);

                    m_ProfilerInfoDict[element] = id;
                }
                return nameId;
            }
        }
#endif


#if UNITY_EDITOR
        private void DumpDebugInfo(ICanvasElement element)
        {
            String canvasName = "<UnknownCanvas>";
            if(element is Graphic graphic )
            {
                if (graphic.canvas)
                    canvasName = graphic.canvas.name;
            }

            List<String> elements= null;
            if (!m_DebugInfo.TryGetValue(canvasName, out elements))
            {
                elements = new List<String>();
                m_DebugInfo.Add(canvasName, elements);

            }
            var str = string.Format("{0} - {1}\n", element.GetType().Name, UnityEditor.Search.SearchUtils.GetHierarchyPath(element.transform.gameObject));
            if (!elements.Contains(str))
                elements.Add(str);
        }
#endif

        private static readonly Comparison<ICanvasElement> s_SortLayoutFunction = SortLayoutList;
        private void PerformUpdate()
        {
            UISystemProfilerApi.BeginSample(UISystemProfilerApi.SampleType.Layout);
            CleanInvalidItems();

            m_PerformingLayoutUpdate = true;

            m_LayoutRebuildQueue.Sort(s_SortLayoutFunction);
#if UNITY_EDITOR
            m_DebugInfo.Clear();
#endif

            for (int i = 0; i <= (int)CanvasUpdate.PostLayout; i++)
            {
                Int32 sampleIndex = -1;
                UGUIStats.BeginSample_Light(m_CanvasUpdateStatsSampleId[i], ref sampleIndex);

                for (int j = 0; j < m_LayoutRebuildQueue.Count; j++)
                {
                    var rebuild = m_LayoutRebuildQueue[j];
                    try
                    {
                        if (ObjectValidForUpdate(rebuild))
                        {
#if UNITY_EDITOR
                            if(EnableRebuildDebugLog)
                            {
                                DumpDebugInfo(rebuild);
                            }
#endif
#if OSG_PROFILE && !OSG_STATS_DEEP_PROFILING
                            Int32 sampleIndexName = -1;
                            if (!UGUIStats.LightSampleOnly())
                            {
                                var nameId = GetProfilerNameId(rebuild);
                                UGUIStats.BeginSample(m_CanvasUpdateStatsSampleId[i], nameId, ref sampleIndexName);
                                UGUIStats.AddMarkerStringId(m_CanvasUpdateStatsMarkerTags[i], nameId);
                            }
#endif
                            rebuild.Rebuild((CanvasUpdate)i);
#if OSG_PROFILE && !OSG_STATS_DEEP_PROFILING
                            if (!UGUIStats.LightSampleOnly())
                            {
                                UGUIStats.EndSampleByIndex(ref sampleIndexName);
                            }
#endif
                        }
                    }
                    catch (Exception e)
                    {
                        Debug.LogException(e, rebuild.transform);
                    }
                }
                UGUIStats.EndSampleByIndex_Light(ref sampleIndex);
            }

            for (int i = 0; i < m_LayoutRebuildQueue.Count; ++i)
                m_LayoutRebuildQueue[i].LayoutComplete();

            m_LayoutRebuildQueue.Clear();
            m_PerformingLayoutUpdate = false;

#if UNITY_EDITOR
            if (EnableRebuildDebugLog && m_DebugInfo.Count > 0)
            {
                StringBuilder sb = new StringBuilder();
                sb.AppendFormat("[#{0}][CanvasLayout]: {1}\n", Time.frameCount , m_DebugInfo.Count);
                foreach(var pair in m_DebugInfo)
                {
                    sb.AppendFormat("Canvas: {0}\n", pair.Key);
                    foreach(string s in pair.Value)
                    {
                        sb.AppendLine(s);
                    }
                }
                Debug.LogFormat(LogType.Log, LogOption.NoStacktrace, null, sb.ToString());
                m_DebugInfo.Clear();
            }
#endif


            UISystemProfilerApi.EndSample(UISystemProfilerApi.SampleType.Layout);
            UISystemProfilerApi.BeginSample(UISystemProfilerApi.SampleType.Render);

            // now layout is complete do culling...
            Int32 cullSampleIndex = -1;
            UGUIStats.BeginSample(UGUIStatsSampleId.UGUI_ClipperRegistry_Cull, ref cullSampleIndex);
            ClipperRegistry.instance.Cull();
            UGUIStats.EndSampleByIndex(ref cullSampleIndex);

            m_PerformingGraphicUpdate = true;

            for (var i = (int)CanvasUpdate.PreRender; i < (int)CanvasUpdate.MaxUpdateValue; i++)
            {
                Int32 sampleIndex = -1;
                UGUIStats.BeginSample_Light(m_CanvasUpdateStatsSampleId[i], ref sampleIndex);
                for (var k = 0; k < m_GraphicRebuildQueue.Count; k++)
                {
                    try
                    {
                        var element = m_GraphicRebuildQueue[k];
                        if (ObjectValidForUpdate(element))
                        {
#if UNITY_EDITOR
                            if(EnableRebuildDebugLog)
                            {
                                DumpDebugInfo(element);
                            }
#endif
#if OSG_PROFILE && !OSG_STATS_DEEP_PROFILING
                            Int32 sampleIndexName = -1;
                            if (!UGUIStats.LightSampleOnly())
                            {
                                var nameId = GetProfilerNameId(element);
                                UGUIStats.BeginSample(m_CanvasUpdateStatsSampleId[i], nameId, ref sampleIndexName);
                                UGUIStats.AddMarkerStringId(m_CanvasUpdateStatsMarkerTags[i], nameId);
                            }
#endif
                            element.Rebuild((CanvasUpdate)i);

#if OSG_PROFILE && !OSG_STATS_DEEP_PROFILING
                            if (!UGUIStats.LightSampleOnly())
                            {
                                UGUIStats.EndSampleByIndex(ref sampleIndexName);
                            }
#endif
                        }
                    }
                    catch (Exception e)
                    {
                        Debug.LogException(e, m_GraphicRebuildQueue[k].transform);
                    }
                }
                UGUIStats.EndSampleByIndex_Light(ref sampleIndex);
            }

            for (int i = 0; i < m_GraphicRebuildQueue.Count; ++i)
                m_GraphicRebuildQueue[i].GraphicUpdateComplete();

            m_GraphicRebuildQueue.Clear();
            m_PerformingGraphicUpdate = false;
            UISystemProfilerApi.EndSample(UISystemProfilerApi.SampleType.Render);

#if UNITY_EDITOR
            if (EnableRebuildDebugLog && m_DebugInfo.Count > 0)
            {
                StringBuilder sb = new StringBuilder();
                sb.AppendFormat("[#{0}][CanvasRebuild]: {1}\n", Time.frameCount , m_DebugInfo.Count);
                foreach(var pair in m_DebugInfo)
                {
                    sb.AppendFormat("Canvas: {0}\n", pair.Key);
                    foreach(string s in pair.Value)
                    {
                        sb.AppendLine(s);
                    }
                }
                Debug.LogFormat(LogType.Log, LogOption.NoStacktrace, null, sb.ToString());
                m_DebugInfo.Clear();
            }
#endif
        }

        private static int ParentCount(Transform child)
        {
            if (child == null)
                return 0;

            var parent = child.parent;
            int count = 0;
            while (parent != null)
            {
                count++;
                parent = parent.parent;
            }
            return count;
        }

        private static int SortLayoutList(ICanvasElement x, ICanvasElement y)
        {
            Transform t1 = x.transform;
            Transform t2 = y.transform;

            return ParentCount(t1) - ParentCount(t2);
        }

        /// <summary>
        /// Try and add the given element to the layout rebuild list.
        /// Will not return if successfully added.
        /// </summary>
        /// <param name="element">The element that is needing rebuilt.</param>
        public static void RegisterCanvasElementForLayoutRebuild(ICanvasElement element)
        {
            instance.InternalRegisterCanvasElementForLayoutRebuild(element);
        }

        /// <summary>
        /// Try and add the given element to the layout rebuild list.
        /// </summary>
        /// <param name="element">The element that is needing rebuilt.</param>
        /// <returns>
        /// True if the element was successfully added to the rebuilt list.
        /// False if either already inside a Graphic Update loop OR has already been added to the list.
        /// </returns>
        public static bool TryRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
        {
            return instance.InternalRegisterCanvasElementForLayoutRebuild(element);
        }

        private bool InternalRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
        {
            if (m_LayoutRebuildQueue.Contains(element))
                return false;

            /* TODO: this likely should be here but causes the error to show just resizing the game view (case 739376)
            if (m_PerformingLayoutUpdate)
            {
                Debug.LogError(string.Format("Trying to add {0} for layout rebuild while we are already inside a layout rebuild loop. This is not supported.", element));
                return false;
            }*/

            return m_LayoutRebuildQueue.AddUnique(element);
        }

        /// <summary>
        /// Try and add the given element to the rebuild list.
        /// Will not return if successfully added.
        /// </summary>
        /// <param name="element">The element that is needing rebuilt.</param>
        public static void RegisterCanvasElementForGraphicRebuild(ICanvasElement element)
        {
            instance.InternalRegisterCanvasElementForGraphicRebuild(element);
        }

        /// <summary>
        /// Try and add the given element to the rebuild list.
        /// </summary>
        /// <param name="element">The element that is needing rebuilt.</param>
        /// <returns>
        /// True if the element was successfully added to the rebuilt list.
        /// False if either already inside a Graphic Update loop OR has already been added to the list.
        /// </returns>
        public static bool TryRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
        {
            return instance.InternalRegisterCanvasElementForGraphicRebuild(element);
        }

        private bool InternalRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
        {
            if (m_PerformingGraphicUpdate)
            {
                Debug.LogError(string.Format("Trying to add {0} for graphic rebuild while we are already inside a graphic rebuild loop. This is not supported.", element));
                return false;
            }

            return m_GraphicRebuildQueue.AddUnique(element);
        }

        /// <summary>
        /// Remove the given element from both the graphic and the layout rebuild lists.
        /// </summary>
        /// <param name="element"></param>
        public static void UnRegisterCanvasElementForRebuild(ICanvasElement element)
        {
            instance.InternalUnRegisterCanvasElementForLayoutRebuild(element);
            instance.InternalUnRegisterCanvasElementForGraphicRebuild(element);
        }

        /// <summary>
        /// Disable the given element from both the graphic and the layout rebuild lists.
        /// </summary>
        /// <param name="element"></param>
        public static void DisableCanvasElementForRebuild(ICanvasElement element)
        {
            instance.InternalDisableCanvasElementForLayoutRebuild(element);
            instance.InternalDisableCanvasElementForGraphicRebuild(element);
        }

        private void InternalUnRegisterCanvasElementForLayoutRebuild(ICanvasElement element)
        {
            if (m_PerformingLayoutUpdate)
            {
                Debug.LogError(string.Format("Trying to remove {0} from rebuild list while we are already inside a rebuild loop. This is not supported.", element));
                return;
            }

            element.LayoutComplete();
            instance.m_LayoutRebuildQueue.Remove(element);
        }

        private void InternalUnRegisterCanvasElementForGraphicRebuild(ICanvasElement element)
        {
            if (m_PerformingGraphicUpdate)
            {
                Debug.LogError(string.Format("Trying to remove {0} from rebuild list while we are already inside a rebuild loop. This is not supported.", element));
                return;
            }
            element.GraphicUpdateComplete();
            instance.m_GraphicRebuildQueue.Remove(element);
        }

        private void InternalDisableCanvasElementForLayoutRebuild(ICanvasElement element)
        {
            if (m_PerformingLayoutUpdate)
            {
                Debug.LogError(string.Format("Trying to remove {0} from rebuild list while we are already inside a rebuild loop. This is not supported.", element));
                return;
            }

            element.LayoutComplete();
            instance.m_LayoutRebuildQueue.DisableItem(element);
        }

        private void InternalDisableCanvasElementForGraphicRebuild(ICanvasElement element)
        {
            if (m_PerformingGraphicUpdate)
            {
                Debug.LogError(string.Format("Trying to remove {0} from rebuild list while we are already inside a rebuild loop. This is not supported.", element));
                return;
            }
            element.GraphicUpdateComplete();
            instance.m_GraphicRebuildQueue.DisableItem(element);
        }

        /// <summary>
        /// Are graphics layouts currently being calculated..
        /// </summary>
        /// <returns>True if the rebuild loop is CanvasUpdate.Prelayout, CanvasUpdate.Layout or CanvasUpdate.Postlayout</returns>
        public static bool IsRebuildingLayout()
        {
            return instance.m_PerformingLayoutUpdate;
        }

        /// <summary>
        /// Are graphics currently being rebuild.
        /// </summary>
        /// <returns>True if the rebuild loop is CanvasUpdate.PreRender or CanvasUpdate.Render</returns>
        public static bool IsRebuildingGraphics()
        {
            return instance.m_PerformingGraphicUpdate;
        }
    }
}
