#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 34 member(s).
class CManipulationProcessorCore {
public:
    class LimitedQueue;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTrack@CManipulationProcessorCore@@QEAAJK@Z
    long BeginTrack(unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CManipulationProcessorCore@@QEAA@XZ
    CManipulationProcessorCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteManipulation@CManipulationProcessorCore@@QEAAJXZ
    long CompleteManipulation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CursorDown@CManipulationProcessorCore@@QEAAJKMMK@Z
    long CursorDown(unsigned long, float, float, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CursorMove@CManipulationProcessorCore@@QEAAJKMMK@Z
    long CursorMove(unsigned long, float, float, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CursorUp@CManipulationProcessorCore@@QEAAJKMMK@Z
    long CursorUp(unsigned long, float, float, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTrack@CManipulationProcessorCore@@QEAAJKK@Z
    long EndTrack(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetState@CManipulationProcessorCore@@UEAAXXZ
    virtual void ResetState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinimumScaleRotateRadius@CManipulationProcessorCore@@QEAAJM@Z
    long SetMinimumScaleRotateRadius(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPivotPointX@CManipulationProcessorCore@@QEAAJM@Z
    long SetPivotPointX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPivotPointY@CManipulationProcessorCore@@QEAAJM@Z
    long SetPivotPointY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPivotRadius@CManipulationProcessorCore@@QEAAJM@Z
    long SetPivotRadius(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSupportedManipulations@CManipulationProcessorCore@@QEAAJW4MANIPULATION_PROCESSOR_MANIPULATIONS@@@Z
    long SetSupportedManipulations(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UsePreviousPivot@CManipulationProcessorCore@@UEAAHXZ
    virtual int UsePreviousPivot();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CManipulationProcessorCore@@UEAA@XZ
    virtual ~CManipulationProcessorCore();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationComplete@CManipulationProcessorCore@@MEAAXMMMMMMM@Z
    virtual void OnManipulationComplete(float, float, float, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationDelta@CManipulationProcessorCore@@MEAAXMMMMMMMMMMMM@Z
    virtual void OnManipulationDelta(float, float, float, float, float, float, float, float, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationStarted@CManipulationProcessorCore@@MEAAXMM@Z
    virtual void OnManipulationStarted(float, float);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateMultiManipulatorRotationAndScale@CManipulationProcessorCore@@AEAAXUtagPOINTF@@PEAM11@Z
    void CalculateMultiManipulatorRotationAndScale(tagPOINTF, float *, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateSingleManipulatorRotation@CManipulationProcessorCore@@AEAAMUtagPOINTF@@0H@Z
    float CalculateSingleManipulatorRotation(tagPOINTF, tagPOINTF, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateTransforms@CManipulationProcessorCore@@AEAAXK@Z
    void CalculateTransforms(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateWeightedMovingAverage@CManipulationProcessorCore@@AEAA?AUMANIPULATION_VELOCITIES@@W4MANIPULATION_PROCESSOR_MANIPULATIONS@@@Z
    MANIPULATION_VELOCITIES CalculateWeightedMovingAverage(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAveragePoint@CManipulationProcessorCore@@AEAA?AUtagPOINTF@@XZ
    tagPOINTF GetAveragePoint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeManipulationState@CManipulationProcessorCore@@AEAAXK@Z
    void InitializeManipulationState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinned@CManipulationProcessorCore@@AEAAHXZ
    int IsPinned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessManipulators@CManipulationProcessorCore@@AEAAXKQEAUMANIPULATOR@@H0H0H@Z
    void OnProcessManipulators(unsigned long, MANIPULATOR * const, int, MANIPULATOR * const, int, MANIPULATOR * const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddsAndRemoves@CManipulationProcessorCore@@AEAAXKQEAUMANIPULATOR@@H0H@Z
    void ProcessAddsAndRemoves(unsigned long, MANIPULATOR * const, int, MANIPULATOR * const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCompleteManipulation@CManipulationProcessorCore@@AEAAXXZ
    void ProcessCompleteManipulation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseEvents@CManipulationProcessorCore@@AEAAXUtagPOINTF@@UVECTORF@@MMM@Z
    void RaiseEvents(tagPOINTF, VECTORF, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveManipulator@CManipulationProcessorCore@@AEAAXK@Z
    void RemoveManipulator(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVectorsFromPoint@CManipulationProcessorCore@@AEAAXUtagPOINTF@@@Z
    void SetVectorsFromPoint(tagPOINTF);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManipulators@CManipulationProcessorCore@@AEAA_NQEAUMANIPULATOR@@H@Z
    bool UpdateManipulators(MANIPULATOR * const, int);
};
