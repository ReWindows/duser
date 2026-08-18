#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class DuParkGadget {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessingMsgObject@DuParkGadget@@UEBAPEAVMsgObject@@XZ
    virtual MsgObject * GetProcessingMsgObject() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessingMsgObject@DuParkGadget@@UEAAXPEAVMsgObject@@@Z
    virtual void SetProcessingMsgObject(MsgObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDestroy@DuParkGadget@@UEAAXXZ
    virtual void xwDestroy();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DuParkGadget@@UEAA@XZ
    virtual ~DuParkGadget();
};
