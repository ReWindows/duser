#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 12 member(s).
class OldAnimation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCallback@OldAnimation@@UEAAXPEAUIAnimationCallback@@@Z
    virtual void SetCallback(IAnimationCallback *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFunction@OldAnimation@@UEAAXPEAUIInterpolation@@@Z
    virtual void SetFunction(IInterpolation *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTime@OldAnimation@@UEAAXW4ETime@IAnimation@@@Z
    virtual void SetTime(int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@OldAnimation@@IEAAJPEBU_GUID@@PEAHPEAUGANI_DESC@@@Z
    long Create(_GUID const *, int *, GANI_DESC *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@OldAnimation@@IEAAXH@Z
    void Destroy(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterface@OldAnimation@@KAJPEAUHGADGET__@@HAEBU_GUID@@PEAPEAX@Z
    static long GetInterface(HGADGET__*, int, _GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAsyncDestroy@OldAnimation@@MEAAXXZ
    virtual void OnAsyncDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnComplete@OldAnimation@@MEAAXXZ
    virtual void OnComplete();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroyListener@OldAnimation@@MEAAXXZ
    virtual void OnDestroyListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroySubject@OldAnimation@@MEAAXXZ
    virtual void OnDestroySubject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRemoveExisting@OldAnimation@@MEAAXXZ
    virtual void OnRemoveExisting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RawActionProc@OldAnimation@@KAXPEAUGMA_ACTIONINFO@@@Z
    static void RawActionProc(GMA_ACTIONINFO *);
};
