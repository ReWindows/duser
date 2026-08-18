#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 8 member(s).
class DuExtension {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnAsyncDestroy@DuExtension@@QEAAJPEAUOnAsyncDestroyMsg@Extension@@@Z
    long ApiOnAsyncDestroy(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnDestroySubject@DuExtension@@QEAAJPEAUOnDestroySubjectMsg@Extension@@@Z
    long ApiOnDestroySubject(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnEvent@DuExtension@@QEAAJPEAUEventMsg@@@Z
    long ApiOnEvent(EventMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnRemoveExisting@DuExtension@@QEAAJPEAUOnRemoveExistingMsg@Extension@@@Z
    long ApiOnRemoveExisting(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DuExtension@@QEAAJPEAVVisual@@HI@Z
    long Create(Visual *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitClass@DuExtension@@SAJXZ
    static long InitClass();
};
