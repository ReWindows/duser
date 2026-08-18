#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 11 member(s).
class BufferedPaintBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@BufferedPaintBuffer@@UEAAJPEAVDuSurface@@PEBUtagRECT@@IEEHPEAPEAV2@@Z
    virtual long BeginDraw(DuSurface *, tagRECT const *, unsigned int, unsigned char, unsigned char, int, DuSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@BufferedPaintBuffer@@UEAAXHH@Z
    virtual void EndDraw(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Fill@BufferedPaintBuffer@@UEAAXKH@Z
    virtual void Fill(unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@BufferedPaintBuffer@@UEBA?AW4EType@DuSurface@@XZ
    virtual int GetType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InUse@BufferedPaintBuffer@@UEBAHXZ
    virtual int InUse() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostEndDraw@BufferedPaintBuffer@@UEAAXXZ
    virtual void PostEndDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreEndDraw@BufferedPaintBuffer@@UEAAXH@Z
    virtual void PreEndDraw(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupClipRgn@BufferedPaintBuffer@@UEAAXXZ
    virtual void SetupClipRgn();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BufferedPaintBuffer@@UEAA@XZ
    virtual ~BufferedPaintBuffer();
};
