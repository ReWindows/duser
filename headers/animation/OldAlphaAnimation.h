#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 7 member(s).
class OldAlphaAnimation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@OldAlphaAnimation@@QEAAJPEAUGANI_DESC@@@Z
    long Create(GANI_DESC *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetID@OldAlphaAnimation@@UEBAIXZ
    virtual unsigned int GetID() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OldAlphaAnimation@@UEAA@XZ
    virtual ~OldAlphaAnimation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Action@OldAlphaAnimation@@MEAAXPEAUGMA_ACTIONINFO@@@Z
    virtual void Action(GMA_ACTIONINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnComplete@OldAlphaAnimation@@MEAAXXZ
    virtual void OnComplete();
};
