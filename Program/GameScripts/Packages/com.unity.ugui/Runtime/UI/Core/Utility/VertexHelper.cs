using System;
using System.Collections.Generic;
using UnityEngine.Pool;

namespace UnityEngine.UI
{
    /// <summary>
    /// A utility class that can aid in the generation of meshes for the UI.
    /// </summary>
    /// <remarks>
    /// This class implements IDisposable to aid with memory management.
    /// </remarks>
    /// <example>
    /// <code>
    /// <![CDATA[
    /// using UnityEngine;
    /// using UnityEngine.UI;
    ///
    /// public class ExampleClass : MonoBehaviour
    /// {
    ///     Mesh m;
    ///
    ///     void Start()
    ///     {
    ///         Color32 color32 = Color.red;
    ///         using (var vh = new VertexHelper())
    ///         {
    ///             vh.AddVert(new Vector3(0, 0), color32, new Vector2(0f, 0f));
    ///             vh.AddVert(new Vector3(0, 100), color32, new Vector2(0f, 1f));
    ///             vh.AddVert(new Vector3(100, 100), color32, new Vector2(1f, 1f));
    ///             vh.AddVert(new Vector3(100, 0), color32, new Vector2(1f, 0f));
    ///
    ///             vh.AddTriangle(0, 1, 2);
    ///             vh.AddTriangle(2, 3, 0);
    ///             vh.FillMesh(m);
    ///         }
    ///     }
    /// }
    /// ]]>
    ///</code>
    /// </example>

    public class VertexHelper : IDisposable
    {
        private List<Vector3> m_Positions;
        private List<Color32> m_Colors;
        private List<Vector2> m_Uv0S;
        private List<Vector2> m_Uv1S;
        private List<Vector2> m_Uv2S;
        private List<Vector2> m_Uv3S;

        private List<Vector4> m_4Uv0S;
        private List<Vector4> m_4Uv1S;
        private List<Vector4> m_4Uv2S;
        private List<Vector4> m_4Uv3S;

        private List<Vector3> m_Normals;
        private List<Vector4> m_Tangents;
        private List<int> m_Indices;

        // sgame_unity2021_predev begin
        public const int c_defaultVertexCount = 4;
        public const int c_defaultIndiceCount = 6;
        private Vector3[] m_posArray = new Vector3[c_defaultVertexCount];
        private Color[] m_colorArray = new Color[c_defaultVertexCount];
        private Vector2[] m_uv0sArray = new Vector2[c_defaultVertexCount];
        private int[] m_indiceArray = new int[c_defaultIndiceCount];

        public int m_vertIdx = -1;

        public int m_vertIndiceIdx = -1;
        // sgame_unity2021_predev end

        private static readonly Vector4 s_DefaultTangent = new Vector4(1.0f, 0.0f, 0.0f, -1.0f);
        private static readonly Vector3 s_DefaultNormal = Vector3.back;

        private bool m_ListsInitalized = false;

        public VertexHelper()
        {}

        public VertexHelper(Mesh m)
        {
            InitializeListIfRequired();

            m_Positions.AddRange(m.vertices);
            m_Colors.AddRange(m.colors32);
            List<Vector2> tempUVList = new List<Vector2>();
            m.GetUVs(0, tempUVList);
            m_Uv0S.AddRange(tempUVList);
            m.GetUVs(1, tempUVList);
            m_Uv1S.AddRange(tempUVList);
            m.GetUVs(2, tempUVList);
            m_Uv2S.AddRange(tempUVList);
            m.GetUVs(3, tempUVList);
            m_Uv3S.AddRange(tempUVList);
            m_Normals.AddRange(m.normals);
            m_Tangents.AddRange(m.tangents);
            m_Indices.AddRange(m.GetIndices(0));
        }

