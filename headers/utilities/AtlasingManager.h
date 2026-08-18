#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class AtlasingManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireRegion@AtlasingManager@@QEAAJPEAUtagSIZE@@HPEAUIDCompositionDevice@@PEAUHGADGET__@@PEAPEAUIDCompositionSurface@@PEAPEAURegionData@@@Z
    long AcquireRegion(tagSIZE *, int, IDCompositionDevice *, HGADGET__*, IDCompositionSurface * *, RegionData * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AtlasingManager@@QEAA@XZ
    AtlasingManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@AtlasingManager@@QEAAJPEAUIDCompositionDevice@@I@Z
    long Commit(IDCompositionDevice *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseRegion@AtlasingManager@@QEAAJPEAURegionData@@@Z
    long ReleaseRegion(RegionData *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StoreAtlasHint@AtlasingManager@@QEAAXPEBUtagSIZE@@PEBUtagRECT@@1111@Z
    void StoreAtlasHint(tagSIZE const *, tagRECT const *, tagRECT const *, tagRECT const *, tagRECT const *, tagRECT const *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteRegionSurface@AtlasingManager@@AEAAJPEAPEAURegionSurface@@@Z
    long DeleteRegionSurface(RegionSurface * *);
};
