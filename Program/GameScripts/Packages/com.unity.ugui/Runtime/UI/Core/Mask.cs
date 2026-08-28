using System;
using UnityEditor;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Rendering;
using UnityEngine.Serialization;

namespace UnityEngine.UI
{
    [AddComponentMenu("UI/Mask", 13)]
#if !CI_RES_PROCESS_MODE
    [ExecuteAlways]
#endif
    [RequireComponent(typeof(RectTransform))]
    [DisallowMultipleComponent]
    /// <summary>
    /// A component for masking children elements.
    /// </summary>
    /// <remarks>
    /// By using this element any children elements that have masking enabled will mask where a sibling Graphic would write 0 to the stencil buffer.
    /// </remarks>
    public class Mask : UIBehaviour, ICanvasRaycastFilter, IMaterialModifier
    {
        [SerializeField]
        private bool m_ShowMaskGraphic = true;
        [SerializeField]
        private bool m_EnableSoftMask = false;
        [SerializeField]
        private Texture2D m_SoftMask = null;

        public struct SoftMaskParams
        {
            public Vector4 SoftMaskRect;
            public Vector4 SoftMaskSize;
            public SoftMaskMode SoftMaskMode;
            public static readonly SoftMaskParams DefaultSotMaskParams = new()
            {
                SoftMaskRect = Vector4.zero,
                SoftMaskSize = Vector4.zero,
                SoftMaskMode =  SoftMaskMode.Horizontal,
            };

            // 1. 重载 == 运算符
            public static bool operator ==(SoftMaskParams left, SoftMaskParams right)
            {
                return left.SoftMaskRect == right.SoftMaskRect && left.SoftMaskSize == right.SoftMaskSize && left.SoftMaskMode == right.SoftMaskMode;
            }
            // 2. 必须同时重载 != 运算符
            public static bool operator !=(SoftMaskParams left, SoftMaskParams right)
            {
                return !(left == right);
            }
        }

        public enum SoftMaskMode
        {
            Horizontal,
            Vertical,
        }

        public enum SoftMaskClipRatioMode
        {
            FixRectSize,
            FixRectRatio,
        }

        [SerializeField]
        private SoftMaskMode m_SoftMaskMode = SoftMaskMode.Horizontal;

        [SerializeField]
        private SoftMaskClipRatioMode m_SoftMaskClipRatioMode = SoftMaskClipRatioMode.FixRectSize;

        [SerializeField]
        private Vector4 m_SoftMaskSize = Vector4.zero;

        [SerializeField]
        private bool m_EnableForChildren = true;

        protected SoftMaskParams m_SoftMaskParams = new SoftMaskParams()
        {
            SoftMaskRect = Vector4.zero,
            SoftMaskSize = Vector4.zero,
            SoftMaskMode = SoftMaskMode.Horizontal,
        };
        // protected Vector4 m_SoftMaskRect = Vector4.zero;
        /// <summary>
        /// Show the graphic that is associated with the Mask render area.
        /// </summary>
        public bool showMaskGraphic
        {
            get { return m_ShowMaskGraphic; }
            set
            {
                if (m_ShowMaskGraphic == value)
                    return;

                m_ShowMaskGraphic = value;
                if (graphic != null)
                    graphic.SetMaterialDirty();
            }
        }

        // sgame_unity2021_predev begin
        /// <summary>
        /// 是否需要屏蔽mask的PopInstruction(二次渲染的功能)
        /// </summary>
        ///
        [SerializeField]
        private bool m_BlockMaskPopInstruction = false;
        public bool blockMaskPopInstruction
        {
            get { return m_BlockMaskPopInstruction; }
            set
            {
                if (m_BlockMaskPopInstruction == value)
                    return;

                m_BlockMaskPopInstruction = value;
                if (graphic != null)
                    graphic.SetMaterialDirty();
            }
        }

        public Vector4 softMaskSize
        {
            get { return m_SoftMaskSize; }
            set
            {
                if (m_SoftMaskSize == value)
                    return;

                m_SoftMaskSize = value;
            }
        }
        public SoftMaskMode softMaskMode
        {
            get { return m_SoftMaskMode; }
            set
            {
                if (m_SoftMaskMode == value)
                    return;

                m_SoftMaskMode = value;
            }
        }


