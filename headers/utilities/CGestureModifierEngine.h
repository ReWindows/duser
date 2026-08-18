#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 4 member(s).
class CGestureModifierEngine {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCursorDown@CGestureModifierEngine@@QEAAEEUGESTURE_DATA@MT@@KAEAH@Z
    unsigned char OnCursorDown(unsigned char, ::MT::GESTURE_DATA, unsigned long, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCursorUp@CGestureModifierEngine@@QEAAEEUGESTURE_DATA@MT@@KAEAH@Z
    unsigned char OnCursorUp(unsigned char, ::MT::GESTURE_DATA, unsigned long, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPacket@CGestureModifierEngine@@QEAAEEUGESTURE_DATA@MT@@KAEAHAEAUtagPOINT@@@Z
    unsigned char OnPacket(unsigned char, ::MT::GESTURE_DATA, unsigned long, int &, tagPOINT &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecideGestureOrMouseSimulation@CGestureModifierEngine@@AEAAEEUGESTURE_DATA@MT@@@Z
    unsigned char DecideGestureOrMouseSimulation(unsigned char, ::MT::GESTURE_DATA);
};
