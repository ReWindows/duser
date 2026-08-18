#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 11 member(s).
class MsgObject {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleMask@MsgObject@@UEBAIXZ
    virtual unsigned int GetHandleMask() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleType@MsgObject@@UEBA?AW4HandleType@@XZ
    virtual int GetHandleType() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InstanceOf@MsgObject@@QEBAHPEBVMsgClass@@@Z
    int InstanceOf(MsgClass const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOkToProcess@MsgObject@@UEBAHXZ
    virtual int IsOkToProcess() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessingState@MsgObject@@UEAAXH@Z
    virtual void SetProcessingState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupInternal@MsgObject@@QEAAHPEAUHCLASS__@@@Z
    int SetupInternal(HCLASS__*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MsgObject@@UEAA@XZ
    virtual ~MsgObject();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDestroy@MsgObject@@MEAAXXZ
    virtual void xwDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwEndDestroy@MsgObject@@IEAAXXZ
    void xwEndDestroy();
};
