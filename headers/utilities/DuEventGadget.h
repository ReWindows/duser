#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 19 member(s).
class DuEventGadget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMessageHandler@DuEventGadget@@QEAAJHPEAV1@@Z
    long AddMessageHandler(int, DuEventGadget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddMessageHandler@DuEventGadget@@QEAAJHVEventDelegate@DUser@@@Z
    long AddMessageHandler(int, ::DUser::EventDelegate);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiAddHandlerD@DuEventGadget@@QEAAJPEAUAddHandlerDMsg@EventGadget@@@Z
    long ApiAddHandlerD(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiAddHandlerG@DuEventGadget@@QEAAJPEAUAddHandlerGMsg@EventGadget@@@Z
    long ApiAddHandlerG(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetFilter@DuEventGadget@@QEAAJPEAUGetFilterMsg@EventGadget@@@Z
    long ApiGetFilter(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnEvent@DuEventGadget@@QEAAJPEAUEventMsg@@@Z
    long ApiOnEvent(EventMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiRemoveHandlerD@DuEventGadget@@QEAAJPEAURemoveHandlerDMsg@EventGadget@@@Z
    long ApiRemoveHandlerD(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiRemoveHandlerG@DuEventGadget@@QEAAJPEAURemoveHandlerGMsg@EventGadget@@@Z
    long ApiRemoveHandlerG(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetFilter@DuEventGadget@@QEAAJPEAUSetFilterMsg@EventGadget@@@Z
    long ApiSetFilter(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupMessageHandlers@DuEventGadget@@QEAAXXZ
    void CleanupMessageHandlers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DemoteEventGadget@DuEventGadget@@SAPEAUHCLASS__@@PEAU2@PEAVGadget@DUser@@PEAX@Z
    static HCLASS__* DemoteEventGadget(HCLASS__*, ::DUser::Gadget *, void *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DuEventGadget@@QEAA@XZ
    DuEventGadget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleMask@DuEventGadget@@UEBAIXZ
    virtual unsigned int GetHandleMask() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromoteEventGadget@DuEventGadget@@SAJP6AJW4ConstructCommand@Gadget@DUser@@PEAUHCLASS__@@PEAV34@PEAX@Z12PEAUConstructInfo@34@@Z
    static long PromoteEventGadget(long ( *)(int, HCLASS__*, ::DUser::Gadget *, void *), HCLASS__*, ::DUser::Gadget *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveMessageHandler@DuEventGadget@@QEAAJHPEAV1@@Z
    long RemoveMessageHandler(int, DuEventGadget *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFilter@DuEventGadget@@UEAAXII@Z
    virtual void SetFilter(unsigned int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DuEventGadget@@UEAA@XZ
    virtual ~DuEventGadget();
};
