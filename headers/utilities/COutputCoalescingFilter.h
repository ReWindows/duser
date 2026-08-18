#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 3 member(s).
class COutputCoalescingFilter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@COutputCoalescingFilter@@QEAAXXZ
    void Flush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Input@COutputCoalescingFilter@@SAXPEAXPEBUINTERACTION_OUTPUT@@@Z
    static void Input(void *, INTERACTION_OUTPUT const *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInput@COutputCoalescingFilter@@IEAAXAEBUINTERACTION_OUTPUT@@@Z
    void _OnInput(INTERACTION_OUTPUT const &);
};
