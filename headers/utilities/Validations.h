#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class Validations {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckFinite@Validations@@SAXM@Z
    static void CheckFinite(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckFiniteNonNegative@Validations@@SAXM@Z
    static void CheckFiniteNonNegative(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckFiniteOrNaN@Validations@@SAXM@Z
    static void CheckFiniteOrNaN(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInfinity@Validations@@SA_NM@Z
    static bool IsInfinity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNaN@Validations@@SA_NM@Z
    static bool IsNaN(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNaN@Validations@@SA_NN@Z
    static bool IsNaN(double);
};
