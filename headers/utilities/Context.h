#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 13 member(s).
class Context {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@Context@@SAJPEAUtagINITGADGET@@PEAPEAV1@@Z
    static long Build(tagINITGADGET *, Context * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Context@@QEAA@XZ
    Context();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Enter@Context@@QEAAXXZ
    void Enter();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleMask@Context@@UEBAIXZ
    virtual unsigned int GetHandleMask() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleType@Context@@UEBA?AW4HandleType@@XZ
    virtual int GetHandleType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Leave@Context@@QEAAXXZ
    void Leave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDeleteHandle@Context@@UEAAHXZ
    virtual int xwDeleteHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwOnIdleNL@Context@@QEAAKXZ
    unsigned long xwOnIdleNL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwPreDestroyNL@Context@@QEAAXXZ
    void xwPreDestroyNL();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Context@@UEAA@XZ
    virtual ~Context();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDestroy@Context@@MEAAXXZ
    virtual void xwDestroy();
};
