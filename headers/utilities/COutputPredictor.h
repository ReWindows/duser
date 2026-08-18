#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 4 member(s).
class COutputPredictor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePrediction@COutputPredictor@@QEBAXIIPEAUMANIPULATION_TRANSFORM@@@Z
    void ComputePrediction(unsigned int, unsigned int, MANIPULATION_TRANSFORM *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStateInput@COutputPredictor@@QEAAXIAEBUMANIPULATION_VELOCITY@@@Z
    void UpdateStateInput(unsigned int, MANIPULATION_VELOCITY const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputeDampeningFactor@COutputPredictor@@AEBAMII@Z
    float _ComputeDampeningFactor(unsigned int, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_ComputePredictionOffset@COutputPredictor@@AEBAMIMM@Z
    float _ComputePredictionOffset(unsigned int, float, float) const;
};
