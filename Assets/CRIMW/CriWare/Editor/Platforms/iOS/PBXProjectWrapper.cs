/****************************************************************************
 *
 * Copyright (c) 2022 CRI Middleware Co., Ltd.
 *
 ****************************************************************************/
#if UNITY_IOS || UNITY_TVOS

using System.IO;
using UnityEditor.iOS.Xcode;
using UnityEngine;

namespace CriWare {
	internal class PBXProjectWrapper
	{
		private readonly string inputProjectPath;
		private PBXProject project;
		private string unityFrameworkGuid;

		public PBXProjectWrapper(string pbxprojPath) {
			this.project = new PBXProject();
			this.inputProjectPath = pbxprojPath;
			this.project.ReadFromString(File.ReadAllText(this.inputProjectPath));

#if UNITY_2019_3_OR_NEWER
			this.unityFrameworkGuid = this.project.GetUnityFrameworkTargetGuid();
#else
			this.unityFrameworkGuid = this.project.TargetGuidByName("Unity-iPhone");
#endif
		}

		public bool WriteModifiedProjectData(string outputPath) {
			if (!File.Exists(outputPath)) {
				return false;
			}
			File.WriteAllText(outputPath, this.project.WriteToString());
			return true;
		}

		public void AddFrameworkToProject(string frameworkName, bool isWeak) {
			this.project.AddFrameworkToProject(this.unityFrameworkGuid, frameworkName, isWeak);
		}

		public bool ContainsFileByRealPath(string path) {
			return this.project.ContainsFileByRealPath(path);
		}

		public bool ReorderedLinkingFile(string targetRelPath) {
			string guid = this.project.FindFileGuidByRealPath(targetRelPath, PBXSourceTree.Source);
			if (!string.IsNullOrEmpty(guid)) {
				this.project.RemoveFileFromBuild(this.unityFrameworkGuid, guid);
				this.project.AddFileToBuild(this.unityFrameworkGuid, guid);
			} else {
				return false;
			}
			return true;
		}

		public string AddFileAndCopy(string srcPath, string addFileRelPath, string compileFlags) {
			var dstPath = Path.Combine(GetProjectRootDir(), addFileRelPath);
			CopyFile(srcPath, dstPath);

			var fileGuid = this.project.AddFile(addFileRelPath, addFileRelPath, PBXSourceTree.Source);
			project.AddFileToBuildWithFlags(this.unityFrameworkGuid, fileGuid, compileFlags);
			return dstPath;
		}

		public bool SetBuildProperty(string targetBuildProperty, string value) {
			if (IsExistBuildProperty(targetBuildProperty)) {
				Debug.LogWarning($"[CRIWARE] Property({targetBuildProperty}) are overwritten." +
					"If the original settings are required, the file contents must be merged. File contents must be merged.");
			}
			this.project.SetBuildProperty(this.unityFrameworkGuid, targetBuildProperty, value);
			return true;
		}

		/* @cond excludele */
		public bool CleanExportSymbol() {
			string exportBuildOption = "EXPORTED_SYMBOLS_FILE";
			if (IsExistBuildProperty(exportBuildOption)) {
				// skip
				return true;
			}

			var fileName = "exported_symbols_file_for_criware.exp";
			var filePath = Path.Combine(Path.GetTempPath(), fileName);
			using (var writer = new StreamWriter(filePath, false)) {
				writer.WriteLine("_" + "CRIWARE39241274");
			}

			string fileRelPathOnXcode = Path.Combine("criware/", fileName);
			AddFileAndCopy(filePath, fileRelPathOnXcode, exportBuildOption);
			if (!SetBuildProperty(exportBuildOption, "$(PROJECT_DIR)/" + fileRelPathOnXcode)) {
				return false;
			}

			return true;
		}
		/* @endcond*/

		private bool IsExistBuildProperty(string targetBuildProperty) {
			var result = this.project.GetBuildPropertyForAnyConfig(this.unityFrameworkGuid, targetBuildProperty);
			if (string.IsNullOrEmpty(result)) {
				return false;
			} else {
				// whiteSpace is "Exist"
				return true;
			}
		}

		private string GetProjectRootDir() {
			string projectRootDir = Directory.GetParent(this.inputProjectPath).FullName;
			if (!projectRootDir.EndsWith(".xcodeproj")) {
				Debug.LogError("[CRIWARE] internal directory is not xcodeproj");
				return null;
			}

			return Directory.GetParent(projectRootDir).FullName;
		}

		private static void CopyFile(string srcPath, string dstPath) {
			// copy and make directory
			if (!Directory.Exists(Directory.GetParent(dstPath).FullName)) {
				Directory.CreateDirectory(Directory.GetParent(dstPath).FullName);
			}

			File.Copy(srcPath, dstPath, true);
		}
	}
} // namespace CriWare
#endif