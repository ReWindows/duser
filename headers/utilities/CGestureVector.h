#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 10 member(s).
class CGestureVector {
public:
    class CPivot;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddPointToVector@CGestureVector@@QEAAXUtagPOINT@@K@Z
    void AddPointToVector(tagPOINT, unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGestureVector@@QEAA@XZ
    CGestureVector();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReUseVector@CGestureVector@@QEAAXXZ
    void ReUseVector();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetVectorParameters@CGestureVector@@QEAAXXZ
    void ResetVectorParameters();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateDirection@CGestureVector@@IEAAIN@Z
    unsigned int CalculateDirection(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateTotalAngle@CGestureVector@@IEAANNUtagPOINT@@@Z
    double CalculateTotalAngle(double, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FitAngle@CGestureVector@@IEAANN@Z
    double FitAngle(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLinear@CGestureVector@@IEAAHNN@Z
    int IsLinear(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSpeedWithDirection@CGestureVector@@IEAAXXZ
    void UpdateSpeedWithDirection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVectorSpeed@CGestureVector@@IEAAXUtagPOINT@@K@Z
    void UpdateVectorSpeed(tagPOINT, unsigned long);
};
