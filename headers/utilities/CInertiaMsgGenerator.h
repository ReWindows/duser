#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 15 member(s).
class CInertiaMsgGenerator {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInertiaMsgGenerator@@QEAA@PEAVCOutputPredictor@@@Z
    CInertiaMsgGenerator(COutputPredictor *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInertiaEnd@CInertiaMsgGenerator@@QEBAJPEAUMANIPULATION_TRANSFORM@@PEAK11@Z
    long GetInertiaEnd(MANIPULATION_TRANSFORM *, unsigned long *, unsigned long *, unsigned long *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInertiaPossible@CInertiaMsgGenerator@@QEAAHUSPEED@MT@@N@Z
    int IsInertiaPossible(::MT::SPEED, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimer@CInertiaMsgGenerator@@QEAAXK@Z
    void OnTimer(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInertiaParameter@CInertiaMsgGenerator@@QEAAJW4ManipulationDimension@@M@Z
    long SetInertiaParameter(int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInertia@CInertiaMsgGenerator@@QEAAHUGESTURE_DATA@MT@@NKH@Z
    int StartInertia(::MT::GESTURE_DATA, double, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInertiaForManipulation@CInertiaMsgGenerator@@QEAAHUGESTURE_DATA@MT@@MHHHH@Z
    int StartInertiaForManipulation(::MT::GESTURE_DATA, float, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopInertia@CInertiaMsgGenerator@@QEAAXK@Z
    void StopInertia(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInertiaMsgGenerator@@QEAA@XZ
    ~CInertiaMsgGenerator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustPointWithDisplacement@CInertiaMsgGenerator@@AEAAHAEAUtagPOINT@@U2@1@Z
    int AdjustPointWithDisplacement(tagPOINT &, tagPOINT, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInertiaProcessor@CInertiaMsgGenerator@@AEAAHN@Z
    int EnsureInertiaProcessor(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInertiaProcessorUnit@CInertiaMsgGenerator@@AEAAHXZ
    int EnsureInertiaProcessorUnit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishGestureStream@CInertiaMsgGenerator@@AEAAXUGESTURE_DATA@MT@@@Z
    void FinishGestureStream(::MT::GESTURE_DATA);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInertiaData@CInertiaMsgGenerator@@AEAAHK@Z
    int GetInertiaData(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddGestureOutput@CInertiaMsgGenerator@@AEAAXUGESTURE_DATA@MT@@@Z
    void _AddGestureOutput(::MT::GESTURE_DATA);
};
