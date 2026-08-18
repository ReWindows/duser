# `global` :: `CManipulationProcessorCore`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `duser.dll`. Total members: **34**.

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

// Reconstructed from duser.dll by Windissect. 34 member(s).
class CManipulationProcessorCore {
public:
    class LimitedQueue;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginTrack@CManipulationProcessorCore@@QEAAJK@Z
    long BeginTrack(unsigned long);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CManipulationProcessorCore@@QEAA@XZ
    CManipulationProcessorCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteManipulation@CManipulationProcessorCore@@QEAAJXZ
    long CompleteManipulation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CursorDown@CManipulationProcessorCore@@QEAAJKMMK@Z
    long CursorDown(unsigned long, float, float, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CursorMove@CManipulationProcessorCore@@QEAAJKMMK@Z
    long CursorMove(unsigned long, float, float, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CursorUp@CManipulationProcessorCore@@QEAAJKMMK@Z
    long CursorUp(unsigned long, float, float, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndTrack@CManipulationProcessorCore@@QEAAJKK@Z
    long EndTrack(unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetState@CManipulationProcessorCore@@UEAAXXZ
    virtual void ResetState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMinimumScaleRotateRadius@CManipulationProcessorCore@@QEAAJM@Z
    long SetMinimumScaleRotateRadius(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPivotPointX@CManipulationProcessorCore@@QEAAJM@Z
    long SetPivotPointX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPivotPointY@CManipulationProcessorCore@@QEAAJM@Z
    long SetPivotPointY(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPivotRadius@CManipulationProcessorCore@@QEAAJM@Z
    long SetPivotRadius(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSupportedManipulations@CManipulationProcessorCore@@QEAAJW4MANIPULATION_PROCESSOR_MANIPULATIONS@@@Z
    long SetSupportedManipulations(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UsePreviousPivot@CManipulationProcessorCore@@UEAAHXZ
    virtual int UsePreviousPivot();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CManipulationProcessorCore@@UEAA@XZ
    virtual ~CManipulationProcessorCore();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationComplete@CManipulationProcessorCore@@MEAAXMMMMMMM@Z
    virtual void OnManipulationComplete(float, float, float, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationDelta@CManipulationProcessorCore@@MEAAXMMMMMMMMMMMM@Z
    virtual void OnManipulationDelta(float, float, float, float, float, float, float, float, float, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnManipulationStarted@CManipulationProcessorCore@@MEAAXMM@Z
    virtual void OnManipulationStarted(float, float);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateMultiManipulatorRotationAndScale@CManipulationProcessorCore@@AEAAXUtagPOINTF@@PEAM11@Z
    void CalculateMultiManipulatorRotationAndScale(tagPOINTF, float *, float *, float *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateSingleManipulatorRotation@CManipulationProcessorCore@@AEAAMUtagPOINTF@@0H@Z
    float CalculateSingleManipulatorRotation(tagPOINTF, tagPOINTF, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateTransforms@CManipulationProcessorCore@@AEAAXK@Z
    void CalculateTransforms(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateWeightedMovingAverage@CManipulationProcessorCore@@AEAA?AUMANIPULATION_VELOCITIES@@W4MANIPULATION_PROCESSOR_MANIPULATIONS@@@Z
    MANIPULATION_VELOCITIES CalculateWeightedMovingAverage(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAveragePoint@CManipulationProcessorCore@@AEAA?AUtagPOINTF@@XZ
    tagPOINTF GetAveragePoint();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeManipulationState@CManipulationProcessorCore@@AEAAXK@Z
    void InitializeManipulationState(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPinned@CManipulationProcessorCore@@AEAAHXZ
    int IsPinned();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnProcessManipulators@CManipulationProcessorCore@@AEAAXKQEAUMANIPULATOR@@H0H0H@Z
    void OnProcessManipulators(unsigned long, MANIPULATOR * const, int, MANIPULATOR * const, int, MANIPULATOR * const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAddsAndRemoves@CManipulationProcessorCore@@AEAAXKQEAUMANIPULATOR@@H0H@Z
    void ProcessAddsAndRemoves(unsigned long, MANIPULATOR * const, int, MANIPULATOR * const, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessCompleteManipulation@CManipulationProcessorCore@@AEAAXXZ
    void ProcessCompleteManipulation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseEvents@CManipulationProcessorCore@@AEAAXUtagPOINTF@@UVECTORF@@MMM@Z
    void RaiseEvents(tagPOINTF, VECTORF, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveManipulator@CManipulationProcessorCore@@AEAAXK@Z
    void RemoveManipulator(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVectorsFromPoint@CManipulationProcessorCore@@AEAAXUtagPOINTF@@@Z
    void SetVectorsFromPoint(tagPOINTF);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManipulators@CManipulationProcessorCore@@AEAA_NQEAUMANIPULATOR@@H@Z
    bool UpdateManipulators(MANIPULATOR * const, int);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `UsePreviousPivot` | `int` | `Method` | `Pdb` | No (PDB) |
| `OnManipulationComplete` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnManipulationDelta` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnManipulationStarted` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetSupportedManipulations` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `CalculateWeightedMovingAverage` | `struct MANIPULATION_VELOCITIES` | `Method` | `Pdb` | No (PDB) |
| `UpdateManipulators` | `bool` | `Method` | `Pdb` | No (PDB) |
| `CManipulationProcessorCore` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `InitializeManipulationState` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetAveragePoint` | `struct tagPOINTF` | `Accessor` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `~CManipulationProcessorCore` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `BeginTrack` | `long` | `Method` | `Pdb` | No (PDB) |
| `CalculateMultiManipulatorRotationAndScale` | `void` | `Method` | `Pdb` | No (PDB) |
| `CalculateSingleManipulatorRotation` | `float` | `Method` | `Pdb` | No (PDB) |
| `CalculateTransforms` | `void` | `Method` | `Pdb` | No (PDB) |
| `CompleteManipulation` | `long` | `Method` | `Pdb` | No (PDB) |
| `CursorDown` | `long` | `Method` | `Pdb` | No (PDB) |
| `CursorMove` | `long` | `Method` | `Pdb` | No (PDB) |
| `CursorUp` | `long` | `Method` | `Pdb` | No (PDB) |
| `EndTrack` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsPinned` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `OnProcessManipulators` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessAddsAndRemoves` | `void` | `Method` | `Pdb` | No (PDB) |
| `ProcessCompleteManipulation` | `void` | `Method` | `Pdb` | No (PDB) |
| `RaiseEvents` | `void` | `Method` | `Pdb` | No (PDB) |
| `RemoveManipulator` | `void` | `Method` | `Pdb` | No (PDB) |
| `ResetState` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetMinimumScaleRotateRadius` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetPivotPointX` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetPivotPointY` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetPivotRadius` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetVectorsFromPoint` | `void` | `Accessor` | `Pdb` | No (PDB) |
