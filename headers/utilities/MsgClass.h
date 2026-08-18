#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 13 member(s).
class MsgClass {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@MsgClass@@SAJPEBGPEAPEAV1@@Z
    static long Build(unsigned short const *, MsgClass * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleMask@MsgClass@@UEBAIXZ
    virtual unsigned int GetHandleMask() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleType@MsgClass@@UEBA?AW4HandleType@@XZ
    virtual int GetHandleType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterGuts@MsgClass@@QEAAJPEAUMessageClassGuts@DUser@@@Z
    long RegisterGuts(::DUser::MessageClassGuts *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwBuildObject@MsgClass@@QEBAJPEAPEAVMsgObject@@PEAUConstructInfo@Gadget@DUser@@@Z
    long xwBuildObject(MsgObject * *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDeleteHandle@MsgClass@@UEAAHXZ
    virtual int xwDeleteHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwTearDownObject@MsgClass@@QEBAXPEAVMsgObject@@@Z
    void xwTearDownObject(MsgObject *) const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MsgClass@@UEAA@XZ
    virtual ~MsgClass();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillStub@MsgClass@@IEBAJPEAUMessageClassStub@DUser@@@Z
    long FillStub(::DUser::MessageClassStub *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwBuildUpObject@MsgClass@@IEBAJPEAVMsgObject@@PEAUConstructInfo@Gadget@DUser@@@Z
    long xwBuildUpObject(MsgObject *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwConstructCB@MsgClass@@KAJW4ConstructCommand@Gadget@DUser@@PEAUHCLASS__@@PEAV34@PEAX@Z
    static long xwConstructCB(int, HCLASS__*, ::DUser::Gadget *, void *);
};
