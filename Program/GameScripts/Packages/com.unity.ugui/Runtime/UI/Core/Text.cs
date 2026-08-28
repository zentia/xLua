using System;
using System.Collections.Generic;
using Unity.Collections;

namespace UnityEngine.UI
{
    [RequireComponent(typeof(CanvasRenderer))]
    [AddComponentMenu("UI/Legacy/Text", 100)]
    /// <summary>
    /// The default Graphic to draw font data to screen.
    /// </summary>
    public class Text : MaskableGraphic, ILayoutElement
    {
        [SerializeField] private FontData m_FontData = FontData.defaultFontData;


#if UNITY_EDITOR
        // needed to track font changes from the inspector
        private Font m_LastTrackedFont;
#endif

        [TextArea(3, 10)][SerializeField] protected string m_Text = String.Empty;
        public virtual float maxWidth { get { return -1; } }

        public virtual float maxHeight { get { return -1; } }
        private TextGenerator m_TextCache;
        private TextGenerator m_TextCacheForLayout;

        static protected Material s_DefaultText = null;

        // We use this flag instead of Unregistering/Registering the callback to avoid allocation.
        [NonSerialized] protected bool m_DisableFontTextureRebuiltCallback = false;

        protected Text()
        {
            useLegacyMeshGeneration = false;
        }

        /// <summary>
        /// The cached TextGenerator used when generating visible Text.
        /// </summary>

        public TextGenerator cachedTextGenerator
        {
            get
            {
                if (m_TextCache == null)
                {
                    var meshGenerationMethod = CurMeshGenerationMethod();
                    if (meshGenerationMethod == MeshGenerationMethod.NativeArray)
                    {
                        m_TextCache = new TextGenerator(0, false);
                    }
                    else
                    {
                        m_TextCache = m_Text.Length != 0 ? new TextGenerator(m_Text.Length) : new TextGenerator();
                    }
                }

                return m_TextCache;
                // return m_TextCache ?? (m_TextCache = (m_Text.Length != 0 ? new TextGenerator(m_Text.Length) : new TextGenerator()));
            }
        }

        /// <summary>
        /// The cached TextGenerator used when determine Layout
        /// </summary>
        public TextGenerator cachedTextGeneratorForLayout
        {
            get { return m_TextCacheForLayout ?? (m_TextCacheForLayout = new TextGenerator(0, false)); }
        }


        /// <summary>
        /// Text's texture comes from the font.
        /// </summary>
        public override Texture mainTexture
        {
            get
            {
                if (font != null && font.material != null && font.material.mainTexture != null)
                    return font.material.mainTexture;

                if (m_UIMaterial != null)
                    return m_UIMaterial.mainTexture;

                return base.mainTexture;
            }
        }

        /// <summary>
        /// Called by the FontUpdateTracker when the texture associated with a font is modified.
        /// </summary>
        public void FontTextureChanged()
        {
            // Only invoke if we are not destroyed.
            if (!this)
                return;

            if (m_DisableFontTextureRebuiltCallback)
                return;

            cachedTextGenerator.Invalidate();

            if (!IsActive())
                return;

            // this is a bit hacky, but it is currently the
            // cleanest solution....
            // if we detect the font texture has changed and are in a rebuild loop
            // we just regenerate the verts for the new UV's
            if (CanvasUpdateRegistry.IsRebuildingGraphics() || CanvasUpdateRegistry.IsRebuildingLayout())
                UpdateGeometry();
            else
            {
                MarkAllDirty();
            }
        }

        /// <summary>
        /// The Font used by the text.
        /// </summary>
        /// <remarks>
        /// This is the font used by the Text component. Use it to alter or return the font from the Text. There are many free fonts available online.
        /// </remarks>
        /// <example>
        /// <code>
        /// <![CDATA[
        /// //Create a new Text GameObject by going to Create>UI>Text in the Editor. Attach this script to the Text GameObject. Then, choose or click and drag your own font into the Font section in the Inspector window.
        ///
        /// using UnityEngine;
        /// using UnityEngine.UI;
        ///
        /// public class TextFontExample : MonoBehaviour
        /// {
        ///     Text m_Text;
        ///     //Attach your own Font in the Inspector
        ///     public Font m_Font;
        ///
        ///     void Start()
        ///     {
        ///         //Fetch the Text component from the GameObject
        ///         m_Text = GetComponent<Text>();
        ///     }
        ///
        ///     void Update()
        ///     {
        ///         if (Input.GetKey(KeyCode.Space))
        ///         {
        ///             //Change the Text Font to the Font attached in the Inspector
        ///             m_Text.font = m_Font;
        ///             //Change the Text to the message below
        ///             m_Text.text = "My Font Changed!";
        ///         }
        ///     }
        /// }
        /// ]]>
        ///</code>
        /// </example>
        public Font font
        {
            get
            {
                return m_FontData.font;
            }
            set
            {
                if (m_FontData.font == value)
                    return;

                if (isActiveAndEnabled)
                    FontUpdateTracker.UntrackText(this);

                m_FontData.font = value;

                if (isActiveAndEnabled)
                    FontUpdateTracker.TrackText(this);

#if UNITY_EDITOR
                // needed to track font changes from the inspector
                m_LastTrackedFont = value;
#endif

                SetAllDirty();
            }
        }

        /// <summary>
        /// Text that's being displayed by the Text.
        /// </summary>
        /// <remarks>
        /// This is the string value of a Text component. Use this to read or edit the message displayed in Text.
        /// </remarks>
        /// <example>
        /// <code>
        /// <![CDATA[
        /// using UnityEngine;
        /// using UnityEngine.UI;
        ///
        /// public class Example : MonoBehaviour
        /// {
        ///     public Text m_MyText;
        ///
        ///     void Start()
        ///     {
        ///         //Text sets your text to say this message
        ///         m_MyText.text = "This is my text";
        ///     }
        ///
        ///     void Update()
        ///     {
        ///         //Press the space key to change the Text message
        ///         if (Input.GetKey(KeyCode.Space))
        ///         {
        ///             m_MyText.text = "My text has now changed.";
        ///         }
        ///     }
        /// }
        /// ]]>
        ///</code>
        /// </example>
        public virtual string text
        {
            get
            {
                return m_Text;
            }
            set
            {
                if (String.IsNullOrEmpty(value))
                {
                    if (String.IsNullOrEmpty(m_Text))
                        return;
                    m_Text = "";
                    SetVerticesDirty();
                }
                else if (m_Text != value)
                {
                    m_Text = value;
                    SetVerticesDirty();
                    SetLayoutDirty();
                }
            }
        }

