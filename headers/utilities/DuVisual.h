#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 124 member(s).
class DuVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiFindFromPoint@DuVisual@@QEAAJPEAUFindFromPointMsg@Visual@@@Z
    long ApiFindFromPoint(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetBufferInfo@DuVisual@@QEAAJPEAUGetBufferInfoMsg@Visual@@@Z
    long ApiGetBufferInfo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetCenterPoint@DuVisual@@QEAAJPEAUGetCenterPointMsg@Visual@@@Z
    long ApiGetCenterPoint(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetGadget@DuVisual@@QEAAJPEAUGetGadgetMsg@Visual@@@Z
    long ApiGetGadget(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetProperty@DuVisual@@QEAAJPEAUGetPropertyMsg@Visual@@@Z
    long ApiGetProperty(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetRect@DuVisual@@QEAAJPEAUGetRectMsg@Visual@@@Z
    long ApiGetRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetRotation@DuVisual@@QEAAJPEAUGetRotationMsg@Visual@@@Z
    long ApiGetRotation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetScale@DuVisual@@QEAAJPEAUGetScaleMsg@Visual@@@Z
    long ApiGetScale(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetSize@DuVisual@@QEAAJPEAUGetSizeMsg@Visual@@@Z
    long ApiGetSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetStyle@DuVisual@@QEAAJPEAUGetStyleMsg@Visual@@@Z
    long ApiGetStyle(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiInvalidate@DuVisual@@QEAAJPEAUInvalidateMsg@Visual@@@Z
    long ApiInvalidate(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiInvalidateRects@DuVisual@@QEAAJPEAUInvalidateRectsMsg@Visual@@@Z
    long ApiInvalidateRects(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiIsParentChainStyle@DuVisual@@QEAAJPEAUIsParentChainStyleMsg@Visual@@@Z
    long ApiIsParentChainStyle(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiMapPoints@DuVisual@@QEAAJPEAUMapPointsMsg@Visual@@@Z
    long ApiMapPoints(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiRemoveProperty@DuVisual@@QEAAJPEAURemovePropertyMsg@Visual@@@Z
    long ApiRemoveProperty(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetBufferInfo@DuVisual@@QEAAJPEAUSetBufferInfoMsg@Visual@@@Z
    long ApiSetBufferInfo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetCenterPoint@DuVisual@@QEAAJPEAUSetCenterPointMsg@Visual@@@Z
    long ApiSetCenterPoint(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetFillF@DuVisual@@QEAAJPEAUSetFillFMsg@Visual@@@Z
    long ApiSetFillF(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetFillI@DuVisual@@QEAAJPEAUSetFillIMsg@Visual@@@Z
    long ApiSetFillI(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetKeyboardFocus@DuVisual@@QEAAJPEAUSetKeyboardFocusMsg@Visual@@@Z
    long ApiSetKeyboardFocus(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetOrder@DuVisual@@QEAAJPEAUSetOrderMsg@Visual@@@Z
    long ApiSetOrder(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetParent@DuVisual@@QEAAJPEAUSetParentMsg@Visual@@@Z
    long ApiSetParent(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetProperty@DuVisual@@QEAAJPEAUSetPropertyMsg@Visual@@@Z
    long ApiSetProperty(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetRect@DuVisual@@QEAAJPEAUSetRectMsg@Visual@@@Z
    long ApiSetRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetRotation@DuVisual@@QEAAJPEAUSetRotationMsg@Visual@@@Z
    long ApiSetRotation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetScale@DuVisual@@QEAAJPEAUSetScaleMsg@Visual@@@Z
    long ApiSetScale(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetStyle@DuVisual@@QEAAJPEAUSetStyleMsg@Visual@@@Z
    long ApiSetStyle(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@DuVisual@@SAJPEAV1@PEAUCREATE_INFO@@PEAPEAV1@H@Z
    static long Build(DuVisual *, CREATE_INFO *, DuVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeClipInsideRef@DuVisual@@QEAAJH@Z
    long ChangeClipInsideRef(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeLayeredRef@DuVisual@@QEAAJH@Z
    long ChangeLayeredRef(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIsLayered@DuVisual@@QEBAHXZ
    int CheckIsLayered() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTicket@DuVisual@@QEAAXXZ
    void ClearTicket();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommonCreate@DuVisual@@QEAAJPEAUCREATE_INFO@@H@Z
    long CommonCreate(CREATE_INFO *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DemoteVisual@DuVisual@@SAPEAUHCLASS__@@PEAU2@PEAVGadget@DUser@@PEAX@Z
    static HCLASS__* DemoteVisual(HCLASS__*, ::DUser::Gadget *, void *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DuVisual@@QEAA@XZ
    DuVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindowPaints@DuVisual@@QEAAJXZ
    long EnsureWindowPaints();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFromPoint@DuVisual@@QEBAPEAV1@UtagPOINT@@IPEAU2@@Z
    DuVisual * FindFromPoint(tagPOINT, unsigned int, tagPOINT *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTargetingInfo@DuVisual@@QEBAXPEBUtagTOUCH_HIT_TESTING_INPUT@@UtagPOINT@@IPEAUtagTOUCH_HIT_TESTING_PROXIMITY_EVALUATION@@@Z
    void FindTargetingInfo(tagTOUCH_HIT_TESTING_INPUT const *, tagPOINT, unsigned int, tagTOUCH_HIT_TESTING_PROXIMITY_EVALUATION *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferInfo@DuVisual@@QEBAJPEAUtagBUFFER_INFO@@@Z
    long GetBufferInfo(tagBUFFER_INFO *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCenterPoint@DuVisual@@QEBAXPEAM0@Z
    void GetCenterPoint(float *, float *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainer@DuVisual@@QEBAPEAVDuContainer@@XZ
    DuContainer * GetContainer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferredMsgQueue@DuVisual@@UEAAPEAVDeferredMsgQueue@@XZ
    virtual DeferredMsgQueue * GetDeferredMsgQueue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@DuVisual@@QEBAIXZ
    unsigned int GetFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGadget@DuVisual@@QEBAPEAV1@I@Z
    DuVisual * GetGadget(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleMask@DuVisual@@UEBAIXZ
    virtual unsigned int GetHandleMask() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleType@DuVisual@@UEBA?AW4HandleType@@XZ
    virtual int GetHandleType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayerInfo@DuVisual@@QEBAJPEAUtagLAYER_INFO@@@Z
    long GetLayerInfo(tagLAYER_INFO *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogRect@DuVisual@@QEBAXPEAUtagRECT@@I@Z
    void GetLogRect(tagRECT *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentTransitionVisual@DuVisual@@QEBAJPEAPEAVTransitionVisual@@@Z
    long GetParentTransitionVisual(TransitionVisual * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoot@DuVisual@@QEBAPEAVDuRootGadget@@XZ
    DuRootGadget * GetRoot() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootGadget@DuVisual@@UEAAPEAUHROOTGADGET__@@XZ
    virtual HROOTGADGET__* GetRootGadget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRotation@DuVisual@@QEBAMXZ
    float GetRotation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScale@DuVisual@@QEBAXPEAM0@Z
    void GetScale(float *, float *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionVisual@DuVisual@@QEBAJPEAPEAVTransitionVisual@@@Z
    long GetTransitionVisual(TransitionVisual * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitClass@DuVisual@@SAJXZ
    static long InitClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@DuVisual@@QEAAXXZ
    void Invalidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateLayeredDescendants@DuVisual@@QEAAXXZ
    void InvalidateLayeredDescendants();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateRects@DuVisual@@QEAAXPEBUtagRECT@@H@Z
    void InvalidateRects(tagRECT const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDescendent@DuVisual@@QEBAHPEBV1@@Z
    int IsDescendent(DuVisual const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOkToProcess@DuVisual@@UEBAHXZ
    virtual int IsOkToProcess() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsParentChainStyle@DuVisual@@QEBAHI@Z
    int IsParentChainStyle(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStartDelete@DuVisual@@UEBAHXZ
    virtual int IsStartDelete() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapPoint@DuVisual@@QEBAXPEAUtagPOINT@@@Z
    void MapPoint(tagPOINT *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapPoints@DuVisual@@SAXPEBV1@0PEAUtagPOINT@@H@Z
    static void MapPoints(DuVisual const *, DuVisual const *, tagPOINT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromoteVisual@DuVisual@@SAJP6AJW4ConstructCommand@Gadget@DUser@@PEAUHCLASS__@@PEAV34@PEAX@Z12PEAUConstructInfo@34@@Z
    static long PromoteVisual(long ( *)(int, HCLASS__*, ::DUser::Gadget *, void *), HCLASS__*, ::DUser::Gadget *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPropertyNL@DuVisual@@SAJPEBU_GUID@@W4PropType@@PEAH@Z
    static long RegisterPropertyNL(_GUID const *, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBufferInfo@DuVisual@@QEAAJPEBUtagBUFFER_INFO@@@Z
    long SetBufferInfo(tagBUFFER_INFO const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFill@DuVisual@@QEAAJPEAUHBRUSH__@@EHH@Z
    long SetFill(HBRUSH__*, unsigned char, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFill@DuVisual@@QEAAJPEAVBrush@Gdiplus@@@Z
    long SetFill(::Gdiplus::Brush *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFilter@DuVisual@@UEAAXII@Z
    virtual void SetFilter(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayerInfo@DuVisual@@QEAAJPEBUtagLAYER_INFO@@@Z
    long SetLayerInfo(tagLAYER_INFO const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessingState@DuVisual@@UEAAXH@Z
    virtual void SetProcessingState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRestoreCachedLayeredRefFlag@DuVisual@@QEAAXXZ
    void SetRestoreCachedLayeredRefFlag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlayerGadgetTree@DuVisual@@QEAAXH@Z
    void UnlayerGadgetTree(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdSetCenterPoint@DuVisual@@QEAAJMM@Z
    long xdSetCenterPoint(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdSetFlags@DuVisual@@QEAAJII@Z
    long xdSetFlags(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdSetLogRect@DuVisual@@QEAAJHHHHI@Z
    long xdSetLogRect(int, int, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdSetParent@DuVisual@@QEAAJPEAV1@0I@Z
    long xdSetParent(DuVisual *, DuVisual *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdSetRotation@DuVisual@@QEAAJM@Z
    long xdSetRotation(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdSetScale@DuVisual@@QEAAJMM@Z
    long xdSetScale(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdSetStyle@DuVisual@@QEAAJIIH@Z
    long xdSetStyle(unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDeleteHandle@DuVisual@@UEAAHXZ
    virtual int xwDeleteHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwEnumGadgets@DuVisual@@QEAAJP6AHPEAUHGADGET__@@PEAX@Z1I@Z
    long xwEnumGadgets(int ( *)(HGADGET__*, void *), void *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DuVisual@@UEAA@XZ
    virtual ~DuVisual();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildAntiXForm@DuVisual@@IEBAXPEAVMatrix3@@@Z
    void BuildAntiXForm(Matrix3*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildXForm@DuVisual@@IEBAXPEAVMatrix3@@@Z
    void BuildXForm(Matrix3*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteGadget@DuVisual@@IEAAXXZ
    void DeleteGadget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwBeginDestroy@DuVisual@@IEAAXXZ
    void xwBeginDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDestroy@DuVisual@@MEAAXXZ
    virtual void xwDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDestroyAllChildren@DuVisual@@IEAAXXZ
    void xwDestroyAllChildren();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachLayeredNodeToTree@DuVisual@@AEAAXPEAV1@@Z
    void AttachLayeredNodeToTree(DuVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIsTrivial@DuVisual@@AEBAHXZ
    int CheckIsTrivial() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIsWantMouseFocus@DuVisual@@AEBAHXZ
    int CheckIsWantMouseFocus() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIsWantPointer@DuVisual@@AEBAHXZ
    int CheckIsWantPointer() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoInvalidateRect@DuVisual@@AEAAXPEAVDuContainer@@PEBUtagRECT@@H@Z
    void DoInvalidateRect(DuContainer *, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoXFormClientToParent@DuVisual@@AEBAXPEAUtagPOINT@@H@Z
    void DoXFormClientToParent(tagPOINT *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawFill@DuVisual@@AEAAXPEAVDuSurface@@PEBUtagRECT@@@Z
    void DrawFill(DuSurface *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRectStepImpl@DuVisual@@AEBA_NPEBV1@HHPEAUtagRECT@@@Z
    bool FindRectStepImpl(DuVisual const *, int, int, tagRECT *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyboardFocusableAncestor@DuVisual@@AEAAPEAV1@PEAV1@@Z
    DuVisual * GetKeyboardFocusableAncestor(DuVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInvisibleOrHasZeroSizedAncestor@DuVisual@@AEAA_NXZ
    bool IsInvisibleOrHasZeroSizedAncestor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsParentInvalid@DuVisual@@AEBAHXZ
    int IsParentInvalid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkInvalidChildren@DuVisual@@AEAAXXZ
    void MarkInvalidChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PointIsInTopmostDescendant@DuVisual@@AEBA_NPEAV1@PEAUtagPOINT@@1@Z
    bool PointIsInTopmostDescendant(DuVisual *, tagPOINT *, tagPOINT *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetInvalid@DuVisual@@AEAAXXZ
    void ResetInvalid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SLRInvalidateRects@DuVisual@@AEAAXPEAVDuContainer@@PEBUtagRECT@@H@Z
    void SLRInvalidateRects(DuContainer *, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SLROffsetLogRect@DuVisual@@AEAAXPEBUtagSIZE@@@Z
    void SLROffsetLogRect(tagSIZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SLRUpdateBits@DuVisual@@AEAAXPEAUtagRECT@@0I@Z
    void SLRUpdateBits(tagRECT *, tagRECT *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBuffered@DuVisual@@AEAAJH@Z
    long SetBuffered(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnableXForm@DuVisual@@AEAAJH@Z
    long SetEnableXForm(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayered@DuVisual@@AEAAJHH@Z
    long SetLayered(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupCachedDraw@DuVisual@@AEAAPEAVBmpBuffer@@PEAUPaintInfo@@@Z
    BmpBuffer * SetupCachedDraw(PaintInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupCommonDraw@DuVisual@@AEAAHPEAUPaintInfo@@PEAVBmpBuffer@@@Z
    int SetupCommonDraw(PaintInfo *, BmpBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlayerGadget@DuVisual@@AEAAXHH@Z
    void UnlayerGadget(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlink@DuVisual@@AEAAPEAV1@XZ
    DuVisual * Unlink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDeepAllState@DuVisual@@AEAAXW4EUdsHint@1@P81@EBAHXZI@Z
    void UpdateDeepAllState(int, int ( ::DuVisual::*)(void) const, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDeepAnyState@DuVisual@@AEAAXW4EUdsHint@1@P81@EBAHXZI@Z
    void UpdateDeepAnyState(int, int ( ::DuVisual::*)(void) const, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayerClipRect@DuVisual@@AEAAXH@Z
    void UpdateLayerClipRect(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayersForRectChange@DuVisual@@AEAAX_N0UtagSIZE@@@Z
    void UpdateLayersForRectChange(bool, bool, tagSIZE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdUpdateAdaptors@DuVisual@@AEBAXI@Z
    void xdUpdateAdaptors(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdUpdatePosition@DuVisual@@AEBAXXZ
    void xdUpdatePosition() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?xrDrawFull@DuVisual@@AEAAXPEAUPaintInfo@@@Z
    void xrDrawFull(PaintInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xrDrawTrivial@DuVisual@@AEAAXPEAUPaintInfo@@UtagSIZE@@@Z
    void xrDrawTrivial(PaintInfo *, tagSIZE);
};
