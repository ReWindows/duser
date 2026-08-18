#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 37 member(s).
class CInertiaProcessorCore {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInertiaProcessorCore@@QEAA@XZ
    CInertiaProcessorCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanReset@CInertiaProcessorCore@@QEAAXXZ
    void CleanReset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CInertiaProcessorCore@@QEAAXXZ
    void Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesiredAngularDeceleration@CInertiaProcessorCore@@QEAAXM@Z
    void SetDesiredAngularDeceleration(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesiredDeceleration@CInertiaProcessorCore@@QEAAXM@Z
    void SetDesiredDeceleration(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesiredDisplacement@CInertiaProcessorCore@@QEAAXM@Z
    void SetDesiredDisplacement(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesiredExpansion@CInertiaProcessorCore@@QEAAXM@Z
    void SetDesiredExpansion(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesiredExpansionDeceleration@CInertiaProcessorCore@@QEAAXM@Z
    void SetDesiredExpansionDeceleration(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDesiredRotation@CInertiaProcessorCore@@QEAAXM@Z
    void SetDesiredRotation(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialAngularVelocity@CInertiaProcessorCore@@QEAAXM@Z
    void SetInitialAngularVelocity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialExpansionVelocity@CInertiaProcessorCore@@QEAAXM@Z
    void SetInitialExpansionVelocity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialOriginX@CInertiaProcessorCore@@QEAAXM@Z
    void SetInitialOriginX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialOriginY@CInertiaProcessorCore@@QEAAXM@Z
    void SetInitialOriginY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialRadius@CInertiaProcessorCore@@QEAAXM@Z
    void SetInitialRadius(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialVelocityX@CInertiaProcessorCore@@QEAAXM@Z
    void SetInitialVelocityX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInitialVelocityY@CInertiaProcessorCore@@QEAAXM@Z
    void SetInitialVelocityY(float);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateCollision@CInertiaProcessorCore@@IEAAXAEBUExtrapolationState@@NPEAUCollision@@@Z
    void CalculateCollision(ExtrapolationState const &, double, Collision *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateCollision@CInertiaProcessorCore@@IEAAXHPEAUExtrapolationState@@@Z
    void CalculateCollision(int, ExtrapolationState *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateTime@CInertiaProcessorCore@@IEAANNNNH@Z
    double CalculateTime(double, double, double, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtrapolateAndRaiseEvents@CInertiaProcessorCore@@IEAA_NK_N@Z
    bool ExtrapolateAndRaiseEvents(unsigned long, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDuration@CInertiaProcessorCore@@IEBANNNH@Z
    double GetDuration(double, double, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEndPosition@CInertiaProcessorCore@@IEBANNNH@Z
    double GetEndPosition(double, double, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtrapolatedValueAndUpdateState@CInertiaProcessorCore@@IEAAXAEAUExtrapolationState@@NHPEAUExtrapolatedValue@@@Z
    void GetExtrapolatedValueAndUpdateState(ExtrapolationState &, double, int, ExtrapolatedValue *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPosition@CInertiaProcessorCore@@IEBANNNNH@Z
    double GetPosition(double, double, double, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRecommendedAbsoluteCollisionVelocity@CInertiaProcessorCore@@IEAANAEBUSystemTimingInfo@@AEBUExtrapolationState@@AEAUCollision@@@Z
    double GetRecommendedAbsoluteCollisionVelocity(SystemTimingInfo const &, ExtrapolationState const &, Collision &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeToPosition@CInertiaProcessorCore@@IEBANNNNH@Z
    double GetTimeToPosition(double, double, double, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVelocity@CInertiaProcessorCore@@IEBANAEBUExtrapolationState@@H@Z
    double GetVelocity(ExtrapolationState const &, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationCompleted@CInertiaProcessorCore@@MEAAXMMMMMMM@Z
    virtual void OnManipulationCompleted(float, float, float, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationStarted@CInertiaProcessorCore@@MEAAXMM@Z
    virtual void OnManipulationStarted(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepare@CInertiaProcessorCore@@IEAAXUInitialState@@HPEAUExtrapolationState@@@Z
    void Prepare(InitialState, int, ExtrapolationState *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prepare@CInertiaProcessorCore@@IEAAXXZ
    void Prepare();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Process@CInertiaProcessorCore@@IEAA_NK_N@Z
    bool Process(unsigned long, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevertCollision@CInertiaProcessorCore@@IEAAXAEBUSystemTimingInfo@@HPEAUExtrapolationState@@NAEAUCollision@@@Z
    void RevertCollision(SystemTimingInfo const &, int, ExtrapolationState *, double, Collision &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevertCollision@CInertiaProcessorCore@@IEAAXAEBUSystemTimingInfo@@HPEAUExtrapolationState@@NNAEAUCollision@@@Z
    void RevertCollision(SystemTimingInfo const &, int, ExtrapolationState *, double, double, Collision &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCalculateCollisionTime@CInertiaProcessorCore@@IEAA_NAEBUExtrapolationState@@AEAUCollision@@1PEAN@Z
    bool TryCalculateCollisionTime(ExtrapolationState const &, Collision &, Collision &, double *);
};
