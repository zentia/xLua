using UnityEngine;
using UnityEngine.UI;

namespace UnityEditor.UI
{
    [CustomEditor(typeof(Mask), true)]
    [CanEditMultipleObjects]
    /// <summary>
    /// Custom Editor for the Mask component.
    /// Extend this class to write a custom editor for a component derived from Mask.
    /// </summary>
    public class MaskEditor : Editor
    {
        SerializedProperty m_ShowMaskGraphic;

        // sgame_unity2021_predev
        SerializedProperty m_BlockMaskPopInstruction;
        // osg_unity_dev
        SerializedProperty m_EnableSoftMask;
        SerializedProperty m_SoftMask;
        SerializedProperty m_SoftMaskMode;
        SerializedProperty m_SoftMaskSize;
        SerializedProperty m_SoftMaskClipRatioMode;

        private RectTransform rectTransform;
        protected virtual void OnEnable()
        {
            m_ShowMaskGraphic = serializedObject.FindProperty("m_ShowMaskGraphic");
            // sgame_unity2021_predev
            m_BlockMaskPopInstruction = serializedObject.FindProperty("m_BlockMaskPopInstruction");
            // osg_unity_dev
            m_EnableSoftMask = serializedObject.FindProperty("m_EnableSoftMask");
            m_SoftMask = serializedObject.FindProperty("m_SoftMask");
            m_SoftMaskMode = serializedObject.FindProperty("m_SoftMaskMode");
            m_SoftMaskClipRatioMode = serializedObject.FindProperty("m_SoftMaskClipRatioMode");
            m_SoftMaskSize = serializedObject.FindProperty("m_SoftMaskSize");

            rectTransform =  ((Mask)target).GetComponent<RectTransform>();
        }

        public override void OnInspectorGUI()
        {
            var maskTarget = (Mask)target;
            var graphic = maskTarget.GetComponent<Graphic>();

            if (graphic && !graphic.IsActive())
                EditorGUILayout.HelpBox("Masking disabled due to Graphic component being disabled.", MessageType.Warning);

            serializedObject.Update();
            EditorGUILayout.PropertyField(m_ShowMaskGraphic);
            // sgame_unity2021_predev
            EditorGUILayout.PropertyField(m_BlockMaskPopInstruction);
            // osg_unity_dev
            EditorGUILayout.PropertyField(m_EnableSoftMask);
            if (m_EnableSoftMask.boolValue)
            {
                // EditorGUILayout.PropertyField(m_SoftMask);
                EditorGUI.BeginChangeCheck();
                // 绘制基本属性
                EditorGUILayout.PropertyField(m_SoftMaskMode);
                EditorGUILayout.PropertyField(m_SoftMaskClipRatioMode);
                // 获取当前模式
                Mask.SoftMaskMode maskMode = (Mask.SoftMaskMode)m_SoftMaskMode.enumValueIndex;
                Mask.SoftMaskClipRatioMode ratioMode = (Mask.SoftMaskClipRatioMode)m_SoftMaskClipRatioMode.enumValueIndex;
                Vector4 currentSize = m_SoftMaskSize.vector4Value;

                using (new EditorGUILayout.VerticalScope(GUI.skin.box))
                {
                    EditorGUILayout.LabelField("Soft Mask Settings", EditorStyles.boldLabel);

                    switch (maskMode)
                    {
                        case Mask.SoftMaskMode.Horizontal:
                            DisplayHorizontalControls(ref currentSize, ratioMode);
                            break;
                        case Mask.SoftMaskMode.Vertical:
                            DisplayVerticalControls(ref currentSize, ratioMode);
                            break;
                    }

                    if (EditorGUI.EndChangeCheck())
                    {
                        m_SoftMaskSize.vector4Value = currentSize;
                        serializedObject.ApplyModifiedProperties();
                        maskTarget?.UpdateSoftMask();
                    }
                }

            }
            serializedObject.ApplyModifiedProperties();
        }

