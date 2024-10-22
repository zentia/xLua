/****************************************************************************
 *
 * Copyright (c) 2022 CRI Middleware Co., Ltd.
 *
 ****************************************************************************/
#if UNITY_IOS || UNITY_TVOS
using System.Linq;
using UnityEditor;
using UnityEngine;

namespace CriWare {

	public partial class CriWareBuildPostprocessor : ScriptableObject
    {
		static partial void PostProcessForVP9(CriWareBuildPostprocessor instance, BuildTarget buildTarget, PBXProjectWrapper pBXProject);

		static string[] requiredFrameworks = new string[]
			{ "VideoToolbox.framework", "OpenGLES.framework", "Metal.framework" };

		static partial void PostProcessForPlatform(CriWareBuildPostprocessor instance, BuildTarget buildTarget, string path) {
			if (buildTarget != BuildTarget.iOS && buildTarget != BuildTarget.tvOS) {
				return;
			}
			EditPBXProject(instance, buildTarget, path);
		}

		private static void EditPBXProject(CriWareBuildPostprocessor instance, BuildTarget buildTarget, string path) {
			string projectPath = path + "/Unity-iPhone.xcodeproj/project.pbxproj";
			var pBXProject = new PBXProjectWrapper(projectPath);

			if (instance.iosAddDependencyFrameworks) {
				Debug.Log("[CRIWARE][iOS] Add dependency frameworks (" +
					string.Join(", ", requiredFrameworks) +
					")");
				requiredFrameworks.ToList().ForEach(name => pBXProject.AddFrameworkToProject(name, false));
			}
			if (instance.iosReorderLibraryLinkingsForVp9) {
				PostProcessForVP9(instance, buildTarget, pBXProject);
			}

			/* @cond excludele */
			if (!pBXProject.CleanExportSymbol()) {
				throw new UnityEditor.Build.BuildFailedException("[CRIWARE] Internal Error.");
			}
			/* @endcond*/

			pBXProject.WriteModifiedProjectData(projectPath);

		}

	}
} //namespace CriWare
#endif