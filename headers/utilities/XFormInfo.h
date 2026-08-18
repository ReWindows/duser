#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 3 member(s).
class XFormInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Apply@XFormInfo@@QEAAXPEAVMatrix3@@@Z
    void Apply(Matrix3*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyAnti@XFormInfo@@QEAAXPEAVMatrix3@@@Z
    void ApplyAnti(Matrix3*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEmpty@XFormInfo@@QEBA_NXZ
    bool IsEmpty() const;
};
