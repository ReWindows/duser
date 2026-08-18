#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 8 member(s).
class DuDCSurface {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@DuDCSurface@@SAJPEAUHDC__@@PEAPEAV1@@Z
    static long Build(HDC__*, DuDCSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@DuDCSurface@@SAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagDIBSECTION@@PEAPEAV1@@Z
    static long Build(HDC__*, HBITMAP__*, tagDIBSECTION *, DuDCSurface * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@DuDCSurface@@UEAAXXZ
    virtual void Destroy();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetType@DuDCSurface@@UEBA?AW4EType@DuSurface@@XZ
    virtual int GetType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Restore@DuDCSurface@@UEAAXPEAX@Z
    virtual void Restore(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Save@DuDCSurface@@UEAAPEAXXZ
    virtual void * Save();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIdentityTransform@DuDCSurface@@UEAAXXZ
    virtual void SetIdentityTransform();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorldTransform@DuDCSurface@@UEAAXPEBUtagXFORM@@@Z
    virtual void SetWorldTransform(tagXFORM const *);
};
