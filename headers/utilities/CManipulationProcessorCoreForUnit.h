#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 11 member(s).
class CManipulationProcessorCoreForUnit {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CManipulationProcessorCoreForUnit@@QEAA@PEAVCManipulationProcessorUnit@@PEBVCGestureParameterizer@@M@Z
    CManipulationProcessorCoreForUnit(CManipulationProcessorUnit *, CGestureParameterizer const *, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetState@CManipulationProcessorCoreForUnit@@UEAAXXZ
    virtual void ResetState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UsePreviousPivot@CManipulationProcessorCoreForUnit@@UEAAHXZ
    virtual int UsePreviousPivot();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetManipulationVelocity@CManipulationProcessorCoreForUnit@@AEAA?AUMANIPULATION_VELOCITY@@XZ
    MANIPULATION_VELOCITY GetManipulationVelocity();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRailsState@CManipulationProcessorCoreForUnit@@AEAA?AW4MANIPULATION_RAILS_STATE@@XZ
    int GetRailsState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationComplete@CManipulationProcessorCoreForUnit@@EEAAXMMMMMMM@Z
    virtual void OnManipulationComplete(float, float, float, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationDelta@CManipulationProcessorCoreForUnit@@EEAAXMMMMMMMMMMMM@Z
    virtual void OnManipulationDelta(float, float, float, float, float, float, float, float, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationStarted@CManipulationProcessorCoreForUnit@@EEAAXMM@Z
    virtual void OnManipulationStarted(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ResetState@CManipulationProcessorCoreForUnit@@AEAAXXZ
    void _ResetState();
};
