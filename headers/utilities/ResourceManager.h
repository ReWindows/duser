#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 13 member(s).
class ResourceManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@ResourceManager@@SAJXZ
    static long Create();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitComponentNL@ResourceManager@@SAJI@Z
    static long InitComponentNL(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitContextNL@ResourceManager@@SAJPEAUtagINITGADGET@@HPEAPEAVContext@@@Z
    static long InitContextNL(tagINITGADGET *, int, Context * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCreateCompatibleBitmap@ResourceManager@@SAPEAUHBITMAP__@@PEAUHDC__@@HH@Z
    static HBITMAP__* RequestCreateCompatibleBitmap(HDC__*, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitAllComponentsNL@ResourceManager@@SAXXZ
    static void UninitAllComponentsNL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDestroy@ResourceManager@@SAXXZ
    static void xwDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwNotifyThreadDestroyNL@ResourceManager@@SAXXZ
    static void xwNotifyThreadDestroyNL();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitSharedThread@ResourceManager@@KAJXZ
    static long InitSharedThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSharedThread@ResourceManager@@KAXXZ
    static void ResetSharedThread();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SharedEventProc@ResourceManager@@KAJPEAUHGADGET__@@PEAXPEAUEventMsg@@@Z
    static long SharedEventProc(HGADGET__*, void *, EventMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SharedThreadProc@ResourceManager@@KAIPEAX@Z
    static unsigned int SharedThreadProc(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitSharedThread@ResourceManager@@KAXH@Z
    static void UninitSharedThread(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDoThreadDestroyNL@ResourceManager@@KAXPEAVThread@@@Z
    static void xwDoThreadDestroyNL(Thread *);
};
