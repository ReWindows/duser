#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class TransitionCurveChangeHandler {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@TransitionCurveChangeHandler@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@TransitionCurveChangeHandler@@SAJPEAVTransitionVisual@@W4Variable@2@PEAPEAV1@@Z
    static long Build(TransitionVisual *, int, TransitionCurveChangeHandler * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCurveChanged@TransitionCurveChangeHandler@@UEAAJPEAUIUIAnimationVariable2@@@Z
    virtual long OnCurveChanged(IUIAnimationVariable2*);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@TransitionCurveChangeHandler@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TransitionCurveChangeHandler@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TransitionCurveChangeHandler@@QEAA@XZ
    TransitionCurveChangeHandler();
};
