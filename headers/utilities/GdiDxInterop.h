#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 6 member(s).
class GdiDxInterop {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDraw@GdiDxInterop@@QEAAJPEAUIDCompositionSurface@@PEBUtagRECT@@PEAPEAUHDC__@@PEAUtagPOINT@@@Z
    long BeginDraw(IDCompositionSurface *, tagRECT const *, HDC__* *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndDraw@GdiDxInterop@@QEAAXXZ
    void EndDraw();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FreeResources@GdiDxInterop@@QEAAXXZ
    void FreeResources();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GdiDxInterop@@QEAA@PEAVD3DDevice@@PEAUID3D11Device@@@Z
    GdiDxInterop(D3DDevice *, ID3D11Device *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAlreadyDrawing@GdiDxInterop@@QEAAHXZ
    int IsAlreadyDrawing();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GdiDxInterop@@QEAA@XZ
    ~GdiDxInterop();
};
