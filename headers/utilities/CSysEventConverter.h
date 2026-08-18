#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 23 member(s).
class CSysEventConverter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Process@CSysEventConverter@@QEAAJIUtagPOINT@@M@Z
    long Process(unsigned int, tagPOINT, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CSysEventConverter@@QEAAJUtagPOINT@@H@Z
    long Stop(tagPOINT, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_AddOutput@CSysEventConverter@@AEAAJUtagPOINT@@W4INTERACTION_TYPE@@W4INTERACTION_MARKER@@M@Z
    long _AddOutput(tagPOINT, int, int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GlobalBegin@CSysEventConverter@@AEAAJUtagPOINT@@@Z
    long _GlobalBegin(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GlobalEnd@CSysEventConverter@@AEAAJUtagPOINT@@@Z
    long _GlobalEnd(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDownBegin@CSysEventConverter@@AEAAJUtagPOINT@@@Z
    long _OnDownBegin(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDownEnd@CSysEventConverter@@AEAAJUtagPOINT@@H@Z
    long _OnDownEnd(tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDragBegin@CSysEventConverter@@AEAAJHUtagPOINT@@@Z
    long _OnDragBegin(int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDragBeginEnd@CSysEventConverter@@AEAAJHUtagPOINT@@@Z
    long _OnDragBeginEnd(int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDragEnd@CSysEventConverter@@AEAAJUtagPOINT@@H@Z
    long _OnDragEnd(tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnDragMove@CSysEventConverter@@AEAAJUtagPOINT@@@Z
    long _OnDragMove(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnFlick@CSysEventConverter@@AEAAJUtagPOINT@@M@Z
    long _OnFlick(tagPOINT, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnHoldAnimationBegin@CSysEventConverter@@AEAAJUtagPOINT@@@Z
    long _OnHoldAnimationBegin(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnHoldAnimationEnd@CSysEventConverter@@AEAAJUtagPOINT@@H@Z
    long _OnHoldAnimationEnd(tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnHoldEnter@CSysEventConverter@@AEAAJUtagPOINT@@@Z
    long _OnHoldEnter(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnHoldLeave@CSysEventConverter@@AEAAJUtagPOINT@@H@Z
    long _OnHoldLeave(tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnHoverEnter@CSysEventConverter@@AEAAJUtagPOINT@@@Z
    long _OnHoverEnter(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnHoverLeave@CSysEventConverter@@AEAAJUtagPOINT@@H@Z
    long _OnHoverLeave(tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInAirEnter@CSysEventConverter@@AEAAJUtagPOINT@@@Z
    long _OnInAirEnter(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInAirLeave@CSysEventConverter@@AEAAJUtagPOINT@@H@Z
    long _OnInAirLeave(tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInAirMove@CSysEventConverter@@AEAAJUtagPOINT@@@Z
    long _OnInAirMove(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnTap@CSysEventConverter@@AEAAJIUtagPOINT@@@Z
    long _OnTap(unsigned int, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopCurrentInteraction@CSysEventConverter@@AEAAJUtagPOINT@@H@Z
    long _StopCurrentInteraction(tagPOINT, int);
};
