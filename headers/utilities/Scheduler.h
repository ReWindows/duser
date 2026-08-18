#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 4 member(s).
class Scheduler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAction@Scheduler@@QEAAPEAVAction@@PEBUGMA_ACTION@@@Z
    Action * AddAction(GMA_ACTION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwProcessActionsNL@Scheduler@@QEAAKXZ
    unsigned long xwProcessActionsNL();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Scheduler@@QEAA@XZ
    ~Scheduler();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwRemoveAllActions@Scheduler@@IEAAXXZ
    void xwRemoveAllActions();
};
