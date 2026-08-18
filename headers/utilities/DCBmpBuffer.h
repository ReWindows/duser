#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 13 member(s).
class DCBmpBuffer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@DCBmpBuffer@@UEAAJPEAVDuSurface@@PEBUtagRECT@@IEEHPEAPEAV2@@Z
    virtual long BeginDraw(DuSurface *, tagRECT const *, unsigned int, unsigned char, unsigned char, int, DuSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@DCBmpBuffer@@UEAAXHH@Z
    virtual void EndDraw(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Fill@DCBmpBuffer@@UEAAXKH@Z
    virtual void Fill(unsigned long, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@DCBmpBuffer@@UEBA?AW4EType@DuSurface@@XZ
    virtual int GetType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InUse@DCBmpBuffer@@UEBAHXZ
    virtual int InUse() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostEndDraw@DCBmpBuffer@@UEAAXXZ
    virtual void PostEndDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreEndDraw@DCBmpBuffer@@UEAAXH@Z
    virtual void PreEndDraw(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupClipRgn@DCBmpBuffer@@UEAAXXZ
    virtual void SetupClipRgn();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DCBmpBuffer@@UEAA@XZ
    virtual ~DCBmpBuffer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AllocBitmap@DCBmpBuffer@@IEAAHPEAUHDC__@@HH@Z
    int AllocBitmap(HDC__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeBitmap@DCBmpBuffer@@IEAAXXZ
    void FreeBitmap();
};