        // sgame_unity2021_predev end

        public bool enableSoftMask
        {
            get { return m_EnableSoftMask; }
            set
            {
                if (m_EnableSoftMask == value)
                    return;

                m_EnableSoftMask = value;

                if(!IsActive())
                    return;

                if (graphic != null)
                    graphic.SetMaterialDirty();

                if (m_EnableForChildren)
                {
                    MaskUtilities.NotifyUpdateSoftMaskStateChanged(this);
                }
            }
        }

        public Texture2D softMask
        {
            get { return m_SoftMask; }
            set
            {
                if (m_SoftMask == value)
                    return;

                m_SoftMask = value;
                if (graphic != null)
                    graphic.SetMaterialDirty();
            }
        }
        [NonSerialized]
        private Graphic m_Graphic;

        /// <summary>
        /// The graphic associated with the Mask.
        /// </summary>
        public Graphic graphic
        {
            get { return m_Graphic ?? (m_Graphic = GetComponent<Graphic>()); }
        }

        [NonSerialized]
        private Material m_MaskMaterial;

        [NonSerialized]
        private Material m_UnmaskMaterial;

        protected Mask()
        {}

        public virtual bool MaskEnabled() { return IsActive() && graphic != null; }

        private struct DelayedSoftMaskCanvasUpdate
        {
            public Canvas Canvas;
            public int TargetFrame;
        }

        private static readonly List<DelayedSoftMaskCanvasUpdate> s_DelayedSoftMaskCanvasUpdates = new List<DelayedSoftMaskCanvasUpdate>(4);
        private static bool s_DelayedSoftMaskCanvasUpdateRegistered;

        internal static void RequestDelayedSoftMaskUpdate(Canvas canvas)
        {
            if (canvas == null)
                return;

            var targetFrame = Time.frameCount + 1;
            for (int i = 0; i < s_DelayedSoftMaskCanvasUpdates.Count; i++)
            {
                var update = s_DelayedSoftMaskCanvasUpdates[i];
                if (update.Canvas != canvas)
                    continue;

                update.TargetFrame = targetFrame;
                s_DelayedSoftMaskCanvasUpdates[i] = update;
                return;
            }

            s_DelayedSoftMaskCanvasUpdates.Add(new DelayedSoftMaskCanvasUpdate
            {
                Canvas = canvas,
                TargetFrame = targetFrame,
            });
            RegisterDelayedSoftMaskCanvasUpdate();
        }

        internal static bool CancelDelayedSoftMaskUpdate(Canvas canvas)
        {
            if (canvas == null)
                return false;

            for (int i = 0; i < s_DelayedSoftMaskCanvasUpdates.Count; i++)
            {
                if (s_DelayedSoftMaskCanvasUpdates[i].Canvas != canvas)
                    continue;

                s_DelayedSoftMaskCanvasUpdates.RemoveAt(i);
                if (s_DelayedSoftMaskCanvasUpdates.Count == 0)
                    UnregisterDelayedSoftMaskCanvasUpdate();
                return true;
            }

            return false;
        }

        private static void RegisterDelayedSoftMaskCanvasUpdate()
        {
            if (s_DelayedSoftMaskCanvasUpdateRegistered)
                return;

            Canvas.preWillRenderCanvases += ProcessDelayedSoftMaskCanvasUpdates;
            s_DelayedSoftMaskCanvasUpdateRegistered = true;
        }

        private static void UnregisterDelayedSoftMaskCanvasUpdate()
        {
            if (!s_DelayedSoftMaskCanvasUpdateRegistered)
                return;

            Canvas.preWillRenderCanvases -= ProcessDelayedSoftMaskCanvasUpdates;
            s_DelayedSoftMaskCanvasUpdateRegistered = false;
        }