        /// <summary>
        /// Whether this Text will support rich text.
        /// </summary>

        public bool supportRichText
        {
            get
            {
                return m_FontData.richText;
            }
            set
            {
                if (m_FontData.richText == value)
                    return;
                m_FontData.richText = value;
                SetVerticesDirty();
                SetLayoutDirty();
            }
        }

        /// <summary>
        /// Should the text be allowed to auto resized.
        /// </summary>

        public bool resizeTextForBestFit
        {
            get
            {
                return m_FontData.bestFit;
            }
            set
            {
                if (m_FontData.bestFit == value)
                    return;
                m_FontData.bestFit = value;
                SetVerticesDirty();
                SetLayoutDirty();
            }
        }

        /// <summary>
        /// The minimum size the text is allowed to be.
        /// </summary>
        public int resizeTextMinSize
        {
            get
            {
                return m_FontData.minSize;
            }
            set
            {
                if (m_FontData.minSize == value)
                    return;
                m_FontData.minSize = value;

                SetVerticesDirty();
                SetLayoutDirty();
            }
        }

        /// <summary>
        /// The maximum size the text is allowed to be. 1 = infinitely large.
        /// </summary>
        public int resizeTextMaxSize
        {
            get
            {
                return m_FontData.maxSize;
            }
            set
            {
                if (m_FontData.maxSize == value)
                    return;
                m_FontData.maxSize = value;

                SetVerticesDirty();
                SetLayoutDirty();
            }
        }

        /// <summary>
        /// The positioning of the text reliative to its [[RectTransform]].
        /// </summary>
        /// <remarks>
        /// This is the positioning of the Text relative to its RectTransform. You can alter this via script or in the Inspector of a Text component using the buttons in the Alignment section.
        /// </remarks>
        /// <example>
        /// <code>
        /// <![CDATA[
        /// //Create a Text GameObject by going to __Create__>__UI__>__Text__. Attach this script to the GameObject to see it working.
        ///
        /// using UnityEngine;
        /// using UnityEngine.UI;
        ///
        /// public class UITextAlignment : MonoBehaviour
        /// {
        ///     Text m_Text;
        ///
        ///     void Start()
        ///     {
        ///         //Fetch the Text Component
        ///         m_Text = GetComponent<Text>();
        ///         //Switch the Text alignment to the middle
        ///         m_Text.alignment = TextAnchor.MiddleCenter;
        ///     }
        ///
        /// //This is a legacy function used for an instant demonstration. See the <a href="https://unity3d.com/learn/tutorials/s/user-interface-ui">UI Tutorials pages </a> and [[wiki:UISystem|UI Section]] of the manual for more information on creating your own buttons etc.
        ///     void OnGUI()
        ///     {
        ///         //Press this Button to change the Text alignment to the lower right
        ///         if (GUI.Button(new Rect(0, 0, 100, 40), "Lower Right"))
        ///         {
        ///             m_Text.alignment = TextAnchor.LowerRight;
        ///         }
        ///
        ///         //Press this Button to change the Text alignment to the upper left
        ///         if (GUI.Button(new Rect(150, 0, 100, 40), "Upper Left"))
        ///         {
        ///             m_Text.alignment = TextAnchor.UpperLeft;
        ///         }
        ///     }
        /// }
        /// ]]>
        ///</code>
        /// </example>
        public TextAnchor alignment
        {
            get
            {
                return m_FontData.alignment;
            }
            set
            {
                if (m_FontData.alignment == value)
                    return;
                m_FontData.alignment = value;

                SetVerticesDirty();
                SetLayoutDirty();
            }
        }

        /// <summary>
        /// Use the extents of glyph geometry to perform horizontal alignment rather than glyph metrics.
        /// </summary>
        /// <remarks>
        /// This can result in better fitting left and right alignment, but may result in incorrect positioning when attempting to overlay multiple fonts (such as a specialized outline font) on top of each other.
        /// </remarks>
        public bool alignByGeometry
        {
            get
            {
                return m_FontData.alignByGeometry;
            }
            set
            {
                if (m_FontData.alignByGeometry == value)
                    return;
                m_FontData.alignByGeometry = value;

                SetVerticesDirty();
            }
        }

        /// <summary>
        /// The size that the Font should render at. Unit of measure is Points.
        /// </summary>
        /// <remarks>
        /// This is the size of the Font of the Text. Use this to fetch or change the size of the Font. When changing the Font size, remember to take into account the RectTransform of the Text. Larger Font sizes or messages may not fit in certain rectangle sizes and do not show in the Scene.
        /// Note: Point size is not consistent from one font to another.
        /// </remarks>
        /// <example>
        /// <code>
        /// <![CDATA[
        /// //For this script to work, create a new Text GameObject by going to Create>U>Text. Attach the script to the Text GameObject. Make sure the GameObject has a RectTransform component.
        ///
        /// using UnityEngine;
        /// using UnityEngine.UI;
        ///
        /// public class Example : MonoBehaviour
        /// {
        ///     Text m_Text;
        ///     RectTransform m_RectTransform;
        ///
        ///     void Start()
        ///     {
        ///         //Fetch the Text and RectTransform components from the GameObject
        ///         m_Text = GetComponent<Text>();
        ///         m_RectTransform = GetComponent<RectTransform>();
        ///     }
        ///
        ///     void Update()
        ///     {
        ///         //Press the space key to change the Font size
        ///         if (Input.GetKey(KeyCode.Space))
        ///         {
        ///             changeFontSize();
        ///         }
        ///     }
        ///
        ///     void changeFontSize()
        ///     {
        ///         //Change the Font Size to 16
        ///         m_Text.fontSize = 30;
        ///
        ///         //Change the RectTransform size to allow larger fonts and sentences
        ///         m_RectTransform.sizeDelta = new Vector2(m_Text.fontSize * 10, 100);
        ///
        ///         //Change the m_Text text to the message below
        ///         m_Text.text = "I changed my Font size!";
        ///     }
        /// }
        /// ]]>
        ///</code>
        /// </example>
        public int fontSize
        {
            get
            {
                return m_FontData.fontSize;
            }
            set
            {
                if (m_FontData.fontSize == value)
                    return;
                m_FontData.fontSize = value;

                SetVerticesDirty();
                SetLayoutDirty();
            }
        }

