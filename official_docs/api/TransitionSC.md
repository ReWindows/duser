# `global` :: `TransitionSC`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `duser.dll`. Total members: **56**.

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

// Reconstructed from duser.dll by Windissect. 56 member(s).
class TransitionSC {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChildVisual@TransitionSC@@QEAAJPEAVTransitionVisual@@PEAUHGADGET__@@_N2PEAPEAV2@@Z
    long AddChildVisual(TransitionVisual *, HGADGET__*, bool, bool, TransitionVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CacheDWriteRenderTarget@TransitionSC@@QEAAJPEAUIUnknown@@@Z
    long CacheDWriteRenderTarget(IUnknown *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeAnimationScenario@TransitionSC@@QEAAJ_NAEBU_GUID@@@Z
    long ChangeAnimationScenario(bool, _GUID const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Commit@TransitionSC@@QEAAJXZ
    long Commit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompositionChanged@TransitionSC@@QEAAJXZ
    long CompositionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyExistingTransforms@TransitionSC@@QEAAJPEAVTransitionVisual@@0_N11@Z
    long CopyExistingTransforms(TransitionVisual *, TransitionVisual *, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateRootVisual@TransitionSC@@QEAAJPEAUHGADGET__@@PEAUHWND__@@PEAPEAUIUnknown@@PEAPEAVTransitionVisual@@@Z
    long CreateRootVisual(HGADGET__*, HWND__*, IUnknown * *, TransitionVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateTransitionVisualCopy@TransitionSC@@QEAAJPEAUHGADGET__@@PEAPEAVTransitionVisual@@0_N2@Z
    long CreateTransitionVisualCopy(HGADGET__*, TransitionVisual * *, HGADGET__*, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyPendingDCVisuals@TransitionSC@@QEAAXXZ
    void DestroyPendingDCVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachGadgetVisuals@TransitionSC@@QEAAJIPEAUHGADGET__@@PEAKPEAPEAUIUnknown@@222@Z
    long DetachGadgetVisuals(unsigned int, HGADGET__*, unsigned long *, IUnknown * *, IUnknown * *, IUnknown * *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoPendingDeletion@TransitionSC@@QEAAX_NPEAVTransitionVisual@@@Z
    void DoPendingDeletion(bool, TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAtlasingManager@TransitionSC@@QEAAJXZ
    long EnsureAtlasingManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGadgetTransInitialized@TransitionSC@@QEAAJXZ
    long EnsureGadgetTransInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceDeletion@TransitionSC@@QEAA_NPEAUHGADGET__@@@Z
    bool ForceDeletion(HGADGET__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalAnimatingPosition@TransitionSC@@QEAAJPEAUHGADGET__@@PEAUtagPOINT@@_N@Z
    long GetFinalAnimatingPosition(HGADGET__*, tagPOINT *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGadgetVisual@TransitionSC@@QEAAJIPEAUHGADGET__@@PEAPEAX11@Z
    long GetGadgetVisual(unsigned int, HGADGET__*, void * *, void * *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStoryboardComplete@TransitionSC@@QEAAXPEAVTransitionStoryboard@@I@Z
    void OnStoryboardComplete(TransitionStoryboard *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPendingStoryboards@TransitionSC@@QEAAXXZ
    void ProcessPendingStoryboards();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RawActionProc@TransitionSC@@SAXPEAUGMA_ACTIONINFO@@@Z
    static void RawActionProc(GMA_ACTIONINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildDCompResources@TransitionSC@@QEAAJPEAUHWND__@@PEAVTransitionVisual@@PEAPEAUIUnknown@@_N@Z
    long RebuildDCompResources(HWND__*, TransitionVisual *, IUnknown * *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDestroyedDCVisuals@TransitionSC@@QEAAXXZ
    void ReleaseDestroyedDCVisuals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseDetachedObjects@TransitionSC@@QEAAJIK@Z
    long ReleaseDetachedObjects(unsigned int, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReparentTransitionVisualCopy@TransitionSC@@QEAAJPEAVTransitionVisual@@0_N@Z
    long ReparentTransitionVisualCopy(TransitionVisual *, TransitionVisual *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleGadgetTransitions@TransitionSC@@QEAAJIIPEBUGTRANS_DESC@@PEAUHGADGET__@@PEAUTransitionStoryboardInfo@@_N@Z
    long ScheduleGadgetTransitions(unsigned int, unsigned int, GTRANS_DESC const *, HGADGET__*, TransitionStoryboardInfo *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAtlasingHints@TransitionSC@@QEAAJPEAUtagSIZE@@PEAUtagRECT@@1111@Z
    long SetAtlasingHints(tagSIZE *, tagRECT *, tagRECT *, tagRECT *, tagRECT *, tagRECT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRectangleClipOnVisual@TransitionSC@@QEAAJHHPEAVTransitionVisual@@@Z
    long SetRectangleClipOnVisual(int, int, TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SettingChanged@TransitionSC@@QEAAJXZ
    long SettingChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@TransitionSC@@QEAAJIPEAUHGADGET__@@I_N@Z
    long StopAnimation(unsigned int, HGADGET__*, unsigned int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopVariable@TransitionSC@@QEAAJPEAUIUIAnimationVariable2@@IPEAN@Z
    long StopVariable(IUIAnimationVariable2*, unsigned int, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncGadgetsWithAnimations@TransitionSC@@QEAAXXZ
    void SyncGadgetsWithAnimations();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TransitionSC@@QEAA@XZ
    TransitionSC();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlayerCopyVisual@TransitionSC@@QEAAJPEAVTransitionVisual@@@Z
    long UnlayerCopyVisual(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManagerWithCurrentTime@TransitionSC@@QEAAJXZ
    long UpdateManagerWithCurrentTime();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwPreDestroyNL@TransitionSC@@UEAAXXZ
    virtual void xwPreDestroyNL();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TransitionSC@@UEAA@XZ
    virtual ~TransitionSC();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddWamTransition@TransitionSC@@AEAAJPEAUIUIAnimationStoryboard2@@PEAVTransitionVisual@@W4Variable@3@IPEAN3PEBUGTRANS_DESC@@_N33I@Z
    long AddWamTransition(IUIAnimationStoryboard2*, TransitionVisual *, int, unsigned int, double *, double *, GTRANS_DESC const *, bool, double *, double *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create3DTransition@TransitionSC@@AEAAJPEAUIUIAnimationStoryboard2@@PEAVTransitionVisual@@W4Variable@3@PEBUGTRANS_DESC@@_N@Z
    long Create3DTransition(IUIAnimationStoryboard2*, TransitionVisual *, int, GTRANS_DESC const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create4DTransition@TransitionSC@@AEAAJPEAUIUIAnimationStoryboard2@@PEAVTransitionVisual@@W4Variable@3@PEBUGTRANS_DESC@@_N@Z
    long Create4DTransition(IUIAnimationStoryboard2*, TransitionVisual *, int, GTRANS_DESC const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDCompDevice@TransitionSC@@AEAAJPEAPEAUIDCompositionDevice@@PEAPEAUIDCompositionMatrixTransform3D@@@Z
    long CreateDCompDevice(IDCompositionDevice * *, IDCompositionMatrixTransform3D * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePointTransition@TransitionSC@@AEAAJPEAUIUIAnimationStoryboard2@@PEAVTransitionVisual@@W4Variable@3@PEBUGTRANS_DESC@@_N@Z
    long CreatePointTransition(IUIAnimationStoryboard2*, TransitionVisual *, int, GTRANS_DESC const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScalarTransition@TransitionSC@@AEAAJPEAUIUIAnimationStoryboard2@@PEAVTransitionVisual@@W4Variable@3@PEBUGTRANS_DESC@@_N@Z
    long CreateScalarTransition(IUIAnimationStoryboard2*, TransitionVisual *, int, GTRANS_DESC const *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureComInitialized@TransitionSC@@AEAAJXZ
    long EnsureComInitialized();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureD3DDevice@TransitionSC@@AEAAJXZ
    long EnsureD3DDevice();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireCompletionEvents@TransitionSC@@AEAAXHPEAVTransitionStoryboard@@@Z
    void FireCompletionEvents(int, TransitionStoryboard *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireTransitionComplete@TransitionSC@@AEAAHPEAUHGADGET__@@IHH@Z
    int FireTransitionComplete(HGADGET__*, unsigned int, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVarFromDCProp@TransitionSC@@AEAA?AW4Variable@TransitionVisual@@I@Z
    int GetVarFromDCProp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayerGadgetSubTree@TransitionSC@@AEAAJPEAUHGADGET__@@PEAV?$GArrayF@PEAUHGADGET__@@@@_N@Z
    long LayerGadgetSubTree(HGADGET__*, WindissectOpaque *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetForNewTransition@TransitionSC@@AEAAJPEAVTransitionVisual@@W4Variable@2@@Z
    long ResetForNewTransition(TransitionVisual *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleStoryboardAtTimeOffset@TransitionSC@@AEAAJPEAUIUIAnimationStoryboard2@@N@Z
    long ScheduleStoryboardAtTimeOffset(IUIAnimationStoryboard2*, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleStoryboardNow@TransitionSC@@AEAAJPEAUIUIAnimationStoryboard2@@_N@Z
    long ScheduleStoryboardNow(IUIAnimationStoryboard2*, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScheduleTransitions@TransitionSC@@AEAAJIPEBUGTRANS_DESC@@PEAUHGADGET__@@PEAUTransitionStoryboardInfo@@_N@Z
    long ScheduleTransitions(unsigned int, GTRANS_DESC const *, HGADGET__*, TransitionStoryboardInfo *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAllAnimations@TransitionSC@@AEAAXXZ
    void StopAllAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@TransitionSC@@AEAAXXZ
    void Uninitialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlayerGadgetSubTree@TransitionSC@@AEAAJPEAUHGADGET__@@K_N@Z
    long UnlayerGadgetSubTree(HGADGET__*, unsigned long, bool);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `SettingChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReleaseDestroyedDCVisuals` | `void` | `Method` | `Pdb` | No (PDB) |
| `DestroyPendingDCVisuals` | `void` | `Method` | `Pdb` | No (PDB) |
| `TransitionSC` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `EnsureAtlasingManager` | `long` | `Method` | `Pdb` | No (PDB) |
| `SyncGadgetsWithAnimations` | `void` | `Method` | `Pdb` | No (PDB) |
| `ScheduleTransitions` | `long` | `Method` | `Pdb` | No (PDB) |
| `LayerGadgetSubTree` | `long` | `Method` | `Pdb` | No (PDB) |
| `ResetForNewTransition` | `long` | `Method` | `Pdb` | No (PDB) |
| `DoPendingDeletion` | `void` | `Method` | `Pdb` | No (PDB) |
| `AddChildVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetGadgetVisual` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `xwPreDestroyNL` | `void` | `Method` | `Pdb` | No (PDB) |
| `Uninitialize` | `void` | `Method` | `Pdb` | No (PDB) |
| `EnsureGadgetTransInitialized` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateRootVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetRectangleClipOnVisual` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `EnsureComInitialized` | `long` | `Method` | `Pdb` | No (PDB) |
| `CacheDWriteRenderTarget` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateDCompDevice` | `long` | `Method` | `Pdb` | No (PDB) |
| `EnsureD3DDevice` | `long` | `Method` | `Pdb` | No (PDB) |
| `ForceDeletion` | `bool` | `Method` | `Pdb` | No (PDB) |
| `RebuildDCompResources` | `long` | `Method` | `Pdb` | No (PDB) |
| `UnlayerGadgetSubTree` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreatePointTransition` | `long` | `Method` | `Pdb` | No (PDB) |
| `OnStoryboardComplete` | `void` | `Method` | `Pdb` | No (PDB) |
| `FireCompletionEvents` | `void` | `Method` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `~TransitionSC` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `FireTransitionComplete` | `int` | `Method` | `Pdb` | No (PDB) |
| `CreateScalarTransition` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddWamTransition` | `long` | `Method` | `Pdb` | No (PDB) |
| `Commit` | `long` | `Method` | `Pdb` | No (PDB) |
| `ProcessPendingStoryboards` | `void` | `Method` | `Pdb` | No (PDB) |
| `ScheduleStoryboardAtTimeOffset` | `long` | `Method` | `Pdb` | No (PDB) |
| `StopVariable` | `long` | `Method` | `Pdb` | No (PDB) |
| `ScheduleStoryboardNow` | `long` | `Method` | `Pdb` | No (PDB) |
| `StopAnimation` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetVarFromDCProp` | `enum TransitionVisual::Variable` | `Accessor` | `Pdb` | No (PDB) |
| `ScheduleGadgetTransitions` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateManagerWithCurrentTime` | `long` | `Method` | `Pdb` | No (PDB) |
| `ChangeAnimationScenario` | `long` | `Method` | `Pdb` | No (PDB) |
| `CompositionChanged` | `long` | `Method` | `Pdb` | No (PDB) |
| `StopAllAnimations` | `void` | `Method` | `Pdb` | No (PDB) |
| `CopyExistingTransforms` | `long` | `Method` | `Pdb` | No (PDB) |
| `Create3DTransition` | `long` | `Method` | `Pdb` | No (PDB) |
| `Create4DTransition` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateTransitionVisualCopy` | `long` | `Method` | `Pdb` | No (PDB) |
| `DetachGadgetVisuals` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetFinalAnimatingPosition` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `RawActionProc` | `void` | `Method` | `Pdb` | No (PDB) |
| `ReleaseDetachedObjects` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReparentTransitionVisualCopy` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetAtlasingHints` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `UnlayerCopyVisual` | `long` | `Method` | `Pdb` | No (PDB) |
