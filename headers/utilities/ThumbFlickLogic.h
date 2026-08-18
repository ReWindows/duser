#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 5 member(s).
class ThumbFlickLogic {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeThumbFlickVelocity@ThumbFlickLogic@@QEBA?AUMANIPULATION_VELOCITY@@U2@@Z
    MANIPULATION_VELOCITY ComputeThumbFlickVelocity(MANIPULATION_VELOCITY) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsThumbFlickDetected@ThumbFlickLogic@@QEBA_NXZ
    bool IsThumbFlickDetected() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAxis@ThumbFlickLogic@@QEAAX_N0@Z
    void SetAxis(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePeakVelocity@ThumbFlickLogic@@QEAAXMM@Z
    void UpdatePeakVelocity(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateThumbDecision@ThumbFlickLogic@@QEAAX_NMIUtagPOINT@@I0@Z
    void UpdateThumbDecision(bool, float, unsigned int, tagPOINT, unsigned int, bool);
};
