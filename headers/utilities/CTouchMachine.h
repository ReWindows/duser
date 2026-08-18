#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 8 member(s).
class CTouchMachine {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTouchMachine@@QEAA@PEAVCInteractionEngineConfiguration@@PEBVCTouchLogicParameterizer@@@Z
    CTouchMachine(CInteractionEngineConfiguration *, CTouchLogicParameterizer const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCursorDown@CTouchMachine@@UEAAJUtagPOINT@@KURATIONAL@@@Z
    virtual long OnCursorDown(tagPOINT, unsigned long, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCursorUp@CTouchMachine@@UEAAJUtagPOINT@@KURATIONAL@@@Z
    virtual long OnCursorUp(tagPOINT, unsigned long, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPacket@CTouchMachine@@UEAAJUtagPOINT@@KURATIONAL@@@Z
    virtual long OnPacket(tagPOINT, unsigned long, RATIONAL);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchDown@CTouchMachine@@MEAAXUtagPOINT@@KURATIONAL@@@Z
    virtual void TouchDown(tagPOINT, unsigned long, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchMove@CTouchMachine@@MEAAXUtagPOINT@@KURATIONAL@@@Z
    virtual void TouchMove(tagPOINT, unsigned long, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchUp@CTouchMachine@@MEAAXUtagPOINT@@KURATIONAL@@@Z
    virtual void TouchUp(tagPOINT, unsigned long, RATIONAL);
};
