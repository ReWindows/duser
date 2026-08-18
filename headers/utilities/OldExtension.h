#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 10 member(s).
class OldExtension {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@OldExtension@@QEAAJPEAUHGADGET__@@PEBU_GUID@@PEAHI@Z
    long Create(HGADGET__*, _GUID const *, int *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteHandle@OldExtension@@QEAAXXZ
    void DeleteHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@OldExtension@@QEAAXXZ
    void Destroy();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAsyncDestroy@OldExtension@@MEAAXXZ
    virtual void OnAsyncDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroyListener@OldExtension@@MEAAXXZ
    virtual void OnDestroyListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroySubject@OldExtension@@MEAAXXZ
    virtual void OnDestroySubject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveExisting@OldExtension@@MEAAXXZ
    virtual void OnRemoveExisting();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListenProc@OldExtension@@CAJPEAUHGADGET__@@PEAXPEAUEventMsg@@@Z
    static long ListenProc(HGADGET__*, void *, EventMsg *);
};
