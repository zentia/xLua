using System.Collections.Generic;
using UnityEngine.Pool;

namespace UnityEngine.UI
{
    [AddComponentMenu("UI/Effects/Outline", 81)]
    /// <summary>
    /// Adds an outline to a graphic using IVertexModifier.
    /// </summary>
    public class Outline : Shadow
    {
        [SerializeField]
        public List<Color> SimilarOutLineColor = new();


        public void SetSimilarOutlineColorByIndex(int index)
        {
            if ((SimilarOutLineColor == null) || (SimilarOutLineColor.Count == 0))
            {
                return;
            }
            index = Mathf.Clamp(index, 0, SimilarOutLineColor.Count - 1);
            var c = SimilarOutLineColor[index];
            if(effectColor != c)
            {
                effectColor = c;
            }
        }

        protected Outline()
        {}

        public override void ModifyMesh(VertexHelper vh)
        {
            if (!IsActive())
                return;

            var verts = ListPool<UIVertex>.Get();
            vh.GetUIVertexStream(verts);

            var neededCpacity = verts.Count * 5;
            if (verts.Capacity < neededCpacity)
                verts.Capacity = neededCpacity;

            var start = 0;
            var end = verts.Count;
            ApplyShadowZeroAlloc(verts, effectColor, start, verts.Count, effectDistance.x, effectDistance.y);

            start = end;
            end = verts.Count;
            ApplyShadowZeroAlloc(verts, effectColor, start, verts.Count, effectDistance.x, -effectDistance.y);

            start = end;
            end = verts.Count;
            ApplyShadowZeroAlloc(verts, effectColor, start, verts.Count, -effectDistance.x, effectDistance.y);

            start = end;
            end = verts.Count;
            ApplyShadowZeroAlloc(verts, effectColor, start, verts.Count, -effectDistance.x, -effectDistance.y);

            vh.Clear();
            vh.AddUIVertexTriangleStream(verts);
            ListPool<UIVertex>.Release(verts);
        }
    }
}