        private void InitializeListIfRequired()
        {
            if (!m_ListsInitalized)
            {
                m_Positions = ListPool<Vector3>.Get();
                m_Colors = ListPool<Color32>.Get();
                m_Uv0S = ListPool<Vector2>.Get();
                m_Uv1S = ListPool<Vector2>.Get();
                m_Uv2S = ListPool<Vector2>.Get();
                m_Uv3S = ListPool<Vector2>.Get();
                m_4Uv0S = ListPool<Vector4>.Get();
                m_4Uv1S = ListPool<Vector4>.Get();
                m_4Uv2S = ListPool<Vector4>.Get();
                m_4Uv3S = ListPool<Vector4>.Get();
                m_Normals = ListPool<Vector3>.Get();
                m_Tangents = ListPool<Vector4>.Get();
                m_Indices = ListPool<int>.Get();
                m_ListsInitalized = true;
            }
        }

        /// <summary>
        /// Cleanup allocated memory.
        /// </summary>
        public void Dispose()
        {
            if (m_ListsInitalized)
            {
                ListPool<Vector3>.Release(m_Positions);
                ListPool<Color32>.Release(m_Colors);
                ListPool<Vector2>.Release(m_Uv0S);
                ListPool<Vector2>.Release(m_Uv1S);
                ListPool<Vector2>.Release(m_Uv2S);
                ListPool<Vector2>.Release(m_Uv3S);
                ListPool<Vector4>.Release(m_4Uv0S);
                ListPool<Vector4>.Release(m_4Uv1S);
                ListPool<Vector4>.Release(m_4Uv2S);
                ListPool<Vector4>.Release(m_4Uv3S);
                ListPool<Vector3>.Release(m_Normals);
                ListPool<Vector4>.Release(m_Tangents);
                ListPool<int>.Release(m_Indices);

                m_Positions = null;
                m_Colors = null;
                m_Uv0S = null;
                m_Uv1S = null;
                m_Uv2S = null;
                m_Uv3S = null;
                m_4Uv0S = null;
                m_4Uv1S = null;
                m_4Uv2S = null;
                m_4Uv3S = null;
                m_Normals = null;
                m_Tangents = null;
                m_Indices = null;

                m_ListsInitalized = false;
            }
        }

        /// <summary>
        /// Clear all vertices from the stream.
        /// </summary>
        public void Clear()
        {
            // Only clear if we have our lists created.
            if (m_ListsInitalized)
            {
                m_Positions.Clear();
                m_Colors.Clear();
                m_Uv0S.Clear();
                m_Uv1S.Clear();
                m_Uv2S.Clear();
                m_Uv3S.Clear();
                m_4Uv0S.Clear();
                m_4Uv1S.Clear();
                m_4Uv2S.Clear();
                m_4Uv3S.Clear();
                m_Normals.Clear();
                m_Tangents.Clear();
                m_Indices.Clear();
            }
        }

        /// <summary>
        /// Current number of vertices in the buffer.
        /// </summary>
        public int currentVertCount
        {
            get { return m_Positions != null ? m_Positions.Count : 0; }
        }

        /// <summary>
        /// Get the number of indices set on the VertexHelper.
        /// </summary>
        public int currentIndexCount
        {
            get { return m_Indices != null ? m_Indices.Count : 0; }
        }

        /// <summary>
        /// Fill a UIVertex with data from index i of the stream.
        /// </summary>
        /// <param name="vertex">Vertex to populate</param>
        /// <param name="i">Index to populate.</param>
        public void PopulateUIVertex(ref UIVertex vertex, int i, bool use4DimUvFillMesh = false)
        {
            InitializeListIfRequired();

            vertex.position = m_Positions[i];
            vertex.color = m_Colors[i];
            if (use4DimUvFillMesh)
            {
                vertex.uv0 = m_4Uv0S[i];
                vertex.uv1 = m_4Uv1S[i];
                vertex.uv2 = m_4Uv2S[i];
                vertex.uv3 = m_4Uv3S[i];
            }
            else
            {
                vertex.uv0 = m_Uv0S[i];
                vertex.uv1 = m_Uv1S[i];
                vertex.uv2 = m_Uv2S[i];
                vertex.uv3 = m_Uv3S[i];
            }
            vertex.normal = m_Normals[i];
            vertex.tangent = m_Tangents[i];
        }

