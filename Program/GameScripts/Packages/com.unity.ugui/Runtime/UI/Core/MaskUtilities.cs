using System;
using System.Collections.Generic;
using UnityEngine.Pool;

namespace UnityEngine.UI
{
    /// <summary>
    /// Mask related utility class. This class provides masking-specific utility functions.
    /// </summary>
    public class MaskUtilities
    {
        /// <summary>
        /// Notify all IClippables under the given component that they need to recalculate clipping.
        /// </summary>
        /// <param name="mask">The object thats changed for whose children should be notified.</param>
        public static void Notify2DMaskStateChanged(Component mask)
        {
            var components = ListPool<Component>.Get();
            mask.GetComponentsInChildren(components);
            for (var i = 0; i < components.Count; i++)
            {
                if (components[i] == null || components[i].gameObject == mask.gameObject)
                    continue;

                var toNotify = components[i] as IClippable;
                if (toNotify != null)
                    toNotify.RecalculateClipping();
            }
            ListPool<Component>.Release(components);
        }

        /// <summary>
        /// Notify all IMaskable under the given component that they need to recalculate masking.
        /// </summary>
        /// <param name="mask">The object thats changed for whose children should be notified.</param>
        public static void NotifyStencilStateChanged(Component mask)
        {
            Int32 sampleIndex = -1;
            UGUIStats.BeginSample(UGUIStatsSampleId.UGUI,"NotifyStencilStateChanged", ref sampleIndex);
            ResetSoftMaskRect(mask);

            var components = ListPool<IMaskable>.Get();
            mask.GetComponentsInChildren(components);
            for (var i = 0; i < components.Count; i++)
            {
                var comp = (Component)components[i];
                if (comp == null || comp.gameObject == mask.gameObject)
                    continue;

                components[i].RecalculateMasking();
            }
            ListPool<IMaskable>.Release(components);

            UGUIStats.EndSampleByIndex(ref sampleIndex);
        }
        public static void NotifyUpdateSoftMaskStateChanged(Component mask)
        {
            ResetSoftMaskRect(mask);

            var components = ListPool<IMaskable>.Get();
            mask.GetComponentsInChildren(components);
            for (var i = 0; i < components.Count; i++)
            {
                var toNotify = components[i];
                if (toNotify as Component == mask)
                    continue;

                toNotify.UpdateSoftMask();
            }
            ListPool<IMaskable>.Release(components);
        }

        public static void ResetSoftMaskRect(Component mask)
        {
            var tempComponent = ListPool<Mask>.Get();
            mask.GetComponentsInChildren(tempComponent);
            for (int i = 0; i < tempComponent.Count; i++)
            {
                if (tempComponent[i] != null && tempComponent[i].enableSoftMask)
                {
                    tempComponent[i].ResetSoftMaskRect();
                }
            }
            ListPool<Mask>.Release(tempComponent);
        }

        // 单次遍历 root 子树：重置所有开启 SoftMask 的 Mask 的 rect，并收集仍处于激活态的 host GameObject 到 hostSet。
        // 配合 UpdateSoftMaskForMaskables 用于 Canvas 级整体刷新，hostSet 由调用方复用以避免 GC。
        public static void ResetSoftMaskRectAndCollectHosts(Component root, HashSet<GameObject> hostSet)
        {
            var tempComponent = ListPool<Mask>.Get();
            root.GetComponentsInChildren(true, tempComponent);
            for (int i = 0; i < tempComponent.Count; i++)
            {
                var mask = tempComponent[i];
                if (mask == null || !mask.enableSoftMask)
                    continue;

                mask.ResetSoftMaskRect();
                if (mask.gameObject.activeInHierarchy)
                    hostSet.Add(mask.gameObject);
            }
            ListPool<Mask>.Release(tempComponent);
        }

