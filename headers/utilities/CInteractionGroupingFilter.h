#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 5 member(s).
class CInteractionGroupingFilter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Flush@CInteractionGroupingFilter@@QEAAXXZ
    void Flush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Input@CInteractionGroupingFilter@@SAXPEAXPEBUINTERACTION_OUTPUT@@@Z
    static void Input(void *, INTERACTION_OUTPUT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@CInteractionGroupingFilter@@QEAAXXZ
    void Stop();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_OnInput@CInteractionGroupingFilter@@IEAAXAEBUINTERACTION_OUTPUT@@@Z
    void _OnInput(INTERACTION_OUTPUT const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SendOutput@CInteractionGroupingFilter@@IEAAXAEBUINTERACTION_OUTPUT@@@Z
    void _SendOutput(INTERACTION_OUTPUT const &);
};
