#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class CInertiaProcessor {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInertiaEnd@CInertiaProcessor@@QEBAHPEAN0PEA_K@Z
    int GetInertiaEnd(double *, double *, uint64_t *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextDisplacement@CInertiaProcessor@@QEAA?AUtagPOINT@@_K@Z
    tagPOINT GetNextDisplacement(uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpeed@CInertiaProcessor@@QEAA?AUSPEED@MT@@_KHH@Z
    ::MT::SPEED GetSpeed(uint64_t, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInertia@CInertiaProcessor@@QEAAHNNUtagPOINT@@_K@Z
    int StartInertia(double, double, tagPOINT, uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetSpeed@CInertiaProcessor@@AEAA?AUSPEED@MT@@_KHH@Z
    ::MT::SPEED _GetSpeed(uint64_t, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InputTimeFromTimerTime@CInertiaProcessor@@AEAA_K_K@Z
    uint64_t _InputTimeFromTimerTime(uint64_t);
};
