#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 7 member(s).
class DuGpSurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@DuGpSurface@@SAJPEAVGraphics@Gdiplus@@PEAPEAV1@@Z
    static long Build(::Gdiplus::Graphics *, DuGpSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@DuGpSurface@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@DuGpSurface@@UEBA?AW4EType@DuSurface@@XZ
    virtual int GetType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Restore@DuGpSurface@@UEAAXPEAX@Z
    virtual void Restore(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@DuGpSurface@@UEAAPEAXXZ
    virtual void * Save();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIdentityTransform@DuGpSurface@@UEAAXXZ
    virtual void SetIdentityTransform();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorldTransform@DuGpSurface@@UEAAXPEBUtagXFORM@@@Z
    virtual void SetWorldTransform(tagXFORM const *);
};
