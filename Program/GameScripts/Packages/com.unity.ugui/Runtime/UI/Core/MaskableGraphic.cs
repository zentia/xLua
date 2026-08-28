using System;
using UnityEngine.Events;
using UnityEngine.Rendering;

namespace UnityEngine.UI
{
    /// <summary>
    /// A Graphic that is capable of being masked out.
    /// </summary>
    public abstract class MaskableGraphic : Graphic, IClippable, IMaskable, IMaterialModifier
    {
        [NonSerialized]
        protected bool m_ShouldRecalculateStencil = true;

        [NonSerialized]
        protected Material m_MaskMaterial;

        [NonSerialized]
        protected RectMask2D m_ParentMask;

        // m_Maskable is whether this graphic is allowed to be masked or not. It has the matching public property maskable.
        // The default for m_Maskable is true, so graphics under a mask are masked out of the box.
        // The maskable property can be turned off from script by the user if masking is not desired.
        // m_IncludeForMasking is whether we actually consider this graphic for masking or not - this is an implementation detail.
        // m_IncludeForMasking should only be true if m_Maskable is true AND a parent of the graphic has an IMask component.
        // Things would still work correctly if m_IncludeForMasking was always true when m_Maskable is, but performance would suffer.
        [SerializeField]
        private bool m_Maskable = true;

        private bool m_IsMaskingGraphic = false;

        [NonSerialized]
        [System.ComponentModel.EditorBrowsable(System.ComponentModel.EditorBrowsableState.Never)]
        [Obsolete("Not used anymore.", true)]
        protected bool m_IncludeForMasking = false;

        [Serializable]
        public class CullStateChangedEvent : UnityEvent<bool> {}

        // Event delegates triggered on click.
        [SerializeField]
        private CullStateChangedEvent m_OnCullStateChanged = new CullStateChangedEvent();

        /// <summary>
        /// Callback issued when culling changes.
        /// </summary>
        /// <remarks>
        /// Called whene the culling state of this MaskableGraphic either becomes culled or visible. You can use this to control other elements of your UI as culling happens.
        /// </remarks>
        public CullStateChangedEvent onCullStateChanged
        {
            get { return m_OnCullStateChanged; }
            set { m_OnCullStateChanged = value; }
        }

        /// <summary>
        /// Does this graphic allow masking.
        /// </summary>
        public bool maskable
        {
            get { return m_Maskable; }
            set
            {
                if (value == m_Maskable)
                    return;
                m_Maskable = value;
                m_ShouldRecalculateStencil = true;
                SetMaterialDirty();
            }
        }


        /// <summary>
        /// Is this graphic the graphic on the same object as a Mask that is enabled.
        /// </summary>
        /// <remarks>
        /// If toggled ensure to call MaskUtilities.NotifyStencilStateChanged(this); manually as it changes how stenciles are calculated for this image.
        /// </remarks>
        public bool isMaskingGraphic
        {
            get { return m_IsMaskingGraphic; }
            set
            {
                if (value == m_IsMaskingGraphic)
                    return;

                m_IsMaskingGraphic = value;
            }
        }

        [NonSerialized]
        [System.ComponentModel.EditorBrowsable(System.ComponentModel.EditorBrowsableState.Never)]
        [Obsolete("Not used anymore", true)]
        protected bool m_ShouldRecalculate = true;

        [NonSerialized]
        protected int m_StencilValue;

        [NonSerialized] protected bool m_EnableSoftMask;

        [NonSerialized]
        protected MaterialModifyParams m_MaterialModifyParams;

        public Material CurrentUsingMaterial
        {
            get
            {
                if(m_MaskMaterial)
                    return m_MaskMaterial;
                return material;
            }
        }

        /// <summary>
        /// See IMaterialModifier.GetModifiedMaterial
        /// </summary>
        public virtual Material GetModifiedMaterial(Material baseMaterial)
        {
            if (!maskable)
            {
                return baseMaterial;
            }

            var toUse = baseMaterial;

            if (m_ShouldRecalculateStencil)
            {
                var rootCanvas = MaskUtilities.FindRootSortOverrideCanvas(transform);
                m_MaterialModifyParams = MaskUtilities.GetMaterialModifyParams(transform, rootCanvas);
                m_StencilValue = maskable ? m_MaterialModifyParams.Stencil : 0;
                m_EnableSoftMask = m_MaterialModifyParams.SoftMaskParams.SoftMaskSize != Vector4.zero;
                m_ShouldRecalculateStencil = false;

                /*if (!(m_StencilValue > 0))
                {
                    Debug.LogFormat(LogType.Warning, LogOption.NoStacktrace, this, "RecalculateStencil with out Mask: {0}", gameObject.name);
                }*/
            }

            Mask maskComponent = null;
            if(UseOptMaskMaterial)
            {
                if (m_CachedMaterialModifier != null && m_CachedMaterialModifier.Count > 0)
                {
                    for(int i = 1; i < m_CachedMaterialModifier.Count; i++)
                    {
                        if ( m_CachedMaterialModifier[i] is Mask m)
                        {
                            maskComponent = m;
                            break;
                        }
                    }
                }
            }
            else
            {
                maskComponent = GetComponent<Mask>();
            }

            // if we have a enabled Mask component then it will
            // generate the mask material. This is an optimisation
            // it adds some coupling between components though :(
            if (m_StencilValue > 0 && (maskComponent == null || !maskComponent.IsActive()))
            {
                var maskMat = StencilMaterial.Add(toUse, (1 << m_StencilValue) - 1, StencilOp.Keep, CompareFunction.Equal, ColorWriteMask.All, (1 << m_StencilValue) - 1, 0, m_MaterialModifyParams);
                StencilMaterial.Remove(m_MaskMaterial);
                m_MaskMaterial = maskMat;
                toUse = m_MaskMaterial;
            }

            return toUse;
        }

