//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBEditor.h>

#import <IDEInterfaceBuilderKit/IBLayoutConstraintDrawingDestination-Protocol.h>
#import <IDEInterfaceBuilderKit/IBLayoutConstraintStatusProvider-Protocol.h>
#import <IDEInterfaceBuilderKit/NSPopoverDelegate-Protocol.h>

@class DVTDelayedInvocation, IBCancellationToken, IBLayoutConstraint, IBMutableIdentityDictionary, IBPerformanceFrameRateMetric, IBViewTracker, NSArray, NSDictionary, NSMutableDictionary, NSPopover, NSSet, NSString, NSValue;
@protocol DVTInvalidation;

@interface IBViewEditor : IBEditor <IBLayoutConstraintDrawingDestination, IBLayoutConstraintStatusProvider, NSPopoverDelegate>
{
    DVTDelayedInvocation *_constraintUpdatingInvocation;
    DVTDelayedInvocation *_constraintSelectionUpdatingInvocation;
    long long _constraintHidingCount;
    unsigned long long _bandSelectionFramesDrawn;
    id <DVTInvalidation> _constraintDrawingToken;
    DVTDelayedInvocation *_mouseRestValidator;
    id _mouseMovedObservationToken;
    IBLayoutConstraint *_lastMousedOverConstraint;
    IBLayoutConstraint *_nextSelectableConstraint;
    struct CGPoint _lastMouseMovedPoint;
    BOOL _reguardSiblingsIgnoredForDragGuides;
    BOOL _drawBordersOnDraggedViews;
    NSSet *_siblingsIgnoredForDragGuides;
    long long _pasteOffsetType;
    unsigned long long _dragAndDropGuideDisplayToken;
    NSMutableDictionary *_constraintBadgeImageCachesByTintColor;
    NSMutableDictionary *_selectedConstraintBadgeImageCachesByTintColor;
    IBCancellationToken *_documentStatusObservingToken;
    NSSet *_drawingOptionNotificationTokens;
    NSPopover *_currentConstraintEditingPopover;
    IBMutableIdentityDictionary *_observingTokensByView;
    IBPerformanceFrameRateMetric *_bandSelectionFrameRateMetric;
    NSValue *_nextPasteTarget;
    NSSet *_viewsInvolvedWithSelectedConstraints;
    NSArray *_currentConstraintDrawableGuideLines;
    NSDictionary *_constraintToConstraintDrawablesMap;
    NSArray *_kvoObservingTokensForDocument;
    NSArray *_currentConstraintDrawables;
    NSSet *_viewsToDrawConstraintsFor;
    NSArray *_orderedConstraintsToDraw;
    NSSet *_selectedConstraints;
    IBViewTracker *_activeTracker;
    struct CGRect _bandSelectionRect;
}

