#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 7 member(s).
class DuRotateFlow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetKeyFrame@DuRotateFlow@@QEAAJPEAUGetKeyFrameMsg@Flow@@@Z
    long ApiGetKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetPRID@DuRotateFlow@@QEAAJPEAUGetPRIDMsg@Flow@@@Z
    long ApiGetPRID(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnAction@DuRotateFlow@@QEAAJPEAUOnActionMsg@Flow@@@Z
    long ApiOnAction(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnReset@DuRotateFlow@@QEAAJPEAUOnResetMsg@Flow@@@Z
    long ApiOnReset(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetKeyFrame@DuRotateFlow@@QEAAJPEAUSetKeyFrameMsg@Flow@@@Z
    long ApiSetKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitClass@DuRotateFlow@@SAJXZ
    static long InitClass();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeAngles@DuRotateFlow@@IEAAXXZ
    void ComputeAngles();
};
