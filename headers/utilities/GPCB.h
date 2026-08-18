#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 11 member(s).
class GPCB {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@GPCB@@QEAAXP6AJPEAUHGADGET__@@PEAXPEAUEventMsg@@@Z1@Z
    void Create(long ( *)(HGADGET__*, void *, EventMsg *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdFireChangeState@GPCB@@QEBAXPEAVDeferredMsgQueue@@PEBVDuVisual@@PEAUHROOTGADGET__@@IPEAUHGADGET__@@3I@Z
    void xdFireChangeState(DeferredMsgQueue *, DuVisual const *, HROOTGADGET__*, unsigned int, HGADGET__*, HGADGET__*, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdFireChangeStyle@GPCB@@QEBAXPEAVDeferredMsgQueue@@PEBVDuVisual@@PEAUHROOTGADGET__@@II@Z
    void xdFireChangeStyle(DeferredMsgQueue *, DuVisual const *, HROOTGADGET__*, unsigned int, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdFireMouseMessage@GPCB@@QEBAXPEAVDeferredMsgQueue@@PEBVDuVisual@@PEAUHROOTGADGET__@@PEAUGMSG_MOUSE@@@Z
    void xdFireMouseMessage(DeferredMsgQueue *, DuVisual const *, HROOTGADGET__*, GMSG_MOUSE *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdFireSyncAdaptor@GPCB@@QEBAXPEAVDeferredMsgQueue@@PEBVDuVisual@@PEAUHROOTGADGET__@@I@Z
    void xdFireSyncAdaptor(DeferredMsgQueue *, DuVisual const *, HROOTGADGET__*, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?xrFirePaint@GPCB@@QEBAXPEBVDuVisual@@PEAVGraphics@Gdiplus@@PEBUtagRECT@@2@Z
    void xrFirePaint(DuVisual const *, ::Gdiplus::Graphics *, tagRECT const *, tagRECT const *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?xrFireQueryHitTest@GPCB@@QEBAXPEBVDuVisual@@UtagPOINT@@PEAI@Z
    void xrFireQueryHitTest(DuVisual const *, tagPOINT, unsigned int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwFireDestroy@GPCB@@QEBAXPEBVDuEventGadget@@I@Z
    void xwFireDestroy(DuEventGadget const *, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwInvokeDirect@GPCB@@QEBAJPEBVDuEventGadget@@PEAUEventMsg@@I@Z
    long xwInvokeDirect(DuEventGadget const *, EventMsg *, unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwInvokeFull@GPCB@@QEBAJPEBVDuVisual@@PEAUEventMsg@@I@Z
    long xwInvokeFull(DuVisual const *, EventMsg *, unsigned int) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwCallOnEvent@GPCB@@KAJPEBVDuEventGadget@@PEAUEventMsg@@@Z
    static long xwCallOnEvent(DuEventGadget const *, EventMsg *);
};