        /// <summary>
        /// Horizontal overflow mode.
        /// </summary>
        /// <remarks>
        /// When set to HorizontalWrapMode.Overflow, text can exceed the horizontal boundaries of the Text graphic. When set to HorizontalWrapMode.Wrap, text will be word-wrapped to fit within the boundaries.
        /// </remarks>
        public HorizontalWrapMode horizontalOverflow
        {
            get
            {
                return m_FontData.horizontalOverflow;
            }
            set
            {
                if (m_FontData.horizontalOverflow == value)
                    return;
                m_FontData.horizontalOverflow = value;

                SetVerticesDirty();
                SetLayoutDirty();
            }
        }

        /// <summary>
        /// Vertical overflow mode.
        /// </summary>
        public VerticalWrapMode verticalOverflow
        {
            get
            {
                return m_FontData.verticalOverflow;
            }
            set
            {
                if (m_FontData.verticalOverflow == value)
                    return;
                m_FontData.verticalOverflow = value;

                SetVerticesDirty();
                SetLayoutDirty();
            }
        }

        /// <summary>
        /// Line spacing, specified as a factor of font line height. A value of 1 will produce normal line spacing.
        /// </summary>
        public float lineSpacing
        {
            get
            {
                return m_FontData.lineSpacing;
            }
            set
            {
                if (m_FontData.lineSpacing == value)
                    return;
                m_FontData.lineSpacing = value;

                SetVerticesDirty();
                SetLayoutDirty();
            }
        }

        /// <summary>
        /// Font style used by the Text's text.
        /// </summary>

        public FontStyle fontStyle
        {
            get
            {
                return m_FontData.fontStyle;
            }
            set
            {
                if (m_FontData.fontStyle == value)
                    return;
                m_FontData.fontStyle = value;

                SetVerticesDirty();
                SetLayoutDirty();
            }
        }

        /// <summary>
        /// Provides information about how fonts are scale to the screen.
        /// </summary>
        /// <remarks>
        /// For dynamic fonts, the value is equivalent to the scale factor of the canvas. For non-dynamic fonts, the value is calculated from the requested text size and the size from the font.
        /// </remarks>
        public float pixelsPerUnit
        {
            get
            {
                var localCanvas = canvas;
                if (!localCanvas)
                    return 1;
                // For dynamic fonts, ensure we use one pixel per pixel on the screen.
                if (!font || font.dynamic)
                    return localCanvas.scaleFactor;
                // For non-dynamic fonts, calculate pixels per unit based on specified font size relative to font object's own font size.
                if (m_FontData.fontSize <= 0 || font.fontSize <= 0)
                    return 1;
                return font.fontSize / (float)m_FontData.fontSize;
            }
        }

        protected override void OnEnable()
        {
            base.OnEnable();
            cachedTextGenerator.Invalidate();
            FontUpdateTracker.TrackText(this);
        }

        protected override void OnDisable()
        {
            FontUpdateTracker.UntrackText(this);
            base.OnDisable();
        }

        protected override void UpdateGeometry()
        {
            if (font != null)
            {
                base.UpdateGeometry();
            }
        }

#if UNITY_EDITOR
        protected override void Reset()
        {
            AssignDefaultFontIfNecessary();
        }

#endif
        internal void AssignDefaultFont()
        {
            font = Resources.GetBuiltinResource<Font>("LegacyRuntime.ttf");
        }

        internal void AssignDefaultFontIfNecessary()
        {
            if (font == null)
                font = Resources.GetBuiltinResource<Font>("LegacyRuntime.ttf");
        }

        public TextGenerationSettings GetGenerationSettings(Vector2 extents)
        {
            TextGenerationSettings re = new TextGenerationSettings();
            GetGenerationSettings(extents, ref re);
            return re;
        }

        /// <summary>
        /// 节点缩放因子
        /// </summary>
        protected virtual float factorScaleTransform
        {
            get
            {
                return 1;
            }
        }
        /// <summary>
        /// Convenience function to populate the generation setting for the text.
        /// </summary>
        /// <param name="extents">The extents the text can draw in.</param>
        /// <returns>Generated settings.</returns>
        public void GetGenerationSettings(Vector2 extents, ref TextGenerationSettings settings)
        {
            settings.generationExtents = extents;
            if (font != null && font.dynamic)
            {
                settings.fontSize = m_FontData.fontSize;
                settings.resizeTextMinSize = m_FontData.minSize;
                settings.resizeTextMaxSize = m_FontData.maxSize;
            }

            // Other settings
            settings.textAnchor = m_FontData.alignment;
            settings.alignByGeometry = m_FontData.alignByGeometry;
            settings.scaleFactor = pixelsPerUnit * factorScaleTransform;
            settings.color = color;
            settings.font = font;
            settings.pivot = rectTransform.pivot;
            settings.richText = m_FontData.richText;
            settings.lineSpacing = m_FontData.lineSpacing;
            settings.fontStyle = m_FontData.fontStyle;
            settings.resizeTextForBestFit = m_FontData.bestFit;
            settings.updateBounds = false;
            settings.horizontalOverflow = m_FontData.horizontalOverflow;
            settings.verticalOverflow = m_FontData.verticalOverflow;
        }

