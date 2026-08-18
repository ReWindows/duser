#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 10 member(s).
class StagingBufferFeatureLevel10 {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StagingBufferFeatureLevel10@@QEAA@XZ
    StagingBufferFeatureLevel10();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StagingBufferFeatureLevel10@@UEAA@XZ
    virtual ~StagingBufferFeatureLevel10();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyInternal@StagingBufferFeatureLevel10@@MEAAXPEAUID3D11Texture2D@@PEBUtagRECT@@@Z
    virtual void CopyInternal(ID3D11Texture2D *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceInternal@StagingBufferFeatureLevel10@@MEAAJII@Z
    virtual long CreateSurfaceInternal(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroySurfaceInternal@StagingBufferFeatureLevel10@@MEAAXXZ
    virtual void DestroySurfaceInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSurfaceAllocated@StagingBufferFeatureLevel10@@MEAAHXZ
    virtual int IsSurfaceAllocated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapInternal@StagingBufferFeatureLevel10@@MEAAJPEAIPEAPEAK@Z
    virtual long MapInternal(unsigned int *, unsigned long * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmapInternal@StagingBufferFeatureLevel10@@MEAAXXZ
    virtual void UnmapInternal();
};
