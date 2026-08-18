#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 14 member(s).
class DuParkContainer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleType@DuParkContainer@@UEBA?AW4HandleType@@XZ
    virtual int GetHandleType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndCapture@DuParkContainer@@UEAAXXZ
    virtual void OnEndCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetRect@DuParkContainer@@UEAAXPEAUtagRECT@@@Z
    virtual void OnGetRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvalidate@DuParkContainer@@UEAAXPEBUtagRECT@@@Z
    virtual void OnInvalidate(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRescanMouse@DuParkContainer@@UEAAXPEAUtagPOINT@@@Z
    virtual void OnRescanMouse(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetFocus@DuParkContainer@@UEAAXXZ
    virtual void OnSetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStartCapture@DuParkContainer@@UEAAXXZ
    virtual void OnStartCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTrackMouseLeave@DuParkContainer@@UEAAHXZ
    virtual int OnTrackMouseLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDevice@DuParkContainer@@UEAAJXZ
    virtual long ResetDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdHandleMessage@DuParkContainer@@UEAAHI_K_JPEA_JI@Z
    virtual int xdHandleMessage(unsigned int, uint64_t, int64_t, int64_t *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwPreDestroy@DuParkContainer@@QEAAXXZ
    void xwPreDestroy();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DuParkContainer@@UEAA@XZ
    virtual ~DuParkContainer();
};
