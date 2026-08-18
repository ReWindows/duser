#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 5 member(s).
class ClassLibrary {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindClass@ClassLibrary@@QEBAPEBVMsgClass@@G@Z
    MsgClass const * FindClass(unsigned short) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkInternal@ClassLibrary@@QEAAXPEAUHCLASS__@@@Z
    void MarkInternal(HCLASS__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterSuperNL@ClassLibrary@@QEAAJPEAUMessageClassSuper@DUser@@PEAPEAVMsgClass@@@Z
    long RegisterSuperNL(::DUser::MessageClassSuper *, MsgClass * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClassLibrary@@QEAA@XZ
    ~ClassLibrary();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildClass@ClassLibrary@@IEAAJPEBGPEAPEAVMsgClass@@@Z
    long BuildClass(unsigned short const *, MsgClass * *);
};
