#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class CFlickMachine {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFlickMachine@@QEAA@XZ
    CFlickMachine();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanBeFlick@CFlickMachine@@QEAAHXZ
    int CanBeFlick();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CFlickMachine@@QEAAJXZ
    long Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCursorDown@CFlickMachine@@QEAAXUtagPOINT@@KURATIONAL@@@Z
    void OnCursorDown(tagPOINT, unsigned long, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostCurrentResult@CFlickMachine@@QEAAJPEAPEAUFLICK_RESULT@@@Z
    long PostCurrentResult(FLICK_RESULT * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CFlickMachine@@QEAA@XZ
    ~CFlickMachine();
};
