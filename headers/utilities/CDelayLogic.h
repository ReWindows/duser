#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 3 member(s).
class CDelayLogic {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsManipulationLocked@CDelayLogic@@QEBAHXZ
    int IsManipulationLocked() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetState@CDelayLogic@@QEAAXXZ
    void ResetState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateState@CDelayLogic@@QEAA?AUMANIPULATION_TRANSFORM@@IIHU2@@Z
    MANIPULATION_TRANSFORM UpdateState(unsigned int, unsigned int, int, MANIPULATION_TRANSFORM);
};
