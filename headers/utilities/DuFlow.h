#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 7 member(s).
class DuFlow {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiAddRef@DuFlow@@QEAAJPEAUAddRefMsg@Flow@@@Z
    long ApiAddRef(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetKeyFrame@DuFlow@@QEAAJPEAUGetKeyFrameMsg@Flow@@@Z
    long ApiGetKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetPRID@DuFlow@@QEAAJPEAUGetPRIDMsg@Flow@@@Z
    long ApiGetPRID(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnAction@DuFlow@@QEAAJPEAUOnActionMsg@Flow@@@Z
    long ApiOnAction(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnReset@DuFlow@@QEAAJPEAUOnResetMsg@Flow@@@Z
    long ApiOnReset(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiRelease@DuFlow@@QEAAJPEAUReleaseMsg@Flow@@@Z
    long ApiRelease(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetKeyFrame@DuFlow@@QEAAJPEAUSetKeyFrameMsg@Flow@@@Z
    long ApiSetKeyFrame(WindissectOpaque *);
};
