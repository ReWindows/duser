#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class DuEventPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddHandler@DuEventPool@@QEAA?AW4EAdd@1@HPEAVDuEventGadget@@@Z
    int AddHandler(int, DuEventGadget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItem@DuEventPool@@QEBAHHPEAVDuEventGadget@@@Z
    int FindItem(int, DuEventGadget *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindItem@DuEventPool@@QEBAHHVEventDelegate@DUser@@@Z
    int FindItem(int, ::DUser::EventDelegate) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterMessage@DuEventPool@@SAJPEBU_GUID@@W4PropType@@PEAH@Z
    static long RegisterMessage(_GUID const *, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveHandler@DuEventPool@@QEAAJHPEAVDuEventGadget@@@Z
    long RemoveHandler(int, DuEventGadget *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveHandler@DuEventPool@@QEAAJPEAVDuEventGadget@@@Z
    long RemoveHandler(DuEventGadget *);
};
