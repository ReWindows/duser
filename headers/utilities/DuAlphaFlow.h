#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 8 member(s).
class DuAlphaFlow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetKeyFrame@DuAlphaFlow@@QEAAJPEAUGetKeyFrameMsg@Flow@@@Z
    long ApiGetKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetPRID@DuAlphaFlow@@QEAAJPEAUGetPRIDMsg@Flow@@@Z
    long ApiGetPRID(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnAction@DuAlphaFlow@@QEAAJPEAUOnActionMsg@Flow@@@Z
    long ApiOnAction(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnReset@DuAlphaFlow@@QEAAJPEAUOnResetMsg@Flow@@@Z
    long ApiOnReset(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetKeyFrame@DuAlphaFlow@@QEAAJPEAUSetKeyFrameMsg@Flow@@@Z
    long ApiSetKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitClass@DuAlphaFlow@@SAJXZ
    static long InitClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostBuild@DuAlphaFlow@@QEAAJPEAUConstructInfo@Gadget@DUser@@@Z
    long PostBuild(WindissectOpaque *);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVisualAlpha@DuAlphaFlow@@IEAAXPEAVVisual@@M@Z
    void SetVisualAlpha(Visual *, float);
};