        private static void ProcessDelayedSoftMaskCanvasUpdates()
        {
            var currentFrame = Time.frameCount;
            for (int i = s_DelayedSoftMaskCanvasUpdates.Count - 1; i >= 0; i--)
            {
                var update = s_DelayedSoftMaskCanvasUpdates[i];
                if (update.Canvas == null)
                {
                    s_DelayedSoftMaskCanvasUpdates.RemoveAt(i);
                    continue;
                }

                if (update.TargetFrame > currentFrame)
                    continue;

                s_DelayedSoftMaskCanvasUpdates.RemoveAt(i);
                if (update.Canvas.isActiveAndEnabled)
                    UpdateSoftMasksForCanvas(update.Canvas);
            }

            if (s_DelayedSoftMaskCanvasUpdates.Count == 0)
                UnregisterDelayedSoftMaskCanvasUpdate();
        }


        private static readonly HashSet<GameObject> s_MaskHostSet = new HashSet<GameObject>();


        private static void UpdateSoftMasksForCanvas(Canvas canvas)
        {
            // 两阶段 Canvas 级整体刷新：先重置所有 Mask 的 rect 并收集 host，再刷新非 host 的 maskable。
            // 复用 s_MaskHostSet 避免 GC；具体循环抽到 MaskUtilities，避免在此重复维护一套实现。
            s_MaskHostSet.Clear();
            MaskUtilities.ResetSoftMaskRectAndCollectHosts(canvas, s_MaskHostSet);
            MaskUtilities.UpdateSoftMaskForMaskables(canvas, s_MaskHostSet);
            s_MaskHostSet.Clear();
        }

        // 静态状态复位的统一入口，Editor / Runtime 两个钩子共用，避免漏改其一导致行为不一致。
        // 必须显式 -= 解订阅：开启 DisableDomainReload 时静态字段不会重置，只清标记位不解订阅
        // 会在 Canvas.preWillRenderCanvases 上累积重复回调。s_MaskHostSet 也要 Clear，清掉旧引用。
        private static void ResetStaticDelayedSoftMaskState()
        {
            Canvas.preWillRenderCanvases -= ProcessDelayedSoftMaskCanvasUpdates;
            s_DelayedSoftMaskCanvasUpdates.Clear();
            s_DelayedSoftMaskCanvasUpdateRegistered = false;
            s_MaskHostSet.Clear();
        }

#if UNITY_EDITOR
        // domain reload / 退出 Play 后复位静态状态，避免残留旧 Canvas 引用、订阅状态不一致。
        [UnityEditor.InitializeOnLoadMethod]
        private static void ResetStaticDelayedSoftMaskState_Editor()
        {
            ResetStaticDelayedSoftMaskState();
        }
#endif

        // 兜底：开启 DisableDomainReload 的项目，进入 Play 时也强制复位静态调度器。
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
        private static void ResetStaticDelayedSoftMaskState_Runtime()
        {
            ResetStaticDelayedSoftMaskState();
        }

        [Obsolete("Not used anymore.")]
        public virtual void OnSiblingGraphicEnabledDisabled() {}

        protected override void OnEnable()
        {
            base.OnEnable();
            if (graphic != null)
            {
                if (graphic.color.a <= 0)
                {
                    var color = graphic.color;
                    color.a = 1.0f / 255.0f;
                    graphic.color = color;
                }
                // sgame_unity2021_predev
                //graphic.canvasRenderer.hasPopInstruction = true;
                graphic.canvasRenderer.hasPopInstruction = !m_BlockMaskPopInstruction;
                graphic.SetMaterialDirty();
                graphic.RegisterMaterialModifier(this);

                // Default the graphic to being the maskable graphic if its found.
                // if (graphic is MaskableGraphic)
                //     (graphic as MaskableGraphic).isMaskingGraphic = true;
            }
            if (m_EnableForChildren)
            {
                MaskUtilities.NotifyStencilStateChanged(this);
            }
        }