        /// <summary>
        /// Convenience function to determine the vector offset of the anchor.
        /// </summary>
        static public Vector2 GetTextAnchorPivot(TextAnchor anchor)
        {
            switch (anchor)
            {
                case TextAnchor.LowerLeft:    return new Vector2(0, 0);
                case TextAnchor.LowerCenter:  return new Vector2(0.5f, 0);
                case TextAnchor.LowerRight:   return new Vector2(1, 0);
                case TextAnchor.MiddleLeft:   return new Vector2(0, 0.5f);
                case TextAnchor.MiddleCenter: return new Vector2(0.5f, 0.5f);
                case TextAnchor.MiddleRight:  return new Vector2(1, 0.5f);
                case TextAnchor.UpperLeft:    return new Vector2(0, 1);
                case TextAnchor.UpperCenter:  return new Vector2(0.5f, 1);
                case TextAnchor.UpperRight:   return new Vector2(1, 1);
                default: return Vector2.zero;
            }
        }

        protected Shadow m_EffectShadow = null;
        protected Outline m_EffectOutline = null;


        protected virtual void UpdateEffectComps()
        {
            if (m_EffectShadow == null)
                m_EffectShadow = GetComponent<Shadow>() ;

            if (m_EffectOutline == null)
                    m_EffectOutline = GetComponent<Outline>();
        }

        public enum TextEffectType : byte
        {
            None = 0,
            Shadow = 1,
            Outline = 2,
            ShadowAndOutline = 3,
            ExtShadow = 4,
            ExtOutline = 5,
        };


        private void GetTextEffectInfo(out TextEffectType effectType, out Color shadowColor, out Vector2 shadowDistance, out Boolean shadowUseGraphicAlpha, out Color outlineColor, out Vector2 outlineDistance, out Boolean outlineUseGraphicAlpha)
        {
            shadowUseGraphicAlpha = false;
            outlineUseGraphicAlpha = false;
            shadowColor = Color.white;
            outlineColor = Color.white;
            shadowDistance = Vector2.zero;
            outlineDistance = Vector2.zero;
            effectType = 0;
            if (m_EffectShadow && m_EffectOutline && m_EffectShadow.enabled && m_EffectOutline.enabled)
            {
                effectType = TextEffectType.ShadowAndOutline;

                shadowColor = m_EffectShadow.effectColor;
                shadowDistance = m_EffectShadow.effectDistance;
                shadowUseGraphicAlpha = m_EffectShadow.m_UseGraphicAlpha;

                outlineColor = m_EffectOutline.effectColor;
                outlineDistance = m_EffectOutline.effectDistance;
                outlineUseGraphicAlpha = m_EffectOutline.m_UseGraphicAlpha;
            }
            else if (m_EffectShadow && m_EffectShadow.enabled)
            {
                effectType = TextEffectType.Shadow;

                shadowColor = m_EffectShadow.effectColor;
                shadowDistance = m_EffectShadow.effectDistance;
                shadowUseGraphicAlpha = m_EffectShadow.m_UseGraphicAlpha;
            }
            else if (m_EffectOutline && m_EffectOutline.enabled)
            {
                effectType = TextEffectType.Outline;
                outlineColor = m_EffectOutline.effectColor;
                outlineDistance = m_EffectOutline.effectDistance;
                outlineUseGraphicAlpha = m_EffectOutline.m_UseGraphicAlpha;
            }
        }

        protected static UIVertex[] m_TempVerts = new UIVertex[4];

