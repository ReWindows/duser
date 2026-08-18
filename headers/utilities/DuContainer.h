#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class DuContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGadgetExternal@DuContainer@@UEAAJPEAVDuVisual@@PEAPEAUHBITMAP__@@PEAUtagRECT@@@Z
    virtual long DrawGadgetExternal(DuVisual *, HBITMAP__* *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleMask@DuContainer@@UEBAIXZ
    virtual unsigned int GetHandleMask() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootVisual@DuContainer@@UEAAJPEAPEAVTransitionVisual@@@Z
    virtual long GetRootVisual(TransitionVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCompositionChanged@DuContainer@@UEAAJXZ
    virtual long NotifyCompositionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleTransitionVisualPaintAndCommit@DuContainer@@UEAAXXZ
    virtual void ScheduleTransitionVisualPaintAndCommit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDestroyGadget@DuContainer@@QEAAXXZ
    void xwDestroyGadget();
};
