#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 7 member(s).
class ObjectCache {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@ObjectCache@@QEAAXXZ
    void Destroy();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ObjectCache@@QEAA@XZ
    ObjectCache();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ObjectCache@@UEAA@XZ
    virtual ~ObjectCache();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Pop@ObjectCache@@IEAAPEAXXZ
    void * Pop();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Push@ObjectCache@@IEAAXPEAX@Z
    void Push(void *);
};
