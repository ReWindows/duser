#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 56 member(s).
class TransitionSC {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChildVisual@TransitionSC@@QEAAJPEAVTransitionVisual@@PEAUHGADGET__@@_N2PEAPEAV2@@Z
    long AddChildVisual(TransitionVisual *, HGADGET__*, bool, bool, TransitionVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheDWriteRenderTarget@TransitionSC@@QEAAJPEAUIUnknown@@@Z
    long CacheDWriteRenderTarget(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeAnimationScenario@TransitionSC@@QEAAJ_NAEBU_GUID@@@Z
    long ChangeAnimationScenario(bool, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@TransitionSC@@QEAAJXZ
    long Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompositionChanged@TransitionSC@@QEAAJXZ
    long CompositionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyExistingTransforms@TransitionSC@@QEAAJPEAVTransitionVisual@@0_N11@Z
    long CopyExistingTransforms(TransitionVisual *, TransitionVisual *, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRootVisual@TransitionSC@@QEAAJPEAUHGADGET__@@PEAUHWND__@@PEAPEAUIUnknown@@PEAPEAVTransitionVisual@@@Z
    long CreateRootVisual(HGADGET__*, HWND__*, IUnknown * *, TransitionVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransitionVisualCopy@TransitionSC@@QEAAJPEAUHGADGET__@@PEAPEAVTransitionVisual@@0_N2@Z
    long CreateTransitionVisualCopy(HGADGET__*, TransitionVisual * *, HGADGET__*, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyPendingDCVisuals@TransitionSC@@QEAAXXZ
    void DestroyPendingDCVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachGadgetVisuals@TransitionSC@@QEAAJIPEAUHGADGET__@@PEAKPEAPEAUIUnknown@@222@Z
    long DetachGadgetVisuals(unsigned int, HGADGET__*, unsigned long *, IUnknown * *, IUnknown * *, IUnknown * *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoPendingDeletion@TransitionSC@@QEAAX_NPEAVTransitionVisual@@@Z
    void DoPendingDeletion(bool, TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAtlasingManager@TransitionSC@@QEAAJXZ
    long EnsureAtlasingManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGadgetTransInitialized@TransitionSC@@QEAAJXZ
    long EnsureGadgetTransInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceDeletion@TransitionSC@@QEAA_NPEAUHGADGET__@@@Z
    bool ForceDeletion(HGADGET__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalAnimatingPosition@TransitionSC@@QEAAJPEAUHGADGET__@@PEAUtagPOINT@@_N@Z
    long GetFinalAnimatingPosition(HGADGET__*, tagPOINT *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGadgetVisual@TransitionSC@@QEAAJIPEAUHGADGET__@@PEAPEAX11@Z
    long GetGadgetVisual(unsigned int, HGADGET__*, void * *, void * *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStoryboardComplete@TransitionSC@@QEAAXPEAVTransitionStoryboard@@I@Z
    void OnStoryboardComplete(TransitionStoryboard *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPendingStoryboards@TransitionSC@@QEAAXXZ
    void ProcessPendingStoryboards();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RawActionProc@TransitionSC@@SAXPEAUGMA_ACTIONINFO@@@Z
    static void RawActionProc(GMA_ACTIONINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildDCompResources@TransitionSC@@QEAAJPEAUHWND__@@PEAVTransitionVisual@@PEAPEAUIUnknown@@_N@Z
    long RebuildDCompResources(HWND__*, TransitionVisual *, IUnknown * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDestroyedDCVisuals@TransitionSC@@QEAAXXZ
    void ReleaseDestroyedDCVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDetachedObjects@TransitionSC@@QEAAJIK@Z
    long ReleaseDetachedObjects(unsigned int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReparentTransitionVisualCopy@TransitionSC@@QEAAJPEAVTransitionVisual@@0_N@Z
    long ReparentTransitionVisualCopy(TransitionVisual *, TransitionVisual *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleGadgetTransitions@TransitionSC@@QEAAJIIPEBUGTRANS_DESC@@PEAUHGADGET__@@PEAUTransitionStoryboardInfo@@_N@Z
    long ScheduleGadgetTransitions(unsigned int, unsigned int, GTRANS_DESC const *, HGADGET__*, TransitionStoryboardInfo *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAtlasingHints@TransitionSC@@QEAAJPEAUtagSIZE@@PEAUtagRECT@@1111@Z
    long SetAtlasingHints(tagSIZE *, tagRECT *, tagRECT *, tagRECT *, tagRECT *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRectangleClipOnVisual@TransitionSC@@QEAAJHHPEAVTransitionVisual@@@Z
    long SetRectangleClipOnVisual(int, int, TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SettingChanged@TransitionSC@@QEAAJXZ
    long SettingChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@TransitionSC@@QEAAJIPEAUHGADGET__@@I_N@Z
    long StopAnimation(unsigned int, HGADGET__*, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopVariable@TransitionSC@@QEAAJPEAUIUIAnimationVariable2@@IPEAN@Z
    long StopVariable(IUIAnimationVariable2*, unsigned int, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncGadgetsWithAnimations@TransitionSC@@QEAAXXZ
    void SyncGadgetsWithAnimations();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TransitionSC@@QEAA@XZ
    TransitionSC();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlayerCopyVisual@TransitionSC@@QEAAJPEAVTransitionVisual@@@Z
    long UnlayerCopyVisual(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManagerWithCurrentTime@TransitionSC@@QEAAJXZ
    long UpdateManagerWithCurrentTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwPreDestroyNL@TransitionSC@@UEAAXXZ
    virtual void xwPreDestroyNL();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TransitionSC@@UEAA@XZ
    virtual ~TransitionSC();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWamTransition@TransitionSC@@AEAAJPEAUIUIAnimationStoryboard2@@PEAVTransitionVisual@@W4Variable@3@IPEAN3PEBUGTRANS_DESC@@_N33I@Z
    long AddWamTransition(IUIAnimationStoryboard2*, TransitionVisual *, int, unsigned int, double *, double *, GTRANS_DESC const *, bool, double *, double *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create3DTransition@TransitionSC@@AEAAJPEAUIUIAnimationStoryboard2@@PEAVTransitionVisual@@W4Variable@3@PEBUGTRANS_DESC@@_N@Z
    long Create3DTransition(IUIAnimationStoryboard2*, TransitionVisual *, int, GTRANS_DESC const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create4DTransition@TransitionSC@@AEAAJPEAUIUIAnimationStoryboard2@@PEAVTransitionVisual@@W4Variable@3@PEBUGTRANS_DESC@@_N@Z
    long Create4DTransition(IUIAnimationStoryboard2*, TransitionVisual *, int, GTRANS_DESC const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDCompDevice@TransitionSC@@AEAAJPEAPEAUIDCompositionDevice@@PEAPEAUIDCompositionMatrixTransform3D@@@Z
    long CreateDCompDevice(IDCompositionDevice * *, IDCompositionMatrixTransform3D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePointTransition@TransitionSC@@AEAAJPEAUIUIAnimationStoryboard2@@PEAVTransitionVisual@@W4Variable@3@PEBUGTRANS_DESC@@_N@Z
    long CreatePointTransition(IUIAnimationStoryboard2*, TransitionVisual *, int, GTRANS_DESC const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScalarTransition@TransitionSC@@AEAAJPEAUIUIAnimationStoryboard2@@PEAVTransitionVisual@@W4Variable@3@PEBUGTRANS_DESC@@_N@Z
    long CreateScalarTransition(IUIAnimationStoryboard2*, TransitionVisual *, int, GTRANS_DESC const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureComInitialized@TransitionSC@@AEAAJXZ
    long EnsureComInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureD3DDevice@TransitionSC@@AEAAJXZ
    long EnsureD3DDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireCompletionEvents@TransitionSC@@AEAAXHPEAVTransitionStoryboard@@@Z
    void FireCompletionEvents(int, TransitionStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireTransitionComplete@TransitionSC@@AEAAHPEAUHGADGET__@@IHH@Z
    int FireTransitionComplete(HGADGET__*, unsigned int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVarFromDCProp@TransitionSC@@AEAA?AW4Variable@TransitionVisual@@I@Z
    int GetVarFromDCProp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayerGadgetSubTree@TransitionSC@@AEAAJPEAUHGADGET__@@PEAV?$GArrayF@PEAUHGADGET__@@@@_N@Z
    long LayerGadgetSubTree(HGADGET__*, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetForNewTransition@TransitionSC@@AEAAJPEAVTransitionVisual@@W4Variable@2@@Z
    long ResetForNewTransition(TransitionVisual *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleStoryboardAtTimeOffset@TransitionSC@@AEAAJPEAUIUIAnimationStoryboard2@@N@Z
    long ScheduleStoryboardAtTimeOffset(IUIAnimationStoryboard2*, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleStoryboardNow@TransitionSC@@AEAAJPEAUIUIAnimationStoryboard2@@_N@Z
    long ScheduleStoryboardNow(IUIAnimationStoryboard2*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleTransitions@TransitionSC@@AEAAJIPEBUGTRANS_DESC@@PEAUHGADGET__@@PEAUTransitionStoryboardInfo@@_N@Z
    long ScheduleTransitions(unsigned int, GTRANS_DESC const *, HGADGET__*, TransitionStoryboardInfo *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAllAnimations@TransitionSC@@AEAAXXZ
    void StopAllAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@TransitionSC@@AEAAXXZ
    void Uninitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlayerGadgetSubTree@TransitionSC@@AEAAJPEAUHGADGET__@@K_N@Z
    long UnlayerGadgetSubTree(HGADGET__*, unsigned long, bool);
};
