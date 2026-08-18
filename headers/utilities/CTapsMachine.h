#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 5 member(s).
class CTapsMachine {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeToIdle@CTapsMachine@@QEBAKXZ
    unsigned long GetTimeToIdle() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCursorDown@CTapsMachine@@QEAAXUtagPOINT@@KURATIONAL@@PEAH@Z
    void OnCursorDown(tagPOINT, unsigned long, RATIONAL, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCursorUp@CTapsMachine@@QEAAXUtagPOINT@@KURATIONAL@@@Z
    void OnCursorUp(tagPOINT, unsigned long, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPacket@CTapsMachine@@QEAAXUtagPOINT@@URATIONAL@@@Z
    void OnPacket(tagPOINT, RATIONAL);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDoubleTap@CTapsMachine@@IEAAHUtagPOINT@@KURATIONAL@@@Z
    int IsDoubleTap(tagPOINT, unsigned long, RATIONAL);
};
