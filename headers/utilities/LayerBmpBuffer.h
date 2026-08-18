#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 11 member(s).
class LayerBmpBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@LayerBmpBuffer@@UEAAJPEAVDuSurface@@PEBUtagRECT@@IEEHPEAPEAV2@@Z
    virtual long BeginDraw(DuSurface *, tagRECT const *, unsigned int, unsigned char, unsigned char, int, DuSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@LayerBmpBuffer@@UEAAXHH@Z
    virtual void EndDraw(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Fill@LayerBmpBuffer@@UEAAXKH@Z
    virtual void Fill(unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@LayerBmpBuffer@@UEBA?AW4EType@DuSurface@@XZ
    virtual int GetType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InUse@LayerBmpBuffer@@UEBAHXZ
    virtual int InUse() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostEndDraw@LayerBmpBuffer@@UEAAXXZ
    virtual void PostEndDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreEndDraw@LayerBmpBuffer@@UEAAXH@Z
    virtual void PreEndDraw(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupClipRgn@LayerBmpBuffer@@UEAAXXZ
    virtual void SetupClipRgn();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LayerBmpBuffer@@UEAA@XZ
    virtual ~LayerBmpBuffer();
};
