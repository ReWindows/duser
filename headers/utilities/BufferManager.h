#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 5 member(s).
class BufferManager {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BufferManager@@QEAA@XZ
    BufferManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@BufferManager@@QEAAXXZ
    void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCachedBuffer@BufferManager@@QEAAXPEAVBmpBuffer@@@Z
    void ReleaseCachedBuffer(BmpBuffer *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BufferManager@@QEAA@XZ
    ~BufferManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllTrxBuffers@BufferManager@@IEAAXXZ
    void RemoveAllTrxBuffers();
};
