#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 3 member(s).
class ExtrapolationState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deceleration@ExtrapolationState@@QEBANXZ
    double Deceleration() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ExtrapolationState@@QEAA@XZ
    ExtrapolationState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@ExtrapolationState@@QEAAXAEBUSystemTimingInfo@@AEBUInitialState@@@Z
    void Initialize(SystemTimingInfo const &, InitialState const &);
};