        protected void PopulateMeshText(
                float unitsPerPixel,
                TextGenerator textGenerator,
                Vector2 posOffset,
                TextEffectType textEffectTypeInt,
                Color shadowColor,
                Color outlineColor,
                Vector2 shadowEffectDistance,
                Vector2 outlineEffectDistance,
                bool shadowUseGraphicAlpha,
                bool outlineUseGraphicAlpha,
                bool hasHyperLink,
                out Int32 hyperlinkCapacity,
                out Int32 realTextStartIndex,
                out VertexHelperNative vhNative
                )
        {
            hyperlinkCapacity = 0;
            realTextStartIndex = 0;
            Int32 sampleIndex = -1;
            UGUIStats.BeginSample(UGUIStatsSampleId.UGUI,"PopulateMeshText", ref sampleIndex);
            Int32 vertCount = textGenerator.GetVertexCount();
            Int32 quadCount = vertCount / 4;
            Int32 initQuadCount = quadCount;
            TextEffectType effectType = (TextEffectType)textEffectTypeInt;
            if (effectType == TextEffectType.Shadow || effectType == TextEffectType.ExtShadow)
            {
                initQuadCount *= 2;
            }
            else if (effectType == TextEffectType.Outline || effectType == TextEffectType.ExtOutline)
            {
                initQuadCount *= 5;
            }
            else if (effectType == TextEffectType.ShadowAndOutline)
            {
                initQuadCount *= 6;
            }

            bool extEffect = effectType == TextEffectType.ExtShadow || effectType == TextEffectType.ExtOutline;

            if (hasHyperLink)
            {
                initQuadCount += quadCount;
                hyperlinkCapacity = quadCount;
            }

            Int32 realTextOffset = 0;
            Int32 curUvDim = extEffect ? 4 : 2;
            if (extEffect)
            {

                vhNative = VertexHelperNative.GetVertexHelper(
                                                             initQuadCount
                                                            ,AdditionalCanvasShaderChannels.TexCoord1 | AdditionalCanvasShaderChannels.TexCoord2
                                                            ,curUvDim );
                // reserve for effect vertex
                // draw effect first.
                if (effectType == TextEffectType.ExtShadow)
                {
                    vhNative.AddQuadUninitialized(quadCount);
                }
                else if (effectType == TextEffectType.ExtOutline)
                {
                    vhNative.AddQuadUninitialized(quadCount * 4);
                }
            }
            else
            {
                vhNative = VertexHelperNative.GetVertexHelper(initQuadCount ,AdditionalCanvasShaderChannels.None ,curUvDim);
                // reserve for effect vertex
                // draw effect first.
                if (effectType == TextEffectType.Shadow)
                {
                    vhNative.AddQuadUninitialized(quadCount);
                    realTextOffset = quadCount * 4;
                }
                else if (effectType == TextEffectType.Outline)
                {
                    vhNative.AddQuadUninitialized(quadCount * 4);
                    realTextOffset = quadCount * 4 * 4;
                }
                else if (effectType == TextEffectType.ShadowAndOutline)
                {
                    vhNative.AddQuadUninitialized(quadCount * 5);
                    realTextOffset = quadCount * 4 * 5;
                }
            }

            // 由于textGenerator会生成大量的额顶点数据
            // 如果全量copy到C#再处理过于浪费
            // 这里会先把顶点数据拷贝到结果中, 再根据需求做处理
            // 会绕过vertexhelper标准的做法, 但性能会好很多
            vhNative.SetFillColor(true);
            realTextStartIndex = vhNative.currentVertCount;
            var verts = vhNative.GetPositions();
            if (extEffect)
            {
                vhNative.GetUVs4Dim(0, out var uv0s );
                textGenerator.FillVertices(verts, vhNative.GetColors(), uv0s, realTextStartIndex, vhNative.GetPositions().Length);

                Int32 resetCount = verts.Length - vhNative.currentVertCount;
                vhNative.ResetUv4Dim(1, realTextStartIndex, resetCount);
                vhNative.ResetUv4Dim(2, realTextStartIndex, resetCount);
            }
            else
            {
                vhNative.GetUVs(0, out var uv0s );
                textGenerator.FillVertices(verts, vhNative.GetColors(), uv0s, realTextStartIndex, vhNative.GetPositions().Length);
            }


            // 这里实际的第一个为textGenerator返回值的index为vhNative.currentVertCount
            Vector2 roundingOffset = new Vector2(verts[vhNative.currentVertCount].x, verts[vhNative.currentVertCount].y) * unitsPerPixel;
            roundingOffset = PixelAdjustPoint(roundingOffset) - roundingOffset;

            // pos, color, uv 数据已经到位, 只需要对pos做处理, 并且处理index列表
            Int32 endIndex = vhNative.currentVertCount + vertCount;
            for (int i = vhNative.currentVertCount; i < endIndex; ++i)
            {
                int tempVertsIndex = i & 3;
                var pos = verts[i];
                pos *= unitsPerPixel;
                pos.x += roundingOffset.x + posOffset.x; // posOffset for scroll feature
                pos.y += roundingOffset.y + posOffset.y; // posOffset for scroll feature
                verts[i] = pos;
                if (tempVertsIndex == 3)
                {
                    vhNative.AddQuadUninitialized(1); // 只需要推进pos的index和设置index buffer.
                }
            }

            if (effectType == TextEffectType.ExtShadow)
            {
                ApplyTextExtEffect(vhNative, 0, quadCount * 4, shadowColor, shadowEffectDistance, shadowUseGraphicAlpha);
            }

            if (effectType == TextEffectType.ExtOutline)
            {
                ApplyTextExtEffect(vhNative, 0, quadCount * 4 * 4, outlineColor, outlineEffectDistance, outlineUseGraphicAlpha);
                ApplyTextExtEffect(vhNative, quadCount * 4, quadCount * 4 * 4, outlineColor, new Vector2(outlineEffectDistance.x, -outlineEffectDistance.y), outlineUseGraphicAlpha);
                ApplyTextExtEffect(vhNative, quadCount * 2 * 4, quadCount * 4 * 4, outlineColor, new Vector2(-outlineEffectDistance.x, outlineEffectDistance.y), outlineUseGraphicAlpha);
                ApplyTextExtEffect(vhNative, quadCount * 3 * 4, quadCount * 4 * 4, outlineColor, new Vector2(-outlineEffectDistance.x, -outlineEffectDistance.y), outlineUseGraphicAlpha);
            }

            Int32 count = quadCount * 4;
            Int32 outlineStartOffset = 0;
            if (effectType == TextEffectType.Shadow || effectType == TextEffectType.ShadowAndOutline)
            {
                ApplyTextEffect(vhNative, 0, count, realTextOffset, shadowColor, shadowEffectDistance, shadowUseGraphicAlpha);
                outlineStartOffset = count;
            }

            if (effectType == TextEffectType.Outline || effectType == TextEffectType.ShadowAndOutline)
            {
                ApplyTextEffect(vhNative, outlineStartOffset, count, realTextOffset, outlineColor, outlineEffectDistance, outlineUseGraphicAlpha);
                ApplyTextEffect(vhNative, quadCount * 4 + outlineStartOffset, count, realTextOffset, outlineColor, new Vector2(outlineEffectDistance.x, -outlineEffectDistance.y), outlineUseGraphicAlpha);
                ApplyTextEffect(vhNative, quadCount * 2 * 4 + outlineStartOffset, count, realTextOffset, outlineColor, new Vector2(-outlineEffectDistance.x, outlineEffectDistance.y), outlineUseGraphicAlpha);
                ApplyTextEffect(vhNative, quadCount * 3 * 4 + outlineStartOffset, count, realTextOffset, outlineColor, new Vector2(-outlineEffectDistance.x, -outlineEffectDistance.y), outlineUseGraphicAlpha);
            }

            UGUIStats.EndSampleByIndex(ref sampleIndex);
        }

