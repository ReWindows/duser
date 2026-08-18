#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class OldRotateAnimation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@OldRotateAnimation@@QEAAJPEAUGANI_DESC@@@Z
    long Create(GANI_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetID@OldRotateAnimation@@UEBAIXZ
    virtual unsigned int GetID() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OldRotateAnimation@@UEAA@XZ
    virtual ~OldRotateAnimation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Action@OldRotateAnimation@@MEAAXPEAUGMA_ACTIONINFO@@@Z
    virtual void Action(GMA_ACTIONINFO *);
};
