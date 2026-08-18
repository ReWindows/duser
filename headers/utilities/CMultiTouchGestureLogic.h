#pragma once
#include "../windissect_forwards.h"

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