        /// <summary>
        /// See IClippable.Cull
        /// </summary>
        public virtual void Cull(Rect clipRect, bool validRect)
        {
            var cull = !validRect || !clipRect.Overlaps(rootCanvasRect, true);
            UpdateCull(cull);
        }

        private void UpdateCull(bool cull)
        {
            if (canvasRenderer.cull != cull)
            {
                canvasRenderer.cull = cull;
                UISystemProfilerApi.AddMarker("MaskableGraphic.cullingChanged", this);
                m_OnCullStateChanged.Invoke(cull);
                OnCullingChanged();
            }
        }

        /// <summary>
        /// See IClippable.SetClipRect
        /// </summary>
        public virtual void SetClipRect(Rect clipRect, bool validRect)
        {
            if (validRect)
                canvasRenderer.EnableRectClipping(clipRect);
            else
                canvasRenderer.DisableRectClipping();
        }

        public virtual void SetClipSoftness(Vector2 clipSoftness)
        {
            canvasRenderer.clippingSoftness = clipSoftness;
        }

        protected override void OnEnable()
        {
            base.OnEnable();
            m_ShouldRecalculateStencil = true;
            UpdateClipParent();
            SetMaterialDirty();
            RegisterMaterialModifier(this);

            if (isMaskingGraphic)
            {
                MaskUtilities.NotifyStencilStateChanged(this);
            }
        }

        protected override void OnDisable()
        {
            base.OnDisable();
            m_ShouldRecalculateStencil = true;
            SetMaterialDirty();
            UpdateClipParent();
            UnregisterMaterialModifier(this);
            StencilMaterial.Remove(m_MaskMaterial);
            m_MaskMaterial = null;

            if (isMaskingGraphic)
            {
                MaskUtilities.NotifyStencilStateChanged(this);
            }
        }

#if UNITY_EDITOR
        protected override void OnValidate()
        {
            base.OnValidate();
            m_ShouldRecalculateStencil = true;
            UpdateClipParent();
            SetMaterialDirty();
        }

#endif

        protected override void OnTransformParentChanged()
        {
            base.OnTransformParentChanged();

            if (!isActiveAndEnabled)
                return;

            m_ShouldRecalculateStencil = true;
            UpdateClipParent();
            SetMaterialDirty();
        }

        [System.ComponentModel.EditorBrowsable(System.ComponentModel.EditorBrowsableState.Never)]
        [Obsolete("Not used anymore.", true)]
        public virtual void ParentMaskStateChanged() {}

        protected override void OnCanvasHierarchyChanged()
        {
            base.OnCanvasHierarchyChanged();

            if (!isActiveAndEnabled)
                return;

            m_ShouldRecalculateStencil = true;
            UpdateClipParent();
            SetMaterialDirty();
        }

        static Vector3[] s_CornersTemp = new Vector3[4];
        private Rect rootCanvasRect
        {
            get
            {
                rectTransform.GetWorldCorners(s_CornersTemp);

                if (canvas)
                {
                    Matrix4x4 mat = canvas.rootCanvas.transform.worldToLocalMatrix;
                    for (int i = 0; i < 4; ++i)
                        s_CornersTemp[i] = mat.MultiplyPoint(s_CornersTemp[i]);
                }

                // bounding box is now based on the min and max of all corners (case 1013182)

                Vector2 min = s_CornersTemp[0];
                Vector2 max = s_CornersTemp[0];
                for (int i = 1; i < 4; i++)
                {
                    min.x = Mathf.Min(s_CornersTemp[i].x, min.x);
                    min.y = Mathf.Min(s_CornersTemp[i].y, min.y);
                    max.x = Mathf.Max(s_CornersTemp[i].x, max.x);
                    max.y = Mathf.Max(s_CornersTemp[i].y, max.y);
                }

                return new Rect(min, max - min);
            }
        }

        private void UpdateClipParent()
        {
            int innerIndex = -1;
            UGUIStats.BeginSample(UGUIStatsSampleId.UGUI_UpdateClipParent, ref innerIndex);
            var newParent = (maskable && IsActive()) ? MaskUtilities.GetRectMaskForClippable(this) : null;

            // if the new parent is different OR is now inactive
            if (m_ParentMask != null && (newParent != m_ParentMask || !newParent.IsActive()))
            {
                m_ParentMask.RemoveClippable(this);
                UpdateCull(false);
            }

            // don't re-add it if the newparent is inactive
            if (newParent != null && newParent.IsActive())
                newParent.AddClippable(this);

            m_ParentMask = newParent;
            UGUIStats.EndSampleByIndex(ref innerIndex);
        }

        /// <summary>
        /// See IClippable.RecalculateClipping
        /// </summary>
        public virtual void RecalculateClipping()
        {
            UpdateClipParent();
        }

        /// <summary>
        /// See IMaskable.RecalculateMasking
        /// </summary>
        public virtual void RecalculateMasking()
        {
            // Remove the material reference as either the graphic of the mask has been enable/ disabled.
            // This will cause the material to be repopulated from the original if need be. (case 994413)
            StencilMaterial.Remove(m_MaskMaterial);
            m_MaskMaterial = null;
            m_ShouldRecalculateStencil = true;
            SetMaterialDirty();
        }

        public virtual void UpdateSoftMask()
        {
            if(!maskable)
                return;

            var rootCanvas = MaskUtilities.FindRootSortOverrideCanvas(transform);
            m_MaterialModifyParams = MaskUtilities.GetMaterialModifyParams(transform, rootCanvas);
            SetMaterialDirty();
        }
    }
}
