# `global` :: `CMultiTouchGestureLogic`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `duser.dll`. Total members: **53**.

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

// Reconstructed from duser.dll by Windissect. 53 member(s).
class CMultiTouchGestureLogic {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustInitialCrossSlideJump@CMultiTouchGestureLogic@@QEAAXUtagPOINT@@AEAU2@@Z
    void AdjustInitialCrossSlideJump(tagPOINT, tagPOINT &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginManipulationProcessingIfAllowed@CMultiTouchGestureLogic@@QEAA_NXZ
    bool BeginManipulationProcessingIfAllowed();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CMultiTouchGestureLogic@@QEAA@PEBVCGestureParameterizer@@PEBVCTouchLogicParameterizer@@PEAVCOutputPredictor@@H@Z
    CMultiTouchGestureLogic(CGestureParameterizer const *, CTouchLogicParameterizer const *, COutputPredictor *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIfManipulationOngoing@CMultiTouchGestureLogic@@QEAA_NXZ
    bool CheckIfManipulationOngoing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeVelocityQuickFlickLogic@CMultiTouchGestureLogic@@QEAA?AUMANIPULATION_VELOCITY@@AEBUManipulationProcessorUnitResult@@@Z
    MANIPULATION_VELOCITY ComputeVelocityQuickFlickLogic(ManipulationProcessorUnitResult const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetectGesture@CMultiTouchGestureLogic@@QEAAHKURATIONAL@@@Z
    int DetectGesture(unsigned long, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetectGestureAll@CMultiTouchGestureLogic@@QEAAHKURATIONAL@@@Z
    int DetectGestureAll(unsigned long, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetectGestureRelaxed@CMultiTouchGestureLogic@@QEAAHKURATIONAL@@@Z
    int DetectGestureRelaxed(unsigned long, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoPrediction@CMultiTouchGestureLogic@@QEAA?AUtagPOINT@@U2@K@Z
    tagPOINT DoPrediction(tagPOINT, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndCrossSlide@CMultiTouchGestureLogic@@QEAAXUtagPOINT@@@Z
    void EndCrossSlide(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureManipulationProcessorForVelocity@CMultiTouchGestureLogic@@QEAAHXZ
    int EnsureManipulationProcessorForVelocity();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCrossSlideTransform@CMultiTouchGestureLogic@@QEAAXUtagPOINT@@AEAU2@@Z
    void GetCrossSlideTransform(tagPOINT, tagPOINT &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentFinger@CMultiTouchGestureLogic@@QEAAAEAVCGestureVector@@K@Z
    CGestureVector & GetCurrentFinger(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInnerAngle@CMultiTouchGestureLogic@@QEAAHNNAEAN@Z
    int GetInnerAngle(double, double, double &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPivotAngle@CMultiTouchGestureLogic@@QEAANXZ
    double GetPivotAngle();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSpeed@CMultiTouchGestureLogic@@QEAA?AUSPEED@MT@@XZ
    ::MT::SPEED GetSpeed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleVectorsAtCursorUp@CMultiTouchGestureLogic@@QEAAXK@Z
    void HandleVectorsAtCursorUp(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPassedDistanceThreshold@CMultiTouchGestureLogic@@QEAAHVCGestureVector@@UtagPOINT@@URATIONAL@@@Z
    int HasPassedDistanceThreshold(CGestureVector, tagPOINT, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeCrossSlideInstanceState@CMultiTouchGestureLogic@@QEAAXH@Z
    void InitializeCrossSlideInstanceState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePrediction@CMultiTouchGestureLogic@@QEAAXUtagPOINT@@@Z
    void InitializePrediction(tagPOINT);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGestureAccurate@CMultiTouchGestureLogic@@QEAAHW4GESTURE_TYPE@MT@@URATIONAL@@@Z
    int IsGestureAccurate(int, RATIONAL);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInertiaPossible@CMultiTouchGestureLogic@@QEAAHUtagPOINT@@URATIONAL@@@Z
    int IsInertiaPossible(tagPOINT, RATIONAL);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsQuickFlick@CMultiTouchGestureLogic@@QEAAHXZ
    int IsQuickFlick();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRotate@CMultiTouchGestureLogic@@QEAAHN@Z
    int IsRotate(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTranslationWithContactCount@CMultiTouchGestureLogic@@QEAA_NXZ
    bool IsTranslationWithContactCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidCursor@CMultiTouchGestureLogic@@QEAAHK@Z
    int IsValidCursor(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsZoom@CMultiTouchGestureLogic@@QEAAHN@Z
    int IsZoom(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromoteToPrimaryFinger@CMultiTouchGestureLogic@@QEAAXK@Z
    void PromoteToPrimaryFinger(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetGestureEngine@CMultiTouchGestureLogic@@QEAAXXZ
    void ResetGestureEngine();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetQuickFlickLogicState@CMultiTouchGestureLogic@@QEAAXXZ
    void ResetQuickFlickLogicState();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGestureConfig@CMultiTouchGestureLogic@@QEAAXUMULTITOUCH_GESTURE_SETTINGS@1@H@Z
    void SetGestureConfig(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGestureStatus@CMultiTouchGestureLogic@@QEAAXAEBUManipulationProcessorUnitResult@@@Z
    void SetGestureStatus(ManipulationProcessorUnitResult const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGestureStatus@CMultiTouchGestureLogic@@QEAAXW4GESTURE_STATUS@MT@@URATIONAL@@@Z
    void SetGestureStatus(int, RATIONAL);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGestureStatus@CMultiTouchGestureLogic@@QEAAXW4GESTURE_TYPE@MT@@UtagPOINT@@1W4GESTURE_STATUS@3@I@Z
    void SetGestureStatus(int, tagPOINT, tagPOINT, int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGestureStatus@CMultiTouchGestureLogic@@QEAAXW4GESTURE_TYPE@MT@@UtagPOINT@@1W4GESTURE_STATUS@3@W4CROSS_SLIDE_GESTURE_FLAGS@3@IMMUMANIPULATION_VELOCITY@@UMANIPULATION_TRANSFORM@@5W4MANIPULATION_RAILS_STATE@@@Z
    void SetGestureStatus(int, tagPOINT, tagPOINT, int, int, unsigned int, float, float, MANIPULATION_VELOCITY, MANIPULATION_TRANSFORM, MANIPULATION_TRANSFORM, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGestureStatus@CMultiTouchGestureLogic@@QEAAXW4GESTURE_TYPE@MT@@UtagPOINT@@W4GESTURE_STATUS@3@W4CROSS_SLIDE_GESTURE_FLAGS@3@@Z
    void SetGestureStatus(int, tagPOINT, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetGestureStatus@CMultiTouchGestureLogic@@QEAAXW4GESTURE_TYPE@MT@@W4GESTURE_STATUS@3@MMUMANIPULATION_VELOCITY@@UMANIPULATION_TRANSFORM@@3W4MANIPULATION_RAILS_STATE@@@Z
    void SetGestureStatus(int, int, float, float, MANIPULATION_VELOCITY, MANIPULATION_TRANSFORM, MANIPULATION_TRANSFORM, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPivot@CMultiTouchGestureLogic@@QEAAJMMM@Z
    long SetPivot(float, float, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTranslationParameter@CMultiTouchGestureLogic@@QEAAJW4TRANSLATION_PARAMETER@@M@Z
    long SetTranslationParameter(int, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDelayManipulationStart@CMultiTouchGestureLogic@@QEAA_NXZ
    bool ShouldDelayManipulationStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldDoJumpReduction@CMultiTouchGestureLogic@@QEAAHURATIONAL@@@Z
    int ShouldDoJumpReduction(RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartCrossSlide@CMultiTouchGestureLogic@@QEAAXUtagPOINT@@URATIONAL@@@Z
    void StartCrossSlide(tagPOINT, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchDown@CMultiTouchGestureLogic@@QEAAXKUtagPOINT@@KURATIONAL@@MK@Z
    void TouchDown(unsigned long, tagPOINT, unsigned long, RATIONAL, float, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchMove@CMultiTouchGestureLogic@@QEAAXKUtagPOINT@@KURATIONAL@@MK@Z
    void TouchMove(unsigned long, tagPOINT, unsigned long, RATIONAL, float, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TouchUp@CMultiTouchGestureLogic@@QEAAXKUtagPOINT@@KURATIONAL@@@Z
    void TouchUp(unsigned long, tagPOINT, unsigned long, RATIONAL);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformFromCrossSlideSpace@CMultiTouchGestureLogic@@QEAAXUtagPOINT@@AEAU2@@Z
    void TransformFromCrossSlideSpace(tagPOINT, tagPOINT &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransformToCrossSlideSpace@CMultiTouchGestureLogic@@QEAAXUtagPOINT@@AEAU2@@Z
    void TransformToCrossSlideSpace(tagPOINT, tagPOINT &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionCrossSlide@CMultiTouchGestureLogic@@QEAA_NEUtagPOINT@@AEAE@Z
    bool TransitionCrossSlide(unsigned char, tagPOINT, unsigned char &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCrossSlide@CMultiTouchGestureLogic@@QEAAXUtagPOINT@@@Z
    void UpdateCrossSlide(tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDuplicateDetectionState@CMultiTouchGestureLogic@@QEAAXUtagPOINT@@UMANIPULATION_VELOCITY@@@Z
    void UpdateDuplicateDetectionState(tagPOINT, MANIPULATION_VELOCITY);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateQuickFlickLogicState@CMultiTouchGestureLogic@@QEAAXUtagPOINT@@KK@Z
    void UpdateQuickFlickLogicState(tagPOINT, unsigned long, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSmoothPanningLogicState@CMultiTouchGestureLogic@@QEAAXAEAUManipulationProcessorUnitResult@@KURATIONAL@@@Z
    void UpdateSmoothPanningLogicState(ManipulationProcessorUnitResult &, unsigned long, RATIONAL);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CMultiTouchGestureLogic@@QEAA@XZ
    ~CMultiTouchGestureLogic();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `SetGestureConfig` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `TouchMove` | `void` | `Method` | `Pdb` | No (PDB) |
| `TouchUp` | `void` | `Method` | `Pdb` | No (PDB) |
| `DoPrediction` | `struct tagPOINT` | `Method` | `Pdb` | No (PDB) |
| `IsValidCursor` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetCurrentFinger` | `class CGestureVector &` | `Accessor` | `Pdb` | No (PDB) |
| `CMultiTouchGestureLogic` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `~CMultiTouchGestureLogic` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `AdjustInitialCrossSlideJump` | `void` | `Method` | `Pdb` | No (PDB) |
| `BeginManipulationProcessingIfAllowed` | `bool` | `Method` | `Pdb` | No (PDB) |
| `CheckIfManipulationOngoing` | `bool` | `Method` | `Pdb` | No (PDB) |
| `ComputeVelocityQuickFlickLogic` | `struct MANIPULATION_VELOCITY` | `Method` | `Pdb` | No (PDB) |
| `DetectGesture` | `int` | `Method` | `Pdb` | No (PDB) |
| `DetectGestureAll` | `int` | `Method` | `Pdb` | No (PDB) |
| `DetectGestureRelaxed` | `int` | `Method` | `Pdb` | No (PDB) |
| `EndCrossSlide` | `void` | `Method` | `Pdb` | No (PDB) |
| `EnsureManipulationProcessorForVelocity` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetCrossSlideTransform` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetInnerAngle` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetPivotAngle` | `double` | `Accessor` | `Pdb` | No (PDB) |
| `GetSpeed` | `struct MT::SPEED` | `Accessor` | `Pdb` | No (PDB) |
| `HandleVectorsAtCursorUp` | `void` | `Method` | `Pdb` | No (PDB) |
| `HasPassedDistanceThreshold` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `InitializeCrossSlideInstanceState` | `void` | `Method` | `Pdb` | No (PDB) |
| `InitializePrediction` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsGestureAccurate` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsInertiaPossible` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsQuickFlick` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsRotate` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsTranslationWithContactCount` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `IsZoom` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `PromoteToPrimaryFinger` | `void` | `Method` | `Pdb` | No (PDB) |
| `ResetGestureEngine` | `void` | `Method` | `Pdb` | No (PDB) |
| `ResetQuickFlickLogicState` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetGestureStatus` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetGestureStatus` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetGestureStatus` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetGestureStatus` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetGestureStatus` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetGestureStatus` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `SetPivot` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetTranslationParameter` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ShouldDelayManipulationStart` | `bool` | `Method` | `Pdb` | No (PDB) |
| `ShouldDoJumpReduction` | `int` | `Method` | `Pdb` | No (PDB) |
| `StartCrossSlide` | `void` | `Method` | `Pdb` | No (PDB) |
| `TouchDown` | `void` | `Method` | `Pdb` | No (PDB) |
| `TransformFromCrossSlideSpace` | `void` | `Method` | `Pdb` | No (PDB) |
| `TransformToCrossSlideSpace` | `void` | `Method` | `Pdb` | No (PDB) |
| `TransitionCrossSlide` | `bool` | `Method` | `Pdb` | No (PDB) |
| `UpdateCrossSlide` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateDuplicateDetectionState` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateQuickFlickLogicState` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateSmoothPanningLogicState` | `void` | `Method` | `Pdb` | No (PDB) |
