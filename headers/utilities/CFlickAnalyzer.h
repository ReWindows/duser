#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 14 member(s).
class CFlickAnalyzer {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CFlickAnalyzer@@QEAA@XZ
    CFlickAnalyzer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeTablet@CFlickAnalyzer@@QEAAJUtagRECT@@NNN@Z
    long InitializeTablet(tagRECT, double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCursorDown@CFlickAnalyzer@@QEAAXKUtagPOINT@@0N@Z
    void OnCursorDown(unsigned long, tagPOINT, tagPOINT, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCursorUp@CFlickAnalyzer@@QEAAXKUtagPOINT@@0N@Z
    void OnCursorUp(unsigned long, tagPOINT, tagPOINT, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPacket@CFlickAnalyzer@@QEAAXKUtagPOINT@@0NH@Z
    void OnPacket(unsigned long, tagPOINT, tagPOINT, double, int);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPoint@CFlickAnalyzer@@IEAAXUtagPOINT@@0N@Z
    void AddPoint(tagPOINT, tagPOINT, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Analyze@CFlickAnalyzer@@IEAAXNH@Z
    void Analyze(double, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckWithThreshhold@CFlickAnalyzer@@MEAAXUtagPOINT@@N@Z
    virtual void CheckWithThreshhold(tagPOINT, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPhysicalCoordinates@CFlickAnalyzer@@IEAAXUtagPOINT@@0PEAU2@@Z
    void GetPhysicalCoordinates(tagPOINT, tagPOINT, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPacket@CFlickAnalyzer@@IEAAXKUtagPOINT@@0NH@Z
    void ProcessPacket(unsigned long, tagPOINT, tagPOINT, double, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetMachine@CFlickAnalyzer@@IEAAXXZ
    void ResetMachine();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStableRect@CFlickAnalyzer@@IEAAXN@Z
    void SetStableRect(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToleranceCore@CFlickAnalyzer@@MEAAJN@Z
    virtual long SetToleranceCore(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTimePeriod@CFlickAnalyzer@@MEAAXKH@Z
    virtual void UpdateTimePeriod(unsigned long, int);
};
