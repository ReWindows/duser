#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 3 member(s).
class DxManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@DxManager@@QEAAJPEAU_GUID@@@Z
    long Init(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitDxTx@DxManager@@QEAAJXZ
    long InitDxTx();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninit@DxManager@@QEAAXXZ
    void Uninit();
};
