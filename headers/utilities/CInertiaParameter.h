#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 4 member(s).
class CInertiaParameter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInertiaParameter@@QEAA@XZ
    CInertiaParameter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DimensionFromParameter@CInertiaParameter@@SAHW4INERTIA_PARAMETER@@PEAW4ManipulationDimension@@@Z
    static int DimensionFromParameter(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CInertiaParameter@@QEBA?AW4State@1@XZ
    int GetState() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsParameterDeceleration@CInertiaParameter@@SAHW4INERTIA_PARAMETER@@PEAH@Z
    static int IsParameterDeceleration(int, int *);
};
