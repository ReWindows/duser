#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class BaseObject {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStartDelete@BaseObject@@UEBAHXZ
    virtual int IsStartDelete() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDeleteHandle@BaseObject@@UEAAHXZ
    virtual int xwDeleteHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwUnlock@BaseObject@@QEAAHXZ
    int xwUnlock();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDestroy@BaseObject@@MEAAXXZ
    virtual void xwDestroy();
};
