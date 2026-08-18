#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 37 member(s).
class DuRootGadget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetFocus@DuRootGadget@@QEAAJPEAUGetFocusMsg@Root@@@Z
    long ApiGetFocus(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetRootInfo@DuRootGadget@@QEAAJPEAUGetRootInfoMsg@Root@@@Z
    long ApiGetRootInfo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetRootInfo@DuRootGadget@@QEAAJPEAUSetRootInfoMsg@Root@@@Z
    long ApiSetRootInfo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@DuRootGadget@@SAJPEAVDuContainer@@HPEAUCREATE_INFO@@PEAPEAV1@@Z
    static long Build(DuContainer *, int, CREATE_INFO *, DuRootGadget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DemoteRoot@DuRootGadget@@SAPEAUHCLASS__@@PEAU2@PEAVGadget@DUser@@PEAX@Z
    static HCLASS__* DemoteRoot(HCLASS__*, ::DUser::Gadget *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachContainer@DuRootGadget@@QEAAXXZ
    void DetachContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawDirtyLayersInTree@DuRootGadget@@QEAAHPEAUHDC__@@@Z
    int DrawDirtyLayersInTree(HDC__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DuRootGadget@@QEAA@XZ
    DuRootGadget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferredMsgQueue@DuRootGadget@@UEAAPEAVDeferredMsgQueue@@XZ
    virtual DeferredMsgQueue * GetDeferredMsgQueue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocus@DuRootGadget@@SAPEAVDuVisual@@XZ
    static DuVisual * GetFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfo@DuRootGadget@@QEBAXPEAUtagROOT_INFO@@@Z
    void GetInfo(tagROOT_INFO *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessingMsgObject@DuRootGadget@@UEBAPEAVMsgObject@@XZ
    virtual MsgObject * GetProcessingMsgObject() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootGadget@DuRootGadget@@UEAAPEAUHROOTGADGET__@@XZ
    virtual HROOTGADGET__* GetRootGadget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromoteRoot@DuRootGadget@@SAJP6AJW4ConstructCommand@Gadget@DUser@@PEAUHCLASS__@@PEAV34@PEAX@Z12PEAUConstructInfo@34@@Z
    static long PromoteRoot(long ( *)(int, HCLASS__*, ::DUser::Gadget *, void *), HCLASS__*, ::DUser::Gadget *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAdaptor@DuRootGadget@@QEAAJPEAVDuVisual@@@Z
    long RegisterAdaptor(DuVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInfo@DuRootGadget@@QEAAJPEBUtagROOT_INFO@@@Z
    long SetInfo(tagROOT_INFO const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessingMsgObject@DuRootGadget@@UEAAXPEAVMsgObject@@@Z
    virtual void SetProcessingMsgObject(MsgObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAdaptor@DuRootGadget@@QEAAXPEAVDuVisual@@@Z
    void UnregisterAdaptor(DuVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdHandleKeyboardFocus@DuRootGadget@@QEAAHI@Z
    int xdHandleKeyboardFocus(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdHandleKeyboardMessage@DuRootGadget@@QEAAHPEAUGMSG_KEYBOARD@@I@Z
    int xdHandleKeyboardMessage(GMSG_KEYBOARD *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdHandleMouseLeaveMessage@DuRootGadget@@QEAAXPEAUGMSG_MOUSE@@@Z
    void xdHandleMouseLeaveMessage(GMSG_MOUSE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdHandleMouseLostCapture@DuRootGadget@@QEAAXI@Z
    void xdHandleMouseLostCapture(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdHandleMouseMessage@DuRootGadget@@QEAAHPEAUGMSG_MOUSE@@UtagPOINT@@H@Z
    int xdHandleMouseMessage(GMSG_MOUSE *, tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdHandlePointerMessage@DuRootGadget@@QEAAHPEAUGMSG_POINTER@@UtagPOINT@@@Z
    int xdHandlePointerMessage(GMSG_POINTER *, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdNotifyChangeInvisible@DuRootGadget@@QEAAXPEBVDuVisual@@@Z
    void xdNotifyChangeInvisible(DuVisual const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xrDrawTree@DuRootGadget@@QEAAXPEAVDuVisual@@PEAUHDC__@@PEBUtagRECT@@I@Z
    void xrDrawTree(DuVisual *, HDC__*, tagRECT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDeleteHandle@DuRootGadget@@UEAAHXZ
    virtual int xwDeleteHandle();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DuRootGadget@@IEAAJPEAVDuContainer@@HPEAUCREATE_INFO@@@Z
    long Create(DuContainer *, int, CREATE_INFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdFireChangeState@DuRootGadget@@IEAAXPEAPEAVDuVisual@@0I@Z
    void xdFireChangeState(DuVisual * *, DuVisual * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdProcessGadgetMouseMessage@DuRootGadget@@IEAAHPEAUGMSG_MOUSE@@PEAVDuVisual@@UtagPOINT@@@Z
    int xdProcessGadgetMouseMessage(GMSG_MOUSE *, DuVisual *, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdProcessGadgetPointerMessage@DuRootGadget@@IEAAHPEAUGMSG_POINTER@@PEAVDuVisual@@UtagPOINT@@@Z
    int xdProcessGadgetPointerMessage(GMSG_POINTER *, DuVisual *, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdUpdateKeyboardFocus@DuRootGadget@@IEAAHPEAVDuVisual@@H@Z
    int xdUpdateKeyboardFocus(DuVisual *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdUpdateMouseFocus@DuRootGadget@@IEAAXPEAPEAVDuVisual@@PEAUtagPOINT@@@Z
    void xdUpdateMouseFocus(DuVisual * *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDestroy@DuRootGadget@@MEAAXXZ
    virtual void xwDestroy();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DuRootGadget@@MEAA@XZ
    virtual ~DuRootGadget();
};