        protected override void OnDisable()
        {
            // we call base OnDisable first here
            // as we need to have the IsActive return the
            // correct value when we notify the children
            // that the mask state has changed.
            base.OnDisable();
            if (graphic != null)
            {
                graphic.SetMaterialDirty();
                graphic.canvasRenderer.hasPopInstruction = false;
                graphic.canvasRenderer.popMaterialCount = 0;
                graphic.UnregisterMaterialModifier(this);

                // if (graphic is MaskableGraphic)
                //     (graphic as MaskableGraphic).isMaskingGraphic = false;
            }

            StencilMaterial.Remove(m_MaskMaterial);
            m_MaskMaterial = null;
            StencilMaterial.Remove(m_UnmaskMaterial);
            m_UnmaskMaterial = null;

            if (m_EnableForChildren)
            {
                MaskUtilities.NotifyStencilStateChanged(this);
            }
        }

#if UNITY_EDITOR
        protected override void OnValidate()
        {
            base.OnValidate();

            if (!IsActive())
                return;

            if (graphic != null)
            {
                // Default the graphic to being the maskable graphic if its found.
                // if (graphic is MaskableGraphic)
                //     (graphic as MaskableGraphic).isMaskingGraphic = true;

                graphic.SetMaterialDirty();
            }
            // MaskUtilities.NotifyStencilStateChanged(this);
        }

        protected override void OnRectTransformDimensionsChange()
        {
            base.OnRectTransformDimensionsChange();
#if !CI_RES_PROCESS_MODE
            if(!Application.isPlaying)
                UpdateSoftMask();
#endif
        }

        protected Vector3 lastPosition = Vector3.zero;

        protected void Update()
        {
#if !CI_RES_PROCESS_MODE
            if (!Application.isPlaying)
            {
                if (lastPosition != transform.position)
                {
                    lastPosition = transform.position;
                    UpdateSoftMask();
                }
            }
#endif
        }

#endif

        [ContextMenu("UpdateSoftMask")]
        public void UpdateSoftMask()
        {
            if (m_EnableSoftMask && IsActive())
            {
                MaskUtilities.NotifyUpdateSoftMaskStateChanged(this);
            }
        }

        public virtual bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera)
        {
            if (!isActiveAndEnabled)
                return true;

            return RectTransformUtility.RectangleContainsScreenPoint(rectTransform, sp, eventCamera);
        }

        /// Stencil calculation time!
        public virtual Material GetModifiedMaterial(Material baseMaterial)
        {
            if (!MaskEnabled())
                return baseMaterial;

            var rootSortCanvas = MaskUtilities.FindRootSortOverrideCanvas(transform);
            var stencilDepth = MaskUtilities.GetStencilDepth(transform, rootSortCanvas);
            if (stencilDepth >= 8)
            {
                Debug.LogWarning("Attempting to use a stencil mask with depth > 8", gameObject);
                return baseMaterial;
            }

            int desiredStencilBit = 1 << stencilDepth;

            // if we are at the first level...
            // we want to destroy what is there
            if (desiredStencilBit == 1)
            {
                var maskMaterial = StencilMaterial.Add(baseMaterial, 1, StencilOp.Replace, CompareFunction.Always, m_ShowMaskGraphic ? ColorWriteMask.All : 0);
                StencilMaterial.Remove(m_MaskMaterial);
                m_MaskMaterial = maskMaterial;

                // sgame_unity2021_predev
                if (!m_BlockMaskPopInstruction)
                {
                    var unmaskMaterial = StencilMaterial.Add(baseMaterial, 1, StencilOp.Zero, CompareFunction.Always, 0);
                    StencilMaterial.Remove(m_UnmaskMaterial);
                    m_UnmaskMaterial = unmaskMaterial;
                    graphic.canvasRenderer.popMaterialCount = 1;
                    graphic.canvasRenderer.SetPopMaterial(m_UnmaskMaterial, 0);
                }

                return m_MaskMaterial;
            }

            //otherwise we need to be a bit smarter and set some read / write masks
            var maskMaterial2 = StencilMaterial.Add(baseMaterial, desiredStencilBit | (desiredStencilBit - 1), StencilOp.Replace, CompareFunction.Equal, m_ShowMaskGraphic ? ColorWriteMask.All : 0, desiredStencilBit - 1, desiredStencilBit | (desiredStencilBit - 1), MaterialModifyParams.defaultMaterialModifyParams);
            StencilMaterial.Remove(m_MaskMaterial);
            m_MaskMaterial = maskMaterial2;

            // sgame_unity2021_predev
            if (!m_BlockMaskPopInstruction)
            {
                graphic.canvasRenderer.hasPopInstruction = true;
                var unmaskMaterial2 = StencilMaterial.Add(baseMaterial, desiredStencilBit - 1, StencilOp.Replace, CompareFunction.Equal, 0, desiredStencilBit - 1, desiredStencilBit | (desiredStencilBit - 1), MaterialModifyParams.defaultMaterialModifyParams);
                StencilMaterial.Remove(m_UnmaskMaterial);
                m_UnmaskMaterial = unmaskMaterial2;
                graphic.canvasRenderer.popMaterialCount = 1;
                graphic.canvasRenderer.SetPopMaterial(m_UnmaskMaterial, 0);
            }

            return m_MaskMaterial;
        }

