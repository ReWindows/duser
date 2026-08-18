#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 5 member(s).
class SafeMsgQ {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNL@SafeMsgQ@@QEAAXPEAUMsgEntry@@@Z
    void AddNL(MsgEntry *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostNL@SafeMsgQ@@QEAAJPEAVThread@@PEAUtagGMSG@@PEAVMsgObject@@PEAUHROOTGADGET__@@P6AJPEAUMsgEntry@@@ZI@Z
    long PostNL(Thread *, tagGMSG *, MsgObject *, HROOTGADGET__*, long ( *)(MsgEntry *), unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwProcessNL@SafeMsgQ@@QEAAXXZ
    void xwProcessNL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwProcessNL@SafeMsgQ@@QEAAXPEAUHROOTGADGET__@@@Z
    void xwProcessNL(HROOTGADGET__*);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwProcessNL@SafeMsgQ@@IEAAXPEAUMsgEntry@@@Z
    void xwProcessNL(MsgEntry *);
};
