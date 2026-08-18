#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 4 member(s).
class CManipulationSequenceGenerator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Begin@CManipulationSequenceGenerator@@QEAAJMMAEBUMANIPULATION_TRANSFORM@@AEBUMANIPULATION_VELOCITY@@@Z
    long Begin(float, float, MANIPULATION_TRANSFORM const &, MANIPULATION_VELOCITY const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?End@CManipulationSequenceGenerator@@QEAAJXZ
    long End();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@CManipulationSequenceGenerator@@QEAAJAEBUMANIPULATION_TRANSFORM@@AEBUMANIPULATION_VELOCITY@@@Z
    long Update(MANIPULATION_TRANSFORM const &, MANIPULATION_VELOCITY const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PrepareOutput@CManipulationSequenceGenerator@@AEBAXHHAEBUMANIPULATION_TRANSFORM@@AEBUMANIPULATION_VELOCITY@@AEAUINTERACTION_OUTPUT@@@Z
    void _PrepareOutput(int, int, MANIPULATION_TRANSFORM const &, MANIPULATION_VELOCITY const &, INTERACTION_OUTPUT &) const;
};