        // 通知 root 子树下所有 IMaskable 刷新 SoftMask，跳过位于 skipHosts（mask host）上的 maskable，避免 host 自身被当作被遮罩内容刷新。
        public static void UpdateSoftMaskForMaskables(Component root, HashSet<GameObject> skipHosts)
        {
            var maskables = ListPool<IMaskable>.Get();
            root.GetComponentsInChildren(maskables);
            bool hasHosts = skipHosts != null && skipHosts.Count > 0;
            for (int i = 0; i < maskables.Count; i++)
            {
                var maskable = maskables[i];
                if (maskable == null)
                    continue;

                if (hasHosts)
                {
                    var comp = maskable as Component;
                    if (comp != null && skipHosts.Contains(comp.gameObject))
                        continue;
                }

                maskable.UpdateSoftMask();
            }
            ListPool<IMaskable>.Release(maskables);
        }


        /// <summary>
        /// Find a root Canvas.
        /// </summary>
        /// <param name="start">Transform to start the search at going up the hierarchy.</param>
        /// <returns>Finds either the most root canvas, or the first canvas that overrides sorting.</returns>
        public static Transform FindRootSortOverrideCanvas(Transform start)
        {
            var canvasList = ListPool<Canvas>.Get();
            start.GetComponentsInParent(false, canvasList);
            Canvas canvas = null;

            for (int i = 0; i < canvasList.Count; ++i)
            {
                canvas = canvasList[i];

                // We found the canvas we want to use break
                if (canvas.overrideSorting)
                    break;
            }
            ListPool<Canvas>.Release(canvasList);

            return canvas != null ? canvas.transform : null;
        }

        /// <summary>
        /// Find the stencil depth for a given element.
        /// </summary>
        /// <param name="transform">The starting transform to search.</param>
        /// <param name="stopAfter">Where the search of parents should stop</param>
        /// <returns>What the proper stencil buffer index should be.</returns>
        public static int GetStencilDepth(Transform transform, Transform stopAfter)
        {
            var depth = 0;
            if (transform == stopAfter)
                return depth;

            var t = transform.parent;
            var components = ListPool<Mask>.Get();
            while (t != null)
            {
                t.GetComponents<Mask>(components);
                for (var i = 0; i < components.Count; ++i)
                {
                    if (components[i] != null && components[i].MaskEnabled() && components[i].graphic.IsActive())
                    {
                        ++depth;
                        break;
                    }
                }

                if (t == stopAfter)
                    break;

                t = t.parent;
            }
            ListPool<Mask>.Release(components);
            return depth;
        }
        public static MaterialModifyParams GetMaterialModifyParams(Transform transform, Transform stopAfter)
        {
            MaterialModifyParams materialModifyParams = new MaterialModifyParams()
            {
                Stencil = 0,
                EnableSoftMask = false,
                SoftMaskParams = Mask.SoftMaskParams.DefaultSotMaskParams,
            };
            var depth = 0;
            if (transform == stopAfter)
                return materialModifyParams;

            var t = transform.parent;
            var components = ListPool<Mask>.Get();

            bool isFindSoftMask = false;
            while (t != null)
            {
                t.GetComponents<Mask>(components);
                bool isFindDepth = false;
                for (var i = 0; i < components.Count; ++i)
                {
                    if (components[i] != null && components[i].MaskEnabled() && components[i].graphic.IsActive())
                    {
                        if (!isFindDepth)
                        {
                            ++depth;
                            materialModifyParams.Stencil = depth;
                            isFindDepth = true;
                        }

                        if (components[i].enableSoftMask && !isFindSoftMask)
                        {
                            materialModifyParams.SoftMaskParams = components[i].GetSoftMaskRect();
                            materialModifyParams.EnableSoftMask = true;
                            isFindSoftMask = true;
                        }

                        if (isFindSoftMask)
                        {
                            break;
                        }
                    }
                }

                if (t == stopAfter)
                    break;

                t = t.parent;
            }
            ListPool<Mask>.Release(components);
            return materialModifyParams;
        }
        /// <summary>
        /// Helper function to determine if the child is a descendant of father or is father.
        /// </summary>
        /// <param name="father">The transform to compare against.</param>
        /// <param name="child">The starting transform to search up the hierarchy.</param>
        /// <returns>Is child equal to father or is a descendant.</returns>
        public static bool IsDescendantOrSelf(Transform father, Transform child)
        {
            if (father == null || child == null)
                return false;

            if (father == child)
                return true;

            while (child.parent != null)
            {
                if (child.parent == father)
                    return true;

                child = child.parent;
            }

            return false;
        }

