// #define VERTEX_HELPER_NATIVE_DBG
using System;
using System.Collections.Generic;
using System.Net.NetworkInformation;
using Unity.Collections;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Pool;
using UnityEngine.Rendering;

namespace UnityEngine.UI
{
    public class VertexHelperNativeCache
    {
        public static AdditionalCanvasShaderChannels[] ChannelsKeys = new []
        {
            AdditionalCanvasShaderChannels.None,
            AdditionalCanvasShaderChannels.TexCoord1,
            AdditionalCanvasShaderChannels.TexCoord1 | AdditionalCanvasShaderChannels.TexCoord2,
            AdditionalCanvasShaderChannels.TexCoord1 | AdditionalCanvasShaderChannels.TexCoord2 | AdditionalCanvasShaderChannels.TexCoord3,
            AdditionalCanvasShaderChannels.TexCoord1 | AdditionalCanvasShaderChannels.TexCoord2 | AdditionalCanvasShaderChannels.TexCoord3
            | AdditionalCanvasShaderChannels.Normal,
            AdditionalCanvasShaderChannels.TexCoord1 | AdditionalCanvasShaderChannels.TexCoord2 | AdditionalCanvasShaderChannels.TexCoord3
            | AdditionalCanvasShaderChannels.Normal | AdditionalCanvasShaderChannels.Tangent,
        };
        private Int32 uvDim;
        private Int32 quadCount;

        private Dictionary<AdditionalCanvasShaderChannels, VertexHelperNative> cache;
#if OSG_PROFILE
        private Dictionary<AdditionalCanvasShaderChannels, Int64> useStats;
#endif

        public VertexHelperNativeCache(Int32 quadCount, Int32 uvDim)
        {
            if (uvDim != 4 && uvDim != 2)
            {
                throw new Exception($"VertexHelperNativeCache - GetVertexHelper: uvDim: {uvDim} not support!");
            }
            this.uvDim = uvDim;
            this.quadCount = quadCount;
            cache = new Dictionary<AdditionalCanvasShaderChannels, VertexHelperNative>(ChannelsKeys.Length);

#if OSG_PROFILE
            useStats = new Dictionary<AdditionalCanvasShaderChannels, Int64>(ChannelsKeys.Length);
#endif
        }

        public VertexHelperNative GetCache(AdditionalCanvasShaderChannels additionalCanvasShaderChannels)
        {
#if OSG_PROFILE
            if (useStats.TryGetValue(additionalCanvasShaderChannels, out var useCount ))
            {
                useStats[additionalCanvasShaderChannels] = useCount + 1;
            }
            else
            {
                useStats.Add(additionalCanvasShaderChannels, 1);
            }
#endif

            if (cache.TryGetValue(additionalCanvasShaderChannels, out var vh))
            {
                return vh;
            }
            VertexHelperNative ret = new VertexHelperNative(quadCount, false, additionalCanvasShaderChannels, uvDim);
            cache.Add(additionalCanvasShaderChannels, ret);

            return ret;
        }
    }

    public class VertexHelperNative : IDisposable// where T : struct
    {
        private NativeArray<Vector3> m_Positions;
        private NativeArray<Color32> m_Colors;
        private NativeArray<Vector2>[] m_Uv;// = new NativeArray<Vector2>[4];
        private NativeArray<Vector4>[] m_4DimUv;// = new NativeArray<Vector4>[4];

        private NativeArray<Vector3> m_Normals;
        private NativeArray<Vector4> m_Tangents;
        private NativeArray<UInt16> m_Indices;


        private static readonly Vector4 s_DefaultTangent = new Vector4(1.0f, 0.0f, 0.0f, -1.0f);
        private static readonly Vector3 s_DefaultNormal = Vector3.back;


        private Int32 m_VertexSize = 0;
        private Int32 m_IndicesSize = 0;
        private Int32 m_UvDim = 2;
        public Int32 UvDim => m_UvDim;
        private bool m_fillColor = false;
        private AdditionalCanvasShaderChannels m_additionalCanvasShaderChannels;

        private static Int32[] m_CacheSizeList = {1, 4, 12, 36, 128, 256};

        /// <summary>
        /// for 1 quad
        /// </summary>
        private static readonly Dictionary<Int32, VertexHelperNativeCache> s_VhCache4Dim = new Dictionary<Int32, VertexHelperNativeCache>();
        private static readonly Dictionary<Int32, VertexHelperNativeCache> s_VhCache2Dim = new Dictionary<Int32, VertexHelperNativeCache>();

