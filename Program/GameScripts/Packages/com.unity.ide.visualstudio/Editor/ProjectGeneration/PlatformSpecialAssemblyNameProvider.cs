/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Unity Technologies.
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/
using System;
using System.Collections.Generic;
using System.Linq;
using UnityEditor;
using UnityEditor.Compilation;

namespace Microsoft.Unity.VisualStudio.Editor
{
	public class PlatformSpecialAssemblyNameProvider : AssemblyNameProvider
    {
        private bool isEditor;
		private BuildTargetGroup buildTargetGroup;
		private BuildTarget buildTarget;
		public PlatformSpecialAssemblyNameProvider(bool isEditor, BuildTargetGroup buildTargetGroup, BuildTarget buildTarget)
		{
            this.isEditor = isEditor;
			this.buildTargetGroup = buildTargetGroup;
			this.buildTarget = buildTarget;
        }

        public override IEnumerable<Assembly> GetAssemblies(Func<string, bool> shouldFileBePartOfSolution)
        {
            string outputPath = string.Format(@"Bin\Debug");
            if (isEditor)
            {
                return GetPlatformSpecialAssembliesByType(AssembliesType.Editor, shouldFileBePartOfSolution, outputPath);
            }
            else
            {
                return GetPlatformSpecialAssembliesByType(AssembliesType.Player, shouldFileBePartOfSolution, outputPath);
            }
        }

        private IEnumerable<Assembly> GetPlatformSpecialAssembliesByType(AssembliesType type, Func<string, bool> shouldFileBePartOfSolution, string outputPath)
        {
            foreach (var assembly in CompilationPipeline.GetAssemblies(type, buildTargetGroup, buildTarget))
            {
                if (assembly.sourceFiles.Any(shouldFileBePartOfSolution))
                {
                    yield return new Assembly(
                        assembly.name,
                        outputPath,
                        assembly.sourceFiles,
                        assembly.defines,
                        assembly.assemblyReferences,
                        assembly.compiledAssemblyReferences,
                        assembly.flags,
                        assembly.compilerOptions
#if UNITY_2020_2_OR_NEWER
                        , assembly.rootNamespace
#endif
                    );
                }
            }
        }
    }
}
