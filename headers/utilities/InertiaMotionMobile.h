#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 5 member(s).
class InertiaMotionMobile {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDuration@InertiaMotionMobile@@UEAANNN@Z
    virtual double GetDuration(double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndPosition@InertiaMotionMobile@@UEAANNN@Z
    virtual double GetEndPosition(double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@InertiaMotionMobile@@UEAANNNN@Z
    virtual double GetPosition(double, double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeToPosition@InertiaMotionMobile@@UEAANNNN@Z
    virtual double GetTimeToPosition(double, double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVelocity@InertiaMotionMobile@@UEAANNNN@Z
    virtual double GetVelocity(double, double, double);
};