        static Vector3[] worldCornersTemp = new Vector3[4];
        static Vector3[] canvasCornersTemp = new Vector3[4];
        static Vector3[] canvasCornerScreenUVsTemp = new Vector3[4];

        public void ResetSoftMaskRect()
        {
            m_SoftMaskParams.SoftMaskRect = Vector4.zero;
        }

        public SoftMaskParams GetSoftMaskRect(bool forceRefresh = false)
        {
            if (m_SoftMaskParams.SoftMaskRect.Equals(Vector4.zero) || forceRefresh)
            {
                Canvas canvas = null;
                var list = ListPool<Canvas>.Get();
                gameObject.GetComponentsInParent(false, list);
                if (list.Count > 0)
                    canvas = list[list.Count - 1];
                ListPool<Canvas>.Release(list);

                if (canvas == null)
                    return SoftMaskParams.DefaultSotMaskParams;


                rectTransform.GetWorldCorners(worldCornersTemp);
                var canvasTransform = canvas.GetComponent<Transform>();
                for (int i = 0; i < canvasCornersTemp.Length; ++i)
                    canvasCornersTemp[i] = canvasTransform.InverseTransformPoint(worldCornersTemp[i]);


                if (canvas.worldCamera != null)
                {
                    for (int i = 0; i < canvasCornerScreenUVsTemp.Length; i++)
                    {
                        canvasCornerScreenUVsTemp[i] = canvas.worldCamera.WorldToScreenPoint(worldCornersTemp[i]);
                        canvasCornerScreenUVsTemp[i].x /= canvas.worldCamera.pixelWidth;
                        canvasCornerScreenUVsTemp[i].y /= canvas.worldCamera.pixelHeight;
                    }
                }

                var canvasScaler = canvas.GetComponent<CanvasScaler>();
                if (canvasScaler != null)
                {
                    if (m_SoftMaskClipRatioMode == SoftMaskClipRatioMode.FixRectSize)
                    {
                        m_SoftMaskParams.SoftMaskSize = new Vector4(m_SoftMaskSize.x / rectTransform.rect.height + 0.0001f, m_SoftMaskSize.y / rectTransform.rect.height + 0.0001f,
                            m_SoftMaskSize.z / rectTransform.rect.width + 0.0001f, m_SoftMaskSize.w / rectTransform.rect.width + 0.0001f);
                    }
                    else
                    {
                        m_SoftMaskParams.SoftMaskSize = new Vector4(Math.Clamp(m_SoftMaskSize.x + 0.0001f, 0, 1) , Math.Clamp(m_SoftMaskSize.y + 0.0001f, 0, 1),
                            Math.Clamp(m_SoftMaskSize.z + 0.0001f, 0, 1), Math.Clamp(m_SoftMaskSize.w + 0.0001f, 0, 1));
                    }

                }

                m_SoftMaskParams.SoftMaskMode = m_SoftMaskMode;
                m_SoftMaskParams.SoftMaskRect = new Vector4(canvasCornerScreenUVsTemp[0].x, canvasCornerScreenUVsTemp[0].y, canvasCornerScreenUVsTemp[2].x - canvasCornerScreenUVsTemp[0].x, canvasCornerScreenUVsTemp[2].y - canvasCornerScreenUVsTemp[0].y);
            }

            return m_SoftMaskParams;
        }
    }
}
