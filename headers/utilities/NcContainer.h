#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 14 member(s).
class NcContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@NcContainer@@SAJPEAUHWND__@@PEAPEAV1@@Z
    static long Build(HWND__*, NcContainer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleType@NcContainer@@UEBA?AW4HandleType@@XZ
    virtual int GetHandleType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndCapture@NcContainer@@UEAAXXZ
    virtual void OnEndCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetRect@NcContainer@@UEAAXPEAUtagRECT@@@Z
    virtual void OnGetRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvalidate@NcContainer@@UEAAXPEBUtagRECT@@@Z
    virtual void OnInvalidate(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRescanMouse@NcContainer@@UEAAXPEAUtagPOINT@@@Z
    virtual void OnRescanMouse(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetFocus@NcContainer@@UEAAXXZ
    virtual void OnSetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStartCapture@NcContainer@@UEAAXXZ
    virtual void OnStartCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTrackMouseLeave@NcContainer@@UEAAHXZ
    virtual int OnTrackMouseLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDevice@NcContainer@@UEAAJXZ
    virtual long ResetDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdHandleMessage@NcContainer@@UEAAHI_K_JPEA_JI@Z
    virtual int xdHandleMessage(unsigned int, uint64_t, int64_t, int64_t *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NcContainer@@UEAA@XZ
    virtual ~NcContainer();
};
