#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 3 member(s).
class DoubleUtil {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreClose@DoubleUtil@@SA_NNN@Z
    static bool AreClose(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LessThanOrClose@DoubleUtil@@SA_NNN@Z
    static bool LessThanOrClose(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Limit@DoubleUtil@@SANNNN@Z
    static double Limit(double, double, double);
};
