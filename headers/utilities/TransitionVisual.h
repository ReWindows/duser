#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 100 member(s).
class TransitionVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAdditionalLeavesToPushingAncestor@TransitionVisual@@SAJPEAV1@PEAV?$GArrayF@PEAVTransitionVisual@@@@@Z
    static long AddAdditionalLeavesToPushingAncestor(TransitionVisual *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTransitionVisualCopy@TransitionVisual@@QEAAJPEAV1@@Z
    long AddTransitionVisualCopy(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimateVariable@TransitionVisual@@QEAAJW4Variable@1@HPEAPEAUIDCompositionAnimation@@@Z
    long AnimateVariable(int, int, IDCompositionAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyAncestorsOpacityEffectGroup@TransitionVisual@@QEAAJPEAV1@@Z
    long ApplyAncestorsOpacityEffectGroup(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToParent@TransitionVisual@@QEAAXPEAV1@@Z
    void AttachToParent(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDeletion@TransitionVisual@@QEAAJXZ
    long BeginDeletion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BelongsToDetachedTree@TransitionVisual@@QEAA_NXZ
    bool BelongsToDetachedTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@TransitionVisual@@SAJPEAUIDCompositionVisual@@00PEAUHGADGET__@@_NPEAPEAV1@@Z
    static long Build(IDCompositionVisual *, IDCompositionVisual *, IDCompositionVisual *, HGADGET__*, bool, TransitionVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUpAnimations@TransitionVisual@@QEAAX_N@Z
    void CleanUpAnimations(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContent@TransitionVisual@@QEAAJXZ
    long ClearContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPushedOpacityFromLeavesInTree@TransitionVisual@@SAJPEAV1@@Z
    static long ClearPushedOpacityFromLeavesInTree(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTopmostVisual@TransitionVisual@@SAJPEAUHGADGET__@@@Z
    static long ClearTopmostVisual(HGADGET__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTransitionVisualCopies@TransitionVisual@@QEAAXXZ
    void ClearTransitionVisualCopies();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectLeaves@TransitionVisual@@QEAAJPEAV?$GArrayF@PEAVTransitionVisual@@@@@Z
    long CollectLeaves(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompensateForBufferOffset@TransitionVisual@@QEAAXW4Property@1@PEAN@Z
    void CompensateForBufferOffset(int, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoordinateInputPaneAnimations@TransitionVisual@@QEAAXHPEAPEAUIDCompositionAnimation@@PEAUIInputPaneAnimationCoordinator@@@Z
    void CoordinateInputPaneAnimations(int, IDCompositionAnimation * *, IInputPaneAnimationCoordinator *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyChildren@TransitionVisual@@QEAAJPEAV1@@Z
    long CopyChildren(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDCompAnimationVariable@TransitionVisual@@QEAAJW4Property@1@PEAPEAUIDCompositionAnimation@@@Z
    long CreateDCompAnimationVariable(int, IDCompositionAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomGadgetHitTestQuery@TransitionVisual@@QEAAJPEAUHGADGET__@@PEAUGMSG_QUERYHITTEST@@@Z
    long CustomGadgetHitTestQuery(HGADGET__*, GMSG_QUERYHITTEST *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCopyChildren@TransitionVisual@@QEAAXXZ
    void DestroyCopyChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDCVisual@TransitionVisual@@QEAAXXZ
    void DestroyDCVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyFromFailedInit@TransitionVisual@@QEAAXXZ
    void DestroyFromFailedInit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromParent@TransitionVisual@@QEAAXXZ
    void DetachFromParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachTree@TransitionVisual@@QEAAJPEAPEAUIDCompositionVisual@@PEAV?$GArrayF@UDetachedObject@@@@K@Z
    long DetachTree(IDCompositionVisual * *, WindissectOpaque *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireTransitionStart@TransitionVisual@@QEAAXXZ
    void FireTransitionStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceToEnd@TransitionVisual@@QEAAXW4Variable@1@@Z
    void ForceToEnd(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GadgetToVisual@TransitionVisual@@QEAAJPEAUtagPOINT@@@Z
    long GadgetToVisual(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DTransformFromVariable@TransitionVisual@@QEAAPEAUIDCompositionTransform@@W4Variable@1@@Z
    IDCompositionTransform * Get2DTransformFromVariable(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get3DTransformFromVariable@TransitionVisual@@QEAAPEAUIDCompositionTransform3D@@W4Variable@1@@Z
    IDCompositionTransform3D * Get3DTransformFromVariable(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccumulatedOffsets@TransitionVisual@@QEAAJPEAUtagSIZE@@PEAPEAV1@@Z
    long GetAccumulatedOffsets(tagSIZE *, TransitionVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDimension@TransitionVisual@@QEAAHW4Variable@1@@Z
    int GetDimension(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalPosition2D@TransitionVisual@@QEAAJPEAUtagPOINT@@@Z
    long GetFinalPosition2D(tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@TransitionVisual@@QEAAJW4Property@1@PEAN@Z
    long GetProperty(int, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@TransitionVisual@@QEAAJW4Property@1@PEAH@Z
    long GetProperty(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropsFromVariable@TransitionVisual@@QEAAJW4Variable@1@IPEAW4Property@1@@Z
    long GetPropsFromVariable(int, unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurface@TransitionVisual@@QEAAPEAUIDCompositionSurface@@HHHPEAH@Z
    IDCompositionSurface * GetSurface(int, int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionVisualCopyNoRef@TransitionVisual@@QEAAPEAV1@H@Z
    TransitionVisual * GetTransitionVisualCopyNoRef(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVariable@TransitionVisual@@QEAAJPEAUIUIAnimationManager2@@W4Variable@1@PEAIPEAPEAUIUIAnimationVariable2@@@Z
    long GetVariable(IUIAnimationManager2*, int, unsigned int *, IUIAnimationVariable2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVariableFromProp@TransitionVisual@@QEAAJW4Property@1@PEAH1PEAW4Variable@1@@Z
    long GetVariableFromProp(int, int *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVariableValues@TransitionVisual@@QEAAJW4Variable@1@IPEAN_N2@Z
    long GetVariableValues(int, unsigned int, double *, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidGadget@TransitionVisual@@QEAAHXZ
    int HasValidGadget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDCompTransforms@TransitionVisual@@QEAAJ_N@Z
    long InitializeDCompTransforms(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProperties@TransitionVisual@@QEAAJ_N@Z
    long InitializeProperties(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChild@TransitionVisual@@QEAAJPEAV1@_N@Z
    long InsertChild(TransitionVisual *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAffectedByOpacityPushingAncestor@TransitionVisual@@QEAA_NPEAPEAV1@@Z
    bool IsAffectedByOpacityPushingAncestor(TransitionVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGadgetTreeBeingDestroyed@TransitionVisual@@QEAA_NXZ
    bool IsGadgetTreeBeingDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisualTopmost@TransitionVisual@@QEAAJXZ
    long MakeVisualTopmost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkForDeletion@TransitionVisual@@QEAAX_N@Z
    void MarkForDeletion(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveChildrenToParent@TransitionVisual@@QEAAJPEAH@Z
    long MoveChildrenToParent(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateInitialVariableValues@TransitionVisual@@QEAAJW4Variable@1@HPEAN@Z
    long PopulateInitialVariableValues(int, int, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushAnimatingPropertiesToVisual@TransitionVisual@@QEAAXH_N@Z
    void PushAnimatingPropertiesToVisual(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushOpacityToLeaves@TransitionVisual@@QEAAJ_NPEAUIDCompositionDevice@@@Z
    long PushOpacityToLeaves(bool, IDCompositionDevice *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushPropertiesToGadget@TransitionVisual@@QEAAXH_NH0@Z
    void PushPropertiesToGadget(int, bool, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildDCompResourcesSubtree@TransitionVisual@@QEAAJPEAUIDCompositionDevice@@@Z
    long RebuildDCompResourcesSubtree(IDCompositionDevice *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegionChanged@TransitionVisual@@QEAAXPEAUIDCompositionSurface@@@Z
    void RegionChanged(IDCompositionSurface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReinitializeVisuals@TransitionVisual@@SAXPEAV?$GArrayF@PEAUVisualTriple@TransitionVisual@@@@PEAV?$GArrayF@UDetachedObject@@@@_NK@Z
    static void ReinitializeVisuals(WindissectOpaque *, WindissectOpaque *, bool, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TransitionVisual@@QEAAXXZ
    void Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAnimationVariables@TransitionVisual@@QEAAXXZ
    void ReleaseAnimationVariables();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemainLayered@TransitionVisual@@QEAA_NXZ
    bool RemainLayered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAncestorsOpacityEffectGroup@TransitionVisual@@QEAAJXZ
    long RemoveAncestorsOpacityEffectGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChild@TransitionVisual@@QEAAJPEAV1@@Z
    long RemoveChild(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTransitionVisualCopy@TransitionVisual@@QEAAJPEAV1@@Z
    long RemoveTransitionVisualCopy(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReparentDescendantsOfNewChild@TransitionVisual@@QEAAJPEAV1@@Z
    long ReparentDescendantsOfNewChild(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceVisuals@TransitionVisual@@SAXPEAV?$GArrayF@PEAUVisualTriple@TransitionVisual@@@@@Z
    static void ReplaceVisuals(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetVariable@TransitionVisual@@QEAAJW4Variable@1@@Z
    long ResetVariable(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@TransitionVisual@@QEAAJHH_N@Z
    long SetClip(int, int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentOnCopy@TransitionVisual@@QEAAJPEAV1@@Z
    long SetContentOnCopy(TransitionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentVisual@TransitionVisual@@QEAAJPEAUIUnknown@@@Z
    long SetContentVisual(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLowerBound@TransitionVisual@@QEAA_NW4Variable@1@IPEAN_N@Z
    bool SetLowerBound(int, unsigned int, double *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentClipImmunity@TransitionVisual@@QEAAJ_N@Z
    long SetParentClipImmunity(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPerspective@TransitionVisual@@QEAAJMM_N@Z
    long SetPerspective(float, float, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPerspectiveDegree@TransitionVisual@@QEAAJM_N@Z
    long SetPerspectiveDegree(float, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@TransitionVisual@@QEAAJW4Property@1@N@Z
    long SetProperty(int, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUpperBound@TransitionVisual@@QEAA_NW4Variable@1@IPEAN_N@Z
    bool SetUpperBound(int, unsigned int, double *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVariable@TransitionVisual@@QEAAJW4Variable@1@IPEAN_N@Z
    long SetVariable(int, unsigned int, double *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetZOrder@TransitionVisual@@QEAAJH@Z
    long SetZOrder(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftCoordinates@TransitionVisual@@QEAAJHH@Z
    long ShiftCoordinates(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpawnVisuals@TransitionVisual@@QEAAJPEAUIDCompositionDevice@@PEAUIDCompositionVisual@@PEAV?$GArrayF@PEAUVisualTriple@TransitionVisual@@@@@Z
    long SpawnVisuals(IDCompositionDevice *, IDCompositionVisual *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpecifyPerspectiveMatrix@TransitionVisual@@QEAAJ_N@Z
    long SpecifyPerspectiveMatrix(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@TransitionVisual@@QEAAXW4Variable@1@_N1@Z
    void StopAnimation(int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update2DTransformGroup@TransitionVisual@@QEAAJXZ
    long Update2DTransformGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update3DTransformGroup@TransitionVisual@@QEAAJXZ
    long Update3DTransformGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurve@TransitionVisual@@QEAAJW4Variable@1@@Z
    long UpdateCurve(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNativeSizeFromGadget@TransitionVisual@@QEAAJHH@Z
    long UpdateNativeSizeFromGadget(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePositionFromGadget@TransitionVisual@@QEAAJUtagPOINT@@UtagSIZE@@_N@Z
    long UpdatePositionFromGadget(tagPOINT, tagSIZE, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePushDueToLayeredNoRenderFlagChange@TransitionVisual@@SAJPEAV1@_N@Z
    static long UpdatePushDueToLayeredNoRenderFlagChange(TransitionVisual *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSoftBorderMode@TransitionVisual@@QEAAJ_N@Z
    long UpdateSoftBorderMode(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSolidFillOptimization@TransitionVisual@@QEAAJXZ
    long UpdateSolidFillOptimization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSolidFillOptimization_Recursive@TransitionVisual@@QEAAJXZ
    long UpdateSolidFillOptimization_Recursive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UsePerspectiveTransforms@TransitionVisual@@QEAAJ_N@Z
    long UsePerspectiveTransforms(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateGadgetTicket@TransitionVisual@@QEAAJ_N@Z
    long ValidateGadgetTicket(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualToGadget@TransitionVisual@@QEAAJPEAUtagPOINT@@@Z
    long VisualToGadget(tagPOINT *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TransitionVisual@@QEAA@XZ
    ~TransitionVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateInsertionIndex@TransitionVisual@@AEAAHPEAV1@@Z
    int CalculateInsertionIndex(TransitionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionIncludingIgnoredOffset@TransitionVisual@@AEAAJPEAUtagPOINT@@@Z
    long GetPositionIncludingIgnoredOffset(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertBufferVisualAtIndex@TransitionVisual@@AEAAJPEAUIDCompositionVisual@@H@Z
    long InsertBufferVisualAtIndex(IDCompositionVisual *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChildAtIndex@TransitionVisual@@AEAAJPEAV1@H_N@Z
    long InsertChildAtIndex(TransitionVisual *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnToProperParent@TransitionVisual@@AEAAJXZ
    long ReturnToProperParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAlpha@TransitionVisual@@AEAAJPEAUIDCompositionDevice@@PEAMPEAUIDCompositionAnimation@@@Z
    long UpdateAlpha(IDCompositionDevice *, float *, IDCompositionAnimation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetVariable@TransitionVisual@@AEAAJW4Variable@1@HPEAN@Z
    long _SetVariable(int, int, double *);
};
