#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 24 member(s).
class CTouchGestureMachine {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTouchGestureMachine@@QEAA@PEAVCInteractionEngineConfiguration@@PEBVCPanningTouchParameterizer@@PEBVCGestureParameterizer@@PEBVCTouchLogicParameterizer@@PEAVCTapsMachine@@H@Z
    CTouchGestureMachine(CInteractionEngineConfiguration *, CPanningTouchParameterizer const *, CGestureParameterizer const *, CTouchLogicParameterizer const *, CTapsMachine *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCrossSlideParameter@CTouchGestureMachine@@QEAAJW4CROSS_SLIDE_THRESHOLD@@PEAM@Z
    long GetCrossSlideParameter(int, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InGestureMode@CTouchGestureMachine@@QEAAHXZ
    int InGestureMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCursorDown@CTouchGestureMachine@@QEAAXAEAEKUtagPOINT@@KURATIONAL@@MKHH@Z
    void OnCursorDown(unsigned char &, unsigned long, tagPOINT, unsigned long, RATIONAL, float, unsigned long, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCursorUp@CTouchGestureMachine@@QEAAXAEAEKUtagPOINT@@KURATIONAL@@@Z
    void OnCursorUp(unsigned char &, unsigned long, tagPOINT, unsigned long, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPacket@CTouchGestureMachine@@QEAAXAEAEKUtagPOINT@@AEAU2@KURATIONAL@@MK@Z
    void OnPacket(unsigned char &, unsigned long, tagPOINT, tagPOINT &, unsigned long, RATIONAL, float, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStop@CTouchGestureMachine@@QEAAXK@Z
    void OnStop(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInertiaSetupCallback@CTouchGestureMachine@@QEAAJP6AXPEAXPEBUMANIPULATION_VELOCITY@@PEAM22PEA_N2@Z0@Z
    long RegisterInertiaSetupCallback(void ( *)(void *, MANIPULATION_VELOCITY const *, float *, float *, float *, bool *, float *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetTouchGestureMachine@CTouchGestureMachine@@QEAAXXZ
    void ResetTouchGestureMachine();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCrossSlideParameters@CTouchGestureMachine@@QEAAJMMMM@Z
    long SetCrossSlideParameters(float, float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHoldParameter@CTouchGestureMachine@@QEAAJW4HOLD_PARAMETER@@M@Z
    long SetHoldParameter(int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInertiaParameter@CTouchGestureMachine@@QEAAJW4ManipulationDimension@@M@Z
    long SetInertiaParameter(int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTranslationParameter@CTouchGestureMachine@@QEAAJW4TRANSLATION_PARAMETER@@M@Z
    long SetTranslationParameter(int, float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTouchGestureMachine@@QEAA@XZ
    ~CTouchGestureMachine();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchGesture@CTouchGestureMachine@@AEAAXUGESTURE_DATA@MT@@@Z
    void DispatchGesture(::MT::GESTURE_DATA);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchInertia@CTouchGestureMachine@@AEAAHXZ
    int DispatchInertia();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTouchComponents@CTouchGestureMachine@@AEAAJXZ
    long EnsureTouchComponents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FinishGestureStream@CTouchGestureMachine@@AEAAXUGESTURE_DATA@MT@@@Z
    void FinishGestureStream(::MT::GESTURE_DATA);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateInertia@CTouchGestureMachine@@AEAAHAEAUGESTURE_DATA@MT@@@Z
    int GenerateInertia(::MT::GESTURE_DATA &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateManipulationInertia@CTouchGestureMachine@@AEAAHAEAUGESTURE_DATA@MT@@M@Z
    int GenerateManipulationInertia(::MT::GESTURE_DATA &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleEndOfGesture@CTouchGestureMachine@@AEAAXUGESTURE_DATA@MT@@@Z
    void HandleEndOfGesture(::MT::GESTURE_DATA);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleInertiaForQuickPan@CTouchGestureMachine@@AEAAXUGESTURE_DATA@MT@@@Z
    void HandleInertiaForQuickPan(::MT::GESTURE_DATA);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartGestureStream@CTouchGestureMachine@@AEAAXUGESTURE_DATA@MT@@@Z
    void StartGestureStream(::MT::GESTURE_DATA);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddGestureOutput@CTouchGestureMachine@@AEAAXAEBUGESTURE_DATA@MT@@@Z
    void _AddGestureOutput(::MT::GESTURE_DATA const &);
};
