#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 11 member(s).
namespace Gdiplus {
class Graphics {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetClip@Graphics@Gdiplus@@QEBA?AW4Status@2@PEAVRegion@2@@Z
    int GetClip(::Gdiplus::Region *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransform@Graphics@Gdiplus@@QEBA?AW4Status@2@PEAVMatrix@2@@Z
    int GetTransform(::Gdiplus::Matrix *) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Graphics@Gdiplus@@QEAA@PEAUHDC__@@@Z
    Graphics(HDC__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsClipEmpty@Graphics@Gdiplus@@QEBAHXZ
    int IsClipEmpty() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@Graphics@Gdiplus@@QEAA?AW4Status@2@AEBVRectF@2@W4CombineMode@2@@Z
    int SetClip(::Gdiplus::RectF const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@Graphics@Gdiplus@@QEAA?AW4Status@2@PEBVRegion@2@W4CombineMode@2@@Z
    int SetClip(::Gdiplus::Region const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCompositingQuality@Graphics@Gdiplus@@QEAA?AW4Status@2@W4CompositingQuality@2@@Z
    int SetCompositingQuality(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPixelOffsetMode@Graphics@Gdiplus@@QEAA?AW4Status@2@W4PixelOffsetMode@2@@Z
    int SetPixelOffsetMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSmoothingMode@Graphics@Gdiplus@@QEAA?AW4Status@2@W4SmoothingMode@2@@Z
    int SetSmoothingMode(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTransform@Graphics@Gdiplus@@QEAA?AW4Status@2@PEBVMatrix@2@@Z
    int SetTransform(::Gdiplus::Matrix const *);
};
} // namespace Gdiplus
