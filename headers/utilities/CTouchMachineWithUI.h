#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 8 member(s).
class CTouchMachineWithUI {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTouchMachineWithUI@@QEAA@PEAVCInteractionEngineConfiguration@@PEBVCTouchLogicParameterizer@@PEAVCTapsMachine@@@Z
    CTouchMachineWithUI(CInteractionEngineConfiguration *, CTouchLogicParameterizer const *, CTapsMachine *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DismissPHFeedback@CTouchMachineWithUI@@QEAAXXZ
    void DismissPHFeedback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCursorDown@CTouchMachineWithUI@@UEAAJUtagPOINT@@KURATIONAL@@@Z
    virtual long OnCursorDown(tagPOINT, unsigned long, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCursorUp@CTouchMachineWithUI@@UEAAJUtagPOINT@@KURATIONAL@@@Z
    virtual long OnCursorUp(tagPOINT, unsigned long, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPacket@CTouchMachineWithUI@@UEAAJUtagPOINT@@KURATIONAL@@@Z
    virtual long OnPacket(tagPOINT, unsigned long, RATIONAL);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchDown@CTouchMachineWithUI@@MEAAXUtagPOINT@@KURATIONAL@@@Z
    virtual void TouchDown(tagPOINT, unsigned long, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchMove@CTouchMachineWithUI@@MEAAXUtagPOINT@@KURATIONAL@@@Z
    virtual void TouchMove(tagPOINT, unsigned long, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchUp@CTouchMachineWithUI@@MEAAXUtagPOINT@@KURATIONAL@@@Z
    virtual void TouchUp(tagPOINT, unsigned long, RATIONAL);
};
