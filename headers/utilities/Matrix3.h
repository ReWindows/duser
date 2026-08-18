#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 8 member(s).
class Matrix3 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyRight@Matrix3@@QEAAXAEBV1@@Z
    void ApplyRight(Matrix3const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeBounds@Matrix3@@QEBAXPEAUtagRECT@@PEBU2@W4EHintBounds@1@@Z
    void ComputeBounds(tagRECT *, tagRECT const *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeRgn@Matrix3@@QEBAHPEAUHRGN__@@PEBUtagRECT@@UtagSIZE@@@Z
    int ComputeRgn(HRGN__*, tagRECT const *, tagSIZE) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@Matrix3@@QEBAXPEAUtagPOINT@@H@Z
    void Execute(tagPOINT *, int) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Matrix3@@QEAA@_N@Z
    Matrix3(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Rotate@Matrix3@@QEAAXM@Z
    void Rotate(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scale@Matrix3@@QEAAXMM@Z
    void Scale(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Translate@Matrix3@@QEAAXMM@Z
    void Translate(float, float);
};
