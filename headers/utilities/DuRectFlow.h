#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 7 member(s).
class DuRectFlow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetKeyFrame@DuRectFlow@@QEAAJPEAUGetKeyFrameMsg@Flow@@@Z
    long ApiGetKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetPRID@DuRectFlow@@QEAAJPEAUGetPRIDMsg@Flow@@@Z
    long ApiGetPRID(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnAction@DuRectFlow@@QEAAJPEAUOnActionMsg@Flow@@@Z
    long ApiOnAction(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnReset@DuRectFlow@@QEAAJPEAUOnResetMsg@Flow@@@Z
    long ApiOnReset(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetKeyFrame@DuRectFlow@@QEAAJPEAUSetKeyFrameMsg@Flow@@@Z
    long ApiSetKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitClass@DuRectFlow@@SAJXZ
    static long InitClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostBuild@DuRectFlow@@QEAAJPEAUConstructInfo@Gadget@DUser@@@Z
    long PostBuild(WindissectOpaque *);
};
