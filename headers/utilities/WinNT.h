#pragma once
#include "../windissect_forwards.h"

// Reconstructed from duser.dll by Windissect. 27 member(s).
class WinNT {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateFontIndirectA@WinNT@@UEAAPEAUHFONT__@@PEBUtagLOGFONTW@@@Z
    virtual HFONT__* CreateFontIndirectA(tagLOGFONTW const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawTextA@WinNT@@UEAAHPEAUHDC__@@PEBGHPEAUtagRECT@@I@Z
    virtual int DrawTextA(HDC__*, unsigned short const *, int, tagRECT *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateProximityToRect@WinNT@@UEAAHPEBUtagRECT@@PEBUtagTOUCH_HIT_TESTING_INPUT@@PEAUtagTOUCH_HIT_TESTING_PROXIMITY_EVALUATION@@@Z
    virtual int EvaluateProximityToRect(tagRECT const *, tagTOUCH_HIT_TESTING_INPUT const *, tagTOUCH_HIT_TESTING_PROXIMITY_EVALUATION *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtTextOutA@WinNT@@UEAAHPEAUHDC__@@HHIPEBUtagRECT@@PEBGHPEBH@Z
    virtual int ExtTextOutA(HDC__*, int, int, unsigned int, tagRECT const *, unsigned short const *, int, int const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHimetricScaleFactorFromPixelLocation@WinNT@@UEAAHPEAXUtagPOINT@@PEAH2@Z
    virtual int GetHimetricScaleFactorFromPixelLocation(void *, tagPOINT, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerDevice@WinNT@@UEAAHPEAXPEAUtagPOINTER_DEVICE_INFO@@@Z
    virtual int GetPointerDevice(void *, tagPOINTER_DEVICE_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerDeviceRects@WinNT@@UEAAHPEAXPEAUtagRECT@@1@Z
    virtual int GetPointerDeviceRects(void *, tagRECT *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerFrameInfoHistory@WinNT@@UEAAHIPEAI0PEAUtagPOINTER_INFO@@@Z
    virtual int GetPointerFrameInfoHistory(unsigned int, unsigned int *, unsigned int *, tagPOINTER_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerInfo@WinNT@@UEAAHIPEAUtagPOINTER_INFO@@@Z
    virtual int GetPointerInfo(unsigned int, tagPOINTER_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPointerTouchInfo@WinNT@@UEAAHIPEAUtagPOINTER_TOUCH_INFO@@@Z
    virtual int GetPointerTouchInfo(unsigned int, tagPOINTER_TOUCH_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextExtentExPointA@WinNT@@UEAAHPEAUHDC__@@PEBGHHPEAH2PEAUtagSIZE@@@Z
    virtual int GetTextExtentExPointA(HDC__*, unsigned short const *, int, int, int *, int *, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextExtentPoint32A@WinNT@@UEAAHPEAUHDC__@@PEBGHPEAUtagSIZE@@@Z
    virtual int GetTextExtentPoint32A(HDC__*, unsigned short const *, int, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInsideLoaderLock@WinNT@@UEAAHXZ
    virtual int IsInsideLoaderLock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogicalToPhysicalPoint@WinNT@@UEAAHPEAUHWND__@@PEAUtagPOINT@@@Z
    virtual int LogicalToPhysicalPoint(HWND__*, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackTouchHitTestingProximityEvaluation@WinNT@@UEAA_JPEBUtagTOUCH_HIT_TESTING_INPUT@@PEBUtagTOUCH_HIT_TESTING_PROXIMITY_EVALUATION@@@Z
    virtual int64_t PackTouchHitTestingProximityEvaluation(tagTOUCH_HIT_TESTING_INPUT const *, tagTOUCH_HIT_TESTING_PROXIMITY_EVALUATION const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PhysicalToLogicalPoint@WinNT@@UEAAHPEAUHWND__@@PEAUtagPOINT@@@Z
    virtual int PhysicalToLogicalPoint(HWND__*, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopXForm@WinNT@@UEAAXPEAUHDC__@@PEBUtagXFORM@@@Z
    virtual void PopXForm(HDC__*, tagXFORM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushXForm@WinNT@@UEAAXPEAUHDC__@@PEAUtagXFORM@@@Z
    virtual void PushXForm(HDC__*, tagXFORM *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterTouchHitTestingWindow@WinNT@@UEAAHPEAUHWND__@@K@Z
    virtual int RegisterTouchHitTestingWindow(HWND__*, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RotateDC@WinNT@@UEAAXPEAUHDC__@@M@Z
    virtual void RotateDC(HDC__*, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScaleDC@WinNT@@UEAAXPEAUHDC__@@MM@Z
    virtual void ScaleDC(HDC__*, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIdentityTransform@WinNT@@UEAAXPEAUHDC__@@@Z
    virtual void SetIdentityTransform(HDC__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetWorldTransform@WinNT@@UEAAXPEAUHDC__@@PEBUtagXFORM@@@Z
    virtual void SetWorldTransform(HDC__*, tagXFORM const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextOutA@WinNT@@UEAAHPEAUHDC__@@HHPEBGH@Z
    virtual int TextOutA(HDC__*, int, int, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateDC@WinNT@@UEAAXPEAUHDC__@@MM@Z
    virtual void TranslateDC(HDC__*, float, float);
};