        static Vector2 Pos2TexCoordRatio(Vector3 posV1, Vector3 posV2,
            Vector3 posV3, Vector4 v1Uv0, Vector4 v2Uv0, Vector4 v3Uv0)
        {
            Vector2 ration = new Vector2(0, 0);
            if (ration.x == 0 && !Mathf.Approximately(v2Uv0.x, v1Uv0.x))
            {
                ration.x = (posV2.x - posV1.x) / (v2Uv0.x - v1Uv0.x);
            }

            if (ration.x == 0 && !Mathf.Approximately(v2Uv0.x, v3Uv0.x))
            {
                ration.x = (posV2.x - posV3.x) / (v2Uv0.x - v3Uv0.x);
            }

            if (ration.x == 0 && !Mathf.Approximately(v3Uv0.x, v1Uv0.x))
            {
                ration.x = (posV3.x - posV1.x) / (v3Uv0.x - v1Uv0.x);
            }

            if (ration.y == 0 && !Mathf.Approximately(v2Uv0.y, v1Uv0.y))
            {
                ration.y = (posV2.y - posV1.y) / (v2Uv0.y - v1Uv0.y);
            }

            if (ration.y == 0 && !Mathf.Approximately(v2Uv0.y, v3Uv0.y))
            {
                ration.y = (posV2.y - posV3.y) / (v2Uv0.y - v3Uv0.y);
            }

            if (ration.y == 0 && !Mathf.Approximately(v3Uv0.y, v1Uv0.y))
            {
                ration.y = (posV3.y - posV1.y) / (v3Uv0.y - v1Uv0.y);
            }

            return ration;
        }

        static bool ExchangeXY(Vector3 posV1, Vector3 posV2, Vector3 posV3,
            Vector4 v1Uv0, Vector4 v2Uv0, Vector4 v3Uv0)
        {
            bool exchangeXY = false;

            if (!Mathf.Approximately(posV3.x, posV1.x) && !Mathf.Approximately(posV3.y, posV1.y)
                                                       && !Mathf.Approximately(v3Uv0.x, v1Uv0.x) && !Mathf.Approximately(v3Uv0.y, v1Uv0.y))
            {
                float ratio = (posV3.x - posV1.x) / (v3Uv0.x - v1Uv0.x);
                if (ratio < 0)
                    exchangeXY = true;
            }
            else if (!Mathf.Approximately(posV2.x, posV1.x)
                && !Mathf.Approximately(posV2.y, posV1.y)
                && !Mathf.Approximately(v2Uv0.x, v1Uv0.x)
                && !Mathf.Approximately(v2Uv0.y, v1Uv0.y))
            {
                float ratio = (posV2.x - posV1.x) / (v2Uv0.x - v1Uv0.x);
                if (ratio < 0)
                    exchangeXY = true;
            }
            else if (!Mathf.Approximately(posV2.x, posV3.x)
                && !Mathf.Approximately(posV2.y, posV3.y)
                && !Mathf.Approximately(v2Uv0.x, v3Uv0.x)
                && !Mathf.Approximately(v2Uv0.y, v3Uv0.y))
            {
                float ratio = (posV2.x - posV3.x) / (v2Uv0.x - v3Uv0.x);
                if (ratio < 0)
                    exchangeXY = true;
            }

            return exchangeXY;
        }


        void ApplyTextEffect(VertexHelperNative vhNative
                           , Int32 effectStart, Int32 effectCount, Int32 textStart
                           , Color effectColor, Vector2 effectDistance, bool useGraphicAlpha)
        {
            NativeArray<Vector3> posData = vhNative.GetPositions();
            NativeArray<Color32> colors = vhNative.GetColors();

            for (Int32 i = 0; i < effectCount; ++i)
            {
                Vector3 newPos = posData[textStart + i];
                newPos.x += effectDistance.x;
                newPos.y += effectDistance.y;

                float alpha = 0.0f;
                if (useGraphicAlpha)
                {
                    alpha = effectColor.a * ((float)colors[textStart + i].a / 255.0f);
                }

                vhNative.ModifyVertBaseOn(effectStart + i, textStart + i, newPos, new Color(effectColor.r, effectColor.g, effectColor.b, alpha));
            }
        }


