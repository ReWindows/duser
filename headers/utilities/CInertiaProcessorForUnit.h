#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class CInertiaProcessorForUnit {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInertiaEnd@CInertiaProcessorForUnit@@QEAAXPEAUMANIPULATION_TRANSFORM@@PEAK11@Z
    void GetInertiaEnd(MANIPULATION_TRANSFORM *, unsigned long *, unsigned long *, unsigned long *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationCompleted@CInertiaProcessorForUnit@@EEAAXMMMMMMM@Z
    virtual void OnManipulationCompleted(float, float, float, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationDelta@CInertiaProcessorForUnit@@EEAAXMMMMMMMMMMMM@Z
    virtual void OnManipulationDelta(float, float, float, float, float, float, float, float, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationStarted@CInertiaProcessorForUnit@@EEAAXMM@Z
    virtual void OnManipulationStarted(float, float);
};
