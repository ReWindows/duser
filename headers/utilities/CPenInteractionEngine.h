#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 31 member(s).
class CPenInteractionEngine {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushResults@CPenInteractionEngine@@UEAAJXZ
    virtual long FlushResults();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHoldImplementor@CPenInteractionEngine@@UEAAPEAVIHoldImplementor@@XZ
    virtual IHoldImplementor * GetHoldImplementor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInertiaEnd@CPenInteractionEngine@@UEBAJPEAUMANIPULATION_TRANSFORM@@PEAK11@Z
    virtual long GetInertiaEnd(MANIPULATION_TRANSFORM *, unsigned long *, unsigned long *, unsigned long *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResult@CPenInteractionEngine@@UEBAAEBUINTERACTION_OUTPUT@@H@Z
    virtual INTERACTION_OUTPUT const & GetResult(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResultsCount@CPenInteractionEngine@@UEBAHXZ
    virtual int GetResultsCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeToIdle@CPenInteractionEngine@@UEBAJPEAK@Z
    virtual long GetTimeToIdle(unsigned long *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InInertia@CPenInteractionEngine@@UEBAJPEAH@Z
    virtual long InInertia(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsManipulationInertiaSupported@CPenInteractionEngine@@UEBA_NXZ
    virtual bool IsManipulationInertiaSupported() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactDown@CPenInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@MK@Z
    virtual long OnContactDown(unsigned long, tagPOINT, unsigned long, RATIONAL, float, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactEnter@CPenInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@K@Z
    virtual long OnContactEnter(unsigned long, tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactInAirMove@CPenInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@K@Z
    virtual long OnContactInAirMove(unsigned long, tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactLeave@CPenInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@K@Z
    virtual long OnContactLeave(unsigned long, tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactMove@CPenInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@MK@Z
    virtual long OnContactMove(unsigned long, tagPOINT, unsigned long, RATIONAL, float, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactUp@CPenInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@K@Z
    virtual long OnContactUp(unsigned long, tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResetTime@CPenInteractionEngine@@UEAAJK@Z
    virtual long OnResetTime(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStop@CPenInteractionEngine@@UEAAJK@Z
    virtual long OnStop(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimer@CPenInteractionEngine@@UEAAJK@Z
    virtual long OnTimer(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInertiaSetupCallback@CPenInteractionEngine@@UEAAJP6AXPEAXPEBUMANIPULATION_VELOCITY@@PEAM22PEA_N2@Z0@Z
    virtual long RegisterInertiaSetupCallback(void ( *)(void *, MANIPULATION_VELOCITY const *, float *, float *, float *, bool *, float *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CPenInteractionEngine@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHoldParameter@CPenInteractionEngine@@UEAAJW4HOLD_PARAMETER@@M@Z
    virtual long SetHoldParameter(int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInertiaInitialTime@CPenInteractionEngine@@UEAAJK@Z
    virtual long SetInertiaInitialTime(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInertiaParameter@CPenInteractionEngine@@UEAAJW4ManipulationDimension@@M@Z
    virtual long SetInertiaParameter(int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPivot@CPenInteractionEngine@@UEAAJMMM@Z
    virtual long SetPivot(float, float, float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPenInteractionEngine@@UEAA@XZ
    virtual ~CPenInteractionEngine();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPenInteractionEngine@@MEAAJPEAVCInteractionEngineConfiguration@@PEBVCInteractionEngineParameters@@@Z
    virtual long Initialize(CInteractionEngineConfiguration *, CInteractionEngineParameters const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Create@CPenInteractionEngine@@IEAAJXZ
    long _Create();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Destroy@CPenInteractionEngine@@IEAAXXZ
    void _Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureInertiaProcessorUnit@CPenInteractionEngine@@IEAAJXZ
    long _EnsureInertiaProcessorUnit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Output@CPenInteractionEngine@@IEAAJKHAEBUManipulationProcessorUnitResult@@@Z
    long _Output(unsigned long, int, ManipulationProcessorUnitResult const &);
};
