#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 3 member(s).
class CPanningTouchParameterizer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFrictionFactor@CPanningTouchParameterizer@@QEBANXZ
    double GetFrictionFactor() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinimumVelocityFromRegistry@CPanningTouchParameterizer@@QEAAJK@Z
    long SetMinimumVelocityFromRegistry(unsigned long);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FitFrictionToCplCurve@CPanningTouchParameterizer@@AEBANN@Z
    double FitFrictionToCplCurve(double) const;
};
