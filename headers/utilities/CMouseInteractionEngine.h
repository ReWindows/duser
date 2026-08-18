#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 37 member(s).
class CMouseInteractionEngine {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushResults@CMouseInteractionEngine@@UEAAJXZ
    virtual long FlushResults();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInertiaEnd@CMouseInteractionEngine@@UEBAJPEAUMANIPULATION_TRANSFORM@@PEAK11@Z
    virtual long GetInertiaEnd(MANIPULATION_TRANSFORM *, unsigned long *, unsigned long *, unsigned long *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResult@CMouseInteractionEngine@@UEBAAEBUINTERACTION_OUTPUT@@H@Z
    virtual INTERACTION_OUTPUT const & GetResult(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResultsCount@CMouseInteractionEngine@@UEBAHXZ
    virtual int GetResultsCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeToIdle@CMouseInteractionEngine@@UEBAJPEAK@Z
    virtual long GetTimeToIdle(unsigned long *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWheelImplementor@CMouseInteractionEngine@@UEAAPEAVIWheelImplementor@@XZ
    virtual IWheelImplementor * GetWheelImplementor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWheelInertiaParameter@CMouseInteractionEngine@@UEBAJW4INERTIA_PARAMETER@@PEAM@Z
    virtual long GetWheelInertiaParameter(int, float *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWheelParameter@CMouseInteractionEngine@@UEBAJW4MOUSE_WHEEL_PARAMETER@@PEAM@Z
    virtual long GetWheelParameter(int, float *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InInertia@CMouseInteractionEngine@@UEBAJPEAH@Z
    virtual long InInertia(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsManipulationInertiaSupported@CMouseInteractionEngine@@UEBA_NXZ
    virtual bool IsManipulationInertiaSupported() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactDown@CMouseInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@MK@Z
    virtual long OnContactDown(unsigned long, tagPOINT, unsigned long, RATIONAL, float, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactEnter@CMouseInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@K@Z
    virtual long OnContactEnter(unsigned long, tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactInAirMove@CMouseInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@K@Z
    virtual long OnContactInAirMove(unsigned long, tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactLeave@CMouseInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@K@Z
    virtual long OnContactLeave(unsigned long, tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactMove@CMouseInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@MK@Z
    virtual long OnContactMove(unsigned long, tagPOINT, unsigned long, RATIONAL, float, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactUp@CMouseInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@K@Z
    virtual long OnContactUp(unsigned long, tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResetTime@CMouseInteractionEngine@@UEAAJK@Z
    virtual long OnResetTime(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStop@CMouseInteractionEngine@@UEAAJK@Z
    virtual long OnStop(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimer@CMouseInteractionEngine@@UEAAJK@Z
    virtual long OnTimer(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnWheel@CMouseInteractionEngine@@UEAAJKUtagPOINT@@KKH@Z
    virtual long OnWheel(unsigned long, tagPOINT, unsigned long, unsigned long, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInertiaSetupCallback@CMouseInteractionEngine@@UEAAJP6AXPEAXPEBUMANIPULATION_VELOCITY@@PEAM22PEA_N2@Z0@Z
    virtual long RegisterInertiaSetupCallback(void ( *)(void *, MANIPULATION_VELOCITY const *, float *, float *, float *, bool *, float *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CMouseInteractionEngine@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInertiaInitialTime@CMouseInteractionEngine@@UEAAJK@Z
    virtual long SetInertiaInitialTime(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInertiaParameter@CMouseInteractionEngine@@UEAAJW4ManipulationDimension@@M@Z
    virtual long SetInertiaParameter(int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPivot@CMouseInteractionEngine@@UEAAJMMM@Z
    virtual long SetPivot(float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWheelParameter@CMouseInteractionEngine@@UEAAJW4MOUSE_WHEEL_PARAMETER@@M@Z
    virtual long SetWheelParameter(int, float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMouseInteractionEngine@@UEAA@XZ
    virtual ~CMouseInteractionEngine();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMouseInteractionEngine@@MEAAJPEAVCInteractionEngineConfiguration@@PEBVCInteractionEngineParameters@@@Z
    virtual long Initialize(CInteractionEngineConfiguration *, CInteractionEngineParameters const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPartiallyConstructed@CMouseInteractionEngine@@IEBA_NXZ
    bool IsPartiallyConstructed() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Create@CMouseInteractionEngine@@IEAAJXZ
    long _Create();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Destroy@CMouseInteractionEngine@@IEAAXXZ
    void _Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureInertiaProcessorUnit@CMouseInteractionEngine@@IEAAJXZ
    long _EnsureInertiaProcessorUnit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDrag@CMouseInteractionEngine@@KAHE@Z
    static int _IsDrag(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Output@CMouseInteractionEngine@@IEAAJKKUtagPOINT@@HAEBUManipulationProcessorUnitResult@@@Z
    long _Output(unsigned long, unsigned long, tagPOINT, int, ManipulationProcessorUnitResult const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_RightSysEvent@CMouseInteractionEngine@@KAEEAEBVCInteractionEngineConfiguration@@@Z
    static unsigned char _RightSysEvent(unsigned char, CInteractionEngineConfiguration const &);
};
