#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 26 member(s).
class HWndContainer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@HWndContainer@@SAJPEAUHWND__@@PEAPEAV1@@Z
    static long Build(HWND__*, HWndContainer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawGadgetExternal@HWndContainer@@UEAAJPEAVDuVisual@@PEAPEAUHBITMAP__@@PEAUtagRECT@@@Z
    virtual long DrawGadgetExternal(DuVisual *, HBITMAP__* *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleType@HWndContainer@@UEBA?AW4HandleType@@XZ
    virtual int GetHandleType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootVisual@HWndContainer@@UEAAJPEAPEAVTransitionVisual@@@Z
    virtual long GetRootVisual(TransitionVisual * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HWndContainer@@QEAA@XZ
    HWndContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyCompositionChanged@HWndContainer@@UEAAJXZ
    virtual long NotifyCompositionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEndCapture@HWndContainer@@UEAAXXZ
    virtual void OnEndCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGetRect@HWndContainer@@UEAAXPEAUtagRECT@@@Z
    virtual void OnGetRect(tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvalidate@HWndContainer@@UEAAXPEBUtagRECT@@@Z
    virtual void OnInvalidate(tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRescanMouse@HWndContainer@@UEAAXPEAUtagPOINT@@@Z
    virtual void OnRescanMouse(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSetFocus@HWndContainer@@UEAAXXZ
    virtual void OnSetFocus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStartCapture@HWndContainer@@UEAAXXZ
    virtual void OnStartCapture();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTrackMouseLeave@HWndContainer@@UEAAHXZ
    virtual int OnTrackMouseLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetDevice@HWndContainer@@UEAAJXZ
    virtual long ResetDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleTransitionVisualPaintAndCommit@HWndContainer@@UEAAXXZ
    virtual void ScheduleTransitionVisualPaintAndCommit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchInteractionCallback@HWndContainer@@UEAAXPEAUGMSG_POINTER@@UtagPOINT@@@Z
    virtual void TouchInteractionCallback(GMSG_POINTER *, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdHandleMessage@HWndContainer@@UEAAHI_K_JPEA_JI@Z
    virtual int xdHandleMessage(unsigned int, uint64_t, int64_t, int64_t *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HWndContainer@@UEAA@XZ
    virtual ~HWndContainer();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BroadcastDCompDeviceRebuilt@HWndContainer@@IEAAX_N@Z
    void BroadcastDCompDeviceRebuilt(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckDCompDeviceAndResources@HWndContainer@@IEAAJ_N@Z
    long CheckDCompDeviceAndResources(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTouchInteraction@HWndContainer@@IEAAXI_K@Z
    void HandleTouchInteraction(unsigned int, uint64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCursorSuppressed@HWndContainer@@KA_NXZ
    static bool IsCursorSuppressed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRescanMouseEx@HWndContainer@@IEAAHPEAUtagPOINT@@@Z
    int OnRescanMouseEx(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncCursorSuppressed@HWndContainer@@IEAAXXZ
    void SyncCursorSuppressed();
};
