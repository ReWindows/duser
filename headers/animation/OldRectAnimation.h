#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class OldRectAnimation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@OldRectAnimation@@QEAAJPEAUGANI_DESC@@@Z
    long Create(GANI_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetID@OldRectAnimation@@UEBAIXZ
    virtual unsigned int GetID() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OldRectAnimation@@UEAA@XZ
    virtual ~OldRectAnimation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Action@OldRectAnimation@@MEAAXPEAUGMA_ACTIONINFO@@@Z
    virtual void Action(GMA_ACTIONINFO *);
};
