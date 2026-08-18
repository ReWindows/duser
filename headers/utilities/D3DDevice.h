#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 3 member(s).
class D3DDevice {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@D3DDevice@@SAJPEAUID3D11Device@@HPEAPEAV1@@Z
    static long Create(ID3D11Device *, int, D3DDevice * *);
private:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0D3DDevice@@AEAA@PEAUID3D11Device@@H@Z
    D3DDevice(ID3D11Device *, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1D3DDevice@@AEAA@XZ
    ~D3DDevice();
};
