#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class CTouchLogic {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetState@CTouchLogic@@QEAAXXZ
    void ResetState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchDown@CTouchLogic@@QEAAXUtagPOINT@@K@Z
    void TouchDown(tagPOINT, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchMove@CTouchLogic@@QEAAXUtagPOINT@@KURATIONAL@@@Z
    void TouchMove(tagPOINT, unsigned long, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchUp@CTouchLogic@@QEAAXUtagPOINT@@K@Z
    void TouchUp(tagPOINT, unsigned long);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragSystemEvent@CTouchLogic@@IEAAEXZ
    unsigned char GetDragSystemEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchMove_Hold@CTouchLogic@@IEAAXUtagPOINT@@KURATIONAL@@@Z
    void TouchMove_Hold(tagPOINT, unsigned long, RATIONAL);
};
