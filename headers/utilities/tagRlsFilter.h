#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 3 member(s).
namespace Prediction {
class tagRlsFilter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Filter@tagRlsFilter@Prediction@@QEAA?AVCFixPred@2@V32@0PEAH@Z
    WindissectOpaque Filter(WindissectOpaque, WindissectOpaque, int *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0tagRlsFilter@Prediction@@QEAA@XZ
    tagRlsFilter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?vInit@tagRlsFilter@Prediction@@QEAAXVCFixPred@2@000@Z
    void vInit(WindissectOpaque, WindissectOpaque, WindissectOpaque, WindissectOpaque);
};
} // namespace Prediction
