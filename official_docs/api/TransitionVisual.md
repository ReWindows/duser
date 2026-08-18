# `global` :: `TransitionVisual`

**Category:** [Utilities & Helpers](./README.md)

Reconstructed from `duser.dll`. Total members: **100**.

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

// Reconstructed from duser.dll by Windissect. 100 member(s).
class TransitionVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddAdditionalLeavesToPushingAncestor@TransitionVisual@@SAJPEAV1@PEAV?$GArrayF@PEAVTransitionVisual@@@@@Z
    static long AddAdditionalLeavesToPushingAncestor(TransitionVisual *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddTransitionVisualCopy@TransitionVisual@@QEAAJPEAV1@@Z
    long AddTransitionVisualCopy(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimateVariable@TransitionVisual@@QEAAJW4Variable@1@HPEAPEAUIDCompositionAnimation@@@Z
    long AnimateVariable(int, int, IDCompositionAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyAncestorsOpacityEffectGroup@TransitionVisual@@QEAAJPEAV1@@Z
    long ApplyAncestorsOpacityEffectGroup(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToParent@TransitionVisual@@QEAAXPEAV1@@Z
    void AttachToParent(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginDeletion@TransitionVisual@@QEAAJXZ
    long BeginDeletion();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BelongsToDetachedTree@TransitionVisual@@QEAA_NXZ
    bool BelongsToDetachedTree();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Build@TransitionVisual@@SAJPEAUIDCompositionVisual@@00PEAUHGADGET__@@_NPEAPEAV1@@Z
    static long Build(IDCompositionVisual *, IDCompositionVisual *, IDCompositionVisual *, HGADGET__*, bool, TransitionVisual * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanUpAnimations@TransitionVisual@@QEAAX_N@Z
    void CleanUpAnimations(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearContent@TransitionVisual@@QEAAJXZ
    long ClearContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPushedOpacityFromLeavesInTree@TransitionVisual@@SAJPEAV1@@Z
    static long ClearPushedOpacityFromLeavesInTree(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTopmostVisual@TransitionVisual@@SAJPEAUHGADGET__@@@Z
    static long ClearTopmostVisual(HGADGET__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearTransitionVisualCopies@TransitionVisual@@QEAAXXZ
    void ClearTransitionVisualCopies();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectLeaves@TransitionVisual@@QEAAJPEAV?$GArrayF@PEAVTransitionVisual@@@@@Z
    long CollectLeaves(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompensateForBufferOffset@TransitionVisual@@QEAAXW4Property@1@PEAN@Z
    void CompensateForBufferOffset(int, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoordinateInputPaneAnimations@TransitionVisual@@QEAAXHPEAPEAUIDCompositionAnimation@@PEAUIInputPaneAnimationCoordinator@@@Z
    void CoordinateInputPaneAnimations(int, IDCompositionAnimation * *, IInputPaneAnimationCoordinator *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyChildren@TransitionVisual@@QEAAJPEAV1@@Z
    long CopyChildren(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateDCompAnimationVariable@TransitionVisual@@QEAAJW4Property@1@PEAPEAUIDCompositionAnimation@@@Z
    long CreateDCompAnimationVariable(int, IDCompositionAnimation * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomGadgetHitTestQuery@TransitionVisual@@QEAAJPEAUHGADGET__@@PEAUGMSG_QUERYHITTEST@@@Z
    long CustomGadgetHitTestQuery(HGADGET__*, GMSG_QUERYHITTEST *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyCopyChildren@TransitionVisual@@QEAAXXZ
    void DestroyCopyChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyDCVisual@TransitionVisual@@QEAAXXZ
    void DestroyDCVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyFromFailedInit@TransitionVisual@@QEAAXXZ
    void DestroyFromFailedInit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachFromParent@TransitionVisual@@QEAAXXZ
    void DetachFromParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetachTree@TransitionVisual@@QEAAJPEAPEAUIDCompositionVisual@@PEAV?$GArrayF@UDetachedObject@@@@K@Z
    long DetachTree(IDCompositionVisual * *, WindissectOpaque *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FireTransitionStart@TransitionVisual@@QEAAXXZ
    void FireTransitionStart();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceToEnd@TransitionVisual@@QEAAXW4Variable@1@@Z
    void ForceToEnd(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GadgetToVisual@TransitionVisual@@QEAAJPEAUtagPOINT@@@Z
    long GadgetToVisual(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get2DTransformFromVariable@TransitionVisual@@QEAAPEAUIDCompositionTransform@@W4Variable@1@@Z
    IDCompositionTransform * Get2DTransformFromVariable(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Get3DTransformFromVariable@TransitionVisual@@QEAAPEAUIDCompositionTransform3D@@W4Variable@1@@Z
    IDCompositionTransform3D * Get3DTransformFromVariable(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAccumulatedOffsets@TransitionVisual@@QEAAJPEAUtagSIZE@@PEAPEAV1@@Z
    long GetAccumulatedOffsets(tagSIZE *, TransitionVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDimension@TransitionVisual@@QEAAHW4Variable@1@@Z
    int GetDimension(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFinalPosition2D@TransitionVisual@@QEAAJPEAUtagPOINT@@@Z
    long GetFinalPosition2D(tagPOINT *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@TransitionVisual@@QEAAJW4Property@1@PEAN@Z
    long GetProperty(int, double *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@TransitionVisual@@QEAAJW4Property@1@PEAH@Z
    long GetProperty(int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropsFromVariable@TransitionVisual@@QEAAJW4Variable@1@IPEAW4Property@1@@Z
    long GetPropsFromVariable(int, unsigned int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSurface@TransitionVisual@@QEAAPEAUIDCompositionSurface@@HHHPEAH@Z
    IDCompositionSurface * GetSurface(int, int, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTransitionVisualCopyNoRef@TransitionVisual@@QEAAPEAV1@H@Z
    TransitionVisual * GetTransitionVisualCopyNoRef(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVariable@TransitionVisual@@QEAAJPEAUIUIAnimationManager2@@W4Variable@1@PEAIPEAPEAUIUIAnimationVariable2@@@Z
    long GetVariable(IUIAnimationManager2*, int, unsigned int *, IUIAnimationVariable2* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVariableFromProp@TransitionVisual@@QEAAJW4Property@1@PEAH1PEAW4Variable@1@@Z
    long GetVariableFromProp(int, int *, int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVariableValues@TransitionVisual@@QEAAJW4Variable@1@IPEAN_N2@Z
    long GetVariableValues(int, unsigned int, double *, bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasValidGadget@TransitionVisual@@QEAAHXZ
    int HasValidGadget();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeDCompTransforms@TransitionVisual@@QEAAJ_N@Z
    long InitializeDCompTransforms(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeProperties@TransitionVisual@@QEAAJ_N@Z
    long InitializeProperties(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChild@TransitionVisual@@QEAAJPEAV1@_N@Z
    long InsertChild(TransitionVisual *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAffectedByOpacityPushingAncestor@TransitionVisual@@QEAA_NPEAPEAV1@@Z
    bool IsAffectedByOpacityPushingAncestor(TransitionVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGadgetTreeBeingDestroyed@TransitionVisual@@QEAA_NXZ
    bool IsGadgetTreeBeingDestroyed();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisualTopmost@TransitionVisual@@QEAAJXZ
    long MakeVisualTopmost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkForDeletion@TransitionVisual@@QEAAX_N@Z
    void MarkForDeletion(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveChildrenToParent@TransitionVisual@@QEAAJPEAH@Z
    long MoveChildrenToParent(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PopulateInitialVariableValues@TransitionVisual@@QEAAJW4Variable@1@HPEAN@Z
    long PopulateInitialVariableValues(int, int, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushAnimatingPropertiesToVisual@TransitionVisual@@QEAAXH_N@Z
    void PushAnimatingPropertiesToVisual(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushOpacityToLeaves@TransitionVisual@@QEAAJ_NPEAUIDCompositionDevice@@@Z
    long PushOpacityToLeaves(bool, IDCompositionDevice *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PushPropertiesToGadget@TransitionVisual@@QEAAXH_NH0@Z
    void PushPropertiesToGadget(int, bool, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RebuildDCompResourcesSubtree@TransitionVisual@@QEAAJPEAUIDCompositionDevice@@@Z
    long RebuildDCompResourcesSubtree(IDCompositionDevice *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegionChanged@TransitionVisual@@QEAAXPEAUIDCompositionSurface@@@Z
    void RegionChanged(IDCompositionSurface *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReinitializeVisuals@TransitionVisual@@SAXPEAV?$GArrayF@PEAUVisualTriple@TransitionVisual@@@@PEAV?$GArrayF@UDetachedObject@@@@_NK@Z
    static void ReinitializeVisuals(WindissectOpaque *, WindissectOpaque *, bool, unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@TransitionVisual@@QEAAXXZ
    void Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseAnimationVariables@TransitionVisual@@QEAAXXZ
    void ReleaseAnimationVariables();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemainLayered@TransitionVisual@@QEAA_NXZ
    bool RemainLayered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAncestorsOpacityEffectGroup@TransitionVisual@@QEAAJXZ
    long RemoveAncestorsOpacityEffectGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveChild@TransitionVisual@@QEAAJPEAV1@@Z
    long RemoveChild(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveTransitionVisualCopy@TransitionVisual@@QEAAJPEAV1@@Z
    long RemoveTransitionVisualCopy(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReparentDescendantsOfNewChild@TransitionVisual@@QEAAJPEAV1@@Z
    long ReparentDescendantsOfNewChild(TransitionVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceVisuals@TransitionVisual@@SAXPEAV?$GArrayF@PEAUVisualTriple@TransitionVisual@@@@@Z
    static void ReplaceVisuals(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetVariable@TransitionVisual@@QEAAJW4Variable@1@@Z
    long ResetVariable(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetClip@TransitionVisual@@QEAAJHH_N@Z
    long SetClip(int, int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentOnCopy@TransitionVisual@@QEAAJPEAV1@@Z
    long SetContentOnCopy(TransitionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentVisual@TransitionVisual@@QEAAJPEAUIUnknown@@@Z
    long SetContentVisual(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLowerBound@TransitionVisual@@QEAA_NW4Variable@1@IPEAN_N@Z
    bool SetLowerBound(int, unsigned int, double *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentClipImmunity@TransitionVisual@@QEAAJ_N@Z
    long SetParentClipImmunity(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPerspective@TransitionVisual@@QEAAJMM_N@Z
    long SetPerspective(float, float, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPerspectiveDegree@TransitionVisual@@QEAAJM_N@Z
    long SetPerspectiveDegree(float, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@TransitionVisual@@QEAAJW4Property@1@N@Z
    long SetProperty(int, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUpperBound@TransitionVisual@@QEAA_NW4Variable@1@IPEAN_N@Z
    bool SetUpperBound(int, unsigned int, double *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVariable@TransitionVisual@@QEAAJW4Variable@1@IPEAN_N@Z
    long SetVariable(int, unsigned int, double *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetZOrder@TransitionVisual@@QEAAJH@Z
    long SetZOrder(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShiftCoordinates@TransitionVisual@@QEAAJHH@Z
    long ShiftCoordinates(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpawnVisuals@TransitionVisual@@QEAAJPEAUIDCompositionDevice@@PEAUIDCompositionVisual@@PEAV?$GArrayF@PEAUVisualTriple@TransitionVisual@@@@@Z
    long SpawnVisuals(IDCompositionDevice *, IDCompositionVisual *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SpecifyPerspectiveMatrix@TransitionVisual@@QEAAJ_N@Z
    long SpecifyPerspectiveMatrix(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopAnimation@TransitionVisual@@QEAAXW4Variable@1@_N1@Z
    void StopAnimation(int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update2DTransformGroup@TransitionVisual@@QEAAJXZ
    long Update2DTransformGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update3DTransformGroup@TransitionVisual@@QEAAJXZ
    long Update3DTransformGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCurve@TransitionVisual@@QEAAJW4Variable@1@@Z
    long UpdateCurve(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNativeSizeFromGadget@TransitionVisual@@QEAAJHH@Z
    long UpdateNativeSizeFromGadget(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePositionFromGadget@TransitionVisual@@QEAAJUtagPOINT@@UtagSIZE@@_N@Z
    long UpdatePositionFromGadget(tagPOINT, tagSIZE, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePushDueToLayeredNoRenderFlagChange@TransitionVisual@@SAJPEAV1@_N@Z
    static long UpdatePushDueToLayeredNoRenderFlagChange(TransitionVisual *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSoftBorderMode@TransitionVisual@@QEAAJ_N@Z
    long UpdateSoftBorderMode(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSolidFillOptimization@TransitionVisual@@QEAAJXZ
    long UpdateSolidFillOptimization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSolidFillOptimization_Recursive@TransitionVisual@@QEAAJXZ
    long UpdateSolidFillOptimization_Recursive();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UsePerspectiveTransforms@TransitionVisual@@QEAAJ_N@Z
    long UsePerspectiveTransforms(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateGadgetTicket@TransitionVisual@@QEAAJ_N@Z
    long ValidateGadgetTicket(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VisualToGadget@TransitionVisual@@QEAAJPEAUtagPOINT@@@Z
    long VisualToGadget(tagPOINT *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TransitionVisual@@QEAA@XZ
    ~TransitionVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateInsertionIndex@TransitionVisual@@AEAAHPEAV1@@Z
    int CalculateInsertionIndex(TransitionVisual *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionIncludingIgnoredOffset@TransitionVisual@@AEAAJPEAUtagPOINT@@@Z
    long GetPositionIncludingIgnoredOffset(tagPOINT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertBufferVisualAtIndex@TransitionVisual@@AEAAJPEAUIDCompositionVisual@@H@Z
    long InsertBufferVisualAtIndex(IDCompositionVisual *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertChildAtIndex@TransitionVisual@@AEAAJPEAV1@H_N@Z
    long InsertChildAtIndex(TransitionVisual *, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReturnToProperParent@TransitionVisual@@AEAAJXZ
    long ReturnToProperParent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAlpha@TransitionVisual@@AEAAJPEAUIDCompositionDevice@@PEAMPEAUIDCompositionAnimation@@@Z
    long UpdateAlpha(IDCompositionDevice *, float *, IDCompositionAnimation *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetVariable@TransitionVisual@@AEAAJW4Variable@1@HPEAN@Z
    long _SetVariable(int, int, double *);
};

```

## Member List

| Method | Return | Shape | Provenance | Exported |
|---|---|---|---|---|
| `ClearContent` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetSurface` | `struct IDCompositionSurface *` | `Accessor` | `Pdb` | No (PDB) |
| `_SetVariable` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetVariable` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetPropsFromVariable` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetDimension` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `StopAnimation` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateSolidFillOptimization` | `long` | `Method` | `Pdb` | No (PDB) |
| `RegionChanged` | `void` | `Method` | `Pdb` | No (PDB) |
| `ValidateGadgetTicket` | `long` | `Method` | `Pdb` | No (PDB) |
| `VisualToGadget` | `long` | `Method` | `Pdb` | No (PDB) |
| `PushPropertiesToGadget` | `void` | `Method` | `Pdb` | No (PDB) |
| `InsertChildAtIndex` | `long` | `Method` | `Pdb` | No (PDB) |
| `InsertBufferVisualAtIndex` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsAffectedByOpacityPushingAncestor` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `InsertChild` | `long` | `Method` | `Pdb` | No (PDB) |
| `CalculateInsertionIndex` | `int` | `Method` | `Pdb` | No (PDB) |
| `MarkForDeletion` | `void` | `Method` | `Pdb` | No (PDB) |
| `Release` | `void` | `Refcount` | `Pdb` | No (PDB) |
| `Update3DTransformGroup` | `long` | `Method` | `Pdb` | No (PDB) |
| `InitializeDCompTransforms` | `long` | `Method` | `Pdb` | No (PDB) |
| `InitializeProperties` | `long` | `Method` | `Pdb` | No (PDB) |
| `DestroyDCVisual` | `void` | `Method` | `Pdb` | No (PDB) |
| `PushOpacityToLeaves` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateSoftBorderMode` | `long` | `Method` | `Pdb` | No (PDB) |
| `UsePerspectiveTransforms` | `long` | `Method` | `Pdb` | No (PDB) |
| `Build` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetClip` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `AddAdditionalLeavesToPushingAncestor` | `long` | `Method` | `Pdb` | No (PDB) |
| `ClearPushedOpacityFromLeavesInTree` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetZOrder` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `ReparentDescendantsOfNewChild` | `long` | `Method` | `Pdb` | No (PDB) |
| `~TransitionVisual` | `void` | `Dtor` | `Pdb` | No (PDB) |
| `RemoveChild` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetPositionIncludingIgnoredOffset` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetVariableValues` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `CompensateForBufferOffset` | `void` | `Method` | `Pdb` | No (PDB) |
| `ApplyAncestorsOpacityEffectGroup` | `long` | `Method` | `Pdb` | No (PDB) |
| `ShiftCoordinates` | `long` | `Method` | `Pdb` | No (PDB) |
| `FireTransitionStart` | `void` | `Method` | `Pdb` | No (PDB) |
| `BeginDeletion` | `long` | `Method` | `Pdb` | No (PDB) |
| `IsGadgetTreeBeingDestroyed` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `UpdatePositionFromGadget` | `long` | `Method` | `Pdb` | No (PDB) |
| `GadgetToVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `RemainLayered` | `bool` | `Method` | `Pdb` | No (PDB) |
| `UpdateAlpha` | `long` | `Method` | `Pdb` | No (PDB) |
| `HasValidGadget` | `int` | `Accessor` | `Pdb` | No (PDB) |
| `ReleaseAnimationVariables` | `void` | `Method` | `Pdb` | No (PDB) |
| `UpdateCurve` | `long` | `Method` | `Pdb` | No (PDB) |
| `CreateDCompAnimationVariable` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetVariable` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `PopulateInitialVariableValues` | `long` | `Method` | `Pdb` | No (PDB) |
| `AnimateVariable` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetLowerBound` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `SetUpperBound` | `bool` | `Accessor` | `Pdb` | No (PDB) |
| `Update2DTransformGroup` | `long` | `Method` | `Pdb` | No (PDB) |
| `BelongsToDetachedTree` | `bool` | `Method` | `Pdb` | No (PDB) |
| `UpdateNativeSizeFromGadget` | `long` | `Method` | `Pdb` | No (PDB) |
| `PushAnimatingPropertiesToVisual` | `void` | `Method` | `Pdb` | No (PDB) |
| `CollectLeaves` | `long` | `Method` | `Pdb` | No (PDB) |
| `CustomGadgetHitTestQuery` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetProperty` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `MoveChildrenToParent` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetProperty` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `RebuildDCompResourcesSubtree` | `long` | `Method` | `Pdb` | No (PDB) |
| `SpawnVisuals` | `long` | `Method` | `Pdb` | No (PDB) |
| `GetVariableFromProp` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `RemoveAncestorsOpacityEffectGroup` | `long` | `Method` | `Pdb` | No (PDB) |
| `DetachFromParent` | `void` | `Method` | `Pdb` | No (PDB) |
| `ClearTopmostVisual` | `long` | `Method` | `Pdb` | No (PDB) |
| `AddTransitionVisualCopy` | `long` | `Method` | `Pdb` | No (PDB) |
| `AttachToParent` | `void` | `Method` | `Pdb` | No (PDB) |
| `CleanUpAnimations` | `void` | `Method` | `Pdb` | No (PDB) |
| `ClearTransitionVisualCopies` | `void` | `Method` | `Pdb` | No (PDB) |
| `CoordinateInputPaneAnimations` | `void` | `Method` | `Pdb` | No (PDB) |
| `CopyChildren` | `long` | `Method` | `Pdb` | No (PDB) |
| `DestroyCopyChildren` | `void` | `Method` | `Pdb` | No (PDB) |
| `DestroyFromFailedInit` | `void` | `Method` | `Pdb` | No (PDB) |
| `DetachTree` | `long` | `Method` | `Pdb` | No (PDB) |
| `ForceToEnd` | `void` | `Method` | `Pdb` | No (PDB) |
| `Get2DTransformFromVariable` | `struct IDCompositionTransform *` | `Method` | `Pdb` | No (PDB) |
| `Get3DTransformFromVariable` | `struct IDCompositionTransform3D *` | `Method` | `Pdb` | No (PDB) |
| `GetAccumulatedOffsets` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetFinalPosition2D` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetProperty` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `GetTransitionVisualCopyNoRef` | `class TransitionVisual *` | `Accessor` | `Pdb` | No (PDB) |
| `MakeVisualTopmost` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReinitializeVisuals` | `void` | `Method` | `Pdb` | No (PDB) |
| `RemoveTransitionVisualCopy` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReplaceVisuals` | `void` | `Method` | `Pdb` | No (PDB) |
| `ResetVariable` | `long` | `Method` | `Pdb` | No (PDB) |
| `ReturnToProperParent` | `long` | `Method` | `Pdb` | No (PDB) |
| `SetContentOnCopy` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetContentVisual` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetParentClipImmunity` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetPerspective` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SetPerspectiveDegree` | `long` | `Accessor` | `Pdb` | No (PDB) |
| `SpecifyPerspectiveMatrix` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdatePushDueToLayeredNoRenderFlagChange` | `long` | `Method` | `Pdb` | No (PDB) |
| `UpdateSolidFillOptimization_Recursive` | `long` | `Method` | `Pdb` | No (PDB) |
