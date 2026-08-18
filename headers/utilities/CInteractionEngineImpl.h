#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 21 member(s).
class CInteractionEngineImpl {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CInteractionEngineImpl@@QEAA@W4DIGITIZER_KIND@@PEAUAExternalSettingsSource@@@Z
    CInteractionEngineImpl(int, AExternalSettingsSource *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DigitizerInput@CInteractionEngineImpl@@QEAAJW4DIGITIZER_KIND@@_KIIPEBUINTERACTION_INPUT@@@Z
    long DigitizerInput(int, uint64_t, unsigned int, unsigned int, INTERACTION_INPUT const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetState@CInteractionEngineImpl@@QEBAJPEAW4INTERACTION_STATE@@PEAI@Z
    long GetState(int *, unsigned int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetConfiguration@CInteractionEngineImpl@@QEAAJIPEBUINTERACTION_CONFIGURATION_ACTION@@@Z
    long SetConfiguration(unsigned int, INTERACTION_CONFIGURATION_ACTION const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExternalParameters@CInteractionEngineImpl@@QEAAJAEBVCExternalSettings@@@Z
    long SetExternalParameters(CExternalSettings const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParameters@CInteractionEngineImpl@@QEAAJIPEBUINTERACTION_PARAMETER_VALUE@@@Z
    long SetParameters(unsigned int, INTERACTION_PARAMETER_VALUE const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPrivateParameter@CInteractionEngineImpl@@QEAAJW4PrivateParameter@@I@Z
    long SetPrivateParameter(int, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInteractionEngineImpl@@UEAA@XZ
    virtual ~CInteractionEngineImpl();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InInertia@CInteractionEngineImpl@@MEAAJPEAH@Z
    virtual long InInertia(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactTransition@CInteractionEngineImpl@@MEAAJAEBUInteractionInfo@@AEBUContactInfo@@W4ContactTransition@@@Z
    virtual long OnContactTransition(InteractionInfo const &, ContactInfo const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResetTime@CInteractionEngineImpl@@MEAAJK@Z
    virtual long OnResetTime(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureEngineCreated@CInteractionEngineImpl@@IEAAJH_N@Z
    long _EnsureEngineCreated(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBufferedConfiguration@CInteractionEngineImpl@@IEAAXXZ
    void _SetBufferedConfiguration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetBufferedParameters@CInteractionEngineImpl@@IEAAXXZ
    void _SetBufferedParameters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetExternalParameters@CInteractionEngineImpl@@IEAAXXZ
    void _SetExternalParameters();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetPublicParameters@CInteractionEngineImpl@@IEAAJIPEBUINTERACTION_PARAMETER_VALUE@@AEAVCInteractionEngineParameters@@@Z
    long _SetPublicParameters(unsigned int, INTERACTION_PARAMETER_VALUE const *, CInteractionEngineParameters &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopInputInternal@CInteractionEngineImpl@@IEAAJI@Z
    long _StopInputInternal(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_StopPreviousInertia@CInteractionEngineImpl@@IEAAJI@Z
    long _StopPreviousInertia(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameValidation@CInteractionEngineImpl@@AEAAJIIPEBUINTERACTION_INPUT@@@Z
    long FrameValidation(unsigned int, unsigned int, INTERACTION_INPUT const *);
};
