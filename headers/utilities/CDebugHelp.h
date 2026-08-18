#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 7 member(s).
class CDebugHelp {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AssertFailedLine@CDebugHelp@@UEAAHPEBD0I@Z
    virtual int AssertFailedLine(char const *, char const *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CDebugHelp@@QEAA@XZ
    CDebugHelp();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidAddress@CDebugHelp@@UEAAHPEBXIH@Z
    virtual int IsValidAddress(void const *, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Prompt@CDebugHelp@@UEAAHPEBD0I0@Z
    virtual int Prompt(char const *, char const *, unsigned int, char const *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CDebugHelp@@UEAA@XZ
    virtual ~CDebugHelp();
};
