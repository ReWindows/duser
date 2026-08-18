#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 7 member(s).
class DuScaleFlow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetKeyFrame@DuScaleFlow@@QEAAJPEAUGetKeyFrameMsg@Flow@@@Z
    long ApiGetKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetPRID@DuScaleFlow@@QEAAJPEAUGetPRIDMsg@Flow@@@Z
    long ApiGetPRID(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnAction@DuScaleFlow@@QEAAJPEAUOnActionMsg@Flow@@@Z
    long ApiOnAction(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnReset@DuScaleFlow@@QEAAJPEAUOnResetMsg@Flow@@@Z
    long ApiOnReset(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetKeyFrame@DuScaleFlow@@QEAAJPEAUSetKeyFrameMsg@Flow@@@Z
    long ApiSetKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitClass@DuScaleFlow@@SAJXZ
    static long InitClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostBuild@DuScaleFlow@@QEAAJPEAUConstructInfo@Gadget@DUser@@@Z
    long PostBuild(WindissectOpaque *);
};
