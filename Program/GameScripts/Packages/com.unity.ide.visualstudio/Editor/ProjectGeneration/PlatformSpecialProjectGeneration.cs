using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEditor;
using UnityEngine;

namespace Microsoft.Unity.VisualStudio.Editor
{
    public class PlatformSpecialProjectGeneration : SGameProjectGeneration
    {
        public PlatformSpecialProjectGeneration(bool isEditor, BuildTargetGroup buildTargetGroup, BuildTarget buildTarget, PlatformSpecialAssemblyNameProvider assemblyNameProvider = null)
        : base(Path.Combine(Directory.GetParent(Directory.GetParent(Application.dataPath).FullName).FullName, "Program", "PlatformSpecialProject", isEditor ? "Editor" : "Player", buildTarget.ToString()), assemblyNameProvider ?? new PlatformSpecialAssemblyNameProvider(isEditor, buildTargetGroup, buildTarget))
        {

        }
    }
}
