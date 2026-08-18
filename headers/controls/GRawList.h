#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 2 member(s).
class GRawList {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSize@GRawList@@QEBAHXZ
    int GetSize() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlinkHead@GRawList@@QEAAPEAUListNode@@XZ
    ListNode * UnlinkHead();
};
