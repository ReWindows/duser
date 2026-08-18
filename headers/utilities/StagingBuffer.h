#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 10 member(s).
class StagingBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@StagingBuffer@@QEAAJIIPEAPEAUHDC__@@@Z
    long BeginDraw(unsigned int, unsigned int, HDC__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cleanup@StagingBuffer@@QEAAXXZ
    void Cleanup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@StagingBuffer@@QEAAXPEAUIDXGISurface1@@PEBUtagRECT@@@Z
    void EndDraw(IDXGISurface1*, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSize@StagingBuffer@@QEAAJII@Z
    long EnsureSize(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OfferResources@StagingBuffer@@QEAAXXZ
    void OfferResources();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StagingBuffer@@QEAA@XZ
    StagingBuffer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyGdiObjects@StagingBuffer@@AEAAXXZ
    void DestroyGdiObjects();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroySurface@StagingBuffer@@AEAAXXZ
    void DestroySurface();
};
