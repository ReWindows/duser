#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 13 member(s).
class OldDropTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@OldDropTarget@@SAJPEAUHGADGET__@@PEAUHWND__@@PEAPEAV1@@Z
    static long Build(HGADGET__*, HWND__*, OldDropTarget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@OldDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@OldDropTarget@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@OldDropTarget@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@OldDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroyListener@OldDropTarget@@MEAAXXZ
    virtual void OnDestroyListener();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDestroySubject@OldDropTarget@@MEAAXXZ
    virtual void OnDestroySubject();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDragLeave@OldDropTarget@@IEAAXXZ
    void xwDragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDragScan@OldDropTarget@@IEAAJU_POINTL@@PEAKPEAUtagPOINT@@@Z
    long xwDragScan(_POINTL, unsigned long *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwUpdateTarget@OldDropTarget@@IEAAJPEAUHGADGET__@@PEAKPEAUtagPOINT@@@Z
    long xwUpdateTarget(HGADGET__*, unsigned long *, tagPOINT *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1OldDropTarget@@MEAA@XZ
    virtual ~OldDropTarget();
};
