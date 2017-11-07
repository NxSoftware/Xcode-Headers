//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSStackView.h>

#import <IDEInterfaceBuilderCocoaIntegration/IBStackView-Protocol.h>

@class NSArray, NSDictionary;

@interface NSStackView (IBNSStackViewIntegration) <IBStackView>
+ (id)keyPathsForValuesAffectingIbInspectedVerticalClippingResistancePriority;
+ (id)keyPathsForValuesAffectingIbInspectedHorizontalClippingResistancePriority;
+ (id)keyPathsForValuesAffectingIbInspectedVerticalHuggingPriority;
+ (id)keyPathsForValuesAffectingIbInspectedHorizontalHuggingPriority;
+ (id)keyPathsForValuesAffectingIbShadowedCustomSpacing;
+ (id)keyPathsForValuesAffectingIbInspectedHasViewsForGravityAreas;
+ (id)keyPathsForValuesAffectingIbInspectedHorizontal;
+ (id)keyPathsForValuesAffectingIbInspectedVertical;
+ (id)keyPathsForValuesAffectingIbDesignableContentView;
+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
+ (id)keyPathsForValuesAffectingIbShadowedSubviews;
+ (id)keyPathsForValuesAffectingIbInspectedStackingDistribution;
+ (id)keyPathsForValuesAffectingIbShadowedStackingDistribution;
+ (id)keyPathsForValuesAffectingIbIsUsingGravityAreas;
+ (int)ibLibraryInclusionStatusForTargetRuntime:(id)arg1 andDocumentClass:(Class)arg2 assetIdentifier:(id)arg3;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
- (double)ibPriorityForPlaceholderUninitializedSubviewVerticalConstraints;
- (double)ibPriorityForPlaceholderUninitializedSubviewHorizontalConstraints;
- (BOOL)ibShouldInstallPlaceholderSizeConstraintsOnSubviewInsteadOfReceiver;
- (BOOL)ibShouldGeneratePlaceholderPositionConstraintsForUninitializedSubviews;
- (void)setIbShadowedAlignment:(long long)arg1;
@property BOOL ibExternalHasEqualSpacing;
- (id)ibViewsRelevantToPriorityOfKeyPath:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)ibDescriptiveTextOfCustomPriorityType:(id)arg1 withPriority:(long long)arg2;
- (id)ibLabelForPriorityOfKeyPath:(id)arg1 atIndex:(unsigned long long)arg2;
@property double ibShadowedVerticalClippingResistancePriority;
@property double ibShadowedHorizontalClippingResistancePriority;
@property double ibInspectedVerticalClippingResistancePriority;
@property double ibInspectedHorizontalClippingResistancePriority;
@property double ibShadowedVerticalHuggingPriority;
@property double ibShadowedHorizontalHuggingPriority;
@property double ibInspectedVerticalHuggingPriority;
@property double ibInspectedHorizontalHuggingPriority;
@property(retain) NSArray *ibShadowedCustomSpacing;
- (id)ibIdentifierForView:(id)arg1;
@property(retain) NSArray *ibArchivedVisibilityPriorities;
- (void)ibUpdateExternalVisibilityPriorities;
@property(retain) NSDictionary *ibExternalVisibilityPriorities;
@property(readonly) BOOL ibInspectedHasViewsInGravityAreas;
@property(retain) NSArray *ibShadowedEndViews;
@property(retain) NSArray *ibShadowedMiddleViews;
@property(retain) NSArray *ibShadowedBeginningViews;
- (void)ibRemoveView:(id)arg1;
- (void)ibInsertView:(id)arg1 atIndex:(unsigned long long)arg2 inGravity:(long long)arg3;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibShadowedSubviewsInsertView:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly) BOOL ibInspectedHorizontal;
@property(readonly) BOOL ibInspectedVertical;
@property long long ibInspectedOrientation;
- (id)ibAcceptDrop:(id)arg1 childIndex:(long long)arg2 forSubgroupWithIdentifier:(id)arg3;
- (unsigned long long)ibDragOperationForDropInfo:(id)arg1 proposedIndex:(long long)arg2 acceptingIndex:(long long *)arg3 isAlternativeItem:(BOOL)arg4 forSubgroupWithIdentifier:(id)arg5;
- (id)ibObjectsForSubgroupWithIdentifier:(id)arg1;
- (id)ibImageForSubgroupWithIdentifier:(id)arg1;
- (id)ibTitleForSubgroupWithIdentifier:(id)arg1;
- (BOOL)ibShouldDisplaySubgroupsEvenWithNoChildren;
- (id)ibSubgroupIdentifiers;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibPopulateRequiredDocumentCapabilities:(id)arg1 document:(id)arg2;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (struct CGRect)ibDropInsetLayoutBoundsForSubviews;
- (Class)ibEditorClass;
- (id)ibDesignableContentView;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)frameForGravityArea:(long long)arg1 betweenGravityPadding:(double)arg2;
- (BOOL)ibShouldEnsureChildViewHasTranslatesAutoresizingMaskIntoConstraintsInCanvas:(id)arg1;
- (void)ibMapCopyOfReceiver:(id)arg1 intoLayoutEngine:(id)arg2;
- (BOOL)ibShouldArchiveAutolayoutPropertiesWithNSViewProperties;
- (BOOL)ibCanUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibIsUserSizable;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (BOOL)ibAllowResizeBasedOnIntrinsicContentSizeForChild:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (void)_updateStackingMode;
- (void)setIbShadowedSubviews:(id)arg1;
- (void)_ibRemoveSubviews:(id)arg1;
- (id)ibShadowedSubviews;
- (id)ibArrangedSubviews;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (long long)ibManagedContainerBehavior;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (id)ibArchivedSubviewsWithConfigurationPropertyStorage:(id)arg1;
@property BOOL ibExternalDetachesHiddenViews;
- (void)setIbShadowedDetachesHiddenViews:(BOOL)arg1;
- (BOOL)ibShadowedDetachesHiddenViews;
- (void)setIbInspectedStackingDistribution:(long long)arg1;
- (long long)ibInspectedStackingDistribution;
- (void)_updateEffectiveStackingDistribution;
@property long long ibExternalStackingDistribution;
- (void)setIbShadowedStackingDistribution:(long long)arg1;
- (long long)ibShadowedStackingDistribution;
- (BOOL)ibIsUsingGravityAreas;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;

// Remaining properties
@property(nonatomic) long long orientation;
@end

