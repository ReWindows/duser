#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 4 member(s).
class CExternalSettings {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CExternalSettings@@QEAA@XZ
    CExternalSettings();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParameter@CExternalSettings@@QEBAJW4INTERACTION_PARAMETER@@PEAI@Z
    long GetParameter(int, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParameter@CExternalSettings@@QEAAJW4INTERACTION_PARAMETER@@I@Z
    long SetParameter(int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivParameter@CExternalSettings@@QEAAJW4PrivateParameter@@I@Z
    long SetPrivParameter(int, unsigned int);
};
