#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 15 member(s).
class CMouseWheelProcessor {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInertiaDeceleration@CMouseWheelProcessor@@QEBAJPEAUMANIPULATION_VELOCITY@@@Z
    long GetInertiaDeceleration(MANIPULATION_VELOCITY *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInertiaEndTransform@CMouseWheelProcessor@@QEBAJPEAUMANIPULATION_TRANSFORM@@@Z
    long GetInertiaEndTransform(MANIPULATION_TRANSFORM *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResult@CMouseWheelProcessor@@QEBAJAEAUMANIPULATION_TRANSFORM@@AEAUMANIPULATION_VELOCITY@@@Z
    long GetResult(MANIPULATION_TRANSFORM &, MANIPULATION_VELOCITY &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRunning@CMouseWheelProcessor@@QEBAHXZ
    int IsRunning() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTime@CMouseWheelProcessor@@QEAAJK@Z
    long ProcessTime(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessWheel@CMouseWheelProcessor@@QEAAJKHW4Configuration@1@W4Direction@1@1@Z
    long ProcessWheel(unsigned long, int, int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCharTranslationX@CMouseWheelProcessor@@QEAAJM@Z
    long SetCharTranslationX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetCharTranslationY@CMouseWheelProcessor@@QEAAJM@Z
    long SetCharTranslationY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeltaRotation@CMouseWheelProcessor@@QEAAJM@Z
    long SetDeltaRotation(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeltaScale@CMouseWheelProcessor@@QEAAJM@Z
    long SetDeltaScale(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPageTranslationX@CMouseWheelProcessor@@QEAAJM@Z
    long SetPageTranslationX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPageTranslationY@CMouseWheelProcessor@@QEAAJM@Z
    long SetPageTranslationY(float);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetRStart@CMouseWheelProcessor@@AEBANXZ
    double _GetRStart() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWheelExpansion@CMouseWheelProcessor@@AEBAJW4Direction@1@PEAM@Z
    long _GetWheelExpansion(int, float *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetWheelTranslation@CMouseWheelProcessor@@AEBAJW4Direction@1@0PEAM@Z
    long _GetWheelTranslation(int, int, float *) const;
};