        private void DisplayHorizontalControls(ref Vector4 currentSize, Mask.SoftMaskClipRatioMode ratioMode)
        {
            EditorGUILayout.LabelField("Horizontal Mask Settings", EditorStyles.miniBoldLabel);

            EditorGUI.BeginChangeCheck();

            float maxValue = ratioMode == Mask.SoftMaskClipRatioMode.FixRectRatio ? 1.0f : (rectTransform != null ? rectTransform.rect.width : 1000f);
            string valueSuffix = ratioMode == Mask.SoftMaskClipRatioMode.FixRectRatio ? " (Ratio)" : " (Rect)";

            // Z分量控制（水平模式下的左边界）
            float leftValue = EditorGUILayout.Slider(
                new GUIContent("Left Distance" + valueSuffix),
                currentSize.z,
                0,
                maxValue);

            // W分量控制（水平模式下的右边界）
            float rightValue = EditorGUILayout.Slider(
                new GUIContent("Right Distance" + valueSuffix),
                currentSize.w,
                0,
                maxValue);

            // 添加约束：两者之和小于等于1（比例模式）或宽度（像素模式）
            if (ratioMode == Mask.SoftMaskClipRatioMode.FixRectRatio)
            {
                if (leftValue + rightValue > 1.0f)
                {
                    float total = leftValue + rightValue;
                    leftValue = leftValue / total;
                    rightValue = rightValue / total;

                    EditorGUILayout.HelpBox(
                        "Left + Right distances must be <= 1.0. Values have been normalized.",
                        MessageType.Warning);
                }
            }
            else if (rectTransform != null)
            {
                float rectWidth = rectTransform.rect.width;
                if (leftValue + rightValue > rectWidth)
                {
                    float overflow = leftValue + rightValue - rectWidth;
                    leftValue -= overflow * (leftValue / (leftValue + rightValue));
                    rightValue -= overflow * (rightValue / (leftValue + rightValue));

                    EditorGUILayout.HelpBox(
                        $"Left + Right distances must be <= {rectWidth}px. Values have been clamped.",
                        MessageType.Warning);
                }
            }
            if (EditorGUI.EndChangeCheck())
            {
                currentSize.z = leftValue;
                currentSize.w = rightValue;
            }

            // 显示实时预览信息
            if (rectTransform != null && ratioMode == Mask.SoftMaskClipRatioMode.FixRectRatio)
            {
                float rectWidth = rectTransform.rect.width;
                float pixelLeft = leftValue * rectWidth;
                float pixelRight = rightValue * rectWidth;

                EditorGUILayout.LabelField(
                    $"Actual: Left={pixelLeft:F1}px, Right={pixelRight:F1}px",
                    EditorStyles.miniLabel);
            }
        }
        private void DisplayVerticalControls(ref Vector4 currentSize, Mask.SoftMaskClipRatioMode ratioMode)
        {
            EditorGUILayout.LabelField("Vertical Mask Settings", EditorStyles.miniBoldLabel);

            EditorGUI.BeginChangeCheck();

            float maxValue = ratioMode == Mask.SoftMaskClipRatioMode.FixRectRatio ? 1.0f : (rectTransform != null ? rectTransform.rect.height : 1000f);
            string valueSuffix = ratioMode == Mask.SoftMaskClipRatioMode.FixRectRatio ? " (Ratio)" : " (Pixels)";

            // Y分量控制（垂直模式下的上边界）
            float topValue = EditorGUILayout.Slider(
                new GUIContent("Top Distance" + valueSuffix),
                currentSize.x,
                0,
                maxValue);


            // X分量控制（垂直模式下的下边界）
            float bottomValue = EditorGUILayout.Slider(
                new GUIContent("ottom Distance" + valueSuffix),
                currentSize.y,
                0,
                maxValue);

            // 添加约束：两者之和小于等于1（比例模式）或高度（像素模式）
            if (ratioMode == Mask.SoftMaskClipRatioMode.FixRectRatio)
            {
                if (bottomValue + topValue > 1.0f)
                {
                    float total = bottomValue + topValue;
                    bottomValue = bottomValue / total;
                    topValue = topValue / total;

                    EditorGUILayout.HelpBox(
                        "Bottom + Top distances must be <= 1.0. Values have been normalized.",
                        MessageType.Warning);
                }
            }
            else if (rectTransform != null)
            {
                float rectHeight = rectTransform.rect.height;
                if (bottomValue + topValue > rectHeight)
                {
                    float overflow = bottomValue + topValue - rectHeight;
                    bottomValue -= overflow * (bottomValue / (bottomValue + topValue));
                    topValue -= overflow * (topValue / (bottomValue + topValue));

                    EditorGUILayout.HelpBox(
                        $"Bottom + Top distances must be <= {rectHeight}px. Values have been clamped.",
                        MessageType.Warning);
                }
            }
            if (EditorGUI.EndChangeCheck())
            {
                currentSize.x = topValue;
                currentSize.y = bottomValue;
            }

            // 显示实时预览信息
            if (rectTransform != null && ratioMode == Mask.SoftMaskClipRatioMode.FixRectRatio)
            {
                float rectHeight = rectTransform.rect.height;
                float pixelBottom = bottomValue * rectHeight;
                float pixelTop = topValue * rectHeight;

                EditorGUILayout.LabelField(
                    $"Actual: Bottom={pixelBottom:F1}px, Top={pixelTop:F1}px",
                    EditorStyles.miniLabel);
            }
        }
    }
}
