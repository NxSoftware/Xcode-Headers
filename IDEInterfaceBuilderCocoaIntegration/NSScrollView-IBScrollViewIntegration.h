//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class NSValue, NSView;

@interface NSScrollView (IBScrollViewIntegration)
+ (id)ibKeyPathsForContentViewSubviews;
+ (long long)ibDevelopmentTargetForDocumentContentView;
+ (id)ibKeyPathForDocumentContentView;
+ (id)keyPathsForValuesAffectingContentInsets;
+ (id)keyPathsForValuesAffectingIbInspectedUseFixedContentInsets;
+ (id)keyPathsForValuesAffectingIbInspectedMaxMagnification;
+ (id)keyPathsForValuesAffectingIbInspectedMinMagnification;
- (id)ibObjectsToReparentWhenAddingOrRemovingActiveContentView;
- (id)ibVerifyContentViewCurrentContentView;
- (BOOL)ibCanEmbedDirectlyInSplitView;
- (void)ibMapCopyOfReceiver:(id)arg1 intoLayoutEngine:(id)arg2;
- (unsigned long long)ibCustomSubviewLayoutStrategy;
- (BOOL)ibChildViewHasCustomLayoutButAllowsEqualSizeConstraints:(id)arg1;
- (BOOL)ibChildView:(id)arg1 canHaveUninitializedAutolayoutAmbiguityStatusInDocument:(id)arg2;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (void)setIbArchivedDesignableContentView:(id)arg1 unarchiver:(id)arg2;
- (void)awakeAfterUsingDocumentUnarchiver:(id)arg1;
- (id)ibArchivedDesignableContentView;
- (BOOL)ibInspectedUseFixedContentInsets;
@property(retain) NSValue *ibWrappedScrollerInsets;
@property(retain) NSValue *ibWrappedContentInsets;
- (void)setIbShadowedSubviews:(id)arg1;
- (id)ibShadowedSubviews;
@property(retain) NSView *ibArchivedHeaderView;
@property(retain) NSView *ibShadowedHeaderView;
@property BOOL ibShadowedAutohidesScrollers;
- (id)ibLabelQualifierForChild:(id)arg1;
- (id)ibUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibCanUnembedChildrenInDocument:(id)arg1;
- (void)ibSuggestLayoutAllowingResizingTopLevelView:(BOOL)arg1;
- (struct CGPoint)ibPreferredOriginForSize:(struct CGSize)arg1;
- (struct CGSize)ibPreferredSizeForSize:(struct CGSize)arg1 suggestedWidth:(char *)arg2 suggestedHeight:(char *)arg3 scaleAxesIndependently:(char *)arg4;
- (struct CGSize)ibPreferredSize;
- (void)ibDidSuggestLayout:(struct CGRect)arg1 inView:(id)arg2 context:(id)arg3;
- (void)ibWillSuggestLayout:(struct CGRect)arg1 inView:(id)arg2 context:(id)arg3;
- (BOOL)ibIsChildViewSizable:(id)arg1;
- (BOOL)ibIsChildViewMovable:(id)arg1;
- (BOOL)ibShouldHiddenChildViewBeVisible:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibIsChildTypicalConnectionTarget:(id)arg1;
- (BOOL)ibOverridablePrefersToVerticallyResizeWithContainer;
- (BOOL)ibOverridablePrefersToHorizontallyResizeWithContainer;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (void)ibAwakeInDocument:(id)arg1;
- (Class)ibEditorClass;
- (void)setIbInspectedMaxMagnification:(double)arg1;
- (double)ibInspectedMaxMagnification;
- (void)setIbInspectedMinMagnification:(double)arg1;
- (double)ibInspectedMinMagnification;
- (id)ibWidgetType;
- (id)ibQualifyingInfoForDefaultLabel;
- (BOOL)ibWantsVerboseDefaultLabel;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (BOOL)ibIsNSAppearanceContainer;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
@end

