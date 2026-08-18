#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 4 member(s).
class CTapsParameterizer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePen@CTapsParameterizer@@QEAAXAEBVCPenLogicParameterizer@@@Z
    void InitializePen(CPenLogicParameterizer const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTouch@CTapsParameterizer@@QEAAXXZ
    void InitializeTouch();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTouchDoubleTapDistanceFromRegistry@CTapsParameterizer@@QEAAJK@Z
    long SetTouchDoubleTapDistanceFromRegistry(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTouchDoubleTapTimeFromRegistry@CTapsParameterizer@@QEAAJK@Z
    long SetTouchDoubleTapTimeFromRegistry(unsigned long);
};
