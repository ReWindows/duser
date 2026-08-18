#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 15 member(s).
class CInertiaProcessorUnit {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInertiaProcessorUnit@@QEAA@XZ
    CInertiaProcessorUnit();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveAcceleration@CInertiaProcessorUnit@@QEBAXPEAM000@Z
    void GetEffectiveAcceleration(float *, float *, float *, float *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInertiaEnd@CInertiaProcessorUnit@@QEBAJPEAUMANIPULATION_TRANSFORM@@PEAK11@Z
    long GetInertiaEnd(MANIPULATION_TRANSFORM *, unsigned long *, unsigned long *, unsigned long *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInertiaParameter@CInertiaProcessorUnit@@QEAAJW4ManipulationDimension@@M@Z
    long SetInertiaParameter(int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialTime@CInertiaProcessorUnit@@QEAAHI@Z
    int SetInitialTime(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Start@CInertiaProcessorUnit@@QEAAHMMMIAEBUMANIPULATION_TRANSFORM@@AEBUMANIPULATION_VELOCITY@@HHHW4MANIPULATION_RAILS_STATE@@@Z
    int Start(float, float, float, unsigned int, MANIPULATION_TRANSFORM const &, MANIPULATION_VELOCITY const &, int, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CInertiaProcessorUnit@@QEAAXXZ
    void Stop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Timer@CInertiaProcessorUnit@@QEAAHI@Z
    int Timer(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInertiaProcessorUnit@@QEAA@XZ
    ~CInertiaProcessorUnit();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationCompleted@CInertiaProcessorUnit@@AEAAXMMMMMMM@Z
    void OnManipulationCompleted(float, float, float, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationDelta@CInertiaProcessorUnit@@AEAAXMMMMMMMMMMMM@Z
    void OnManipulationDelta(float, float, float, float, float, float, float, float, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationStarted@CInertiaProcessorUnit@@AEAAXMM@Z
    void OnManipulationStarted(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureInertiaProcessorForUnit@CInertiaProcessorUnit@@AEAAHXZ
    int _EnsureInertiaProcessorForUnit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InputTimeFromTimerTime@CInertiaProcessorUnit@@AEAAII@Z
    unsigned int _InputTimeFromTimerTime(unsigned int);
};
