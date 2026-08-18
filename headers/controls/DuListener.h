#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 12 member(s).
class DuListener {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DemoteListener@DuListener@@SAPEAUHCLASS__@@PEAU2@PEAVGadget@DUser@@PEAX@Z
    static HCLASS__* DemoteListener(HCLASS__*, ::DUser::Gadget *, void *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferredMsgQueue@DuListener@@UEAAPEAVDeferredMsgQueue@@XZ
    virtual DeferredMsgQueue * GetDeferredMsgQueue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleType@DuListener@@UEBA?AW4HandleType@@XZ
    virtual int GetHandleType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootGadget@DuListener@@UEAAPEAUHROOTGADGET__@@XZ
    virtual HROOTGADGET__* GetRootGadget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStartDelete@DuListener@@UEBAHXZ
    virtual int IsStartDelete() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromoteListener@DuListener@@SAJP6AJW4ConstructCommand@Gadget@DUser@@PEAUHCLASS__@@PEAV34@PEAX@Z12PEAUConstructInfo@34@@Z
    static long PromoteListener(long ( *)(int, HCLASS__*, ::DUser::Gadget *, void *), HCLASS__*, ::DUser::Gadget *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDeleteHandle@DuListener@@UEAAHXZ
    virtual int xwDeleteHandle();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DuListener@@UEAA@XZ
    virtual ~DuListener();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwBeginDestroy@DuListener@@IEAAXXZ
    void xwBeginDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDestroy@DuListener@@MEAAXXZ
    virtual void xwDestroy();
};
