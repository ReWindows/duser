#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 4 member(s).
class AtomSet {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddRefAtom@AtomSet@@QEAAJPEBU_GUID@@W4PropType@@PEAH@Z
    long AddRefAtom(_GUID const *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAtom@AtomSet@@QEAAJPEBU_GUID@@W4PropType@@@Z
    long ReleaseAtom(_GUID const *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AtomSet@@QEAA@XZ
    ~AtomSet();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAtomA@AtomSet@@IEBAPEAUGuidAtom@1@PEBU_GUID@@W4PropType@@PEAPEAU21@@Z
    WindissectOpaque * FindAtomA(_GUID const *, int, WindissectOpaque * *) const;
};
