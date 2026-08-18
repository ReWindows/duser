#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 7 member(s).
class CGestureConfigurator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GestureConfigAtTouchDown@CGestureConfigurator@@QEAAXW4DIRECTION@MT@@H@Z
    void GestureConfigAtTouchDown(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GestureConfigAtTouchMove@CGestureConfigurator@@QEAAXW4DIRECTION@MT@@@Z
    void GestureConfigAtTouchMove(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GestureConfigAtTouchUp@CGestureConfigurator@@QEAAXW4DIRECTION@MT@@@Z
    void GestureConfigAtTouchUp(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureGestureModifierEngine@CGestureConfigurator@@AEAAXH@Z
    void ConfigureGestureModifierEngine(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureMultiTouchGestureLogic@CGestureConfigurator@@AEAAXXZ
    void ConfigureMultiTouchGestureLogic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DecideDragOrScrollBasedOnDirection@CGestureConfigurator@@AEAAXW4DIRECTION@MT@@AEAH@Z
    void DecideDragOrScrollBasedOnDirection(int, int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessGestureConfig@CGestureConfigurator@@AEAAXW4DIRECTION@MT@@@Z
    void ProcessGestureConfig(int);
};
