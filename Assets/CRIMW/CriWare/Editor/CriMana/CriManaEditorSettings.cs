/****************************************************************************
 *
 * Copyright (c) CRI Middleware Co., Ltd.
 *
 ****************************************************************************/

using UnityEditor;

namespace CriWare.Editor { 

	public class CriManaEditorSettingsProvider : SettingsProvider
	{
		static readonly string settingPath = "Project/CRIWARE/Editor/Mana Preview";

		public CriManaEditorSettingsProvider(string path, SettingsScope scope) : base(path, scope) { }

		public override void OnGUI(string searchContext) {
			EditorGUI.indentLevel++;
			EditorGUILayout.Space();
			EditorGUILayout.LabelField("Library Initialization Settings for Video Previewing in the Editor", EditorStyles.boldLabel);
			EditorGUI.indentLevel++;
			EditorGUILayout.Space();
#if UNITY_2018_1_OR_NEWER && CRIWARE_TIMELINE_1_OR_NEWER
			CriTimeline.Mana.CriManaTimelineEditorSettings.Instance.EditorInstance.OnInspectorGUI();
#endif
			EditorGUI.indentLevel -= 2;
		}

		[SettingsProvider]
		static SettingsProvider Create() {
			var provider = new CriManaEditorSettingsProvider(settingPath, SettingsScope.Project);
			return provider;
		}
	} //class CriManaEditorSettingsProvider

} //namespace CriWare.Editor