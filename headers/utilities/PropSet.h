#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 3 member(s).
class PropSet {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetData@PropSet@@QEBAJHPEAPEAX@Z
    long GetData(int, void * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveData@PropSet@@QEAAXHH@Z
    void RemoveData(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@PropSet@@QEAAJHPEAX@Z
    long SetData(int, void *);
};