        static Vector4 TempNewUv2 = new Vector4(1, 1, 0, 0);
        static Vector3[] TempNewPos = new Vector3[4];
        static Vector4[] TempNewUv0 = new Vector4[4];
        static Vector4[] TempOriUv0 = new Vector4[4];
        static Color[] TempNewColor = new Color[4];
        private static void  ApplyTextExtEffect(VertexHelperNative vhNative
        , Int32 effectStart, Int32 textStart
        , Color effectColor, Vector2 effectDistance, bool useGraphicAlpha)
        {

            Int32 end = vhNative.currentVertCount - 4;
            NativeArray<Vector3> originPos = vhNative.GetPositions();
            if (!vhNative.GetUVs4Dim(0, out var originUv0))
                return;

            NativeArray<Color32> originColors = vhNative.GetColors();

            Int32 triangleIdxOffset = 0;

            for (int i = textStart; i <= end; i += 4, triangleIdxOffset += 4)
            {
                TempNewPos[0] = originPos[i];
                TempNewPos[1] = originPos[i + 1];
                TempNewPos[2] = originPos[i + 2];
                TempNewPos[3] = originPos[i + 3];

                if (TempNewPos[0] == TempNewPos[1] && TempNewPos[0] == TempNewPos[2])
                {
                    // Effect vertices are reserved with uninitialized memory. Collapse and clear
                    // the skipped quad so cached vertex data cannot produce rendering artifacts.
                    Vector3 collapsedPosition = TempNewPos[0];
                    Color32 transparent = new Color32(0, 0, 0, 0);
                    for (int j = 0; j < 4; ++j)
                    {
                        Int32 effectIndex = effectStart + triangleIdxOffset + j;
                        vhNative.SetPosition(effectIndex, collapsedPosition);
                        vhNative.SetUV4Dim(0, effectIndex, Vector4.zero);
                        vhNative.SetUV4Dim(1, effectIndex, Vector4.zero);
                        vhNative.SetUV4Dim(2, effectIndex, Vector4.zero);
                        vhNative.SetColor(effectIndex, transparent);
                    }
                    continue;
                }

                TempNewUv0[0] = originUv0[i];
                TempNewUv0[1] = originUv0[i + 1];
                TempNewUv0[2] = originUv0[i + 2];
                TempNewUv0[3] = originUv0[i + 3];

                TempOriUv0[0] = originUv0[i];
                TempOriUv0[1] = originUv0[i + 1];
                TempOriUv0[2] = originUv0[i + 2];
                TempOriUv0[3] = originUv0[i + 3];

                Vector4 uvOrigin0_2;
                {
                    Vector4 uvMin = Vector2.Min(Vector2.Min(TempNewUv0[0], TempNewUv0[2]), TempNewUv0[1]);
                    Vector4 uvMax = Vector2.Max(Vector2.Max(TempNewUv0[0], TempNewUv0[2]), TempNewUv0[1]);
                    uvOrigin0_2 = new Vector4(uvMin.x, uvMin.y, uvMax.x, uvMax.y);
                }

                Vector4 uvOrigin3;
                {
                    Vector4 uvMin = Vector2.Min(Vector2.Min(TempNewUv0[0], TempNewUv0[2]), TempNewUv0[3]);
                    Vector4 uvMax = Vector2.Max(Vector2.Max(TempNewUv0[0], TempNewUv0[2]), TempNewUv0[3]);
                    uvOrigin3 = new Vector4(uvMin.x, uvMin.y, uvMax.x, uvMax.y);
                }

                Vector2 offset0_2;
                {
                    Vector2 ratio = Pos2TexCoordRatio(TempNewPos[0], TempNewPos[1], TempNewPos[2], TempNewUv0[0], TempNewUv0[1], TempNewUv0[2]);
                    bool exchangeXY = ExchangeXY(TempNewPos[0], TempNewPos[1], TempNewPos[2], TempNewUv0[0], TempNewUv0[1], TempNewUv0[2]);
                    offset0_2 = new Vector2((exchangeXY ? -effectDistance.y : effectDistance.x) / ratio.x, (exchangeXY ? -effectDistance.x : effectDistance.y) / ratio.y);
                }

                Vector2 offset3;
                {
                    Vector2 ratio = Pos2TexCoordRatio(TempNewPos[0], TempNewPos[3], TempNewPos[2], TempNewUv0[0], TempNewUv0[3], TempNewUv0[2]);
                    bool exchangeXY = ExchangeXY(TempNewPos[0], TempNewPos[3], TempNewPos[2], TempNewUv0[0], TempNewUv0[3], TempNewUv0[2]);
                    offset3 = new Vector2((exchangeXY ? -effectDistance.y : effectDistance.x) / ratio.x, (exchangeXY ? -effectDistance.x : effectDistance.y) / ratio.y);
                }



                // process V1
                for (int j = 0; j < 4; ++j)
                {
                    Vector2 offset = j == 3 ? offset3 : offset0_2;
                    TempNewPos[j].x += effectDistance.x;
                    TempNewPos[j].y += effectDistance.y;

                    TempNewUv0[j].z = TempNewUv0[j].x + offset.x;
                    TempNewUv0[j].w = TempNewUv0[j].y + offset.y;
                    //Vector4f newV1Uv1 = uvOrigin;
                    //newUv2[0] = Vector4f(1, 1, 0, 0);
                    TempNewColor[j] = effectColor;
                    if (useGraphicAlpha)
                    {
                        float originAlpha = (float)originColors[i].a / 255.0f;
                        TempNewColor[j].a = effectColor.a * originAlpha;
                    }
                    TempOriUv0[j].z = TempOriUv0[j].x - offset.x;
                    TempOriUv0[j].w = TempOriUv0[j].x - offset.x;

                    // modify effect vertex
                    vhNative.SetPosition(effectStart + triangleIdxOffset + j, TempNewPos[j]);
                    vhNative.SetUV4Dim(0, effectStart + triangleIdxOffset + j, TempNewUv0[j]);
                    vhNative.SetUV4Dim(1, effectStart + triangleIdxOffset + j, j == 3 ? uvOrigin3 : uvOrigin0_2);
                    vhNative.SetUV4Dim(2, effectStart + triangleIdxOffset + j, TempNewUv2);
                    vhNative.SetColor(effectStart + triangleIdxOffset + j, TempNewColor[j]);

                    // modify origin vertex
                    vhNative.SetUV4Dim(0, i + j, TempOriUv0[j]);
                    vhNative.SetUV4Dim(1, i + j, j == 3 ? uvOrigin3 : uvOrigin0_2);
                }
            }
        }


        protected override MeshGenerationMethod CurMeshGenerationMethod() { return MeshGenerationMethod.NativeArray; }

        protected override Boolean OnPopulateMeshNativeArray(out VertexHelperNative vhNative, Int32 _)
        {
            vhNative = null;
            if (font == null)
                return false;

            if (string.IsNullOrEmpty(text))
                return false;

            Int32 sampleIndex = -1;
            UGUIStats.BeginSample(UGUIStatsSampleId.UGUI,"OnPopulateMeshNativeArray.Text", ref sampleIndex);

            // We don't care if we the font Texture changes while we are doing our Update.
            // The end result of cachedTextGenerator will be valid for this instance.
            // Otherwise we can get issues like Case 619238.
            m_DisableFontTextureRebuiltCallback = true;

            Vector2 extents = rectTransform.rect.size;

            Int32 sampleIndexGenerateText = -1;
            UGUIStats.BeginSample(UGUIStatsSampleId.UGUI,"OnPopulateMeshNativeArray.GenerateText", ref sampleIndexGenerateText);
            TextGenerationSettings settings = new TextGenerationSettings();
            GetGenerationSettings(extents, ref settings);

            // Populate_Internal 会调用Native  ScriptingTextGenerator::GetStringRenderInfo
            // 来处理文字的vector信息，这块打开占用了70%的开销
            cachedTextGenerator.PopulateWithErrors(text, ref settings, gameObject);

            UGUIStats.EndSampleByIndex(ref sampleIndexGenerateText);


            Int32 vertCount = cachedTextGenerator.GetVertexCount();
            // We have no verts to process just return (case 1037923)
            if (vertCount <= 0)
            {
                UGUIStats.EndSampleByIndex(ref sampleIndex);
                return false;
            }

            UpdateEffectComps();
            GetTextEffectInfo(out TextEffectType effectType, out Color shadowColor, out Vector2 shadowDistance,
                            out bool shadowUseGraphicAlpha, out Color outlineColor, out Vector2 outlineDistance, out Boolean outlineUseGraphicAlpha);



            float unitsPerPixel = 1 / pixelsPerUnit;
            PopulateMeshText(unitsPerPixel , cachedTextGenerator,Vector2.zero
                           ,effectType,shadowColor,outlineColor,shadowDistance
                           , outlineDistance, shadowUseGraphicAlpha, outlineUseGraphicAlpha, false, out var _, out var _, out vhNative);


            m_DisableFontTextureRebuiltCallback = false;

            UGUIStats.EndSampleByIndex(ref sampleIndex);
            return true;
        }

