#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 3 member(s).
class DuInterpolation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiAddRef@DuInterpolation@@QEAAJPEAUAddRefMsg@Interpolation@@@Z
    long ApiAddRef(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiCompute@DuInterpolation@@QEAAJPEAUComputeMsg@Interpolation@@@Z
    long ApiCompute(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiRelease@DuInterpolation@@QEAAJPEAUReleaseMsg@Interpolation@@@Z
    long ApiRelease(WindissectOpaque *);
};