        public void PopulateUIVertex(ref Vector3 position, ref Color32 color, ref Vector4 uv0, ref Vector4 uv1, ref Vector4 uv2, ref Vector4 uv3, ref Vector3 normal, ref Vector4 tangent, int i, bool use4DimUvFillMesh = false)
        {
            position = m_Positions[i];
            color = m_Colors[i];
            if (use4DimUvFillMesh)
            {
                uv0 = m_4Uv0S[i];
                uv1 = m_4Uv1S[i];
                uv2 = m_4Uv2S[i];
                uv3 = m_4Uv3S[i];
            }
            else
            {
                uv0 = m_Uv0S[i];
                uv1 = m_Uv1S[i];
                uv2 = m_Uv2S[i];
                uv3 = m_Uv3S[i];
            }
            normal = m_Normals[i];
            tangent = m_Tangents[i];
        }

        public void SetUIVertex(Vector3 position, Color32 color, Vector4 uv0, Vector4 uv1, Vector4 uv2, Vector4 uv3, Vector3 normal, Vector4 tangent, int i, bool use4DimUvFillMesh = false)
        {
            m_Positions[i] = position;
            m_Colors[i] = color;
            if (use4DimUvFillMesh)
            {
                m_4Uv0S[i] = uv0;
                m_4Uv1S[i] = uv1;
                m_4Uv2S[i] = uv2;
                m_4Uv3S[i] = uv3;
            }
            else
            {
                m_Uv0S[i] = uv0;
                m_Uv1S[i] = uv1;
                m_Uv2S[i] = uv2;
                m_Uv3S[i] = uv3;
            }
            m_Normals[i] = normal;
            m_Tangents[i] = tangent;
        }


            /// <summary>
            /// Set a UIVertex at the given index.
            /// </summary>
            /// <param name="vertex">The vertex to fill</param>
            /// <param name="i">the position in the current list to fill.</param>
        public void SetUIVertex(UIVertex vertex, int i, bool use4DimUvFillMesh = false)
        {
            InitializeListIfRequired();

            m_Positions[i] = vertex.position;
            m_Colors[i] = vertex.color;
            if (use4DimUvFillMesh)
            {
                m_4Uv0S[i] = vertex.uv0;
                m_4Uv1S[i] = vertex.uv1;
                m_4Uv2S[i] = vertex.uv2;
                m_4Uv3S[i] = vertex.uv3;
            }
            else
            {
                m_Uv0S[i] = vertex.uv0;
                m_Uv1S[i] = vertex.uv1;
                m_Uv2S[i] = vertex.uv2;
                m_Uv3S[i] = vertex.uv3;
            }
            m_Normals[i] = vertex.normal;
            m_Tangents[i] = vertex.tangent;
        }

        /// <summary>
        /// Fill the given mesh with the stream data.
        /// </summary>
        public void FillMesh(Mesh mesh, bool use4DimUvFillMesh = false)
        {
            InitializeListIfRequired();

            mesh.Clear();

            if (m_Positions.Count >= 65000)
                throw new ArgumentException("Mesh can not have more than 65000 vertices");

            mesh.SetVertices(m_Positions);
            mesh.SetColors(m_Colors);
            if (use4DimUvFillMesh)
            {
                mesh.SetUVs(0, m_4Uv0S);
                mesh.SetUVs(1, m_4Uv1S);
                mesh.SetUVs(2, m_4Uv2S);
                mesh.SetUVs(3, m_4Uv3S);
            }
            else
            {
                mesh.SetUVs(0, m_Uv0S);
                mesh.SetUVs(1, m_Uv1S);
                mesh.SetUVs(2, m_Uv2S);
                mesh.SetUVs(3, m_Uv3S);
            }
            mesh.SetNormals(m_Normals);
            mesh.SetTangents(m_Tangents);
            mesh.SetTriangles(m_Indices, 0);
            mesh.RecalculateBounds();
        }

