#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 4 member(s).
class CManipulationInertiaParameters {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CManipulationInertiaParameters@@QEAA@PEBVCPanningTouchParameterizer@@@Z
    CManipulationInertiaParameters(CPanningTouchParameterizer const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InertiaSetupCallback@CManipulationInertiaParameters@@SAXPEAXPEBUMANIPULATION_VELOCITY@@PEAM22PEA_N2@Z
    static void InertiaSetupCallback(void *, MANIPULATION_VELOCITY const *, float *, float *, float *, bool *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CManipulationInertiaParameters@@QEAAXPEBVCPanningTouchParameterizer@@@Z
    void Reset(CPanningTouchParameterizer const *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultDeceleration@CManipulationInertiaParameters@@CAMPEBVCPanningTouchParameterizer@@W4ManipulationDimension@@@Z
    static float GetDefaultDeceleration(CPanningTouchParameterizer const *, int);
};
