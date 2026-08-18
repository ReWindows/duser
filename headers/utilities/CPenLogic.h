#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 16 member(s).
class CPenLogic {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CPenLogic@@QEAA@PEBVCPenLogicParameterizer@@PEBVCTapsParameterizer@@PEAVCInteractionEngineConfiguration@@@Z
    CPenLogic(CPenLogicParameterizer const *, CTapsParameterizer const *, CInteractionEngineConfiguration *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResult@CPenLogic@@QEAAHPEAURESULT@1@@Z
    int GetResult(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactDown@CPenLogic@@QEAAJUtagPOINT@@KURATIONAL@@K@Z
    long OnContactDown(tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactInAirMove@CPenLogic@@QEAAJUtagPOINT@@KURATIONAL@@K@Z
    long OnContactInAirMove(tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactMove@CPenLogic@@QEAAJUtagPOINT@@KURATIONAL@@K@Z
    long OnContactMove(tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactUp@CPenLogic@@QEAAJUtagPOINT@@KURATIONAL@@K@Z
    long OnContactUp(tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetState@CPenLogic@@QEAAXXZ
    void ResetState();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPenLogic@@QEAA@XZ
    ~CPenLogic();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFlicksMachine@CPenLogic@@AEAAJXZ
    long EnsureFlicksMachine();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTapsMachine@CPenLogic@@AEAAJXZ
    long EnsureTapsMachine();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleFlickAtCursorUp@CPenLogic@@AEAAXUtagPOINT@@KURATIONAL@@@Z
    void HandleFlickAtCursorUp(tagPOINT, unsigned long, RATIONAL);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFlickAllowed@CPenLogic@@AEAAHXZ
    int IsFlickAllowed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetHoverState@CPenLogic@@AEAAXKUtagPOINT@@@Z
    void ResetHoverState(unsigned long, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetInAirState@CPenLogic@@AEAAXUtagPOINT@@@Z
    void ResetInAirState(tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetResult@CPenLogic@@AEAAXEUtagPOINT@@M@Z
    void SetResult(unsigned char, tagPOINT, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHoverState@CPenLogic@@AEAAXHHHKURATIONAL@@UtagPOINT@@@Z
    void UpdateHoverState(int, int, int, unsigned long, RATIONAL, tagPOINT);
};
