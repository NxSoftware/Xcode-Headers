//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IBAutolayoutEngine, NSArray, NSDictionary, NSLayoutConstraint, NSObject<IBAutolayoutItem>, NSSet;

@protocol IBAutolayoutItem <NSObject>
@property(readonly, nonatomic) BOOL ibIgnoreNearestNeighborProximityThreshold;
@property(readonly, nonatomic) NSSet *ibFallbackViewsForCandidateConstraintGenerationForFailedArbitration;
@property(readonly, nonatomic) id ibWindowForArbitration;
@property(nonatomic) double ibShadowedVerticalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedHorizontalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedVerticalContentHuggingPriority;
@property(nonatomic) double ibShadowedHorizontalContentHuggingPriority;
@property(nonatomic) BOOL ibExternalTranslatesAutoresizingMaskIntoConstraints;
@property(readonly, nonatomic) id <IBCollection> ibTurnedOnButPossiblyUninstalledReferencingConstraints;
@property(readonly, nonatomic) id <IBCollection> ibInstalledReferencingConstraints;
@property(readonly, nonatomic) id <IBCollection> ibCandidateReferencingConstraints;
@property(retain, nonatomic) id <IBOrderedCollection> ibTurnedOnButPossiblyUninstalledConstraints;
@property(retain, nonatomic) id <IBOrderedCollection> ibInstalledConstraints;
@property(retain, nonatomic) id <IBOrderedCollection> ibCandidateConstraints;
@property(readonly, nonatomic) struct CGRect ibLayoutFrameworkBounds;
@property(nonatomic) struct CGRect ibLayoutFrame;
@property(readonly, nonatomic) struct CGRect ibLayoutBounds;
@property(readonly, nonatomic) NSArray *constraints;
@property(readonly, nonatomic) long long ibBaselineCount;
@property(readonly, nonatomic) double ibShadowedFirstBaselineOffsetFromTop;
@property(readonly, nonatomic) double baselineOffsetFromBottom;
@property(readonly, nonatomic, getter=isFlipped) BOOL flipped;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
@property(readonly, nonatomic) CDStruct_c519178c ibLayoutInset;
@property(nonatomic) BOOL translatesAutoresizingMaskIntoConstraints;
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGRect frame;
@property(readonly, nonatomic) id window;
@property(readonly, nonatomic) NSArray *subviews;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *superview;
@property(readonly, nonatomic) NSArray *ibChildItemsEligibleForNearestNeighborConstraints;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *ibParentItem;
- (void)ibDidCreateRuntimeConstraint:(NSLayoutConstraint *)arg1 referencingItem:(id)arg2 context:(NSDictionary *)arg3;
- (id)ibEffectiveItemForRuntimeConstraintAdjustingConstant:(double *)arg1 attribute:(unsigned long long *)arg2 orConstraintClassIfNeeded:(Class *)arg3 context:(NSDictionary *)arg4;
- (unsigned long long)ibAmbiguityStatusForRepresentationOfItem:(NSObject<IBAutolayoutItem> *)arg1 inEngine:(IBAutolayoutEngine *)arg2;
- (BOOL)ibShouldIgnoreScrollableContentHeightAmbiguityForRepresentationOfItem:(NSObject<IBAutolayoutItem> *)arg1 inEngine:(IBAutolayoutEngine *)arg2;
- (BOOL)ibShouldIgnoreScrollableContentWidthAmbiguityForRepresentationOfItem:(NSObject<IBAutolayoutItem> *)arg1 inEngine:(IBAutolayoutEngine *)arg2;
- (NSObject<IBAutolayoutItem> *)ibNextAncestorItemForFindingReferencingConstraintsInLayoutInfo:(id <IBAutolayoutInfoProvider>)arg1;
- (unsigned long long)ibAllowedSiblingEdgesForGuidesToSelectedItems:(id <IBCollection>)arg1;
- (BOOL)ibAllowsSiblingGuidesToSelectedItems:(id <IBCollection>)arg1 ofType:(long long)arg2;
- (BOOL)ibShouldConsiderGuidesToEdgeWithAttribute:(unsigned long long)arg1 fromEdgeWithAttribute:(unsigned long long)arg2 ofSelectedItems:(id <IBCollection>)arg3;
- (NSObject<IBAutolayoutItem> *)ibViewForAncestorViewEdgeMovementQuestionsOfSubview:(NSObject<IBAutolayoutItem> *)arg1;
- (struct CGRect)ibLayoutFrameForFrame:(struct CGRect)arg1;
- (struct CGRect)ibFrameForLayoutFrame:(struct CGRect)arg1;
- (struct CGRect)ibBoundsForLayoutBounds:(struct CGRect)arg1;
- (void)ibInvalidateAutoresizingMaskConstraints;
- (void)setNeedsUpdateConstraints;
- (void)exerciseAmbiguityInLayout;
- (NSArray *)constraintsAffectingLayoutForOrientation:(unsigned long long)arg1;
- (BOOL)ib_hasAmbiguousLayout;
- (void)setContentCompressionResistancePriority:(float)arg1 forOrientation:(unsigned long long)arg2;
- (float)contentCompressionResistancePriorityForOrientation:(unsigned long long)arg1;
- (void)setContentHuggingPriority:(float)arg1 forOrientation:(unsigned long long)arg2;
- (float)contentHuggingPriorityForOrientation:(unsigned long long)arg1;
- (void)removeConstraints:(NSArray *)arg1;
- (void)removeConstraint:(NSLayoutConstraint *)arg1;
- (void)addConstraints:(NSArray *)arg1;
- (void)addConstraint:(NSLayoutConstraint *)arg1;
- (CDUnion_31865a80)convertKnobPosition:(CDUnion_31865a80)arg1 fromView:(struct NSView *)arg2;
- (CDUnion_31865a80)convertKnobPosition:(CDUnion_31865a80)arg1 toView:(struct NSView *)arg2;
- (unsigned int)convertRectEdge:(unsigned int)arg1 fromView:(struct NSView *)arg2;
- (unsigned int)convertRectEdge:(unsigned int)arg1 toView:(struct NSView *)arg2;
- (CDStruct_c519178c)convertInset:(CDStruct_c519178c)arg1 fromView:(struct NSView *)arg2;
- (CDStruct_c519178c)convertInset:(CDStruct_c519178c)arg1 toView:(struct NSView *)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toView:(struct NSView *)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromView:(struct NSView *)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 toView:(struct NSView *)arg2;
- (struct CGSize)convertSize:(struct CGSize)arg1 fromView:(struct NSView *)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toView:(struct NSView *)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(struct NSView *)arg2;
- (CDUnion_31865a80)ib_convertKnobPosition:(CDUnion_31865a80)arg1 fromItem:(NSObject<IBAutolayoutItem> *)arg2;
- (CDUnion_31865a80)ib_convertKnobPosition:(CDUnion_31865a80)arg1 toItem:(NSObject<IBAutolayoutItem> *)arg2;
- (unsigned int)ib_convertRectEdge:(unsigned int)arg1 fromItem:(NSObject<IBAutolayoutItem> *)arg2;
- (unsigned int)ib_convertRectEdge:(unsigned int)arg1 toItem:(NSObject<IBAutolayoutItem> *)arg2;
- (CDStruct_c519178c)ib_convertInset:(CDStruct_c519178c)arg1 fromItem:(NSObject<IBAutolayoutItem> *)arg2;
- (CDStruct_c519178c)ib_convertInset:(CDStruct_c519178c)arg1 toItem:(NSObject<IBAutolayoutItem> *)arg2;
- (struct CGRect)ib_convertRect:(struct CGRect)arg1 toItem:(NSObject<IBAutolayoutItem> *)arg2;
- (struct CGRect)ib_convertRect:(struct CGRect)arg1 fromItem:(NSObject<IBAutolayoutItem> *)arg2;
- (struct CGSize)ib_convertSize:(struct CGSize)arg1 toItem:(NSObject<IBAutolayoutItem> *)arg2;
- (struct CGSize)ib_convertSize:(struct CGSize)arg1 fromItem:(NSObject<IBAutolayoutItem> *)arg2;
- (struct CGPoint)ib_convertPoint:(struct CGPoint)arg1 toItem:(NSObject<IBAutolayoutItem> *)arg2;
- (struct CGPoint)ib_convertPoint:(struct CGPoint)arg1 fromItem:(NSObject<IBAutolayoutItem> *)arg2;
- (NSObject<IBAutolayoutItem> *)ibEffectiveRootCoordinateSystemForConversions;
- (id)ibEffectiveWindowForConversions;
- (void)setFrameSize:(struct CGSize)arg1;
- (struct CGRect)alignmentRectForFrame:(struct CGRect)arg1;
- (BOOL)ibSupportsLayoutMargins;
- (struct _IBEdgeInsets)ibLayoutMargins;
- (BOOL)ibSupportsFirstBaseline;
- (BOOL)ibIsBaselineAtIndex:(long long)arg1 inMotionWithKnob:(CDUnion_31865a80)arg2;
- (double)ibBaselineAtIndex:(long long)arg1 inCoordinateSpaceOfItem:(NSObject<IBAutolayoutItem> *)arg2;
- (void)addSubview:(NSObject<IBAutolayoutItem> *)arg1;
- (void)removeFromSuperview;
- (id)initAsEngineSpacerItemWithInitialLayoutFrame:(struct CGRect)arg1;
@end

