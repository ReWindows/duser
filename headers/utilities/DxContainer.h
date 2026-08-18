#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 13 member(s).
class DxContainer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleType@DxContainer@@UEBA?AW4HandleType@@XZ
    virtual int GetHandleType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndCapture@DxContainer@@UEAAXXZ
    virtual void OnEndCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetRect@DxContainer@@UEAAXPEAUtagRECT@@@Z
    virtual void OnGetRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvalidate@DxContainer@@UEAAXPEBUtagRECT@@@Z
    virtual void OnInvalidate(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRescanMouse@DxContainer@@UEAAXPEAUtagPOINT@@@Z
    virtual void OnRescanMouse(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetFocus@DxContainer@@UEAAXXZ
    virtual void OnSetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStartCapture@DxContainer@@UEAAXXZ
    virtual void OnStartCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTrackMouseLeave@DxContainer@@UEAAHXZ
    virtual int OnTrackMouseLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDevice@DxContainer@@UEAAJXZ
    virtual long ResetDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdHandleMessage@DxContainer@@UEAAHI_K_JPEA_JI@Z
    virtual int xdHandleMessage(unsigned int, uint64_t, int64_t, int64_t *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DxContainer@@UEAA@XZ
    virtual ~DxContainer();
};
