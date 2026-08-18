#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class DuTicketManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@DuTicketManager@@QEAAJPEAVBaseObject@@PEAK@Z
    long Add(BaseObject *, unsigned long *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DuTicketManager@@QEAA@XZ
    DuTicketManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Lookup@DuTicketManager@@QEAAJKPEAPEAVBaseObject@@@Z
    long Lookup(unsigned long, BaseObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@DuTicketManager@@QEAAJKPEAPEAVBaseObject@@@Z
    long Remove(unsigned long, BaseObject * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DuTicketManager@@QEAA@XZ
    ~DuTicketManager();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@DuTicketManager@@IEAAJXZ
    long Expand();
};
