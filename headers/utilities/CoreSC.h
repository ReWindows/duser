#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 18 member(s).
class CoreSC {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearDragPointer@CoreSC@@QEAAXI@Z
    void ClearDragPointer(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CoreSC@@UEAAJPEAUtagINITGADGET@@@Z
    virtual long Create(tagINITGADGET *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DUIMsgWaitForMultipleObjectsEx@CoreSC@@QEAAKKPEBQEAXKKK@Z
    unsigned long DUIMsgWaitForMultipleObjectsEx(unsigned long, void * const *, unsigned long, unsigned long, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDragPointer@CoreSC@@QEAAPEAUtagPointerTrack@@I@Z
    tagPointerTrack * GetDragPointer(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDragPointer@CoreSC@@QEAAXIPEAVDuVisual@@UtagPOINT@@@Z
    void SetDragPointer(unsigned int, DuVisual *, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WaitMessage@CoreSC@@QEAAXIK@Z
    void WaitMessage(unsigned int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwFireMessagesNL@CoreSC@@QEAAJPEAV1@PEAUtagFGM_INFO@@HI@Z
    long xwFireMessagesNL(CoreSC *, tagFGM_INFO *, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwPreDestroyNL@CoreSC@@UEAAXXZ
    virtual void xwPreDestroyNL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwProcessNL@CoreSC@@QEAAXXZ
    void xwProcessNL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwProcessNL@CoreSC@@QEAAXPEAUHROOTGADGET__@@@Z
    void xwProcessNL(HROOTGADGET__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwProcessNL@CoreSC@@QEAAHPEAUtagMSG@@PEAUHWND__@@IIII@Z
    int xwProcessNL(tagMSG *, HWND__*, unsigned int, unsigned int, unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreSC@@UEAA@XZ
    virtual ~CoreSC();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkDataNL@CoreSC@@IEAAXXZ
    void MarkDataNL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostNL@CoreSC@@IEAAJPEAV1@PEAVSafeMsgQ@@PEAUtagGMSG@@PEAVMsgObject@@I@Z
    long PostNL(CoreSC *, SafeMsgQ *, tagGMSG *, MsgObject *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwProcessMsgQNL@CoreSC@@IEAAXXZ
    void xwProcessMsgQNL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwSendNL@CoreSC@@IEAAJPEAV1@PEAVSafeMsgQ@@PEAUtagGMSG@@PEAVMsgObject@@I@Z
    long xwSendNL(CoreSC *, SafeMsgQ *, tagGMSG *, MsgObject *, unsigned int);
};
