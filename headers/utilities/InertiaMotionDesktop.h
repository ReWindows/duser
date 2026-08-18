#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 5 member(s).
class InertiaMotionDesktop {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDuration@InertiaMotionDesktop@@UEAANNN@Z
    virtual double GetDuration(double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndPosition@InertiaMotionDesktop@@UEAANNN@Z
    virtual double GetEndPosition(double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@InertiaMotionDesktop@@UEAANNNN@Z
    virtual double GetPosition(double, double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeToPosition@InertiaMotionDesktop@@UEAANNNN@Z
    virtual double GetTimeToPosition(double, double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVelocity@InertiaMotionDesktop@@UEAANNNN@Z
    virtual double GetVelocity(double, double, double);
};
