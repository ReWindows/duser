#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 13 member(s).
class GpBmpBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@GpBmpBuffer@@UEAAJPEAVDuSurface@@PEBUtagRECT@@IEEHPEAPEAV2@@Z
    virtual long BeginDraw(DuSurface *, tagRECT const *, unsigned int, unsigned char, unsigned char, int, DuSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@GpBmpBuffer@@UEAAXHH@Z
    virtual void EndDraw(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Fill@GpBmpBuffer@@UEAAXKH@Z
    virtual void Fill(unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@GpBmpBuffer@@UEBA?AW4EType@DuSurface@@XZ
    virtual int GetType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InUse@GpBmpBuffer@@UEBAHXZ
    virtual int InUse() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostEndDraw@GpBmpBuffer@@UEAAXXZ
    virtual void PostEndDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreEndDraw@GpBmpBuffer@@UEAAXH@Z
    virtual void PreEndDraw(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupClipRgn@GpBmpBuffer@@UEAAXXZ
    virtual void SetupClipRgn();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GpBmpBuffer@@UEAA@XZ
    virtual ~GpBmpBuffer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocBitmap@GpBmpBuffer@@IEAAHPEAVGraphics@Gdiplus@@HH@Z
    int AllocBitmap(::Gdiplus::Graphics *, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeBitmap@GpBmpBuffer@@IEAAXXZ
    void FreeBitmap();
};
