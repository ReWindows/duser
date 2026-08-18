#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 3 member(s).
class CRailsDetector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDelta@CRailsDetector@@QEAAXMMIURATIONAL@@MM@Z
    void OnDelta(float, float, unsigned int, RATIONAL, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStarted@CRailsDetector@@QEAAXMMI@Z
    void OnStarted(float, float, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetEffectiveHalfSubtendedAngle@CRailsDetector@@AEAAMXZ
    float _GetEffectiveHalfSubtendedAngle();
};
