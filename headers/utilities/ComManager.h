#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 4 member(s).
class ComManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ComManager@@QEAA@XZ
    ComManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@ComManager@@QEAAJAEBU_GUID@@PEAUIUnknown@@0PEAPEAX@Z
    long CreateInstance(_GUID const &, IUnknown *, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@ComManager@@QEAAHI@Z
    int Init(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ComManager@@QEAA@XZ
    ~ComManager();
};