        static VertexHelperNative()
        {
            // AdditionalCanvasShaderChannels[] keys = new []
            // {
            //     AdditionalCanvasShaderChannels.None,
            //     AdditionalCanvasShaderChannels.TexCoord1,
            //     AdditionalCanvasShaderChannels.TexCoord1 | AdditionalCanvasShaderChannels.TexCoord2,
            //     AdditionalCanvasShaderChannels.TexCoord1 | AdditionalCanvasShaderChannels.TexCoord2 | AdditionalCanvasShaderChannels.TexCoord3,
            //     AdditionalCanvasShaderChannels.TexCoord1 | AdditionalCanvasShaderChannels.TexCoord2 | AdditionalCanvasShaderChannels.TexCoord3
            //     | AdditionalCanvasShaderChannels.Normal,
            //     AdditionalCanvasShaderChannels.TexCoord1 | AdditionalCanvasShaderChannels.TexCoord2 | AdditionalCanvasShaderChannels.TexCoord3
            //     | AdditionalCanvasShaderChannels.Normal | AdditionalCanvasShaderChannels.Tangent,
            // };


            s_VhCache2Dim = new Dictionary<Int32, VertexHelperNativeCache>();
            s_VhCache4Dim = new Dictionary<Int32, VertexHelperNativeCache>();
            // foreach(AdditionalCanvasShaderChannels k in VertexHelperNativeCache.ChannelsKeys)
            // {
            //     s_VhCache2Dim.Add(1, new Dictionary<AdditionalCanvasShaderChannels, VertexHelperNative>{[k] = new (1, false, k, 2)} );
            //     s_VhCache2Dim.Add(4, new Dictionary<AdditionalCanvasShaderChannels, VertexHelperNative>{[k] = new (4, false, k, 2)} );
            // }
            // foreach(AdditionalCanvasShaderChannels k in VertexHelperNativeCache.ChannelsKeys)
            // {
            //     s_VhCache4Dim.Add(k, new VertexHelperNative(4, false, k, 4));
            // }
        }


        public static VertexHelperNative GetVertexHelper(Int32 quadCount
                                                       , AdditionalCanvasShaderChannels additionalCanvasShaderChannels = AdditionalCanvasShaderChannels.None
                                                       , Int32 uvDim = 2)
        {
            if (uvDim != 4 && uvDim != 2)
            {
                throw new Exception($"VertexHelperNative - GetVertexHelper: uvDim: {uvDim} not support!");
            }


            Int32 useCacheSize = -1;
            for(int i = 0; i < m_CacheSizeList.Length; ++i)
            {
                if (m_CacheSizeList[i] >= quadCount)
                {
                    useCacheSize = m_CacheSizeList[i];
                    break;
                }
            }

            if(useCacheSize == -1)
            {
                return new VertexHelperNative(quadCount, true, additionalCanvasShaderChannels, uvDim);
            }
            else
            {

                VertexHelperNative vh = null;
                if (uvDim == 4)
                {
                    VertexHelperNativeCache cache4Dim = null;
                    if (!s_VhCache4Dim.TryGetValue(quadCount, out cache4Dim))
                    {
                        cache4Dim = new VertexHelperNativeCache(quadCount, 4);
                        s_VhCache4Dim.Add(quadCount, cache4Dim);
                    }
                    vh = cache4Dim.GetCache(additionalCanvasShaderChannels);
                }
                else if (uvDim == 2)
                {
                    VertexHelperNativeCache cache2Dim = null;
                    if (!s_VhCache2Dim.TryGetValue(quadCount, out cache2Dim))
                    {
                        cache2Dim = new VertexHelperNativeCache(quadCount, 2);
                        s_VhCache2Dim.Add(quadCount, cache2Dim);
                    }

                    vh = cache2Dim.GetCache(additionalCanvasShaderChannels);
                }

                vh.Clear();
                return vh;
            }
        }

