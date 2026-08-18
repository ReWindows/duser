#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class Thread {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@Thread@@SAJHPEAPEAV1@@Z
    static long Build(int, Thread * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Thread@@QEAA@XZ
    Thread();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Thread@@QEAA@XZ
    ~Thread();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnAllMemoryNL@Thread@@IEAAXXZ
    void ReturnAllMemoryNL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwContextFinalUnlockProc@Thread@@KAXPEAVBaseObject@@PEAX@Z
    static void xwContextFinalUnlockProc(BaseObject *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDestroySubThreads@Thread@@IEAAXXZ
    void xwDestroySubThreads();
};
