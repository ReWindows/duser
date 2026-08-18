#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 2 member(s).
class DeferredMsgQueueLock {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LockNL@DeferredMsgQueueLock@@QEAAHPEAVDeferredMsgQueue@@PEAVContext@@@Z
    int LockNL(DeferredMsgQueue *, Context *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeferredMsgQueueLock@@QEAA@XZ
    ~DeferredMsgQueueLock();
};