        /// <summary>
        /// Add a single vertex to the stream.
        /// </summary>
        /// <param name="position">Position of the vert</param>
        /// <param name="color">Color of the vert</param>
        /// <param name="uv0">UV of the vert</param>
        /// <param name="uv1">UV1 of the vert</param>
        /// <param name="uv2">UV2 of the vert</param>
        /// <param name="uv3">UV3 of the vert</param>
        /// <param name="normal">Normal of the vert.</param>
        /// <param name="tangent">Tangent of the vert</param>
        public void AddVert(Vector3 position, Color32 color, Vector2 uv0, Vector2 uv1, Vector2 uv2, Vector2 uv3, Vector3 normal, Vector4 tangent)
        {
            InitializeListIfRequired();

            m_Positions.Add(position);
            m_Colors.Add(color);
            m_Uv0S.Add(uv0);
            m_Uv1S.Add(uv1);
            m_Uv2S.Add(uv2);
            m_Uv3S.Add(uv3);
            m_Normals.Add(normal);
            m_Tangents.Add(tangent);
        }

        public void AddVert(Vector3 position, Color32 color, Vector4 uv0, Vector4 uv1, Vector4 uv2, Vector3 normal, Vector4 tangent)
        {
            m_Positions.Add(position);
            m_Colors.Add(color);
            m_4Uv0S.Add(uv0);
            m_4Uv1S.Add(uv1);
            m_4Uv2S.Add(uv2);
            m_4Uv3S.Add(Vector4.zero);
            m_Normals.Add(normal);
            m_Tangents.Add(tangent);
        }
        /// <summary>
        /// Add a single vertex to the stream.
        /// </summary>
        /// <param name="position">Position of the vert</param>
        /// <param name="color">Color of the vert</param>
        /// <param name="uv0">UV of the vert</param>
        /// <param name="uv1">UV1 of the vert</param>
        /// <param name="uv2">UV2 of the vert</param>
        /// <param name="normal">Normal of the vert.</param>
        /// <param name="tangent">Tangent of the vert</param>
        public void AddVert(Vector3 position, Color32 color, Vector2 uv0, Vector2 uv1, Vector2 uv2, Vector3 normal, Vector4 tangent)
        {
            AddVert(position, color, uv0, uv1, uv2, Vector4.zero, normal, tangent);
        }

        /// <summary>
        /// Add a single vertex to the stream.
        /// </summary>
        /// <param name="position">Position of the vert</param>
        /// <param name="color">Color of the vert</param>
        /// <param name="uv0">UV of the vert</param>
        /// <param name="uv1">UV1 of the vert</param>
        /// <param name="normal">Normal of the vert.</param>
        /// <param name="tangent">Tangent of the vert</param>
        public void AddVert(Vector3 position, Color32 color, Vector2 uv0, Vector2 uv1, Vector3 normal, Vector4 tangent)
        {
            AddVert(position, color, uv0, uv1, Vector2.zero, Vector2.zero, normal, tangent);
        }

        /// <summary>
        /// Add a single vertex to the stream.
        /// </summary>
        /// <param name="position">Position of the vert</param>
        /// <param name="color">Color of the vert</param>
        /// <param name="uv0">UV of the vert</param>
        public void AddVert(Vector3 position, Color32 color, Vector2 uv0)
        {
            AddVert(position, color, uv0, Vector2.zero, s_DefaultNormal, s_DefaultTangent);
        }

        /// <summary>
        /// Add a single vertex to the stream.
        /// </summary>
        /// <param name="v">The vertex to add</param>
        public void AddVert(UIVertex v)
        {
            AddVert(v.position, v.color, v.uv0, v.uv1, v.uv2, v.uv3, v.normal, v.tangent);
        }

        /// <summary>
        /// Add a triangle to the buffer.
        /// </summary>
        /// <param name="idx0">index 0</param>
        /// <param name="idx1">index 1</param>
        /// <param name="idx2">index 2</param>
        public void AddTriangle(int idx0, int idx1, int idx2)
        {
            InitializeListIfRequired();

            m_Indices.Add(idx0);
            m_Indices.Add(idx1);
            m_Indices.Add(idx2);
        }