+ (void)resetCursorRectsForObject:(id)arg1 inFrameController:(id)arg2;
+ (struct CGRect)rectForDefaultCursorForChildView:(id)arg1 ofEditedObject:(id)arg2 inFrameController:(id)arg3;
+ (id)keyPathsForInvalidatingConstraints;
+ (struct CGSize)knobSize;
+ (id)lockedKnobImage;
+ (id)inactiveKnobImage;
+ (id)knobImage;
+ (Class)ibDropTargetResolverClass;
@property(nonatomic) struct CGRect bandSelectionRect; // @synthesize bandSelectionRect=_bandSelectionRect;
@property(retain, nonatomic) IBViewTracker *activeTracker; // @synthesize activeTracker=_activeTracker;
@property(copy) NSSet *selectedConstraints; // @synthesize selectedConstraints=_selectedConstraints;
@property(copy) NSArray *orderedConstraintsToDraw; // @synthesize orderedConstraintsToDraw=_orderedConstraintsToDraw;
@property(copy, nonatomic) NSSet *viewsToDrawConstraintsFor; // @synthesize viewsToDrawConstraintsFor=_viewsToDrawConstraintsFor;
@property(copy, nonatomic) NSArray *currentConstraintDrawables; // @synthesize currentConstraintDrawables=_currentConstraintDrawables;
@property(retain) NSArray *kvoObservingTokensForDocument; // @synthesize kvoObservingTokensForDocument=_kvoObservingTokensForDocument;
@property(copy) NSDictionary *constraintToConstraintDrawablesMap; // @synthesize constraintToConstraintDrawablesMap=_constraintToConstraintDrawablesMap;
@property(copy) NSArray *currentConstraintDrawableGuideLines; // @synthesize currentConstraintDrawableGuideLines=_currentConstraintDrawableGuideLines;
@property(copy) NSSet *viewsInvolvedWithSelectedConstraints; // @synthesize viewsInvolvedWithSelectedConstraints=_viewsInvolvedWithSelectedConstraints;
@property(copy) NSValue *nextPasteTarget; // @synthesize nextPasteTarget=_nextPasteTarget;
@property(retain, nonatomic) IBPerformanceFrameRateMetric *bandSelectionFrameRateMetric; // @synthesize bandSelectionFrameRateMetric=_bandSelectionFrameRateMetric;
- (void).cxx_destruct;
- (id)objectsForSelectingAll;
- (void)didClose;
- (void)didOpen;
- (void)stopObservingOnDeactivation;
- (void)startObservingOnActivation;
- (id)connectionSourceForEvent:(id)arg1;
- (id)constraintAtPointInOverlayView:(struct CGPoint)arg1;
- (id)constraintDrawableAtPointInOverlayView:(struct CGPoint)arg1;
- (void)popoverDidClose:(id)arg1;
- (void)_openConstraintEditingPopoverForConstraint:(id)arg1 withEvent:(id)arg2;
- (void)_closeCurrentConstraintEditingPopover;
- (void)selectConstraintsIfPossible:(id)arg1 withEvent:(id)arg2;
- (void)selectConstraintsIfPossible:(id)arg1;
- (void)selectConstraintsIfPossible:(id)arg1 withSelectionCallbackBlock:(CDUnknownBlockType)arg2;
- (id)determineConstraintsToSelectAndWarnIfAnyConstraintWasRemovedFromDocument:(id)arg1;
- (void)didResizeEditedObjectOrAncestorEditedObject:(id)arg1 withEvent:(id)arg2 fromKnob:(CDUnion_31865a80)arg3;
- (void)willResizeEditedObjectOrAncestorEditedObject:(id)arg1 withEvent:(id)arg2 fromKnob:(CDUnion_31865a80)arg3;
- (void)noteAncestor:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)updateConstraintVisibilityBasedUponSelection;
- (void)addEffectiveViewsInvolvedInConstraintToDraw:(id)arg1 toCollection:(id)arg2;
- (void)clearAllConstraintDrawing;
- (void)updateConstraintsForViews;
- (void)willDrawConstraints;
- (void)invokeConstraintSelectionAndUpdatingIfNeeded;
- (void)pushOrderedConstraintAbstractionsToDraw:(id)arg1;
- (void)didChangeShowingInvolvedViewsForSelectedConstraints:(id)arg1;
- (void)didChangeShowingIntrinsicSizeConstraints:(id)arg1;
- (void)didChangeShowingConstraints:(id)arg1;
- (void)invalidateConstraintsForViews;
- (void)invalidateConstraintSelectionForViews;
- (void)invalidateMisplacedViewRectsBasedDidSelect:(id)arg1 andDeselect:(id)arg2;
- (id)constraintsToDrawForView:(id)arg1;
- (BOOL)constraintItemIsLegitimateItemForDrawing:(id)arg1 relativeToItem:(id)arg2;
- (void)invalidateDrawingAreaForCurrentDrawablesAndGuideLines;
- (struct CGRect)drawingAreaForDrawableBadge:(id)arg1;
- (struct CGRect)drawingAreaForDrawable:(id)arg1;
- (void)updateConstraintDrawablesAndGuideLinesForOrderedConstraintAbstractions:(id)arg1;
- (void)_populateEngineEvaluatedConstantsByConstraint:(id)arg1 andPopulateConstraintsByAbstraction:(id)arg2 forDrawingConstraintAbstractions:(id)arg3;
- (void)drawConstraintItem:(id)arg1;
- (void)drawGuideLine:(CDStruct_f6143a38)arg1;
- (struct CGRect)rectForGuideLine:(CDStruct_f6143a38)arg1;
- (void)drawViewEditorDrawable:(id)arg1;
- (id)effectiveShadowForConstraintDrawable:(id)arg1;
- (id)effectiveStrokeColorForConstraintDrawable:(id)arg1;
- (void)drawRelativeConstraintAlignmentLineWithLine:(CDStruct_f6143a38)arg1 withColor:(id)arg2 strokeColor:(id)arg3 lineThickness:(double)arg4 dashed:(BOOL)arg5 edgeBias:(id)arg6 badgeRect:(struct CGRect)arg7;
- (void)drawBadgeStrokeOutlineForRect:(struct CGRect)arg1;
- (void)drawLimitedSpaceDualTBeamWithDrawable:(id)arg1 withColor:(id)arg2 strokeColor:(id)arg3 lineThickness:(double)arg4 dashed:(BOOL)arg5 badgeRect:(struct CGRect)arg6;
- (void)drawLimitedSpaceConnectionWithLine:(CDStruct_f6143a38)arg1 withColor:(id)arg2 strokeColor:(id)arg3 lineThickness:(double)arg4 dashed:(BOOL)arg5 badgeRect:(struct CGRect)arg6;
- (void)drawConstraintStraightLine:(CDStruct_f6143a38)arg1 withColor:(id)arg2 strokeColor:(id)arg3 lineThickness:(double)arg4 dashed:(BOOL)arg5 edgeBias:(id)arg6 badgeRect:(struct CGRect)arg7;
- (void)drawIBeamWithLine:(CDStruct_f6143a38)arg1 withColor:(id)arg2 strokeColor:(id)arg3 lineThickness:(double)arg4 dashed:(BOOL)arg5 badgeRect:(struct CGRect)arg6;
- (id)dashedBezierPathLineForLine:(CDStruct_f6143a38)arg1 withThickness:(double)arg2 onDashLength:(double)arg3 offDashLength:(double)arg4 phase:(double)arg5 edgeBias:(id)arg6;
- (void)drawConstraints;
- (void)drawResizeKnobs;
- (void)drawMisplacedViewIndicator;
- (struct CGRect)misplacedViewIndicatorRectForView:(id)arg1;
- (void)drawBandSelection;
- (id)descendantsDrawingOverlayContent;
- (struct CGRect)rectForDecorationsOverlayWithScale:(double)arg1;
- (CDStruct_c519178c)decorationInsetForChild:(id)arg1;
- (void)drawKnobsForView:(id)arg1;
- (id)effectiveKnobImageForObject:(id)arg1;
- (id)installSelectionDrawingHandlers;
- (BOOL)interceptEvent:(id)arg1;
- (BOOL)isDocumentObjectCurrentlySelectable:(id)arg1;
- (void)resizeFrameViewWithEvent:(id)arg1 fromEditorCanvasFrameKnob:(CDUnion_31865a80)arg2;
- (BOOL)interceptMouseDragged:(id)arg1;
- (BOOL)child:(id)arg1 shouldBeSelectedOnMouseDraggedWithEvent:(id)arg2;
- (BOOL)interceptDeadClicks:(id)arg1;
- (BOOL)interceptDecoratorActionEvent:(id)arg1;
- (BOOL)interceptResizingEvent:(id)arg1;
- (id)selectableEventInterceptingLayoutConstraintAtPoint:(struct CGPoint)arg1;
- (void)moveSelectedViewsWithKeyEvent:(id)arg1;
- (struct CGPoint)_pointOffsetForKeyEvent:(id)arg1;
- (id)frameToWindowTransformForPasteboardViews:(id)arg1;
- (void)bandSelect;
- (void)resizeChild:(id)arg1 fromKnob:(CDUnion_31865a80)arg2 withEvent:(id)arg3;
- (id)viewForTrackingObject:(id)arg1;
- (BOOL)shouldResizeChild:(id *)arg1 fromKnob:(CDUnion_31865a80 *)arg2 inEvent:(id)arg3;
- (BOOL)shouldChildHaveResizeKnobs:(id)arg1;
- (BOOL)objectShouldShowSelectionHighlight:(id)arg1;
- (BOOL)areKnobsLockedForObject:(id)arg1;
- (BOOL)wasChildSelectedBeforeClick:(id)arg1;
- (void)validateMouseRested:(id)arg1;
- (void)mouseMovedToScreenLocation:(struct CGPoint)arg1 withButtonStates:(long long)arg2;
- (void)refreshMouseOverConstraintState;
- (void)setConstraintSelectableUpdatingDelay:(double)arg1;
- (void)resetCursorRects;
- (CDStruct_b58c4854)activeKnobRectsForObject:(id)arg1;
- (id)installedChildViewsInRect:(struct CGRect)arg1;
- (void)editorCanvasFrameDidCompleteLayout;
- (void)noteAncestorEditorDidChangeViewGeometry:(id)arg1;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)updatePasteInsertionPointFromMouseDown:(id)arg1;
- (void)updatePasteInsertionPointFromSelection;
- (id)acceptDragInfo:(id)arg1 context:(id)arg2;
- (void)prepareToAcceptDragInfo:(id)arg1;
- (void)failToAcceptDragInfo:(id)arg1;
- (id)guideContextForDraggingInfo:(id)arg1;
- (id)calculateFramesForViews:(id)arg1 withDraggingInfo:(id)arg2;
- (id)draggedObjectStateToUseForGuidingFromDragInfo:(id)arg1;
- (BOOL)handleDragForChild:(id)arg1 forDragEvent:(id)arg2;
- (void)dragChildViews:(id)arg1 withMouseDown:(id)arg2 andMouseDragged:(id)arg3;
- (void)dragSelectedViewsWithMouseDown:(id)arg1 andMouseDragged:(id)arg2;
- (void)drawBordersOnDraggedViewsWhilePerformingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)dragOperationForDraggingViews:(id)arg1 withMouseDown:(id)arg2 andMouseDragged:(id)arg3;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (void)detachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (id)initialDragImageState:(id)arg1;
- (id)draggedImageState:(id)arg1;
- (BOOL)draggedSourceAllowsDrag:(id)arg1 toDestination:(id)arg2;
- (unsigned long long)draggedOperationAllowedModifierFlags;
- (id)draggedImageStateForDraggingInfo:(id)arg1 forOrderedIdentifiedViews:(id)arg2 withName:(id)arg3;
- (id)draggedImageWithDrawnBordersForView:(id)arg1;
- (id)draggedImageForView:(id)arg1;
- (void)customizePasteboardInsertionContext:(id)arg1 fromPasteboard:(id)arg2 andDraggingInfo:(id)arg3;
- (BOOL)selectsNextObjectAfterDeletionFromRelationship:(id)arg1;
- (void)selectionOwner:(id)arg1 didSelect:(id)arg2 andDeselect:(id)arg3;
- (void)selectionOwner:(id)arg1 willSelect:(id)arg2 andDeselect:(id)arg3;
- (CDStruct_c519178c)canvasAlignmentInsetForEditorFrame;
- (BOOL)canSizeSelectionToFit;
- (void)sizeSelectionToFit:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)performCopy:(id)arg1;
- (void)performCut:(id)arg1;
- (void)addVerticalGuide:(id)arg1;
- (void)addHorizontalGuide:(id)arg1;
- (struct CGRect)rectForGuide;
- (void)alignEdgeTop:(id)arg1;
- (void)alignEdgeBottom:(id)arg1;
- (void)alignEdgeRight:(id)arg1;
- (void)alignEdgeLeft:(id)arg1;
- (void)alignMiddleInContainer:(id)arg1;
- (void)alignCenterInContainer:(id)arg1;
- (void)alignMidY:(id)arg1;
- (void)alignMidX:(id)arg1;
- (void)alignBaselines:(id)arg1;
- (void)sendForward:(id)arg1;
- (void)sendToFront:(id)arg1;
- (void)sendBackward:(id)arg1;
- (void)sendToBack:(id)arg1;
- (void)didDeactivate;
- (void)didActivate;
- (id)_constraintBadgeImageForLabel:(id)arg1 tintColor:(id)arg2 drawSelected:(BOOL)arg3 returningBadgeSize:(struct CGSize *)arg4 badgeInset:(CDStruct_c519178c *)arg5;
- (id)_cachedConstraintBadgeImageByTintColor:(id)arg1 drawSelected:(BOOL)arg2 label:(id)arg3;
- (void)_setCachedConstraintBadgeImage:(id)arg1 forTintColor:(id)arg2 drawSelected:(BOOL)arg3 label:(id)arg4;
- (id)_scalableBaseConstraintBadgeImageWithTintColor:(id)arg1 drawSelected:(BOOL)arg2 returningBadgeSize:(struct CGSize *)arg3 badgeInset:(CDStruct_c519178c *)arg4 supportedScaleFactors:(id *)arg5;
- (id)_baseConstraintBadgeImageShadowReturningShadowInset:(CDStruct_c519178c *)arg1;
- (struct CGRect)rectForDrawableBadge:(id)arg1;
- (struct CGRect)rectForDrawingOverlayForConstraintItem:(id)arg1;
- (struct CGRect)rectForDrawingConstraintItem:(id)arg1;
- (id)hitRectsForConstraint:(id)arg1 inCoordinateSpaceOfView:(id)arg2;
- (struct CGRect)hitRectForDrawableBadge:(id)arg1;
- (struct CGRect)hitRectForDrawable:(id)arg1;
- (struct CGRect)rectForDrawable:(id)arg1;
- (struct CGRect)rectForLimitedSpaceDualTBeamForDrawable:(id)arg1;
- (struct CGRect)rectForConstraintLineWithLine:(CDStruct_f6143a38)arg1 lineThickness:(double)arg2 edgeBias:(id)arg3;
- (struct CGRect)rectForIBeamWithLine:(CDStruct_f6143a38)arg1;
- (void)setNextSelectableConstraint:(id)arg1;
- (BOOL)wantsToShowSelectionIndicators;
- (BOOL)forbidsShowingSelectionIndicators;
- (BOOL)constraintIsSelectable:(id)arg1;
- (BOOL)constraintIsVisible:(id)arg1;
- (id)constraintUpdatingInvocation;
- (id)constraintSelectionUpdatingInvocation;
- (void)withConstraintDrawingHidden:(CDUnknownBlockType)arg1;
- (void)finishHidingConstraintDrawing;
- (void)beginHidingConstraintDrawing;
- (void)updateConstraintHidingCount:(long long)arg1;
@property(readonly, nonatomic) BOOL hidesConstraints;
- (void)_updateViewsWithUnconditionalLayoutRectangles;
- (void)stopObservingDocument;
- (void)startObservingDocument;
- (void)stopObservingView:(id)arg1 forKeyPaths:(id)arg2 andNotifications:(id)arg3;
- (void)startObservingView:(id)arg1 forKeyPaths:(id)arg2 andNotifications:(id)arg3;
- (id)observingTokensByView;
- (id)involvedViewOverlayChiselColor;
- (id)involvedViewOverlayInnerPathGradient;
- (id)involvedViewOverlayOuterStrokeColor;
- (id)selectableConstraintShadow;
- (id)selectedConstraintShadow;
- (id)measurementDrawingHandler;
- (BOOL)isFrameLockedForView:(id)arg1;
- (id)trackerForChild:(id)arg1 withView:(id)arg2 fromKnob:(CDUnion_31865a80)arg3;
- (id)selectedViewsInDesignableContainer;
- (BOOL)isViewInDesignableContainer:(id)arg1;
- (id)orderedSelectedViews;
- (id)selectedViews;
- (id)installedChildViews;
- (id)layoutManager;
- (id)viewEditorFrameController;
- (id)lastMouseDown;
- (id)viewPasteboardType;
- (id)ibDesignableContentView;
- (id)viewToTrackForFrameResizing;
- (id)editedView;
- (id)editorView;
- (id)initWithEditedObject:(id)arg1 parentEditor:(id)arg2 frameController:(id)arg3;
- (id)equalSizeBadge;
- (id)greaterThanOrEqualToBadge;
- (id)lessThanOrEqualToBadge;
- (id)constraintBadgeImageForRelationshipImage:(id)arg1;
- (id)constraintBadgeImageForLabel:(id)arg1 tintColor:(id)arg2 drawSelected:(BOOL)arg3 returningBadgeSize:(struct CGSize *)arg4 badgeInset:(CDStruct_c519178c *)arg5;
- (id)badgeImageForAspectRatioConstraint:(id)arg1 drawSelected:(BOOL)arg2 attribute:(unsigned long long)arg3 returningBadgeSize:(struct CGSize *)arg4 badgeInset:(CDStruct_c519178c *)arg5;
- (id)badgeImageForMisplacedConstraint:(id)arg1 drawSelected:(BOOL)arg2 constantDelta:(double)arg3 returningBadgeSize:(struct CGSize *)arg4 badgeInset:(CDStruct_c519178c *)arg5;
- (id)badgeImageForAmbiguousConstraint:(id)arg1 drawSelected:(BOOL)arg2 constantDelta:(double)arg3 returningBadgeSize:(struct CGSize *)arg4 badgeInset:(CDStruct_c519178c *)arg5;
- (id)badgeImageForConflictingConstraint:(id)arg1 drawSelected:(BOOL)arg2 returningBadgeSize:(struct CGSize *)arg3 badgeInset:(CDStruct_c519178c *)arg4;
- (struct CGRect)rectIncludingBadgeForDrawable:(id)arg1;
- (BOOL)isShowingResizeKnobs;
- (id)badgeLabelForAbstraction:(id)arg1 atIndex:(unsigned long long)arg2 isConflicting:(BOOL)arg3 isAmbiguous:(BOOL)arg4 isMisplaced:(BOOL)arg5;
- (id)defaultDrawableTintColorForAbstraction:(id)arg1 atIndex:(unsigned long long)arg2 isConflicting:(BOOL)arg3 isAmbiguous:(BOOL)arg4 isMisplaced:(BOOL)arg5;
- (id)colorSpecifier;
- (long long)userInterfaceLayoutDirection;
- (id)constraintOverlayView;
- (struct CGRect)layoutRectInOverlayCoordinatesForConstraintItem:(id)arg1;
- (double)valueOfAttribute:(unsigned long long)arg1 forView:(id)arg2 inCoordinateSpaceOfView:(id)arg3 withUserInterfaceLayoutDirection:(long long)arg4;
- (BOOL)isSelectableConstraint:(id)arg1;
- (BOOL)isSelectedConstraint:(id)arg1;
- (BOOL)isConflictingConstraint:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

