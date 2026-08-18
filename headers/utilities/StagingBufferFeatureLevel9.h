#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 11 member(s).
class StagingBufferFeatureLevel9 {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDevice@StagingBufferFeatureLevel9@@QEAAXPEAUID3D11Device@@@Z
    void SetDevice(ID3D11Device *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StagingBufferFeatureLevel9@@QEAA@XZ
    StagingBufferFeatureLevel9();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StagingBufferFeatureLevel9@@UEAA@XZ
    virtual ~StagingBufferFeatureLevel9();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyInternal@StagingBufferFeatureLevel9@@MEAAXPEAUID3D11Texture2D@@PEBUtagRECT@@@Z
    virtual void CopyInternal(ID3D11Texture2D *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSurfaceInternal@StagingBufferFeatureLevel9@@MEAAJII@Z
    virtual long CreateSurfaceInternal(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroySurfaceInternal@StagingBufferFeatureLevel9@@MEAAXXZ
    virtual void DestroySurfaceInternal();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSurfaceAllocated@StagingBufferFeatureLevel9@@MEAAHXZ
    virtual int IsSurfaceAllocated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapInternal@StagingBufferFeatureLevel9@@MEAAJPEAIPEAPEAK@Z
    virtual long MapInternal(unsigned int *, unsigned long * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmapInternal@StagingBufferFeatureLevel9@@MEAAXXZ
    virtual void UnmapInternal();
};
