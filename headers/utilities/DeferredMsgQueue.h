#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class DeferredMsgQueue {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeferMessage@DeferredMsgQueue@@QEAAJPEAUtagGMSG@@PEAVDuEventGadget@@PEAUHROOTGADGET__@@IPEAVMsgObject@@@Z
    long DeferMessage(tagGMSG *, DuEventGadget *, HROOTGADGET__*, unsigned int, MsgObject *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeferredMsgQueue@@UEAA@XZ
    virtual ~DeferredMsgQueue();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleMask@DeferredMsgQueue@@MEBAIXZ
    virtual unsigned int GetHandleMask() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleType@DeferredMsgQueue@@MEBA?AW4HandleType@@XZ
    virtual int GetHandleType() const;
};