        public VertexHelperNative(Int32 quadCount, bool useTemplateMem, AdditionalCanvasShaderChannels additionalCanvasShaderChannels, Int32 uvDim)
        {
            // all are fixed size
            Int32 vertexCount = quadCount * 4;
            Int32 indicesCount = quadCount * 6;

            Allocator allocator = useTemplateMem ? Allocator.Temp : Allocator.Persistent;

#if UNITY_EDITOR && !OSG_GC_PROFILE
            Debug.LogFormat(LogType.Log, LogOption.NoStacktrace, null, "new VertexHelperNative, quad: {0} useTemplateMem: {1} additionalCanvasShaderChannels: {2} uvDim: {3}", quadCount, useTemplateMem, additionalCanvasShaderChannels, uvDim);
#endif

#if VERTEX_HELPER_NATIVE_DBG
            NativeArrayOptions nativeArrayOptions = NativeArrayOptions.ClearMemory;
#else
            NativeArrayOptions nativeArrayOptions = NativeArrayOptions.UninitializedMemory;
#endif

            m_additionalCanvasShaderChannels = additionalCanvasShaderChannels;
            m_UvDim = uvDim;

            m_Positions = new NativeArray<Vector3>(vertexCount, allocator, nativeArrayOptions);
            m_Colors = new NativeArray<Color32>(vertexCount, allocator, nativeArrayOptions);
            m_Indices = new NativeArray<UInt16>(indicesCount, allocator, nativeArrayOptions);
            if (uvDim == 2)
            {
                m_Uv = new NativeArray<Vector2>[4];
                m_Uv[0] = new NativeArray<Vector2>(vertexCount, allocator, nativeArrayOptions);
                if ((additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_Uv[1] = new NativeArray<Vector2>(vertexCount, allocator, nativeArrayOptions);

                if ((additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_Uv[2] = new NativeArray<Vector2>(vertexCount, allocator, nativeArrayOptions);

                if ((additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_Uv[3] = new NativeArray<Vector2>(vertexCount, allocator, nativeArrayOptions);
            }
            else if (uvDim == 4)
            {
                m_4DimUv = new NativeArray<Vector4>[4];
                m_4DimUv[0] = new NativeArray<Vector4>(vertexCount, allocator, nativeArrayOptions);
                if ((additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_4DimUv[1] = new NativeArray<Vector4>(vertexCount, allocator, nativeArrayOptions);

                if ((additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_4DimUv[2] = new NativeArray<Vector4>(vertexCount, allocator, nativeArrayOptions);

                if ((additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_4DimUv[3] = new NativeArray<Vector4>(vertexCount, allocator, nativeArrayOptions);
            }

            if ((additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Normal) > 0)
                m_Normals = new NativeArray<Vector3>(vertexCount, allocator, nativeArrayOptions);

            if ((additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Tangent) > 0)
                m_Tangents = new NativeArray<Vector4>(vertexCount, allocator, nativeArrayOptions);
        }
        public void Clear()
        {
            m_VertexSize = 0;
            m_IndicesSize = 0;
            m_fillColor = false;

#if VERTEX_HELPER_NATIVE_DBG
            {
                for(int i = 0; i < m_Positions.Length; i++)
                {
                    m_Positions[i] = Vector3.zero;
                }
            }
#endif

        }

        public NativeArray<Vector3> GetPositions()
        {
            return m_Positions;
        }

        public void SetPosition(Int32 index, Vector3 pos)
        {
            if (index < 0 || index >= m_Positions.Length)
                Debug.Assert(false, "SetPosition idx invalid");
            m_Positions[index] = pos;
        }

        public void SetUV4Dim(Int32 uvIndex, Int32 index, Vector4 uv)
        {
            if (uvIndex < 0 || uvIndex > 3)
                Debug.Assert(false, "SetUV0 uvIndex invalid");

            if (index < 0 || index >= m_4DimUv[uvIndex].Length)
                Debug.Assert(false, "SetUV0 uvIndex invalid");
            m_4DimUv[uvIndex][index] = uv;
        }

        public void SetColor(Int32 index, Color32 color)
        {
            if (index < 0 || index >= m_Colors.Length)
                Debug.Assert(false, "SetPosition idx invalid");
            m_Colors[index] = color;
        }

        public void ModifyVertBaseOn(Int32 idx, Int32 baseOnIdx, Vector3 position)
        {
            modifyVertBaseOn(idx, baseOnIdx, position, null);
        }

        public void ModifyVertBaseOn(Int32 idx, Int32 baseOnIdx, Vector3 position, Color32 color)
        {
            modifyVertBaseOn(idx, baseOnIdx, position, color);
        }

        public void modifyVertBaseOn(Int32 idx, Int32 baseOnIdx, Vector3 position, Color32? color)
        {
            if (idx < 0 || idx >= m_Positions.Length)
            {
                Debug.AssertFormat(false, "[ModifyVertBaseOn] idx[{0}] out of range[0, {1}],", idx , m_Positions.Length);
                return;
            }

            if (baseOnIdx < 0 || baseOnIdx >= m_Positions.Length)
            {
                Debug.AssertFormat(false, "[ModifyVertBaseOn] baseOnIdx[{0}] out of range[0, {1}],", idx , m_Positions.Length);
                return;
            }

            m_Positions[idx] = position;
            if (color.HasValue)
            {
                m_Colors[idx] = color.Value;
            }
            else
            {
                m_Colors[idx] = m_Colors[baseOnIdx];
            }


            if (m_UvDim == 4)
            {
                m_4DimUv[0][idx] = m_4DimUv[0][baseOnIdx];

                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_4DimUv[1][idx]  = m_4DimUv[0][baseOnIdx];
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_4DimUv[2][idx]  = m_4DimUv[0][baseOnIdx];
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_4DimUv[3][idx]  = m_4DimUv[0][baseOnIdx];
            }
            else if (m_UvDim == 2)
            {
                m_Uv[0][idx] = m_Uv[0][baseOnIdx];
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_Uv[1][idx]  = m_Uv[0][baseOnIdx];
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_Uv[2][idx]  = m_Uv[0][baseOnIdx];
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_Uv[3][idx]  = m_Uv[0][baseOnIdx];
            }

            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Normal) > 0)
                m_Normals[idx] = m_Normals[baseOnIdx];
            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Tangent) > 0)
                m_Tangents[idx] = m_Tangents[baseOnIdx];
        }


        public bool GetUVs(Int32 uvIndex, out NativeArray<Vector2> uvs)
        {
            if (uvIndex < 0 || uvIndex > 3)
            {
                uvs = new NativeArray<Vector2>();
                return false;
            }

            uvs = m_Uv[uvIndex];
            return true;
        }

        public bool GetUVs4Dim(Int32 uvIndex, out NativeArray<Vector4> uvs)
        {
            if (uvIndex < 0 || uvIndex > 3)
            {
                uvs = new NativeArray<Vector4>();
                return false;
            }

            uvs = m_4DimUv[uvIndex];
            return true;
        }

        public void ResetUv4Dim(Int32 uvIndex, Int32 startIndex, Int32 count)
        {
            if (uvIndex < 0 || uvIndex > 3)
            {
                Debug.LogAssertion($"VertexHelperNative - ResetUv4Dim: uvIndex({uvIndex}) invalid!");
                return ;
            }

            Int32 endIndex = startIndex + count;
            if (startIndex < 0 || startIndex >= m_4DimUv[uvIndex].Length
                || endIndex < 0 || endIndex > m_4DimUv[uvIndex].Length
            )
            {
                Debug.LogAssertion($"VertexHelperNative - ResetUv4Dim: startIndex({uvIndex}) out count({count}) invalid! uv{uvIndex}_size: {m_4DimUv[uvIndex].Length}");
                return;
            }

            for(int i = startIndex; i < endIndex; i++)
            {
                m_4DimUv[uvIndex][i] = Vector4.zero;
            }
        }

        public NativeArray<Color32> GetColors()
        {
            return m_Colors;
        }
        public void SetFillColor(bool fillColor)
        {
            m_fillColor = fillColor;
        }

        /// <summary>
        /// init triangles by quad
        /// </summary>
        public bool AddQuadUninitialized(Int32 quadCount)
        {
            Int32 vertexCount = quadCount * 4;

            if (vertexCount > m_Positions.Length)
            {
                var errorMsg = $"VertexHelperNative.InitQuadUninitialized: vertexCount({vertexCount}) > bufferSize({m_Positions.Length})";
                #if UNITY_EDITOR
                    throw new Exception(errorMsg);
                #endif
                Debug.LogError(errorMsg);
                return false;
            }


            Int32 startIndex = m_VertexSize;
            for (Int32 i = 0; i < quadCount; ++i)
            {
                AddTriangle(startIndex, startIndex + 1, startIndex + 2);
                AddTriangle(startIndex + 2, startIndex + 3, startIndex);
                startIndex += 4;
            }
            m_VertexSize += vertexCount;
            return true;
        }

        /// <summary>
        /// Cleanup allocated memory.
        /// </summary>
        public void Dispose()
        {
            m_Positions.Dispose();
            m_Colors.Dispose();
            m_Indices.Dispose();

            for(int i = 0; i < m_Uv.Length; i++)
            {
                m_Uv[i].Dispose();
            }

            for(int i = 0; i < m_4DimUv.Length; i++)
            {
                m_4DimUv[i].Dispose();
            }

            m_Normals.Dispose();
            m_Tangents.Dispose();
        }


        /// <summary>
        /// Current number of vertices in the buffer.
        /// </summary>
        public int currentVertCount
        {
            get { return m_VertexSize; }
        }

        /// <summary>
        /// Get the number of indices set on the VertexHelper.
        /// </summary>
        public int currentIndexCount
        {
            get { return m_IndicesSize; }
        }

        /// <summary>
        /// Fill the given mesh with the stream data.
        /// </summary>
        public void FillMesh(Mesh workMesh)
        {
            workMesh.Clear(false);

            if (m_Positions.Length >= 65000)
            {
                throw new ArgumentException("Mesh can not have more than 65000 vertices");
            }

            if (m_VertexSize == 0 || m_IndicesSize == 0)
            {
                return;
            }

            Int32 sampleIndex = -1;
            UGUIStats.BeginSample(UGUIStatsSampleId.UGUI,"DoMeshGeneration.FillMesh", ref sampleIndex);

            MeshUpdateFlags updateFlags = MeshUpdateFlags.DontRecalculateBounds
                                          | MeshUpdateFlags.DontValidateIndices
                                          | MeshUpdateFlags.DontNotifyMeshUsers
                                          | MeshUpdateFlags.DontResetBoneBounds;
            workMesh.SetVertices(m_Positions, 0, m_VertexSize, updateFlags);
            workMesh.SetIndices(m_Indices, 0, m_IndicesSize, MeshTopology.Triangles, 0, false, 0);

            if(m_fillColor)
                workMesh.SetColors(m_Colors, 0, m_VertexSize, updateFlags);

            if (m_UvDim == 2)
            {
                workMesh.SetUVs(0, m_Uv[0], 0, m_VertexSize, updateFlags);
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    workMesh.SetUVs(1, m_Uv[1], 0, m_VertexSize, updateFlags);
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    workMesh.SetUVs(2, m_Uv[2], 0, m_VertexSize, updateFlags);
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    workMesh.SetUVs(3, m_Uv[3], 0, m_VertexSize, updateFlags);

            }
            else if (m_UvDim == 4)
            {
                workMesh.SetUVs(0, m_4DimUv[0], 0, m_VertexSize, updateFlags);
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    workMesh.SetUVs(1, m_4DimUv[1], 0, m_VertexSize, updateFlags);
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    workMesh.SetUVs(2, m_4DimUv[2], 0, m_VertexSize, updateFlags);
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    workMesh.SetUVs(3, m_4DimUv[3], 0, m_VertexSize, updateFlags);
            }
            else
            {
                throw new Exception($"VertexHelperNative - FillMesh: uvDim: {m_UvDim} not supported");
            }

            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Normal) > 0)
                workMesh.SetNormals(m_Normals, 0, m_VertexSize, updateFlags);
            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Tangent) > 0)
                workMesh.SetTangents(m_Tangents, 0, m_VertexSize, updateFlags);

            workMesh.RecalculateBounds();
            UGUIStats.EndSampleByIndex(ref sampleIndex);
        }

        public void AddVert(Vector3 position, Color32 color, Vector2 uv0, Vector2 uv1, Vector2 uv2, Vector2 uv3, Vector3 normal, Vector4 tangent)
        {
            m_Positions[m_VertexSize] = position;
            m_Colors[m_VertexSize] = color;
            if (m_UvDim == 2)
            {
                m_Uv[0][m_VertexSize] = uv0;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_Uv[1][m_VertexSize] = uv1;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_Uv[2][m_VertexSize] = uv2;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_Uv[3][m_VertexSize] = uv3;
            }
            else if ( m_UvDim == 4)
            {
                m_4DimUv[0][m_VertexSize] = uv0;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_4DimUv[1][m_VertexSize] = uv1;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_4DimUv[2][m_VertexSize] = uv2;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_4DimUv[3][m_VertexSize] = uv3;
            }
            else
            {
                throw new Exception($"VertexHelperNative - AddVert: uvDim: {m_UvDim} not supported");
            }

            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Normal) > 0)
                m_Normals[m_VertexSize] = normal;

            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Tangent) > 0)
                m_Tangents[m_VertexSize] = tangent;
            m_VertexSize++;
            m_fillColor = true;
        }

