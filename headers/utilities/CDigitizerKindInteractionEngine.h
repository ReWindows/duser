#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 10 member(s).
class CDigitizerKindInteractionEngine {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CDigitizerKindInteractionEngine@@SAJW4DIGITIZER_KIND@@PEAVCInteractionEngineConfiguration@@PEBVCInteractionEngineParameters@@PEAPEAV1@@Z
    static long Create(int, CInteractionEngineConfiguration *, CInteractionEngineParameters const *, CDigitizerKindInteractionEngine * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCrossSlideImplementor@CDigitizerKindInteractionEngine@@UEAAPEAVICrossSlideImplementor@@XZ
    virtual ICrossSlideImplementor * GetCrossSlideImplementor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHoldImplementor@CDigitizerKindInteractionEngine@@UEAAPEAVIHoldImplementor@@XZ
    virtual IHoldImplementor * GetHoldImplementor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPredictionImplementor@CDigitizerKindInteractionEngine@@UEAAPEAVIPredictionImplementor@@XZ
    virtual IPredictionImplementor * GetPredictionImplementor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTranslationImplementor@CDigitizerKindInteractionEngine@@UEAAPEAVITranslationImplementor@@XZ
    virtual ITranslationImplementor * GetTranslationImplementor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWheelImplementor@CDigitizerKindInteractionEngine@@UEAAPEAVIWheelImplementor@@XZ
    virtual IWheelImplementor * GetWheelImplementor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsManipulationInertiaSupported@CDigitizerKindInteractionEngine@@UEBA_NXZ
    virtual bool IsManipulationInertiaSupported() const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDigitizerKindInteractionEngine@@MEAAJPEAVCInteractionEngineConfiguration@@PEBVCInteractionEngineParameters@@@Z
    virtual long Initialize(CInteractionEngineConfiguration *, CInteractionEngineParameters const *);
};
