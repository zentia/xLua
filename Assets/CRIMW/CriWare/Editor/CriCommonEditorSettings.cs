/****************************************************************************
 *
 * Copyright (c) 2023 CRI Middleware Co., Ltd.
 *
 ****************************************************************************/


using UnityEngine;
using UnityEditor;

namespace CriWare.Editor
{
	public class CriCommonEditorSettingsProvider : SettingsProvider
	{
		static readonly string settingPath = "Project/CRIWARE/Editor/Common";

		public CriCommonEditorSettingsProvider(string path, SettingsScope scope) : base(path, scope) { }

		public override void OnGUI(string searchContext)
		{
			EditorGUI.indentLevel++;
			EditorGUILayout.Space();
			EditorGUILayout.LabelField("Common Editor Settings for CRIWARE", EditorStyles.boldLabel);
			EditorGUI.indentLevel++;
			EditorGUILayout.Space();
			CriCommonEditorSettings.Instance.EditorInstance.OnInspectorGUI();
			EditorGUI.indentLevel -= 2;
		}

		[SettingsProvider]
		static SettingsProvider Create()
		{
			var provider = new CriCommonEditorSettingsProvider(settingPath, SettingsScope.Project);
			return provider;
		}
	} //class CriCommonEditorSettingsProvider

	public class CriCommonEditorSettings : ScriptableObject
	{
		static readonly string SettingsDirPath = "Assets/CriData/Settings";
		static CriCommonEditorSettings instance = null;

		private UnityEditor.Editor editorInstance = null;
		internal UnityEditor.Editor EditorInstance
		{
			get
			{
				if (editorInstance == null)
				{
					editorInstance = UnityEditor.Editor.CreateEditor(this);
				}
				return editorInstance;
			}
		}

		private bool hasSettingsChanged = false;
		internal void SetChangeFlag() { hasSettingsChanged = true; }
		internal bool GetChangeStatusOnce()
		{
			bool currentChangeStatus = hasSettingsChanged;
			hasSettingsChanged = false;
			return currentChangeStatus;
		}

		[SerializeField]
		private bool enableStaticFieldReload = true;
		internal bool EnableStaticFieldReload { get { return enableStaticFieldReload; } set { enableStaticFieldReload = value; } }
		internal static CriCommonEditorSettings Instance
		{
			get
			{
				if (instance == null)
				{
					var guids = AssetDatabase.FindAssets("t:" + typeof(CriCommonEditorSettings).Name);
					if (guids.Length <= 0)
					{
						if (!System.IO.Directory.Exists(SettingsDirPath))
						{
							System.IO.Directory.CreateDirectory(SettingsDirPath);
						}
						instance = CreateInstance<CriCommonEditorSettings>();
						AssetDatabase.CreateAsset(instance, System.IO.Path.Combine(SettingsDirPath, typeof(CriCommonEditorSettings).Name + ".asset"));
						AssetDatabase.Refresh();
					}
					else
					{
						var assetPath = AssetDatabase.GUIDToAssetPath(guids[0]);
						if (guids.Length > 1)
						{
							Debug.LogWarning("[CRIWARE] Multiple setting files founded. Using " + assetPath);
						}
						instance = AssetDatabase.LoadAssetAtPath<CriCommonEditorSettings>(assetPath);
					}
				}
				return instance;
			}
		}
	} //class CriCommonEditorSettings

	[CustomEditor(typeof(CriCommonEditorSettings))]
	public class CriCommonEditorSettingsEditor : UnityEditor.Editor
	{
		private SerializedProperty enableStaticFieldReloadProp;

		private void OnEnable()
		{
			enableStaticFieldReloadProp = serializedObject.FindProperty("enableStaticFieldReload");
		}

		public override void OnInspectorGUI()
		{
			const float LABEL_WIDTH = 250;
			float prevLabelWidth;

			serializedObject.Update();
			prevLabelWidth = EditorGUIUtility.labelWidth;
			EditorGUIUtility.labelWidth = LABEL_WIDTH;

#if UNITY_2019_3_OR_NEWER
			EditorGUILayout.PropertyField(enableStaticFieldReloadProp);

			if (!enableStaticFieldReloadProp.boolValue && EditorSettings.enterPlayModeOptionsEnabled)
			{
				EditorGUILayout.HelpBox("Enable this option to reload static fields in CRIWARE runtime when reload domain is disabled.", MessageType.Info);
			}

			if (serializedObject.hasModifiedProperties)
			{
				if (enableStaticFieldReloadProp.serializedObject.hasModifiedProperties)
				{
					EditorUtility.RequestScriptReload();
				}
				(target as CriCommonEditorSettings).SetChangeFlag();
			}
#endif
			serializedObject.ApplyModifiedProperties();

		}
	} //class CriCommonEditorSettingsEditor

} //namespace CriWare.Editor