        public void AddVert(Vector3 position, Color32 color, Vector2 uv0, Vector2 uv1, Vector2 uv2, Vector3 normal, Vector4 tangent)
        {
            m_Positions[m_VertexSize] = position;
            m_Colors[m_VertexSize] = color;

            if (m_UvDim == 2)
            {
                m_Uv[0][m_VertexSize] = uv0;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_Uv[1][m_VertexSize] = uv1;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_Uv[2][m_VertexSize] = uv2;

                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_Uv[3][m_VertexSize] = Vector2.zero;
            }
            else if ( m_UvDim == 4)
            {
                m_4DimUv[0][m_VertexSize] = uv0;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_4DimUv[1][m_VertexSize] = uv1;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_4DimUv[2][m_VertexSize] = uv2;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_4DimUv[3][m_VertexSize] = Vector2.zero;
            }
            else
            {
                throw new Exception($"VertexHelperNative - AddVert: uvDim: {m_UvDim} not supported");
            }

            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Normal) > 0)
                m_Normals[m_VertexSize] = normal;
            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Tangent) > 0)
                m_Tangents[m_VertexSize] = tangent;
            m_VertexSize++;
            m_fillColor = true;
        }

        public void AddVert(Vector3 position, Color32 color, Vector2 uv0, Vector2 uv1, Vector3 normal, Vector4 tangent)
        {
            m_Positions[m_VertexSize] = position;
            m_Colors[m_VertexSize] = color;
            if (m_UvDim == 2)
            {
                m_Uv[0][m_VertexSize] = uv0;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_Uv[1][m_VertexSize] = uv1;

                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_Uv[2][m_VertexSize] = Vector2.zero;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_Uv[3][m_VertexSize] = Vector2.zero;
            }
            else if ( m_UvDim == 4)
            {
                m_4DimUv[0][m_VertexSize] = uv0;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_4DimUv[1][m_VertexSize] = uv1;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_4DimUv[2][m_VertexSize] = Vector2.zero;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_4DimUv[3][m_VertexSize] = Vector2.zero;
            }
            else
            {
                throw new Exception($"VertexHelperNative - AddVert: uvDim: {m_UvDim} not supported");
            };
            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Normal) > 0)
                m_Normals[m_VertexSize] = normal;
            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Tangent) > 0)
                m_Tangents[m_VertexSize] = tangent;
            m_VertexSize++;
            m_fillColor = true;
        }

        public void AddVert(Vector3 position, Color32 color, Vector2 uv0, Vector3 normal, Vector4 tangent)
        {
            m_Positions[m_VertexSize] = position;
            m_Colors[m_VertexSize] = color;
            if (m_UvDim == 2)
            {
                m_Uv[0][m_VertexSize] = uv0;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_Uv[1][m_VertexSize] = Vector2.zero;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_Uv[2][m_VertexSize] = Vector2.zero;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_Uv[3][m_VertexSize] = Vector2.zero;
            }
            else if ( m_UvDim == 4)
            {
                m_4DimUv[0][m_VertexSize] = uv0;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_4DimUv[1][m_VertexSize] = Vector2.zero;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_4DimUv[2][m_VertexSize] = Vector2.zero;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_4DimUv[3][m_VertexSize] = Vector2.zero;
            }
            else
            {
                throw new Exception($"VertexHelperNative - AddVert: uvDim: {m_UvDim} not supported");
            };

            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Normal) > 0)
                m_Normals[m_VertexSize] = normal;
            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Tangent) > 0)
                m_Tangents[m_VertexSize] = tangent;
            m_VertexSize++;
            m_fillColor = true;
        }

        public void AddVert(Vector3 position, Color32 color, Vector2 uv0)
        {
            m_Positions[m_VertexSize] = position;
            m_Colors[m_VertexSize] = color;
            if (m_UvDim == 2)
            {
                m_Uv[0][m_VertexSize] = uv0;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_Uv[1][m_VertexSize] = Vector2.zero;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_Uv[2][m_VertexSize] = Vector2.zero;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_Uv[3][m_VertexSize] = Vector2.zero;
            }
            else if ( m_UvDim == 4)
            {
                m_4DimUv[0][m_VertexSize] = uv0;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_4DimUv[1][m_VertexSize] = Vector2.zero;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_4DimUv[2][m_VertexSize] = Vector2.zero;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_4DimUv[3][m_VertexSize] = Vector2.zero;
            }
            else
            {
                throw new Exception($"VertexHelperNative - AddVert: uvDim: {m_UvDim} not supported");
            };
            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Normal) > 0)
                m_Normals[m_VertexSize] = s_DefaultNormal;
            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Tangent) > 0)
                m_Tangents[m_VertexSize] = s_DefaultTangent;
            m_VertexSize++;
            m_fillColor = true;
        }

        public void AddVert(Vector3 position, Vector2 uv0)
        {
            m_Positions[m_VertexSize] = position;
            if (m_UvDim == 2)
            {
                m_Uv[0][m_VertexSize] = uv0;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_Uv[1][m_VertexSize] = Vector2.zero;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_Uv[2][m_VertexSize] = Vector2.zero;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_Uv[3][m_VertexSize] = Vector2.zero;
            }
            else if ( m_UvDim == 4)
            {
                m_4DimUv[0][m_VertexSize] = uv0;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_4DimUv[1][m_VertexSize] = Vector2.zero;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_4DimUv[2][m_VertexSize] = Vector2.zero;
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_4DimUv[3][m_VertexSize] = Vector2.zero;
            }
            else
            {
                throw new Exception($"VertexHelperNative - AddVert: uvDim: {m_UvDim} not supported");
            };
            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Normal) > 0)
                m_Normals[m_VertexSize] = s_DefaultNormal;
            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Tangent) > 0)
                m_Tangents[m_VertexSize] = s_DefaultTangent;
            m_VertexSize++;
        }

        public void AddVertMirrorOther(Vector3 position, Int32 mirrorIndex)
        {
            if (mirrorIndex < 0 ||  mirrorIndex >= m_VertexSize)
            {
                throw new Exception($"VertexHelperNative - AddVertMirrorOther: mirrorIndex: {m_UvDim} >= m_VertexSize : {m_VertexSize} or < 0!");
            }

            m_Positions[m_VertexSize] = position;
            if (m_UvDim == 2)
            {
                m_Uv[0][m_VertexSize] = m_Uv[0][mirrorIndex];
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_Uv[1][m_VertexSize] = m_Uv[1][mirrorIndex];
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_Uv[2][m_VertexSize] = m_Uv[2][mirrorIndex];
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_Uv[3][m_VertexSize] = m_Uv[3][mirrorIndex];
            }
            else if ( m_UvDim == 4)
            {
                m_4DimUv[0][m_VertexSize] = m_Uv[0][mirrorIndex];
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord1) > 0)
                    m_4DimUv[1][m_VertexSize] = m_Uv[1][mirrorIndex];
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord2) > 0)
                    m_4DimUv[2][m_VertexSize] = m_Uv[2][mirrorIndex];
                if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.TexCoord3) > 0)
                    m_4DimUv[3][m_VertexSize] = m_Uv[3][mirrorIndex];
            }
            else
            {
                throw new Exception($"VertexHelperNative - AddVert: uvDim: {m_UvDim} not supported");
            };
            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Normal) > 0)
                m_Normals[m_VertexSize] = m_Normals[mirrorIndex];
            if ((m_additionalCanvasShaderChannels & AdditionalCanvasShaderChannels.Tangent) > 0)
                m_Tangents[m_VertexSize] = m_Tangents[mirrorIndex];
            m_VertexSize++;

        }

        /// <summary>
        /// Add a triangle to the buffer.
        /// </summary>
        /// <param name="idx0">index 0</param>
        /// <param name="idx1">index 1</param>
        /// <param name="idx2">index 2</param>
        public void AddTriangle(UInt16 idx0, UInt16 idx1, UInt16 idx2)
        {
            m_Indices[m_IndicesSize++] = idx0;
            m_Indices[m_IndicesSize++] = idx1;
            m_Indices[m_IndicesSize++] = idx2;
        }
        public void AddTriangle(Int32 idx0, Int32 idx1, Int32 idx2)
        {
            m_Indices[m_IndicesSize++] = (UInt16)idx0;
            m_Indices[m_IndicesSize++] = (UInt16)idx1;
            m_Indices[m_IndicesSize++] = (UInt16)idx2;
        }
    }
}
