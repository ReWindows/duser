#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 11 member(s).
class TransitionStoryboard {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TransitionStoryboard@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddVisual@TransitionStoryboard@@QEAAJPEAVTransitionVisual@@@Z
    long AddVisual(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@TransitionStoryboard@@SAJKPEAXPEAPEAV1@@Z
    static long Build(unsigned long, void *, TransitionStoryboard * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@TransitionStoryboard@@QEAAXXZ
    void Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStoryboardStatusChanged@TransitionStoryboard@@UEAAJPEAUIUIAnimationStoryboard2@@W4__MIDL___MIDL_itf_UIAnimation_0000_0002_0001@@1@Z
    virtual long OnStoryboardStatusChanged(IUIAnimationStoryboard2*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStoryboardUpdated@TransitionStoryboard@@UEAAJPEAUIUIAnimationStoryboard2@@@Z
    virtual long OnStoryboardUpdated(IUIAnimationStoryboard2*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TransitionStoryboard@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TransitionStoryboard@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TransitionStoryboard@@QEAA@XZ
    TransitionStoryboard();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TransitionStoryboard@@QEAA@XZ
    ~TransitionStoryboard();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseVisuals@TransitionStoryboard@@AEAAXXZ
    void ReleaseVisuals();
};
