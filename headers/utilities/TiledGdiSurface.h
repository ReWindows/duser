#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 5 member(s).
class TiledGdiSurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyTile@TiledGdiSurface@@QEAAJPEAUID3D11Device@@PEAUIDCompositionSurface@@PEBUtagRECT@@2@Z
    long CopyTile(ID3D11Device *, IDCompositionSurface *, tagRECT const *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@TiledGdiSurface@@SAJIIPEAPEAV1@@Z
    static long Create(unsigned int, unsigned int, TiledGdiSurface * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TiledGdiSurface@@QEAA@XZ
    ~TiledGdiSurface();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@TiledGdiSurface@@AEAAJII@Z
    long Initialize(unsigned int, unsigned int);
};
