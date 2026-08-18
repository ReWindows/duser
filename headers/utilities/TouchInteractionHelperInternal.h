#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 12 member(s).
class TouchInteractionHelperInternal {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Destroy@TouchInteractionHelperInternal@@UEAAXXZ
    virtual void Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPointerMessage@TouchInteractionHelperInternal@@UEAAXPEAVTouchInteractionClient@@PEAUHWND__@@I_K@Z
    virtual void ProcessPointerMessage(TouchInteractionClient *, HWND__*, unsigned int, uint64_t);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TouchInteractionHelperInternal@@QEAA@XZ
    TouchInteractionHelperInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInteractionSettings@TouchInteractionHelperInternal@@UEAAXXZ
    virtual void UpdateInteractionSettings();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TouchInteractionHelperInternal@@QEAA@XZ
    ~TouchInteractionHelperInternal();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionInputFromPointerInfo@TouchInteractionHelperInternal@@IEBAXPEBUtagPOINTER_INFO@@PEAUINTERACTION_INPUT@@@Z
    void GetInteractionInputFromPointerInfo(tagPOINTER_INFO const *, INTERACTION_INPUT *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeInteractionEngine@TouchInteractionHelperInternal@@IEAAXXZ
    void InitializeInteractionEngine();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionEngineCallback@TouchInteractionHelperInternal@@IEAAXPEBUINTERACTION_OUTPUT@@@Z
    void InteractionEngineCallback(INTERACTION_OUTPUT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessInteractionInput@TouchInteractionHelperInternal@@IEAA_NPEBUINTERACTION_INPUT@@IIKPEAX@Z
    bool ProcessInteractionInput(INTERACTION_INPUT const *, unsigned int, unsigned int, unsigned long, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPointerInfo@TouchInteractionHelperInternal@@IEAA_NPEBUtagPOINTER_INFO@@@Z
    bool ProcessPointerInfo(tagPOINTER_INFO const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StaticInteractionEngineCallback@TouchInteractionHelperInternal@@KAXPEAXPEBUINTERACTION_OUTPUT@@@Z
    static void StaticInteractionEngineCallback(void *, INTERACTION_OUTPUT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformInteractionOutput@TouchInteractionHelperInternal@@IEAA_NPEBUINTERACTION_OUTPUT@@PEAXPEAU2@@Z
    bool TransformInteractionOutput(INTERACTION_OUTPUT const *, void *, INTERACTION_OUTPUT *);
};
