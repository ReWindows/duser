#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class CMousePointerLogic {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDown@CMousePointerLogic@@QEAAJKUtagPOINT@@K@Z
    long OnDown(unsigned long, tagPOINT, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMove@CMousePointerLogic@@QEAAJKUtagPOINT@@KURATIONAL@@@Z
    long OnMove(unsigned long, tagPOINT, unsigned long, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUp@CMousePointerLogic@@QEAAJKUtagPOINT@@KURATIONAL@@@Z
    long OnUp(unsigned long, tagPOINT, unsigned long, RATIONAL);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStrokeConfiguration@CMousePointerLogic@@QEAAJW4StrokeConfiguration@1@@Z
    long SetStrokeConfiguration(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsDrag@CMousePointerLogic@@AEBAHUtagPOINT@@URATIONAL@@@Z
    int _IsDrag(tagPOINT, RATIONAL) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetState@CMousePointerLogic@@AEAAXW4State@1@@Z
    void _SetState(int);
};
