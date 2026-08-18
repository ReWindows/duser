#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 2 member(s).
class CWmGesture {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionOutputFromGestureData@CWmGesture@@QEAAJAEBUGESTURE_DATA@MT@@AEAUINTERACTION_OUTPUT@@H@Z
    long InteractionOutputFromGestureData(::MT::GESTURE_DATA const &, INTERACTION_OUTPUT &, int);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGutterAdjustedPoint@CWmGesture@@AEAA?AUtagPOINT@@U2@@Z
    tagPOINT GetGutterAdjustedPoint(tagPOINT);
};
