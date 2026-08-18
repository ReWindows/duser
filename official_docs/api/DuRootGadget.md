# `global` :: `DuRootGadget`

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
class DuRootGadget {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetFocus@DuRootGadget@@QEAAJPEAUGetFocusMsg@Root@@@Z
    long ApiGetFocus(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetRootInfo@DuRootGadget@@QEAAJPEAUGetRootInfoMsg@Root@@@Z
    long ApiGetRootInfo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetRootInfo@DuRootGadget@@QEAAJPEAUSetRootInfoMsg@Root@@@Z
    long ApiSetRootInfo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@DuRootGadget@@SAJPEAVDuContainer@@HPEAUCREATE_INFO@@PEAPEAV1@@Z
    static long Build(DuContainer *, int, CREATE_INFO *, DuRootGadget * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DemoteRoot@DuRootGadget@@SAPEAUHCLASS__@@PEAU2@PEAVGadget@DUser@@PEAX@Z
    static HCLASS__* DemoteRoot(HCLASS__*, ::DUser::Gadget *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachContainer@DuRootGadget@@QEAAXXZ
    void DetachContainer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawDirtyLayersInTree@DuRootGadget@@QEAAHPEAUHDC__@@@Z
    int DrawDirtyLayersInTree(HDC__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DuRootGadget@@QEAA@XZ
    DuRootGadget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferredMsgQueue@DuRootGadget@@UEAAPEAVDeferredMsgQueue@@XZ
    virtual DeferredMsgQueue * GetDeferredMsgQueue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocus@DuRootGadget@@SAPEAVDuVisual@@XZ
    static DuVisual * GetFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInfo@DuRootGadget@@QEBAXPEAUtagROOT_INFO@@@Z
    void GetInfo(tagROOT_INFO *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProcessingMsgObject@DuRootGadget@@UEBAPEAVMsgObject@@XZ
    virtual MsgObject * GetProcessingMsgObject() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootGadget@DuRootGadget@@UEAAPEAUHROOTGADGET__@@XZ
    virtual HROOTGADGET__* GetRootGadget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromoteRoot@DuRootGadget@@SAJP6AJW4ConstructCommand@Gadget@DUser@@PEAUHCLASS__@@PEAV34@PEAX@Z12PEAUConstructInfo@34@@Z
    static long PromoteRoot(long ( *)(int, HCLASS__*, ::DUser::Gadget *, void *), HCLASS__*, ::DUser::Gadget *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAdaptor@DuRootGadget@@QEAAJPEAVDuVisual@@@Z
    long RegisterAdaptor(DuVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetInfo@DuRootGadget@@QEAAJPEBUtagROOT_INFO@@@Z
    long SetInfo(tagROOT_INFO const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessingMsgObject@DuRootGadget@@UEAAXPEAVMsgObject@@@Z
    virtual void SetProcessingMsgObject(MsgObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAdaptor@DuRootGadget@@QEAAXPEAVDuVisual@@@Z
    void UnregisterAdaptor(DuVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdHandleKeyboardFocus@DuRootGadget@@QEAAHI@Z
    int xdHandleKeyboardFocus(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdHandleKeyboardMessage@DuRootGadget@@QEAAHPEAUGMSG_KEYBOARD@@I@Z
    int xdHandleKeyboardMessage(GMSG_KEYBOARD *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdHandleMouseLeaveMessage@DuRootGadget@@QEAAXPEAUGMSG_MOUSE@@@Z
    void xdHandleMouseLeaveMessage(GMSG_MOUSE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdHandleMouseLostCapture@DuRootGadget@@QEAAXI@Z
    void xdHandleMouseLostCapture(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdHandleMouseMessage@DuRootGadget@@QEAAHPEAUGMSG_MOUSE@@UtagPOINT@@H@Z
    int xdHandleMouseMessage(GMSG_MOUSE *, tagPOINT, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdHandlePointerMessage@DuRootGadget@@QEAAHPEAUGMSG_POINTER@@UtagPOINT@@@Z
    int xdHandlePointerMessage(GMSG_POINTER *, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdNotifyChangeInvisible@DuRootGadget@@QEAAXPEBVDuVisual@@@Z
    void xdNotifyChangeInvisible(DuVisual const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xrDrawTree@DuRootGadget@@QEAAXPEAVDuVisual@@PEAUHDC__@@PEBUtagRECT@@I@Z
    void xrDrawTree(DuVisual *, HDC__*, tagRECT const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDeleteHandle@DuRootGadget@@UEAAHXZ
    virtual int xwDeleteHandle();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@DuRootGadget@@IEAAJPEAVDuContainer@@HPEAUCREATE_INFO@@@Z
    long Create(DuContainer *, int, CREATE_INFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdFireChangeState@DuRootGadget@@IEAAXPEAPEAVDuVisual@@0I@Z
    void xdFireChangeState(DuVisual * *, DuVisual * *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdProcessGadgetMouseMessage@DuRootGadget@@IEAAHPEAUGMSG_MOUSE@@PEAVDuVisual@@UtagPOINT@@@Z
    int xdProcessGadgetMouseMessage(GMSG_MOUSE *, DuVisual *, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdProcessGadgetPointerMessage@DuRootGadget@@IEAAHPEAUGMSG_POINTER@@PEAVDuVisual@@UtagPOINT@@@Z
    int xdProcessGadgetPointerMessage(GMSG_POINTER *, DuVisual *, tagPOINT);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdUpdateKeyboardFocus@DuRootGadget@@IEAAHPEAVDuVisual@@H@Z
    int xdUpdateKeyboardFocus(DuVisual *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdUpdateMouseFocus@DuRootGadget@@IEAAXPEAPEAVDuVisual@@PEAUtagPOINT@@@Z
    void xdUpdateMouseFocus(DuVisual * *, tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDestroy@DuRootGadget@@MEAAXXZ
    virtual void xwDestroy();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DuRootGadget@@MEAA@XZ
    virtual ~DuRootGadget();
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `xrDrawTree` | `void` | `Method` | `Pdb` | No (PDB) |
| `DrawDirtyLayersInTree` | `int` | `Method` | `Pdb` | No (PDB) |
| `SetInfo` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `xdHandleMouseMessage` | `int` | `Method` | `Pdb` | No (PDB) |
| `xdProcessGadgetMouseMessage` | `int` | `Method` | `Pdb` | No (PDB) |
| `xwDeleteHandle` | `int` | `Method` | `Pdb` | No (PDB) |
| `xdNotifyChangeInvisible` | `void` | `Method` | `Pdb` | No (PDB) |
| `xdFireChangeState` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetRootGadget` | `struct HROOTGADGET__*` | `Accessor` | `Pdb` | No (PDB) |
| `UnregisterAdaptor` | `void` | `Method` | `Pdb` | No (PDB) |
| `xdUpdateKeyboardFocus` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetFocus` | `class DuVisual *` | `Accessor` | `Pdb` | No (PDB) |
| `RegisterAdaptor` | `long` | `Method` | `Pdb` | No (PDB) |
| `xdHandleMouseLeaveMessage` | `void` | `Method` | `Pdb` | No (PDB) |
| `xdUpdateMouseFocus` | `void` | `Method` | `Pdb` | No (PDB) |
| `~DuRootGadget` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `DetachContainer` | `void` | `Method` | `Pdb` | No (PDB) |
| `xdHandleKeyboardFocus` | `int` | `Method` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `Build` | `long` | `Method` | `Pdb` | No (PDB) |
| `DuRootGadget` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `Create` | `long` | `Method` | `Pdb` | No (PDB) |
| `xdHandleMouseLostCapture` | `void` | `Method` | `Pdb` | No (PDB) |
| `xdHandleKeyboardMessage` | `int` | `Method` | `Pdb` | No (PDB) |
| `GetDeferredMsgQueue` | `class DeferredMsgQueue *` | `Accessor` | `Pdb` | No (PDB) |
| `DemoteRoot` | `struct HCLASS__*` | `Method` | `Pdb` | No (PDB) |
| `SetProcessingMsgObject` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetProcessingMsgObject` | `class MsgObject *` | `Accessor` | `Pdb` | No (PDB) |
| `GetInfo` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `xwDestroy` | `void` | `Method` | `Pdb` | No (PDB) |
| `xdProcessGadgetPointerMessage` | `int` | `Method` | `Pdb` | No (PDB) |
| `xdHandlePointerMessage` | `int` | `Method` | `Pdb` | No (PDB) |
| `PromoteRoot` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetFocus` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetRootInfo` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetRootInfo` | `long` | `Method` | `Pdb` | No (PDB) |
