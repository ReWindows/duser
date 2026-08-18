#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class OldScaleAnimation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@OldScaleAnimation@@QEAAJPEAUGANI_DESC@@@Z
    long Create(GANI_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetID@OldScaleAnimation@@UEBAIXZ
    virtual unsigned int GetID() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OldScaleAnimation@@UEAA@XZ
    virtual ~OldScaleAnimation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Action@OldScaleAnimation@@MEAAXPEAUGMA_ACTIONINFO@@@Z
    virtual void Action(GMA_ACTIONINFO *);
};
