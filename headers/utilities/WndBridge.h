#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 5 member(s).
class WndBridge {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@WndBridge@@SAJPEAUHWND__@@P6AHPEAX0I_K_JPEA_J@Z1H@Z
    static long Build(HWND__*, int ( *)(void *, HWND__*, unsigned int, uint64_t, int64_t, int64_t *), void *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Detach@WndBridge@@QEAAJH@Z
    long Detach(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RawWndProc@WndBridge@@SA_JPEAUHWND__@@I_K_J@Z
    static int64_t RawWndProc(HWND__*, unsigned int, uint64_t, int64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WndBridge@@QEAA@XZ
    WndBridge();
private:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@WndBridge@@AEAAKXZ
    unsigned long Release();
};
