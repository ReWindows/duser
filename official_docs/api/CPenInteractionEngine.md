# `global` :: `CPenInteractionEngine`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `duser.dll`. Total members: **31**.

```cpp
#pragma once

#include <cstdint>

// Forward declarations (automatically generated)
class WindissectOpaque;
class CGestureVector; 
class CManipulationProcessorCore; 
class CThemeAnimationScheduleHelper; 
class Prediction; 
class AContactTransitionEvent; class AExternalSettingsSource; class Action; class AlphaFlow; class Animation; class AtlasingManager; class AtomSet; class BaseObject; class BmpBuffer; class BufferManager; class BufferedPaintBuffer; class CCubicBezier; class CCubicPolynom; class CDebugHelp; class CDelayLogic; class CDigitizerKindInteractionEngine; class CDynamicInertiaParameters; class CExternalSettings; class CFlickAnalyzer; class CFlickMachine; class CGestureConfigurator; class CGestureModifierEngine; class CGestureParameterizer; class CGestureVector; class CInertiaMsgGenerator; class CInertiaParameter; class CInertiaProcessor; class CInertiaProcessorCore; class CInertiaProcessorForUnit; class CInertiaProcessorUnit; class CInteractionEngineConfiguration; class CInteractionEngineImpl; class CInteractionEngineParameters; class CInteractionGroupingFilter; class CInteractionStateManager; class CIsolatedScalingDetector; class CManipulationInertiaParameters; class CManipulationProcessorCore; class CManipulationProcessorCoreForUnit; class CManipulationProcessorUnit; class CManipulationSequenceGenerator; class CMouseDoubleClickLogic; class CMouseInteractionEngine; class CMousePointerLogic; class CMouseWheelProcessor; class CMultiTouchGestureLogic; class CMultiTouchInteractionEngine; class CMultipleFingerPanningDetector; class COutputCoalescingFilter; class COutputPredictor; class CPanningTouchParameterizer; class CPenInteractionEngine; class CPenLogic; class CPenLogicParameterizer; class CPointModifier; class CREATE_INFO; class CRailsDetector; class CSmoothPanningLogic; class CSysEventConverter; class CTapsMachine; class CTapsParameterizer; class CThemeAnimationScheduleHelper; class CTouchGestureMachine; class CTouchLogic; class CTouchLogicParameterizer; class CTouchMachine; class CTouchMachineWithUI; class CWmGesture; class CheckBoxGadget; class ClassLibrary; class Collision; class ComManager; class CompatibleDCCache; class ContactInfo; class Context; class ContextLock; class CoreSC; class CoreSCBuilder; class CoreST; class CoreSTBuilder; class CritLock; class D3DDevice; class D3DDeviceFactory; class DCBmpBuffer; class DeferredMsgQueue; class DeferredMsgQueueLock; class DelayedMsgQ; class Destroy; class DetachedObject; class DisplayDCCache; class DoubleUtil; class DropTarget; class DuAlphaFlow; class DuAnimation; class DuContainer; class DuDCSurface; class DuDropTarget; class DuEventGadget; class DuEventPool; class DuExpInterpolation; class DuExtension; class DuFlow; class DuGpSurface; class DuInterpolation; class DuLinearInterpolation; class DuListener; class DuLogInterpolation; class DuParkContainer; class DuParkGadget; class DuRectFlow; class DuRootGadget; class DuRotateFlow; class DuSCurveInterpolation; class DuScaleFlow; class DuSequence; class DuSurface; class DuTicketManager; class DuVisual; class DxContainer; class DxManager; class DxSurface; class DynaSet; class EditLineFGadget; class EditLineGadget; class EventGadget; class EventMsg; class ExpInterpolation; class Extension; class ExtraInfo; class ExtrapolatedValue; class ExtrapolationState; class FEATURE_LOGGED_TRAITS; class FEATURE_STATE_CHANGE_SUBSCRIPTION__; class FLICK_RESULT; class Flow; class GANI_DESC; class GArrayF; class GMA_ACTION; class GMA_ACTIONINFO; class GMSG_INPUT; class GMSG_KEYBOARD; class GMSG_MOUSE; class GMSG_MOUSECLICK; class GMSG_MOUSEWHEEL; class GMSG_POINTER; class GMSG_POINTERDRAG; class GMSG_POINTERTAP; class GMSG_QUERYHITTEST; class GPCB; class GRawList; class GTRANS_DESC; class GdiCache; class GdiDxInterop; class GpBmpBuffer; class HBITMAP__; class HBRUSH__; class HCLASS__; class HDC__; class HFONT__; class HGADGET__; class HINSTANCE__; class HPALETTE__; class HRGN__; class HROOTGADGET__; class HWND__; class HWndContainer; class IAnimationCallback; class ICrossSlideImplementor; class ID3D11Device; class ID3D11DeviceContext; class ID3D11Texture2D; class IDCompositionAnimation; class IDCompositionDevice; class IDCompositionEffectGroup; class IDCompositionMatrixTransform3D; class IDCompositionRectangleClip; class IDCompositionRotateTransform; class IDCompositionRotateTransform3D; class IDCompositionScaleTransform; class IDCompositionScaleTransform3D; class IDCompositionSkewTransform; class IDCompositionSurface; class IDCompositionTransform; class IDCompositionTransform3D; class IDCompositionTranslateTransform3D; class IDCompositionVisual; class IDXGIAdapter; class IDXGIDevice; class IDXGISurface1; class IDXSurfaceFactory; class IDXTransformFactory; class IDataObject; class IDebug; class IDropTarget; class IHoldImplementor; class IInputPaneAnimationCoordinator; class IInterpolation; class INTERACTION_CONFIGURATION_ACTION; class INTERACTION_INPUT; class INTERACTION_OUTPUT; class INTERACTION_PARAMETER_VALUE; class IPredictionImplementor; class ITranslationImplementor; class IUIAnimationManager2; class IUIAnimationStoryboard2; class IUIAnimationTransitionLibrary2; class IUIAnimationVariable2; class IUnknown; class IWheelImplementor; class ImageGadget; class InertiaMotionDesktop; class InertiaMotionMobile; class InertiaProcessorExceptions; class InertiaValidations; class InitStub; class InitialState; class InteractionInfo; class Interpolation; class LayerBmpBuffer; class LinearInterpolation; class ListNode; class LogInterpolation; class MANIPULATION_STATE; class MANIPULATION_TRANSFORM; class MANIPULATION_VELOCITIES; class MANIPULATION_VELOCITY; class MANIPULATOR; class MANIPULATOR_STATE; class ManipulationProcessorUnitResult; class Math; class Matrix3; class Matrix3const; class MethodMsg; class MotionSC; class MotionSCBuilder; class MsgClass; class MsgEntry; class MsgObject; class MsgTable; class NcContainer; class OSAL; class ObjectCache; class OldAlphaAnimation; class OldAnimation; class OldDropTarget; class OldExpInterpolation; class OldExtension; class OldLinearInterpolation; class OldLogInterpolation; class OldRectAnimation; class OldRotateAnimation; class OldSInterpolation; class OldScaleAnimation; class OldTargetLock; class PaintInfo; class Pair; class PendingStoryboard; class Prediction; class PropSet; class QpcTimeConverter; class RATIONAL; class RU; class RectFlow; class RegionData; class RegionSurface; class ReleaseSRWLockExclusive; class ResourceManager; class RgnCache; class Root; class RotateFlow; class SCurveInterpolation; class SEventGadget; class SExtension; class SFlow; class SInterpolation; class SListener; class SVisual; class SafeMsgQ; class ScaleFlow; class Scheduler; class Sequence; class StagingBuffer; class StagingBufferFeatureLevel10; class StagingBufferFeatureLevel9; class SubContext; class SubThread; class SystemTimingInfo; class TargetLock; class Thread; class ThumbFlickLogic; class TiledGdiSurface; class TouchInteractionClient; class TouchInteractionHelper; class TouchInteractionHelperInternal; class TransitionCurveChangeHandler; class TransitionSC; class TransitionSCBuilder; class TransitionStoryboard; class TransitionStoryboardInfo; class TransitionVisual; class TrxBuffer; class VECTORF; class Validations; class Vector3; class Vector3const; class VectorD; class VectorGadget; class Visual; class WinNT; class WndBridge; class XFormInfo; class _CONTEXT; class _EXCEPTION_RECORD; class _GUID; class _LARGE_INTEGER; class _POINTL; class _RTL_SRWLOCK; class _TP_CALLBACK_INSTANCE; class _TP_TIMER; class __MIDL___MIDL_itf_UIAnimation_0000_0002_0003; class __WIL_RTL_FEATURE_USAGE_DATA; class __WIL__WNF_STATE_NAME; class tagBITMAPINFOHEADER; class tagBUFFER_INFO; class tagDIBSECTION; class tagFGM_INFO; class tagGMSG; class tagINITGADGET; class tagLAYER_INFO; class tagLOGFONTW; class tagMONITORINFOEXW; class tagMSG; class tagPOINT; class tagPOINTER_DEVICE_INFO; class tagPOINTER_INFO; class tagPOINTER_TOUCH_INFO; class tagPOINTF; class tagPointerTrack; class tagRANGEDW; class tagRECT; class tagROOT_INFO; class tagSIZE; class tagTOUCH_HIT_TESTING_INPUT; class tagTOUCH_HIT_TESTING_PROXIMITY_EVALUATION; class tagXFORM; class wil_FeatureState; class wil_details_FeatureReportingCache; class wil_details_FeatureStateCache; class wil_details_FeatureUsageSRUM; 
namespace ATL { class CDynamicStdCallThunk2; } 
namespace DUser { class EventDelegate; class Gadget; class MessageClassGuts; class MessageClassStub; class MessageClassSuper; } 
namespace Gdiplus { class Brush; class Color; class Graphics; class Matrix; class Pen; class RectF; class Region; class SolidBrush; } 
namespace MT { class GESTURE_DATA; class SPEED; } 
namespace std { class nullptr_t; } 
namespace wil { class FailureInfo; class srwlock; class unique_any_t; } 
namespace wil { namespace details { class DestroyThreadPoolTimer; class ResultStatus; class SystemThreadPoolMethods; class ThreadFailureCallbackHolder; class resource_policy; class unique_storage; } } 
namespace wil { namespace details_abi { class FeatureStateData; class ProcessLocalData; class ProcessLocalStorageData; class RawUsageIndex; class ThreadLocalData; class UsageIndexProperty; class UsageIndexes; class heap_buffer; class heap_vector; } } 
namespace wistd { class function; class integral_constant; } 
namespace wistd { namespace __function { class __base; } } 

// Reconstructed from duser.dll by Windissect. 31 member(s).
class CPenInteractionEngine {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FlushResults@CPenInteractionEngine@@UEAAJXZ
    virtual long FlushResults();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHoldImplementor@CPenInteractionEngine@@UEAAPEAVIHoldImplementor@@XZ
    virtual IHoldImplementor * GetHoldImplementor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInertiaEnd@CPenInteractionEngine@@UEBAJPEAUMANIPULATION_TRANSFORM@@PEAK11@Z
    virtual long GetInertiaEnd(MANIPULATION_TRANSFORM *, unsigned long *, unsigned long *, unsigned long *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResult@CPenInteractionEngine@@UEBAAEBUINTERACTION_OUTPUT@@H@Z
    virtual INTERACTION_OUTPUT const & GetResult(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResultsCount@CPenInteractionEngine@@UEBAHXZ
    virtual int GetResultsCount() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTimeToIdle@CPenInteractionEngine@@UEBAJPEAK@Z
    virtual long GetTimeToIdle(unsigned long *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InInertia@CPenInteractionEngine@@UEBAJPEAH@Z
    virtual long InInertia(int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsManipulationInertiaSupported@CPenInteractionEngine@@UEBA_NXZ
    virtual bool IsManipulationInertiaSupported() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactDown@CPenInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@MK@Z
    virtual long OnContactDown(unsigned long, tagPOINT, unsigned long, RATIONAL, float, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactEnter@CPenInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@K@Z
    virtual long OnContactEnter(unsigned long, tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactInAirMove@CPenInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@K@Z
    virtual long OnContactInAirMove(unsigned long, tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactLeave@CPenInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@K@Z
    virtual long OnContactLeave(unsigned long, tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactMove@CPenInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@MK@Z
    virtual long OnContactMove(unsigned long, tagPOINT, unsigned long, RATIONAL, float, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContactUp@CPenInteractionEngine@@UEAAJKUtagPOINT@@KURATIONAL@@K@Z
    virtual long OnContactUp(unsigned long, tagPOINT, unsigned long, RATIONAL, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnResetTime@CPenInteractionEngine@@UEAAJK@Z
    virtual long OnResetTime(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStop@CPenInteractionEngine@@UEAAJK@Z
    virtual long OnStop(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTimer@CPenInteractionEngine@@UEAAJK@Z
    virtual long OnTimer(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInertiaSetupCallback@CPenInteractionEngine@@UEAAJP6AXPEAXPEBUMANIPULATION_VELOCITY@@PEAM22PEA_N2@Z0@Z
    virtual long RegisterInertiaSetupCallback(void ( *)(void *, MANIPULATION_VELOCITY const *, float *, float *, float *, bool *, float *), void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@CPenInteractionEngine@@UEAAJXZ
    virtual long Reset();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHoldParameter@CPenInteractionEngine@@UEAAJW4HOLD_PARAMETER@@M@Z
    virtual long SetHoldParameter(int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInertiaInitialTime@CPenInteractionEngine@@UEAAJK@Z
    virtual long SetInertiaInitialTime(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInertiaParameter@CPenInteractionEngine@@UEAAJW4ManipulationDimension@@M@Z
    virtual long SetInertiaParameter(int, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPivot@CPenInteractionEngine@@UEAAJMMM@Z
    virtual long SetPivot(float, float, float);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CPenInteractionEngine@@UEAA@XZ
    virtual ~CPenInteractionEngine();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CPenInteractionEngine@@MEAAJPEAVCInteractionEngineConfiguration@@PEBVCInteractionEngineParameters@@@Z
    virtual long Initialize(CInteractionEngineConfiguration *, CInteractionEngineParameters const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Create@CPenInteractionEngine@@IEAAJXZ
    long _Create();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Destroy@CPenInteractionEngine@@IEAAXXZ
    void _Destroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureInertiaProcessorUnit@CPenInteractionEngine@@IEAAJXZ
    long _EnsureInertiaProcessorUnit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Output@CPenInteractionEngine@@IEAAJKHAEBUManipulationProcessorUnitResult@@@Z
    long _Output(unsigned long, int, ManipulationProcessorUnitResult const &);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `~CPenInteractionEngine` | `void` | `Dtor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `FlushResults` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetHoldImplementor` | `class IHoldImplementor *` | `Accessor` | `Pdb` | No (PDB) |
| `GetInertiaEnd` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetResult` | `struct INTERACTION_OUTPUT const &` | `Accessor` | `Pdb` | No (PDB) |
| `GetResultsCount` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetTimeToIdle` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `InInertia` | `long` | `Method` | `Pdb` | No (PDB) |
| `Initialize` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsManipulationInertiaSupported` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `OnContactDown` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnContactEnter` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnContactInAirMove` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnContactLeave` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnContactMove` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnContactUp` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnResetTime` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnStop` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnTimer` | `long` | `Method` | `Pdb` | No (PDB) |
| `RegisterInertiaSetupCallback` | `long` | `Method` | `Pdb` | No (PDB) |
| `Reset` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetHoldParameter` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetInertiaInitialTime` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetInertiaParameter` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetPivot` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `_Create` | `long` | `Method` | `Pdb` | No (PDB) |
| `_Destroy` | `void` | `Method` | `Pdb` | No (PDB) |
| `_EnsureInertiaProcessorUnit` | `long` | `Method` | `Pdb` | No (PDB) |
| `_Output` | `long` | `Method` | `Pdb` | No (PDB) |