        protected override void OnPopulateMesh(VertexHelper toFill)
        {
            if (font == null)
                return;

            Int32 sampleIndex = -1;
            UGUIStats.BeginSample(UGUIStatsSampleId.UGUI,"OnPopulateMesh", ref sampleIndex);

            // We don't care if we the font Texture changes while we are doing our Update.
            // The end result of cachedTextGenerator will be valid for this instance.
            // Otherwise we can get issues like Case 619238.
            m_DisableFontTextureRebuiltCallback = true;

            Vector2 extents = rectTransform.rect.size;

            Int32 sampleIndexGenerateText = -1;
            UGUIStats.BeginSample(UGUIStatsSampleId.UGUI,"OnPopulateMesh.GenerateText", ref sampleIndexGenerateText);
            TextGenerationSettings settings = new TextGenerationSettings();
            GetGenerationSettings(extents, ref settings);

            // Populate_Internal 会调用Native  ScriptingTextGenerator::GetStringRenderInfo
            // 来处理文字的vector信息，这块打开占用了70%的开销
            cachedTextGenerator.PopulateWithErrors(text, ref settings, gameObject);

            UGUIStats.EndSampleByIndex(ref sampleIndexGenerateText);

            // Apply the offset to the vertices
            IList<UIVertex> verts = cachedTextGenerator.verts;
            float unitsPerPixel = 1 / pixelsPerUnit;
            int vertCount = verts.Count;

            // We have no verts to process just return (case 1037923)
            if (vertCount <= 0)
            {
                toFill.Clear();
                UGUIStats.EndSampleByIndex(ref sampleIndex);
                return;
            }

            Vector2 roundingOffset = new Vector2(verts[0].position.x, verts[0].position.y) * unitsPerPixel;
            roundingOffset = PixelAdjustPoint(roundingOffset) - roundingOffset;

            toFill.Clear();


            if (roundingOffset != Vector2.zero)
            {
                for (int i = 0; i < vertCount; ++i)
                {
                    int tempVertsIndex = i & 3;
                    m_TempVerts[tempVertsIndex] = verts[i];
                    m_TempVerts[tempVertsIndex].position *= unitsPerPixel;
                    m_TempVerts[tempVertsIndex].position.x += roundingOffset.x;
                    m_TempVerts[tempVertsIndex].position.y += roundingOffset.y;
                    if (tempVertsIndex == 3)
                        toFill.AddUIVertexQuad(m_TempVerts);
                }
            }
            else
            {
                for (int i = 0; i < vertCount; ++i)
                {
                    int tempVertsIndex = i & 3;
                    m_TempVerts[tempVertsIndex] = verts[i];
                    m_TempVerts[tempVertsIndex].position *= unitsPerPixel;
                    if (tempVertsIndex == 3)
                        toFill.AddUIVertexQuad(m_TempVerts);
                }
            }

            m_DisableFontTextureRebuiltCallback = false;

            UGUIStats.EndSampleByIndex(ref sampleIndex);
        }

        public virtual void CalculateLayoutInputHorizontal() {}
        public virtual void CalculateLayoutInputVertical() {}

        public virtual float minWidth
        {
            get { return 0; }
        }

        public virtual float preferredWidth
        {
            get
            {
                TextGenerationSettings settings = new TextGenerationSettings();
                GetGenerationSettings(Vector2.zero, ref settings);
                return cachedTextGeneratorForLayout.GetPreferredWidth(m_Text, ref settings) / pixelsPerUnit;
            }
        }

        public virtual float flexibleWidth { get { return -1; } }

        public virtual float minHeight
        {
            get { return 0; }
        }

        public virtual float preferredHeight
        {
            get
            {
                TextGenerationSettings settings = new TextGenerationSettings();
                GetGenerationSettings(new Vector2(GetPixelAdjustedRect().size.x, 0.0f), ref settings);
                return cachedTextGeneratorForLayout.GetPreferredHeight(m_Text, ref settings) / pixelsPerUnit;
            }
        }

        public virtual float flexibleHeight { get { return -1; } }

        public virtual int layoutPriority { get { return 0; } }

#if UNITY_EDITOR
        public override void OnRebuildRequested()
        {
            // After a Font asset gets re-imported the managed side gets deleted and recreated,
            // that means the delegates are not persisted.
            // so we need to properly enforce a consistent state here.
            if (isActiveAndEnabled)
            {
                FontUpdateTracker.UntrackText(this);
                FontUpdateTracker.TrackText(this);
            }

            // Also the textgenerator is no longer valid.
            cachedTextGenerator.Invalidate();

            base.OnRebuildRequested();
        }

        // The Text inspector editor can change the font, and we need a way to track changes so that we get the appropriate rebuild callbacks
        // We can intercept changes in OnValidate, and keep track of the previous font reference
        protected override void OnValidate()
        {
            if (!IsActive())
            {
                base.OnValidate();
                return;
            }

            if (m_FontData.font != m_LastTrackedFont)
            {
                Font newFont = m_FontData.font;
                m_FontData.font = m_LastTrackedFont;

                if (isActiveAndEnabled)
                    FontUpdateTracker.UntrackText(this);

                m_FontData.font = newFont;

                if (isActiveAndEnabled)
                    FontUpdateTracker.TrackText(this);

                m_LastTrackedFont = newFont;
            }
            base.OnValidate();
        }

#endif // if UNITY_EDITOR
    }
}