        /// <summary>
        /// Find the correct RectMask2D for a given IClippable.
        /// </summary>
        /// <param name="clippable">Clippable to search from.</param>
        /// <returns>The Correct RectMask2D</returns>
        public static RectMask2D GetRectMaskForClippable(IClippable clippable)
        {
            List<RectMask2D> rectMaskComponents = ListPool<RectMask2D>.Get();
            List<Canvas> canvasComponents = ListPool<Canvas>.Get();
            RectMask2D componentToReturn = null;

            clippable.gameObject.GetComponentsInParent(false, rectMaskComponents);

            if (rectMaskComponents.Count > 0)
            {
                for (int rmi = 0; rmi < rectMaskComponents.Count; rmi++)
                {
                    componentToReturn = rectMaskComponents[rmi];
                    if (componentToReturn.gameObject == clippable.gameObject)
                    {
                        componentToReturn = null;
                        continue;
                    }
                    if (!componentToReturn.isActiveAndEnabled)
                    {
                        componentToReturn = null;
                        continue;
                    }
                    clippable.gameObject.GetComponentsInParent(false, canvasComponents);
                    for (int i = canvasComponents.Count - 1; i >= 0; i--)
                    {
                        if (!IsDescendantOrSelf(canvasComponents[i].transform, componentToReturn.transform) && canvasComponents[i].overrideSorting)
                        {
                            componentToReturn = null;
                            break;
                        }
                    }
                    break;
                }
            }

            ListPool<RectMask2D>.Release(rectMaskComponents);
            ListPool<Canvas>.Release(canvasComponents);

            return componentToReturn;
        }

        /// <summary>
        /// Search for all RectMask2D that apply to the given RectMask2D (includes self).
        /// </summary>
        /// <param name="clipper">Starting clipping object.</param>
        /// <param name="masks">The list of Rect masks</param>
        public static void GetRectMasksForClip(RectMask2D clipper, List<RectMask2D> masks)
        {
            masks.Clear();

            List<Canvas> canvasComponents = ListPool<Canvas>.Get();
            List<RectMask2D> rectMaskComponents = ListPool<RectMask2D>.Get();
            clipper.transform.GetComponentsInParent(false, rectMaskComponents);

            if (rectMaskComponents.Count > 0)
            {
                clipper.transform.GetComponentsInParent(false, canvasComponents);
                for (int i = rectMaskComponents.Count - 1; i >= 0; i--)
                {
                    if (!rectMaskComponents[i].IsActive())
                        continue;
                    bool shouldAdd = true;
                    for (int j = canvasComponents.Count - 1; j >= 0; j--)
                    {
                        if (!IsDescendantOrSelf(canvasComponents[j].transform, rectMaskComponents[i].transform) && canvasComponents[j].overrideSorting)
                        {
                            shouldAdd = false;
                            break;
                        }
                    }
                    if (shouldAdd)
                        masks.Add(rectMaskComponents[i]);
                }
            }

            ListPool<RectMask2D>.Release(rectMaskComponents);
            ListPool<Canvas>.Release(canvasComponents);
        }
    }

    public struct MaterialModifyParams
    {
        public int Stencil;
        public bool EnableSoftMask;
        public Mask.SoftMaskParams SoftMaskParams;
        // public Texture2D SoftMask;

        public MaterialModifyParams(int stencil, bool enableSoftMask, Mask.SoftMaskParams softMaskParams, Texture2D softMask)
        {
            Stencil = stencil;
            EnableSoftMask = enableSoftMask;
            SoftMaskParams = softMaskParams;
            // SoftMask = softMask;
        }

        public static MaterialModifyParams defaultMaterialModifyParams = new MaterialModifyParams()
        {
            Stencil = 0,
            EnableSoftMask = false,
            SoftMaskParams = new Mask.SoftMaskParams()
            {
                SoftMaskRect = Vector4.zero,
                SoftMaskSize = Vector4.zero,
                SoftMaskMode = Mask.SoftMaskMode.Horizontal,
            },
            // SoftMask = null
        };
    }
}
