#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 38 member(s).
class CMultiTouchInteractionEngine {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMultiTouchInteractionEngine@@QEAA@_N@Z
    CMultiTouchInteractionEngine(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushResults@CMultiTouchInteractionEngine@@UEAAJXZ
    virtual long FlushResults();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCrossSlideImplementor@CMultiTouchInteractionEngine@@UEAAPEAVICrossSlideImplementor@@XZ
    virtual ICrossSlideImplementor * GetCrossSlideImplementor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCrossSlideParameters@CMultiTouchInteractionEngine@@UEAAJW4CROSS_SLIDE_THRESHOLD@@PEAM@Z
    virtual long GetCrossSlideParameters(int, float *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHoldImplementor@CMultiTouchInteractionEngine@@UEAAPEAVIHoldImplementor@@XZ
    virtual IHoldImplementor * GetHoldImplementor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInertiaEnd@CMultiTouchInteractionEngine@@UEBAJPEAUMANIPULATION_TRANSFORM@@PEAK11@Z
    virtual long GetInertiaEnd(MANIPULATION_TRANSFORM *, unsigned long *, unsigned long *, unsigned long *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPredictionImplementor@CMultiTouchInteractionEngine@@UEAAPEAVIPredictionImplementor@@XZ
    virtual IPredictionImplementor * GetPredictionImplementor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResult@CMultiTouchInteractionEngine@@UEBAAEBUINTERACTION_OUTPUT@@H@Z
    virtual INTERACTION_OUTPUT const & GetResult(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResultsCount@CMultiTouchInteractionEngine@@UEBAHXZ
    virtual int GetResultsCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeToIdle@CMultiTouchInteractionEngine@@UEBAJPEAK@Z
    virtual long GetTimeToIdle(unsigned long *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTranslationImplementor@CMultiTouchInteractionEngine@@UEAAPEAVITranslationImplementor@@XZ
    virtual ITranslationImplementor * GetTranslationImplementor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InInertia@CMultiTouchInteractionEngine@@UEBAJPEAH@Z
    virtual long InInertia(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsManipulationInertiaSupported@CMultiTouchInteractionEngine@@UEBA_NXZ
    virtual bool IsManipulationInertiaSupported() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactDown@CMultiTouchInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@MK@Z
    virtual long OnContactDown(unsigned long, tagPOINT, unsigned long, RATIONAL, float, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactEnter@CMultiTouchInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@K@Z
    virtual long OnContactEnter(unsigned long, tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactInAirMove@CMultiTouchInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@K@Z
    virtual long OnContactInAirMove(unsigned long, tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactLeave@CMultiTouchInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@K@Z
    virtual long OnContactLeave(unsigned long, tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactMove@CMultiTouchInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@MK@Z
    virtual long OnContactMove(unsigned long, tagPOINT, unsigned long, RATIONAL, float, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactUp@CMultiTouchInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@K@Z
    virtual long OnContactUp(unsigned long, tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResetTime@CMultiTouchInteractionEngine@@UEAAJK@Z
    virtual long OnResetTime(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStop@CMultiTouchInteractionEngine@@UEAAJK@Z
    virtual long OnStop(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimer@CMultiTouchInteractionEngine@@UEAAJK@Z
    virtual long OnTimer(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OutputPrediction@CMultiTouchInteractionEngine@@UEAAJIIPEAUMANIPULATION_TRANSFORM@@@Z
    virtual long OutputPrediction(unsigned int, unsigned int, MANIPULATION_TRANSFORM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInertiaSetupCallback@CMultiTouchInteractionEngine@@UEAAJP6AXPEAXPEBUMANIPULATION_VELOCITY@@PEAM22PEA_N2@Z0@Z
    virtual long RegisterInertiaSetupCallback(void ( *)(void *, MANIPULATION_VELOCITY const *, float *, float *, float *, bool *, float *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CMultiTouchInteractionEngine@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCrossSlideParameters@CMultiTouchInteractionEngine@@UEAAJMMMM@Z
    virtual long SetCrossSlideParameters(float, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHoldParameter@CMultiTouchInteractionEngine@@UEAAJW4HOLD_PARAMETER@@M@Z
    virtual long SetHoldParameter(int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInertiaInitialTime@CMultiTouchInteractionEngine@@UEAAJK@Z
    virtual long SetInertiaInitialTime(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInertiaParameter@CMultiTouchInteractionEngine@@UEAAJW4ManipulationDimension@@M@Z
    virtual long SetInertiaParameter(int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPivot@CMultiTouchInteractionEngine@@UEAAJMMM@Z
    virtual long SetPivot(float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTranslationParameter@CMultiTouchInteractionEngine@@UEAAJW4TRANSLATION_PARAMETER@@M@Z
    virtual long SetTranslationParameter(int, float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMultiTouchInteractionEngine@@UEAA@XZ
    virtual ~CMultiTouchInteractionEngine();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CMultiTouchInteractionEngine@@MEAAJPEAVCInteractionEngineConfiguration@@PEBVCInteractionEngineParameters@@@Z
    virtual long Initialize(CInteractionEngineConfiguration *, CInteractionEngineParameters const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Create@CMultiTouchInteractionEngine@@IEAAJXZ
    long _Create();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Destroy@CMultiTouchInteractionEngine@@IEAAXXZ
    void _Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Output@CMultiTouchInteractionEngine@@IEAAJKKUtagPOINT@@@Z
    long _Output(unsigned long, unsigned long, tagPOINT);
};
