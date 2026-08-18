#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 15 member(s).
class DuAnimation {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiAddRef@DuAnimation@@QEAAJPEAUAddRefMsg@Animation@@@Z
    long ApiAddRef(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnAsyncDestroy@DuAnimation@@QEAAJPEAUOnAsyncDestroyMsg@Extension@@@Z
    long ApiOnAsyncDestroy(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnDestroySubject@DuAnimation@@QEAAJPEAUOnDestroySubjectMsg@Extension@@@Z
    long ApiOnDestroySubject(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnRemoveExisting@DuAnimation@@QEAAJPEAUOnRemoveExistingMsg@Extension@@@Z
    long ApiOnRemoveExisting(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiRelease@DuAnimation@@QEAAJPEAUReleaseMsg@Animation@@@Z
    long ApiRelease(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetTime@DuAnimation@@QEAAJPEAUSetTimeMsg@Animation@@@Z
    long ApiSetTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@DuAnimation@@QEAAXH@Z
    void Destroy(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostBuild@DuAnimation@@QEAAJPEAUConstructInfo@Gadget@DUser@@@Z
    long PostBuild(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DuAnimation@@UEAA@XZ
    virtual ~DuAnimation();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionProc@DuAnimation@@IEAAXPEAUGMA_ACTIONINFO@@@Z
    void ActionProc(GMA_ACTIONINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupChangeGadget@DuAnimation@@IEAAXXZ
    void CleanupChangeGadget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RawActionProc@DuAnimation@@KAXPEAUGMA_ACTIONINFO@@@Z
    static void RawActionProc(GMA_ACTIONINFO *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@DuAnimation@@IEAAXXZ
    void Release();
};
