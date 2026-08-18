#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 16 member(s).
class DuDropTarget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnDestroySubject@DuDropTarget@@QEAAJPEAUOnDestroySubjectMsg@Extension@@@Z
    long ApiOnDestroySubject(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DemoteDropTarget@DuDropTarget@@SAPEAUHCLASS__@@PEAU2@PEAVGadget@DUser@@PEAX@Z
    static HCLASS__* DemoteDropTarget(HCLASS__*, ::DUser::Gadget *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragEnter@DuDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long DragEnter(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragLeave@DuDropTarget@@UEAAJXZ
    virtual long DragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DragOver@DuDropTarget@@UEAAJKU_POINTL@@PEAK@Z
    virtual long DragOver(unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Drop@DuDropTarget@@UEAAJPEAUIDataObject@@KU_POINTL@@PEAK@Z
    virtual long Drop(IDataObject *, unsigned long, _POINTL, unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitClass@DuDropTarget@@SAJXZ
    static long InitClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromoteDropTarget@DuDropTarget@@SAJP6AJW4ConstructCommand@Gadget@DUser@@PEAUHCLASS__@@PEAV34@PEAX@Z12PEAUConstructInfo@34@@Z
    static long PromoteDropTarget(long ( *)(int, HCLASS__*, ::DUser::Gadget *, void *), HCLASS__*, ::DUser::Gadget *, WindissectOpaque *);
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DuDropTarget@@IEAA@XZ
    DuDropTarget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDragLeave@DuDropTarget@@IEAAXXZ
    void xwDragLeave();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDragScan@DuDropTarget@@IEAAJU_POINTL@@PEAKPEAUtagPOINT@@@Z
    long xwDragScan(_POINTL, unsigned long *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwUpdateTarget@DuDropTarget@@IEAAJPEAVVisual@@PEAKPEAUtagPOINT@@@Z
    long xwUpdateTarget(Visual *, unsigned long *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwUpdateTarget@DuDropTarget@@IEAAJUtagPOINT@@PEAKPEAU2@@Z
    long xwUpdateTarget(tagPOINT, unsigned long *, tagPOINT *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DuDropTarget@@MEAA@XZ
    virtual ~DuDropTarget();
};