        // sgame_unity2022_upgrade begin
        public void AllocateVertArray(int vertArrayLength, int vertIndiceArrayLength)
        {
            if (vertArrayLength > m_posArray.Length)
            {
                Allocate(ref m_posArray, vertArrayLength, false);
                Allocate(ref m_colorArray, vertArrayLength, false);
                Allocate(ref m_uv0sArray, vertArrayLength, false);
            }

            if (vertIndiceArrayLength > m_indiceArray.Length)
            {
                Allocate(ref m_indiceArray, vertIndiceArrayLength, false);
            }
        }

#if UNITY_2022_1_OR_NEWER
        public void AddIndiceArray(int idx0, int idx1, int idx2)
        {
            int startIdx = m_vertIndiceIdx + 1;

            if (startIdx + 2 < m_indiceArray.Length)
            {
                m_indiceArray[startIdx] = idx0;
                m_indiceArray[startIdx + 1] = idx1;
                m_indiceArray[startIdx + 2] = idx2;

                m_vertIndiceIdx += 3;

            }
        }
        public void AddVertArray(Vector3 position, Color32 color, Vector2 uv0)
        {
            int startIdx = m_vertIdx + 1;

            if (startIdx < m_posArray.Length)
            {
                m_posArray[startIdx] = position;
                m_colorArray[startIdx] = color;
                m_uv0sArray[startIdx] = uv0;
                m_vertIdx += 1;
            }
        }

        public int currentVertIdx
        {
            get { return m_vertIdx + 1; }
        }
        public int currentVertIndiceIdx
        {
            get { return m_vertIndiceIdx + 1; }
        }

#endif

        protected static void Allocate<T>(ref T[] array, int length, bool mustEqual)
        {
            if (array == null || array.Length < length || (mustEqual && array.Length != length))
            {
                array = new T[length];
            }
        }
        // sgame_unity2022_upgrade end

        /// <summary>
        /// Add a quad to the stream.
        /// </summary>
        /// <param name="verts">4 Vertices representing the quad.</param>
        public void AddUIVertexQuad(UIVertex[] verts)
        {
            int startIndex = currentVertCount;

            for (int i = 0; i < 4; i++)
                AddVert(verts[i].position, verts[i].color, verts[i].uv0, verts[i].uv1, verts[i].normal, verts[i].tangent);

            AddTriangle(startIndex, startIndex + 1, startIndex + 2);
            AddTriangle(startIndex + 2, startIndex + 3, startIndex);
        }

        /// <summary>
        /// Add a stream of custom UIVertex and corresponding indices.
        /// </summary>
        /// <param name="verts">The custom stream of verts to add to the helpers internal data.</param>
        /// <param name="indices">The custom stream of indices to add to the helpers internal data.</param>
        public void AddUIVertexStream(List<UIVertex> verts, List<int> indices)
        {
            InitializeListIfRequired();

            if (verts != null)
            {
                CanvasRenderer.AddUIVertexStream(verts, m_Positions, m_Colors, m_Uv0S, m_Uv1S, m_Uv2S, m_Uv3S, m_Normals, m_Tangents);
            }

            if (indices != null)
            {
                m_Indices.AddRange(indices);
            }
        }

        /// <summary>
        /// Add a list of triangles to the stream.
        /// </summary>
        /// <param name="verts">Vertices to add. Length should be divisible by 3.</param>
        public void AddUIVertexTriangleStream(List<UIVertex> verts)
        {
            if (verts == null)
                return;

            InitializeListIfRequired();

            CanvasRenderer.SplitUIVertexStreams(verts, m_Positions, m_Colors, m_Uv0S, m_Uv1S, m_Uv2S, m_Uv3S, m_Normals, m_Tangents, m_Indices);
        }

        /// <summary>
        /// Create a stream of UI vertex (in triangles) from the stream.
        /// </summary>
        public void GetUIVertexStream(List<UIVertex> stream)
        {
            if (stream == null)
                return;

            InitializeListIfRequired();

            CanvasRenderer.CreateUIVertexStream(stream, m_Positions, m_Colors, m_Uv0S, m_Uv1S, m_Uv2S, m_Uv3S, m_Normals, m_Tangents, m_Indices);
        }
    }
}
