#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 17 member(s).
class CManipulationProcessorUnit {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CManipulationProcessorUnit@@QEAA@PEBVCGestureParameterizer@@MM@Z
    CManipulationProcessorUnit(CGestureParameterizer const *, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRadius@CManipulationProcessorUnit@@QEBAMXZ
    float GetRadius() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsResultUpdated@CManipulationProcessorUnit@@QEBAHXZ
    int IsResultUpdated() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactDown@CManipulationProcessorUnit@@QEAAHKUtagPOINT@@IURATIONAL@@H@Z
    int OnContactDown(unsigned long, tagPOINT, unsigned int, RATIONAL, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactMove@CManipulationProcessorUnit@@QEAAHKUtagPOINT@@IH@Z
    int OnContactMove(unsigned long, tagPOINT, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactUp@CManipulationProcessorUnit@@QEAAHKUtagPOINT@@IH@Z
    int OnContactUp(unsigned long, tagPOINT, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStop@CManipulationProcessorUnit@@QEAAHI@Z
    int OnStop(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetState@CManipulationProcessorUnit@@QEAAXXZ
    void ResetState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConfiguration@CManipulationProcessorUnit@@QEAAXHHHHHHHHHHH@Z
    void SetConfiguration(int, int, int, int, int, int, int, int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPivot@CManipulationProcessorUnit@@QEAAJMMM@Z
    long SetPivot(float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRailingStrength@CManipulationProcessorUnit@@QEAAXM@Z
    void SetRailingStrength(float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CManipulationProcessorUnit@@QEAA@XZ
    ~CManipulationProcessorUnit();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInManipulationState@CManipulationProcessorUnit@@AEBAHXZ
    int GetInManipulationState() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostProcessResult@CManipulationProcessorUnit@@AEAAXXZ
    void PostProcessResult();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessedTransform@CManipulationProcessorUnit@@AEAAXUMANIPULATION_TRANSFORM@@@Z
    void SetProcessedTransform(MANIPULATION_TRANSFORM);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResult@CManipulationProcessorUnit@@AEAAXW4ManipulationProcessorUnitStatus@@MMUMANIPULATION_TRANSFORM@@1UMANIPULATION_VELOCITY@@W4MANIPULATION_RAILS_STATE@@@Z
    void SetResult(int, float, float, MANIPULATION_TRANSFORM, MANIPULATION_TRANSFORM, MANIPULATION_VELOCITY, int);
};
