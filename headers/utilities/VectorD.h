#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 2 member(s).
class VectorD {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAbsoluteVector@VectorD@@SA?AU1@NAEBU1@@Z
    static VectorD GetAbsoluteVector(double, VectorD const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleValue@VectorD@@SANNN@Z
    static double ScaleValue(double, double);
};
