# `global` :: `DuSequence`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `duser.dll`. Total members: **37**.

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

// Reconstructed from duser.dll by Windissect. 37 member(s).
class DuSequence {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiAddKeyFrame@DuSequence@@QEAAJPEAUAddKeyFrameMsg@Sequence@@@Z
    long ApiAddKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiAddRef@DuSequence@@QEAAJPEAUAddRefMsg@Sequence@@@Z
    long ApiAddRef(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiFindKeyFrame@DuSequence@@QEAAJPEAUFindKeyFrameMsg@Sequence@@@Z
    long ApiFindKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetDelay@DuSequence@@QEAAJPEAUGetDelayMsg@Sequence@@@Z
    long ApiGetDelay(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetFlow@DuSequence@@QEAAJPEAUGetFlowMsg@Sequence@@@Z
    long ApiGetFlow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetFramePause@DuSequence@@QEAAJPEAUGetFramePauseMsg@Sequence@@@Z
    long ApiGetFramePause(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetInterpolation@DuSequence@@QEAAJPEAUGetInterpolationMsg@Sequence@@@Z
    long ApiGetInterpolation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetKeyFrame@DuSequence@@QEAAJPEAUGetKeyFrameMsg@Sequence@@@Z
    long ApiGetKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetKeyFrameCount@DuSequence@@QEAAJPEAUGetKeyFrameCountMsg@Sequence@@@Z
    long ApiGetKeyFrameCount(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetLength@DuSequence@@QEAAJPEAUGetLengthMsg@Sequence@@@Z
    long ApiGetLength(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetTime@DuSequence@@QEAAJPEAUGetTimeMsg@Sequence@@@Z
    long ApiGetTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGotoTime@DuSequence@@QEAAJPEAUGotoTimeMsg@Sequence@@@Z
    long ApiGotoTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiOnEvent@DuSequence@@QEAAJPEAUEventMsg@@@Z
    long ApiOnEvent(EventMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiPlay@DuSequence@@QEAAJPEAUPlayMsg@Sequence@@@Z
    long ApiPlay(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiRelease@DuSequence@@QEAAJPEAUReleaseMsg@Sequence@@@Z
    long ApiRelease(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiRemoveAllKeyFrames@DuSequence@@QEAAJPEAURemoveAllKeyFramesMsg@Sequence@@@Z
    long ApiRemoveAllKeyFrames(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiRemoveKeyFrame@DuSequence@@QEAAJPEAURemoveKeyFrameMsg@Sequence@@@Z
    long ApiRemoveKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiReset@DuSequence@@QEAAJPEAUResetMsg@Sequence@@@Z
    long ApiReset(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetDelay@DuSequence@@QEAAJPEAUSetDelayMsg@Sequence@@@Z
    long ApiSetDelay(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetFlow@DuSequence@@QEAAJPEAUSetFlowMsg@Sequence@@@Z
    long ApiSetFlow(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetFramePause@DuSequence@@QEAAJPEAUSetFramePauseMsg@Sequence@@@Z
    long ApiSetFramePause(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetInterpolation@DuSequence@@QEAAJPEAUSetInterpolationMsg@Sequence@@@Z
    long ApiSetInterpolation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetKeyFrame@DuSequence@@QEAAJPEAUSetKeyFrameMsg@Sequence@@@Z
    long ApiSetKeyFrame(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetTime@DuSequence@@QEAAJPEAUSetTimeMsg@Sequence@@@Z
    long ApiSetTime(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiStop@DuSequence@@QEAAJPEAUStopMsg@Sequence@@@Z
    long ApiStop(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DuSequence@@QEAA@XZ
    ~DuSequence();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActionProc@DuSequence@@KAXPEAUGMA_ACTIONINFO@@@Z
    static void ActionProc(GMA_ACTIONINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildAnimation@DuSequence@@IEAAJH@Z
    long BuildAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckComplete@DuSequence@@IEBAJXZ
    long CheckComplete() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompareItems@DuSequence@@KAHPEBX0@Z
    static int CompareItems(void const *, void const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindAtTime@DuSequence@@IEBAXMPEAH@Z
    void FindAtTime(float, int *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationComplete@DuSequence@@IEAAIPEAUEventMsg@@@Z
    unsigned int OnAnimationComplete(EventMsg *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueueAnimation@DuSequence@@IEAAJH@Z
    long QueueAnimation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllKeyFrames@DuSequence@@IEAAXXZ
    void RemoveAllKeyFrames();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetSubject@DuSequence@@IEAAXPEAVVisual@@H@Z
    void ResetSubject(Visual *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@DuSequence@@IEAAXH@Z
    void Stop(int);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `~DuSequence` | `void` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `ApiAddRef` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiRelease` | `long` | `Method` | `Pdb` | No (PDB) |
| `ActionProc` | `void` | `Method` | `Pdb` | No (PDB) |
| `ApiAddKeyFrame` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiFindKeyFrame` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetDelay` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetFlow` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetFramePause` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetInterpolation` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetKeyFrame` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetKeyFrameCount` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetLength` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetTime` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGotoTime` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiOnEvent` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiPlay` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiRemoveAllKeyFrames` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiRemoveKeyFrame` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiReset` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetDelay` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetFlow` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetFramePause` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetInterpolation` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetKeyFrame` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetTime` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiStop` | `long` | `Method` | `Pdb` | No (PDB) |
| `BuildAnimation` | `long` | `Method` | `Pdb` | No (PDB) |
| `CheckComplete` | `long` | `Method` | `Pdb` | No (PDB) |
| `CompareItems` | `int` | `Method` | `Pdb` | No (PDB) |
| `FindAtTime` | `void` | `Method` | `Pdb` | No (PDB) |
| `OnAnimationComplete` | `unsigned int` | `Method` | `Pdb` | No (PDB) |
| `QueueAnimation` | `long` | `Method` | `Pdb` | No (PDB) |
| `RemoveAllKeyFrames` | `void` | `Method` | `Pdb` | No (PDB) |
| `ResetSubject` | `void` | `Method` | `Pdb` | No (PDB) |
| `Stop` | `void` | `Method` | `Pdb` | No (PDB) |
