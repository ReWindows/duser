#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 8 member(s).
class MotionSC {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBrushF@MotionSC@@QEBAPEAVBrush@Gdiplus@@I@Z
    ::Gdiplus::Brush * GetBrushF(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPenF@MotionSC@@QEBAPEAVPen@Gdiplus@@I@Z
    ::Gdiplus::Pen * GetPenF(unsigned int) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MotionSC@@QEAA@XZ
    MotionSC();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwOnIdleNL@MotionSC@@UEAAKXZ
    virtual unsigned long xwOnIdleNL();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwPreDestroyNL@MotionSC@@UEAAXXZ
    virtual void xwPreDestroyNL();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MotionSC@@UEAA@XZ
    virtual ~MotionSC();
};
