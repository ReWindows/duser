#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 2 member(s).
class DelayedMsgQ {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwProcessDelayedNL@DelayedMsgQ@@QEAAXXZ
    void xwProcessDelayedNL();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@DelayedMsgQ@@IEAAXPEAUMsgEntry@@@Z
    void Add(MsgEntry *);
};
