/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Unity Technologies.
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using SR = System.Reflection;
using System.Security;
using System.Security.Cryptography;
using System.Text;
using System.Text.RegularExpressions;
using Unity.CodeEditor;
using Unity.Profiling;
using UnityEditor;
using UnityEditor.Compilation;
using UnityEngine;

namespace Microsoft.Unity.VisualStudio.Editor
{
    public class SGameProjectGeneration : LegacyStyleProjectGeneration
	{
        protected string SolutionDirectory { get; set; }

        public SGameProjectGeneration(string solutionDirectory, AssemblyNameProvider assemblyNameProvider = null) 
            : base(Directory.GetParent(Application.dataPath).FullName, assemblyNameProvider ?? new AssemblyNameProvider(), new FileIOProvider(), new GUIDProvider())
        {
            SolutionDirectory = string.IsNullOrEmpty(solutionDirectory) ? Path.Combine(Directory.GetParent(Directory.GetParent(Application.dataPath).FullName).FullName, "Program") : solutionDirectory;
            m_ProjectName = Path.GetFileName(ProjectDirectory);
        }

        public override void Sync()
        {
            Directory.CreateDirectory(SolutionDirectory);
            base.Sync();
        }

        protected override void AppendReference(string fullReference, StringBuilder projectBuilder)
        {
            projectBuilder.Append(@"    <Reference Include=""").Append(Path.GetFileNameWithoutExtension(fullReference)).Append(@""">").Append(k_WindowsNewline);
            projectBuilder.Append("      <HintPath>").Append(fullReference).Append("</HintPath>").Append(k_WindowsNewline);
            projectBuilder.Append("      <Private>False</Private>").Append(k_WindowsNewline);
            projectBuilder.Append("    </Reference>").Append(k_WindowsNewline);
        }

        protected override void IncludeAsset(StringBuilder builder, IncludeAssetTag tag, string asset)
        {
            asset = asset.NormalizePathSeparators();
            string solutionDirectoryNormalized = SolutionDirectory.NormalizePathSeparators();
            string projectDirectoryNormalized = ProjectDirectory.NormalizePathSeparators();
            string assetFullPathNormalized = Path.GetFullPath(asset).NormalizePathSeparators();
            string assetRelativePathForSolutionDirectory = SkipPathPrefix(assetFullPathNormalized, solutionDirectoryNormalized);
            string assetRelativePathForProject = SkipPathPrefix(assetFullPathNormalized, projectDirectoryNormalized);
            UnityEditor.PackageManager.PackageInfo packageInfo = m_AssemblyNameProvider.FindForAssetPath(asset);

            if (!Path.IsPathRooted(assetRelativePathForSolutionDirectory))
            {
                builder.Append("    <").Append(tag).Append(@" Include=""").Append(assetRelativePathForSolutionDirectory);
                builder.Append(@""" />").Append(k_WindowsNewline);
            }
            else if (!Path.IsPathRooted(assetRelativePathForProject))
            {
                builder.Append("    <").Append(tag).Append(@" Include=""").Append(assetFullPathNormalized);
                builder.Append(@""">").Append(k_WindowsNewline);
                builder.Append("      <Link>").Append(assetRelativePathForProject).Append("</Link>").Append(k_WindowsNewline);
                builder.Append($"    </{tag}>").Append(k_WindowsNewline);
            }
            else if (packageInfo != null)
            {
                // We are outside the Unity project and using a package context
                var linkPath = SkipPathPrefix(asset.NormalizePathSeparators(), packageInfo.assetPath.NormalizePathSeparators());

                builder.Append(@""">").Append(k_WindowsNewline);
                builder.Append("      <Link>").Append(linkPath).Append("</Link>").Append(k_WindowsNewline);
                builder.Append($"    </{tag}>").Append(k_WindowsNewline);
            }
            else
            {
                builder.Append("    <").Append(tag).Append(@" Include=""").Append(assetFullPathNormalized);
                builder.Append(@""" />").Append(k_WindowsNewline);
            }
        }

        public override string ProjectFile(Assembly assembly)
        {
            return Path.Combine(SolutionDirectory, $"{m_AssemblyNameProvider.GetAssemblyName(assembly.outputPath, assembly.name)}.csproj");
        }

        public override string SolutionFile()
        {
            return Path.Combine(SolutionDirectory.NormalizePathSeparators(), $"{InvalidCharactersRegexPattern.Replace(m_ProjectName, "_")}.sln");
        }

        //internal override string VsConfigFile()
        //{
        //    return Path.Combine(SolutionDirectory.NormalizePathSeparators(), ".vsconfig");
        //}
    }
}
