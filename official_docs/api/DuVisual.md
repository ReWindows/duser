# `global` :: `DuVisual`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `duser.dll`. Total members: **124**.

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

// Reconstructed from duser.dll by Windissect. 124 member(s).
class DuVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiFindFromPoint@DuVisual@@QEAAJPEAUFindFromPointMsg@Visual@@@Z
    long ApiFindFromPoint(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetBufferInfo@DuVisual@@QEAAJPEAUGetBufferInfoMsg@Visual@@@Z
    long ApiGetBufferInfo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetCenterPoint@DuVisual@@QEAAJPEAUGetCenterPointMsg@Visual@@@Z
    long ApiGetCenterPoint(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetGadget@DuVisual@@QEAAJPEAUGetGadgetMsg@Visual@@@Z
    long ApiGetGadget(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetProperty@DuVisual@@QEAAJPEAUGetPropertyMsg@Visual@@@Z
    long ApiGetProperty(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetRect@DuVisual@@QEAAJPEAUGetRectMsg@Visual@@@Z
    long ApiGetRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetRotation@DuVisual@@QEAAJPEAUGetRotationMsg@Visual@@@Z
    long ApiGetRotation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetScale@DuVisual@@QEAAJPEAUGetScaleMsg@Visual@@@Z
    long ApiGetScale(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetSize@DuVisual@@QEAAJPEAUGetSizeMsg@Visual@@@Z
    long ApiGetSize(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiGetStyle@DuVisual@@QEAAJPEAUGetStyleMsg@Visual@@@Z
    long ApiGetStyle(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiInvalidate@DuVisual@@QEAAJPEAUInvalidateMsg@Visual@@@Z
    long ApiInvalidate(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiInvalidateRects@DuVisual@@QEAAJPEAUInvalidateRectsMsg@Visual@@@Z
    long ApiInvalidateRects(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiIsParentChainStyle@DuVisual@@QEAAJPEAUIsParentChainStyleMsg@Visual@@@Z
    long ApiIsParentChainStyle(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiMapPoints@DuVisual@@QEAAJPEAUMapPointsMsg@Visual@@@Z
    long ApiMapPoints(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiRemoveProperty@DuVisual@@QEAAJPEAURemovePropertyMsg@Visual@@@Z
    long ApiRemoveProperty(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetBufferInfo@DuVisual@@QEAAJPEAUSetBufferInfoMsg@Visual@@@Z
    long ApiSetBufferInfo(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetCenterPoint@DuVisual@@QEAAJPEAUSetCenterPointMsg@Visual@@@Z
    long ApiSetCenterPoint(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetFillF@DuVisual@@QEAAJPEAUSetFillFMsg@Visual@@@Z
    long ApiSetFillF(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetFillI@DuVisual@@QEAAJPEAUSetFillIMsg@Visual@@@Z
    long ApiSetFillI(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetKeyboardFocus@DuVisual@@QEAAJPEAUSetKeyboardFocusMsg@Visual@@@Z
    long ApiSetKeyboardFocus(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetOrder@DuVisual@@QEAAJPEAUSetOrderMsg@Visual@@@Z
    long ApiSetOrder(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetParent@DuVisual@@QEAAJPEAUSetParentMsg@Visual@@@Z
    long ApiSetParent(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetProperty@DuVisual@@QEAAJPEAUSetPropertyMsg@Visual@@@Z
    long ApiSetProperty(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetRect@DuVisual@@QEAAJPEAUSetRectMsg@Visual@@@Z
    long ApiSetRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetRotation@DuVisual@@QEAAJPEAUSetRotationMsg@Visual@@@Z
    long ApiSetRotation(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetScale@DuVisual@@QEAAJPEAUSetScaleMsg@Visual@@@Z
    long ApiSetScale(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApiSetStyle@DuVisual@@QEAAJPEAUSetStyleMsg@Visual@@@Z
    long ApiSetStyle(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@DuVisual@@SAJPEAV1@PEAUCREATE_INFO@@PEAPEAV1@H@Z
    static long Build(DuVisual *, CREATE_INFO *, DuVisual * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeClipInsideRef@DuVisual@@QEAAJH@Z
    long ChangeClipInsideRef(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeLayeredRef@DuVisual@@QEAAJH@Z
    long ChangeLayeredRef(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIsLayered@DuVisual@@QEBAHXZ
    int CheckIsLayered() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTicket@DuVisual@@QEAAXXZ
    void ClearTicket();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CommonCreate@DuVisual@@QEAAJPEAUCREATE_INFO@@H@Z
    long CommonCreate(CREATE_INFO *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DemoteVisual@DuVisual@@SAPEAUHCLASS__@@PEAU2@PEAVGadget@DUser@@PEAX@Z
    static HCLASS__* DemoteVisual(HCLASS__*, ::DUser::Gadget *, void *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DuVisual@@QEAA@XZ
    DuVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureWindowPaints@DuVisual@@QEAAJXZ
    long EnsureWindowPaints();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFromPoint@DuVisual@@QEBAPEAV1@UtagPOINT@@IPEAU2@@Z
    DuVisual * FindFromPoint(tagPOINT, unsigned int, tagPOINT *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTargetingInfo@DuVisual@@QEBAXPEBUtagTOUCH_HIT_TESTING_INPUT@@UtagPOINT@@IPEAUtagTOUCH_HIT_TESTING_PROXIMITY_EVALUATION@@@Z
    void FindTargetingInfo(tagTOUCH_HIT_TESTING_INPUT const *, tagPOINT, unsigned int, tagTOUCH_HIT_TESTING_PROXIMITY_EVALUATION *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBufferInfo@DuVisual@@QEBAJPEAUtagBUFFER_INFO@@@Z
    long GetBufferInfo(tagBUFFER_INFO *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCenterPoint@DuVisual@@QEBAXPEAM0@Z
    void GetCenterPoint(float *, float *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainer@DuVisual@@QEBAPEAVDuContainer@@XZ
    DuContainer * GetContainer() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferredMsgQueue@DuVisual@@UEAAPEAVDeferredMsgQueue@@XZ
    virtual DeferredMsgQueue * GetDeferredMsgQueue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFlags@DuVisual@@QEBAIXZ
    unsigned int GetFlags() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGadget@DuVisual@@QEBAPEAV1@I@Z
    DuVisual * GetGadget(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleMask@DuVisual@@UEBAIXZ
    virtual unsigned int GetHandleMask() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandleType@DuVisual@@UEBA?AW4HandleType@@XZ
    virtual int GetHandleType() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayerInfo@DuVisual@@QEBAJPEAUtagLAYER_INFO@@@Z
    long GetLayerInfo(tagLAYER_INFO *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLogRect@DuVisual@@QEBAXPEAUtagRECT@@I@Z
    void GetLogRect(tagRECT *, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentTransitionVisual@DuVisual@@QEBAJPEAPEAVTransitionVisual@@@Z
    long GetParentTransitionVisual(TransitionVisual * *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRoot@DuVisual@@QEBAPEAVDuRootGadget@@XZ
    DuRootGadget * GetRoot() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRootGadget@DuVisual@@UEAAPEAUHROOTGADGET__@@XZ
    virtual HROOTGADGET__* GetRootGadget();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRotation@DuVisual@@QEBAMXZ
    float GetRotation() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScale@DuVisual@@QEBAXPEAM0@Z
    void GetScale(float *, float *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionVisual@DuVisual@@QEBAJPEAPEAVTransitionVisual@@@Z
    long GetTransitionVisual(TransitionVisual * *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitClass@DuVisual@@SAJXZ
    static long InitClass();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invalidate@DuVisual@@QEAAXXZ
    void Invalidate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateLayeredDescendants@DuVisual@@QEAAXXZ
    void InvalidateLayeredDescendants();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateRects@DuVisual@@QEAAXPEBUtagRECT@@H@Z
    void InvalidateRects(tagRECT const *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsDescendent@DuVisual@@QEBAHPEBV1@@Z
    int IsDescendent(DuVisual const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOkToProcess@DuVisual@@UEBAHXZ
    virtual int IsOkToProcess() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsParentChainStyle@DuVisual@@QEBAHI@Z
    int IsParentChainStyle(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStartDelete@DuVisual@@UEBAHXZ
    virtual int IsStartDelete() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapPoint@DuVisual@@QEBAXPEAUtagPOINT@@@Z
    void MapPoint(tagPOINT *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapPoints@DuVisual@@SAXPEBV1@0PEAUtagPOINT@@H@Z
    static void MapPoints(DuVisual const *, DuVisual const *, tagPOINT *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PromoteVisual@DuVisual@@SAJP6AJW4ConstructCommand@Gadget@DUser@@PEAUHCLASS__@@PEAV34@PEAX@Z12PEAUConstructInfo@34@@Z
    static long PromoteVisual(long ( *)(int, HCLASS__*, ::DUser::Gadget *, void *), HCLASS__*, ::DUser::Gadget *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPropertyNL@DuVisual@@SAJPEBU_GUID@@W4PropType@@PEAH@Z
    static long RegisterPropertyNL(_GUID const *, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBufferInfo@DuVisual@@QEAAJPEBUtagBUFFER_INFO@@@Z
    long SetBufferInfo(tagBUFFER_INFO const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFill@DuVisual@@QEAAJPEAUHBRUSH__@@EHH@Z
    long SetFill(HBRUSH__*, unsigned char, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFill@DuVisual@@QEAAJPEAVBrush@Gdiplus@@@Z
    long SetFill(::Gdiplus::Brush *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFilter@DuVisual@@UEAAXII@Z
    virtual void SetFilter(unsigned int, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayerInfo@DuVisual@@QEAAJPEBUtagLAYER_INFO@@@Z
    long SetLayerInfo(tagLAYER_INFO const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProcessingState@DuVisual@@UEAAXH@Z
    virtual void SetProcessingState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRestoreCachedLayeredRefFlag@DuVisual@@QEAAXXZ
    void SetRestoreCachedLayeredRefFlag();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlayerGadgetTree@DuVisual@@QEAAXH@Z
    void UnlayerGadgetTree(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdSetCenterPoint@DuVisual@@QEAAJMM@Z
    long xdSetCenterPoint(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdSetFlags@DuVisual@@QEAAJII@Z
    long xdSetFlags(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdSetLogRect@DuVisual@@QEAAJHHHHI@Z
    long xdSetLogRect(int, int, int, int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdSetParent@DuVisual@@QEAAJPEAV1@0I@Z
    long xdSetParent(DuVisual *, DuVisual *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdSetRotation@DuVisual@@QEAAJM@Z
    long xdSetRotation(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdSetScale@DuVisual@@QEAAJMM@Z
    long xdSetScale(float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdSetStyle@DuVisual@@QEAAJIIH@Z
    long xdSetStyle(unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDeleteHandle@DuVisual@@UEAAHXZ
    virtual int xwDeleteHandle();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwEnumGadgets@DuVisual@@QEAAJP6AHPEAUHGADGET__@@PEAX@Z1I@Z
    long xwEnumGadgets(int ( *)(HGADGET__*, void *), void *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DuVisual@@UEAA@XZ
    virtual ~DuVisual();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildAntiXForm@DuVisual@@IEBAXPEAVMatrix3@@@Z
    void BuildAntiXForm(Matrix3*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildXForm@DuVisual@@IEBAXPEAVMatrix3@@@Z
    void BuildXForm(Matrix3*) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DeleteGadget@DuVisual@@IEAAXXZ
    void DeleteGadget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwBeginDestroy@DuVisual@@IEAAXXZ
    void xwBeginDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDestroy@DuVisual@@MEAAXXZ
    virtual void xwDestroy();
    // Category: Method | Source: PDB Internal
    // Symbol: ?xwDestroyAllChildren@DuVisual@@IEAAXXZ
    void xwDestroyAllChildren();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachLayeredNodeToTree@DuVisual@@AEAAXPEAV1@@Z
    void AttachLayeredNodeToTree(DuVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIsTrivial@DuVisual@@AEBAHXZ
    int CheckIsTrivial() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIsWantMouseFocus@DuVisual@@AEBAHXZ
    int CheckIsWantMouseFocus() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIsWantPointer@DuVisual@@AEBAHXZ
    int CheckIsWantPointer() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoInvalidateRect@DuVisual@@AEAAXPEAVDuContainer@@PEBUtagRECT@@H@Z
    void DoInvalidateRect(DuContainer *, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoXFormClientToParent@DuVisual@@AEBAXPEAUtagPOINT@@H@Z
    void DoXFormClientToParent(tagPOINT *, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrawFill@DuVisual@@AEAAXPEAVDuSurface@@PEBUtagRECT@@@Z
    void DrawFill(DuSurface *, tagRECT const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindRectStepImpl@DuVisual@@AEBA_NPEBV1@HHPEAUtagRECT@@@Z
    bool FindRectStepImpl(DuVisual const *, int, int, tagRECT *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyboardFocusableAncestor@DuVisual@@AEAAPEAV1@PEAV1@@Z
    DuVisual * GetKeyboardFocusableAncestor(DuVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInvisibleOrHasZeroSizedAncestor@DuVisual@@AEAA_NXZ
    bool IsInvisibleOrHasZeroSizedAncestor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsParentInvalid@DuVisual@@AEBAHXZ
    int IsParentInvalid() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkInvalidChildren@DuVisual@@AEAAXXZ
    void MarkInvalidChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PointIsInTopmostDescendant@DuVisual@@AEBA_NPEAV1@PEAUtagPOINT@@1@Z
    bool PointIsInTopmostDescendant(DuVisual *, tagPOINT *, tagPOINT *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetInvalid@DuVisual@@AEAAXXZ
    void ResetInvalid();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SLRInvalidateRects@DuVisual@@AEAAXPEAVDuContainer@@PEBUtagRECT@@H@Z
    void SLRInvalidateRects(DuContainer *, tagRECT const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SLROffsetLogRect@DuVisual@@AEAAXPEBUtagSIZE@@@Z
    void SLROffsetLogRect(tagSIZE const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SLRUpdateBits@DuVisual@@AEAAXPEAUtagRECT@@0I@Z
    void SLRUpdateBits(tagRECT *, tagRECT *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBuffered@DuVisual@@AEAAJH@Z
    long SetBuffered(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEnableXForm@DuVisual@@AEAAJH@Z
    long SetEnableXForm(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLayered@DuVisual@@AEAAJHH@Z
    long SetLayered(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupCachedDraw@DuVisual@@AEAAPEAVBmpBuffer@@PEAUPaintInfo@@@Z
    BmpBuffer * SetupCachedDraw(PaintInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupCommonDraw@DuVisual@@AEAAHPEAUPaintInfo@@PEAVBmpBuffer@@@Z
    int SetupCommonDraw(PaintInfo *, BmpBuffer *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlayerGadget@DuVisual@@AEAAXHH@Z
    void UnlayerGadget(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unlink@DuVisual@@AEAAPEAV1@XZ
    DuVisual * Unlink();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDeepAllState@DuVisual@@AEAAXW4EUdsHint@1@P81@EBAHXZI@Z
    void UpdateDeepAllState(int, int ( ::DuVisual::*)(void) const, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDeepAnyState@DuVisual@@AEAAXW4EUdsHint@1@P81@EBAHXZI@Z
    void UpdateDeepAnyState(int, int ( ::DuVisual::*)(void) const, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayerClipRect@DuVisual@@AEAAXH@Z
    void UpdateLayerClipRect(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLayersForRectChange@DuVisual@@AEAAX_N0UtagSIZE@@@Z
    void UpdateLayersForRectChange(bool, bool, tagSIZE);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdUpdateAdaptors@DuVisual@@AEBAXI@Z
    void xdUpdateAdaptors(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?xdUpdatePosition@DuVisual@@AEBAXXZ
    void xdUpdatePosition() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?xrDrawFull@DuVisual@@AEAAXPEAUPaintInfo@@@Z
    void xrDrawFull(PaintInfo *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?xrDrawTrivial@DuVisual@@AEAAXPEAUPaintInfo@@UtagSIZE@@@Z
    void xrDrawTrivial(PaintInfo *, tagSIZE);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `SetBuffered` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetFlags` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `xrDrawFull` | `void` | `Method` | `Pdb` | No (PDB) |
| `ResetInvalid` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsInvisibleOrHasZeroSizedAncestor` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `GetGadget` | `class DuVisual *` | `Accessor` | `Pdb` | No (PDB) |
| `xwDestroy` | `void` | `Method` | `Pdb` | No (PDB) |
| `xwBeginDestroy` | `void` | `Method` | `Pdb` | No (PDB) |
| ``vector deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| ``scalar deleting destructor'` | `void *` | `Dtor` | `Pdb` | No (PDB) |
| `~DuVisual` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `Unlink` | `class DuVisual *` | `Method` | `Pdb` | No (PDB) |
| `UpdateDeepAllState` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateDeepAnyState` | `void` | `Method` | `Pdb` | No (PDB) |
| `ClearTicket` | `void` | `Method` | `Pdb` | No (PDB) |
| `Build` | `long` | `Method` | `Pdb` | No (PDB) |
| `xwDeleteHandle` | `int` | `Method` | `Pdb` | No (PDB) |
| `DeleteGadget` | `void` | `Method` | `Pdb` | No (PDB) |
| `xdUpdateAdaptors` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetRoot` | `class DuRootGadget *` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateLayersForRectChange` | `void` | `Method` | `Pdb` | No (PDB) |
| `Invalidate` | `void` | `Method` | `Pdb` | No (PDB) |
| `SLRUpdateBits` | `void` | `Method` | `Pdb` | No (PDB) |
| `xdSetLogRect` | `long` | `Method` | `Pdb` | No (PDB) |
| `SLRInvalidateRects` | `void` | `Method` | `Pdb` | No (PDB) |
| `DoXFormClientToParent` | `void` | `Method` | `Pdb` | No (PDB) |
| `DoInvalidateRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetLogRect` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `FindFromPoint` | `class DuVisual *` | `Method` | `Pdb` | No (PDB) |
| `xrDrawTrivial` | `void` | `Method` | `Pdb` | No (PDB) |
| `xwDestroyAllChildren` | `void` | `Method` | `Pdb` | No (PDB) |
| `xdUpdatePosition` | `void` | `Method` | `Pdb` | No (PDB) |
| `xdSetParent` | `long` | `Method` | `Pdb` | No (PDB) |
| `xdSetStyle` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetKeyboardFocusableAncestor` | `class DuVisual *` | `Accessor` | `Pdb` | No (PDB) |
| `InitClass` | `long` | `Method` | `Pdb` | No (PDB) |
| `ChangeLayeredRef` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetLayered` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsParentChainStyle` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `GetLayerInfo` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTransitionVisual` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetupCommonDraw` | `int` | `Method` | `Pdb` | No (PDB) |
| `BuildXForm` | `void` | `Method` | `Pdb` | No (PDB) |
| `DuVisual` | `void` | `Ctor` | `Pdb` | No (PDB) |
| `CommonCreate` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetDeferredMsgQueue` | `class DeferredMsgQueue *` | `Accessor` | `Pdb` | No (PDB) |
| `FindTargetingInfo` | `void` | `Method` | `Pdb` | No (PDB) |
| `FindRectStepImpl` | `bool` | `Method` | `Pdb` | No (PDB) |
| `IsDescendent` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `IsParentInvalid` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `SetProcessingState` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetRootGadget` | `struct HROOTGADGET__*` | `Accessor` | `Pdb` | No (PDB) |
| `MarkInvalidChildren` | `void` | `Method` | `Pdb` | No (PDB) |
| `IsOkToProcess` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `SetFilter` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetHandleMask` | `unsigned int` | `Accessor` | `Pdb` | No (PDB) |
| `UnlayerGadget` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetBufferInfo` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetContainer` | `class DuContainer *` | `Accessor` | `Pdb` | No (PDB) |
| `SetEnableXForm` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetFill` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `CheckIsWantPointer` | `int` | `Method` | `Pdb` | No (PDB) |
| `CheckIsWantMouseFocus` | `int` | `Method` | `Pdb` | No (PDB) |
| `MapPoints` | `void` | `Method` | `Pdb` | No (PDB) |
| `BuildAntiXForm` | `void` | `Method` | `Pdb` | No (PDB) |
| `DemoteVisual` | `struct HCLASS__*` | `Method` | `Pdb` | No (PDB) |
| `MapPoint` | `void` | `Method` | `Pdb` | No (PDB) |
| `SetupCachedDraw` | `class BmpBuffer *` | `Method` | `Pdb` | No (PDB) |
| `RegisterPropertyNL` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetHandleType` | `enum HandleType` | `Accessor` | `Pdb` | No (PDB) |
| `CheckIsTrivial` | `int` | `Method` | `Pdb` | No (PDB) |
| `xdSetFlags` | `long` | `Method` | `Pdb` | No (PDB) |
| `InvalidateLayeredDescendants` | `void` | `Method` | `Pdb` | No (PDB) |
| `EnsureWindowPaints` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetBufferInfo` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `IsStartDelete` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `UnlayerGadgetTree` | `void` | `Method` | `Pdb` | No (PDB) |
| `CheckIsLayered` | `int` | `Method` | `Pdb` | No (PDB) |
| `SetLayerInfo` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `UpdateLayerClipRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `PointIsInTopmostDescendant` | `bool` | `Method` | `Pdb` | No (PDB) |
| `SLROffsetLogRect` | `void` | `Method` | `Pdb` | No (PDB) |
| `AttachLayeredNodeToTree` | `void` | `Method` | `Pdb` | No (PDB) |
| `ApiFindFromPoint` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetBufferInfo` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetCenterPoint` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetGadget` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetProperty` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetRect` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetRotation` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetScale` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetSize` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiGetStyle` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiInvalidate` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiInvalidateRects` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiIsParentChainStyle` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiMapPoints` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiRemoveProperty` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetBufferInfo` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetCenterPoint` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetFillF` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetFillI` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetKeyboardFocus` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetOrder` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetParent` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetProperty` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetRect` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetRotation` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetScale` | `long` | `Method` | `Pdb` | No (PDB) |
| `ApiSetStyle` | `long` | `Method` | `Pdb` | No (PDB) |
| `PromoteVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetFill` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetRestoreCachedLayeredRefFlag` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `xwEnumGadgets` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetCenterPoint` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `GetRotation` | `float` | `Accessor` | `Pdb` | No (PDB) |
| `GetScale` | `void` | `Accessor` | `Pdb` | No (PDB) |
| `xdSetCenterPoint` | `long` | `Method` | `Pdb` | No (PDB) |
| `xdSetRotation` | `long` | `Method` | `Pdb` | No (PDB) |
| `xdSetScale` | `long` | `Method` | `Pdb` | No (PDB) |
| `DrawFill` | `void` | `Method` | `Pdb` | No (PDB) |
| `GetParentTransitionVisual` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `InvalidateRects` | `void` | `Method` | `Pdb` | No (PDB) |
| `ChangeClipInsideRef` | `long` | `Method` | `Pdb` | No (PDB) |
