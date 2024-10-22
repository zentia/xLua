/****************************************************************************
 *
 * Copyright (c) CRI Middleware Co., Ltd.
 *
 ****************************************************************************/

#if UNITY_2018_1_OR_NEWER && CRIWARE_TIMELINE_1_OR_NEWER

using UnityEngine;
using UnityEditor;

namespace CriWare {

	namespace CriTimeline.Mana {
		public class CriManaTimelineEditorSettings : ScriptableObject {
			static readonly string SettingsDirPath = "Assets/CriData/Settings";
			static CriManaTimelineEditorSettings instance = null;

			private UnityEditor.Editor editorInstance = null;
			public UnityEditor.Editor EditorInstance {
				get {
					if (editorInstance == null) {
						editorInstance = UnityEditor.Editor.CreateEditor(this);
					}
					return editorInstance;
				}
			}

			[SerializeField]
			private bool enableTimelineScrubPlayback = false;

			public static bool IsScrubEnabled() { return Instance.enableTimelineScrubPlayback; }

			public static CriManaTimelineEditorSettings Instance {
				get {
					if (instance == null) {
						var guids = AssetDatabase.FindAssets("t:" + typeof(CriManaTimelineEditorSettings).Name);
						if (guids.Length <= 0) {
							if (!System.IO.Directory.Exists(SettingsDirPath)) {
								System.IO.Directory.CreateDirectory(SettingsDirPath);
							}
							instance = CreateInstance<CriManaTimelineEditorSettings>();
							AssetDatabase.CreateAsset(instance, System.IO.Path.Combine(SettingsDirPath, typeof(CriManaTimelineEditorSettings).Name + ".asset"));
						} else {
							var assetPath = AssetDatabase.GUIDToAssetPath(guids[0]);
							if (guids.Length > 1) {
								Debug.LogWarning("[CRIWARE] Multiple setting files founded. Using " + assetPath);
							}
							instance = AssetDatabase.LoadAssetAtPath<CriManaTimelineEditorSettings>(assetPath);
						}
					}
					return instance;
				}
			}
		}

		[CustomEditor(typeof(CriManaTimelineEditorSettings))]
		public class CriManaTimelineEditorSettingsEditor : UnityEditor.Editor {
			private SerializedProperty enableTimelineScrubPlaybackProp;

			private void OnEnable() {
				enableTimelineScrubPlaybackProp = serializedObject.FindProperty("enableTimelineScrubPlayback");
			}

			public override void OnInspectorGUI() {
				const float LABEL_WIDTH = 250;
				float prevLabelWidth;

				serializedObject.Update();
				prevLabelWidth = EditorGUIUtility.labelWidth;
				EditorGUIUtility.labelWidth = LABEL_WIDTH;
				EditorGUILayout.PropertyField(enableTimelineScrubPlaybackProp);
				if (enableTimelineScrubPlaybackProp.boolValue) {
					EditorGUILayout.HelpBox("Using scrub playback on the Mana Timeline extension may lead to a laggy UI if videos with high resolution are played on the track.", MessageType.Info);
				}
				EditorGUILayout.Space();
				EditorGUIUtility.labelWidth = prevLabelWidth;
				serializedObject.ApplyModifiedProperties();
			}
		} //class CriManaEditorSettingsEditor
	}
} //namespace CriWare

#endif