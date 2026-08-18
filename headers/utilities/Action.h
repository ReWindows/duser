#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 10 member(s).
class Action {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Action@@QEAA@XZ
    Action();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleMask@Action@@UEBAIXZ
    virtual unsigned int GetHandleMask() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleType@Action@@UEBA?AW4HandleType@@XZ
    virtual int GetHandleType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwFireFinalNL@Action@@QEAAXXZ
    void xwFireFinalNL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwFireNL@Action@@QEAAXXZ
    void xwFireNL();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Action@@UEAA@XZ
    virtual ~Action();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EmptyActionProc@Action@@KAXPEAUGMA_ACTIONINFO@@@Z
    static void EmptyActionProc(GMA_ACTIONINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDeleteHandle@Action@@MEAAHXZ
    virtual int xwDeleteHandle();
};
