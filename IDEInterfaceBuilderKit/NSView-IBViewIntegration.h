//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEInterfaceBuilderKit/IBIDEAutolayoutItem-Protocol.h>

@class NSArray, NSObject, NSSet, NSString, NSValue;
@protocol IBAutolayoutItem, IBCollection, IBIDEAutolayoutItem, IBOrderedCollection;

@interface NSView (IBViewIntegration) <IBIDEAutolayoutItem>
+ (id)ibFrameSizeAttributeName;
+ (id)ibFrameOriginAttributeName;
+ (id)ibConstraintsRelationshipName;
+ (id)ibSubviewsRelationshipName;
+ (id)keyPathsForValuesAffectingIbInspectedHasDesignTimeIntrinsicContentSize;
+ (id)keyPathsForValuesAffectingIbInspectedDefaultDesignTimeIntrinsicContentHeight;
+ (id)keyPathsForValuesAffectingIbInspectedDefaultDesignTimeIntrinsicContentWidth;
+ (id)keyPathsForValuesAffectingIbInspectedDesignTimeIntrinsicContentHeight;
+ (id)keyPathsForValuesAffectingIbEditorFrame;
+ (id)keyPathsForValuesAffectingIbInspectedDesignTimeIntrinsicContentWidth;
+ (id)keyPathsForValuesAffectingIbInspectedDoesNotTranslateAutoresizingMaskIntoConstraints;
+ (id)keyPathsForValuesAffectingIbInspectedCanBeAffectedByConstraints;
+ (id)keyPathsForValuesAffectingIbInspectedVerticalContentCompressionResistancePriority;
+ (id)keyPathsForValuesAffectingIbInspectedHorizontalContentCompressionResistancePriority;
+ (id)keyPathsForValuesAffectingIbInspectedVerticalContentHuggingPriority;
+ (id)keyPathsForValuesAffectingIbInspectedHorizontalContentHuggingPriority;
+ (unsigned long long)ibDefaultAutoresizingMaskForViewsUsingConstraints;
+ (id)keyPathsForValuesAffectingIbInspectedTranslatesAutoresizingMaskIntoConstraints;
+ (id)keyPathsForValuesAffectingIbExternalEffectiveTranslatesAutoresizingMaskIntoConstraints;
+ (id)keyPathsForValuesAffectingIbInstalledConstraints;
+ (void)_installPlaceholderInstrinsicContentSizeSupport;
+ (id)ibLayoutMetrics;
+ (id)keyPathsForValuesAffectingIbInspectedFrame;
+ (id)keyPathsForValuesAffectingIbDesignableContentView;
+ (id)ibKeyPathsForContentViewSubviews;
+ (BOOL)ibShouldUseDocumentContentViewForVersionBasedOnDocument:(id)arg1;
+ (long long)ibDevelopmentTargetForDocumentContentView;
+ (id)ibKeyPathForDocumentContentView;
+ (id)ibDefaultImageForInstance:(id)arg1 targetRuntime:(id)arg2;
@property(copy, nonatomic) id <IBOrderedCollection> ibSubviewCandidates;
- (void)ibLiveViewClassDidChange;
- (BOOL)ibHasDesignableCustomClass;
- (void)ibInvalidateLiveViewsBundleInDocument:(id)arg1;
- (BOOL)ibCanHaveDescendantViewHierarchy;
- (void)ibSwizzledSetValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setIbInspectedHasDesignTimeIntrinsicContentSize:(BOOL)arg1;
- (BOOL)ibInspectedHasDesignTimeIntrinsicContentSize;
- (double)ibInspectedDefaultDesignTimeIntrinsicContentHeight;
- (double)ibInspectedDefaultDesignTimeIntrinsicContentWidth;
- (void)setIbInspectedDesignTimeIntrinsicContentHeight:(id)arg1;
- (id)ibInspectedDesignTimeIntrinsicContentHeight;
- (void)setIbInspectedDesignTimeIntrinsicContentWidth:(id)arg1;
- (void)_setIbInspectedDesignTimeIntrinsicContentComponent:(id)arg1 componentIsWidth:(BOOL)arg2;
- (id)ibInspectedDesignTimeIntrinsicContentWidth;
- (struct CGRect)ibEditorSceneRect;
- (CDStruct_c519178c)ibEffectiveSimulatedEditorViewInset;
- (struct CGSize)ibEffectiveSimulatedCanvasFrameContentViewSize;
- (BOOL)ibInspectedDoesNotTranslateAutoresizingMaskIntoConstraints;
- (BOOL)ibInspectedCanBeAffectedByConstraints;
- (void)setIbInspectedVerticalContentCompressionResistancePriority:(double)arg1;
- (double)ibInspectedVerticalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedVerticalContentCompressionResistancePriority;
- (void)setIbInspectedHorizontalContentCompressionResistancePriority:(double)arg1;
- (double)ibInspectedHorizontalContentCompressionResistancePriority;
@property(nonatomic) double ibShadowedHorizontalContentCompressionResistancePriority;
- (void)setIbInspectedVerticalContentHuggingPriority:(double)arg1;
- (double)ibInspectedVerticalContentHuggingPriority;
@property(nonatomic) double ibShadowedVerticalContentHuggingPriority;
- (void)setIbInspectedHorizontalContentHuggingPriority:(double)arg1;
- (double)ibInspectedHorizontalContentHuggingPriority;
@property(nonatomic) double ibShadowedHorizontalContentHuggingPriority;
- (id)ibSubviewSubtreeDescriptionWithAdditionalDescriptionsBlock:(CDUnknownBlockType)arg1;
- (id)ibDefaultSubtreeDescription;
- (id)ibLoggingDescription;
- (id)ibObjectsForSubgroupWithIdentifier:(id)arg1;
- (id)ibImageForSubgroupWithIdentifier:(id)arg1;
- (id)ibTitleForSubgroupWithIdentifier:(id)arg1;
- (id)ibSubgroupIdentifiers;
- (BOOL)ibShouldBeIncludedForReportingAmbiguityWithStatus:(id)arg1 inDocument:(id)arg2;
- (BOOL)ibAllowsBaselineConstraints;
- (BOOL)ibAllowsConstraintSpacingFromInsideEdgesForSiblings;
- (BOOL)ibAllowsShowingControlDragConstraintFromAttribute:(unsigned long long)arg1 toAttribute:(unsigned long long)arg2 ofItem:(id)arg3;
- (id)ibNextAncestorItemForFindingReferencingConstraintsInLayoutInfo:(id)arg1;
- (void)ibInvalidateAutoresizingMaskConstraints;
- (void)setNeedsUpdateConstraints;
- (CDUnion_31865a80)ib_convertKnobPosition:(CDUnion_31865a80)arg1 fromItem:(id)arg2;
- (CDUnion_31865a80)ib_convertKnobPosition:(CDUnion_31865a80)arg1 toItem:(id)arg2;
- (unsigned int)ib_convertRectEdge:(unsigned int)arg1 fromItem:(id)arg2;
- (unsigned int)ib_convertRectEdge:(unsigned int)arg1 toItem:(id)arg2;
- (CDStruct_c519178c)ib_convertInset:(CDStruct_c519178c)arg1 fromItem:(id)arg2;
- (CDStruct_c519178c)ib_convertInset:(CDStruct_c519178c)arg1 toItem:(id)arg2;
- (struct CGRect)ib_convertRect:(struct CGRect)arg1 toItem:(id)arg2;
- (struct CGRect)ib_convertRect:(struct CGRect)arg1 fromItem:(id)arg2;
- (struct CGSize)ib_convertSize:(struct CGSize)arg1 toItem:(id)arg2;
- (struct CGSize)ib_convertSize:(struct CGSize)arg1 fromItem:(id)arg2;
- (struct CGPoint)ib_convertPoint:(struct CGPoint)arg1 toItem:(id)arg2;
- (struct CGPoint)ib_convertPoint:(struct CGPoint)arg1 fromItem:(id)arg2;
- (id)ibEffectiveItemForRuntimeConstraintAdjustingConstant:(double *)arg1 attribute:(unsigned long long *)arg2 orConstraintClassIfNeeded:(Class *)arg3 context:(id)arg4;
@property(readonly, nonatomic) NSArray *ibChildItemsEligibleForNearestNeighborConstraints;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *ibParentItem;
- (id)ibEffectiveRootCoordinateSystemForConversions;
- (id)ibEffectiveWindowForConversions;
- (unsigned long long)ibAllowedSiblingEdgesForGuidesToSelectedItems:(id)arg1;
- (BOOL)ibAllowsSiblingGuidesToSelectedItems:(id)arg1 ofType:(long long)arg2;
- (BOOL)ibShouldConsiderGuidesToEdgeWithAttribute:(unsigned long long)arg1 fromEdgeWithAttribute:(unsigned long long)arg2 ofSelectedItems:(id)arg3;
- (id)ibViewForAncestorViewEdgeMovementQuestionsOfSubview:(id)arg1;
- (BOOL)ib_hasAmbiguousLayout;
- (id)initAsEngineSpacerItemWithInitialLayoutFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL ibExternalWasMisplacedOnLastStatusUpdate;
@property(nonatomic) BOOL ibExternalWasAmbiguousOnLastStatusUpdate;
- (BOOL)ibShouldIgnoreScrollableContentHeightAmbiguityForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (BOOL)ibShouldIgnoreScrollableContentWidthAmbiguityForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (BOOL)ibShouldIgnoreAmbiguityAndMisplacementIssuesBecauseLayoutIsExplicitlyManaged;
- (BOOL)ibCanHaveUninitializedAutolayoutAmbiguityStatusInDocument:(id)arg1;
- (BOOL)ibChildView:(id)arg1 canHaveUninitializedAutolayoutAmbiguityStatusInDocument:(id)arg2;
@property(nonatomic) long long ibExternalAmbiguityVerification;
- (BOOL)_ibEffectiveIgnoreSizeAmbiguity;
- (BOOL)_ibEffectiveIgnorePositionAmbiguity;
@property(nonatomic) BOOL ibExternalHasUninitializedAutolayoutAmbiguityStatus;
@property(readonly, nonatomic) BOOL ibShouldIgnoreSizeMisplacement;
@property(readonly, nonatomic) BOOL ibShouldIgnorePositionMisplacement;
- (BOOL)_ibShouldIgnoreMisplacementWhenAmbiguous;
@property(readonly, nonatomic) BOOL ibShouldIgnoreSizeAmbiguity;
@property(readonly, nonatomic) BOOL ibShouldIgnorePositionAmbiguity;
- (BOOL)ibShouldIgnoreForAmbiguityGroup:(id)arg1;
- (BOOL)ibShouldChildBeIncludedInArbitrationUnitWithParent:(id)arg1;
@property(readonly, nonatomic) BOOL ibShouldPropagateFramesDuringFrameDecision;
@property(readonly, nonatomic) BOOL ibIgnoreNearestNeighborProximityThreshold;
@property(readonly, nonatomic) NSSet *ibFallbackViewsForCandidateConstraintGenerationForFailedArbitration;
@property(readonly, nonatomic) id ibWindowForArbitration;
- (id)ibTopLevelViewForLayoutEngine:(id)arg1;
- (id)ibEffectiveContainingViewForConstraintsWithLayoutInfo:(id)arg1;
- (id)ibEffectiveConstrainableViewWithLayoutInfo:(id)arg1;
- (BOOL)ibShouldUseConstraintsInsteadOfAutoresizingWhenChildOfClipView;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (void)ibArbitrationUnitWasCreatedWithReceiverAsRootUnderParent:(id)arg1;
- (BOOL)ibIsLegalArbitrationUnitRoot;
- (id)ibSuperviewOfView:(id)arg1 inDocument:(id)arg2;
- (CDUnknownBlockType)ibWindow:(id *)arg1 forUpdatingConstraintsInDocument:(id)arg2;
- (BOOL)ibPropogatedTranslatesAutoresizingConstraintsOfChildView:(id)arg1 forCopyOfChildView:(id)arg2;
- (unsigned long long)ibAmbiguityStatusForRepresentationOfItem:(id)arg1 inEngine:(id)arg2;
- (void)ibPropagatePropertiesToCopyOfReceiver:(id)arg1 forLayoutEngine:(id)arg2;
- (void)ibMapCopyOfReceiver:(id)arg1 intoLayoutEngine:(id)arg2;
- (struct CGRect)ibDropInsetLayoutBoundsForSubviews;
@property(readonly, nonatomic) BOOL ibIsSelfManagedContainerInEngine;
- (BOOL)_ibSupportsSelfManagedContainerWithConstraintsInEngineOrCanvas;
- (id)ibEffectiveDesignTimeIntrinsicContentSizeForLayoutEngine:(id)arg1;
- (id)ibDefaultDesignTimeIntrinsicContentSizeForChild:(id)arg1;
@property(readonly, nonatomic) NSValue *ibDesignTimeDefaultIntrinsicContentSizeForSelfSizingContainers;
- (BOOL)ibDerivesDesignTimeDefaultIntrinsicContentSize;
- (double)ibPriorityForPlaceholderAmbiguousSubviewVerticalConstraints;
- (double)ibPriorityForPlaceholderAmbiguousSubviewHorizontalConstraints;
- (double)ibPriorityForPlaceholderUninitializedSubviewVerticalConstraints;
- (double)ibPriorityForPlaceholderUninitializedSubviewHorizontalConstraints;
- (BOOL)ibShouldInstallPlaceholderSizeConstraintsOnSubviewInsteadOfReceiver;
- (BOOL)ibShouldGeneratePlaceholderSizeConstraintsWhenAmbiguous;
- (BOOL)ibShouldGeneratePlaceholderSizeConstraintsForUninitializedSubviews;
- (BOOL)ibShouldGeneratePlaceholderPositionConstraintsForUninitializedSubviews;
- (BOOL)ibOverridablePrefersToVerticallyResizeWithContainer;
- (BOOL)ibOverridablePrefersToHorizontallyResizeWithContainer;
- (BOOL)ibPrefersToVerticallyResizeWithContainer;
- (BOOL)ibPrefersToHorizontallyResizeWithContainer;
- (BOOL)ibShouldApplyConstraintsWhenAutoresizingByDefault;
- (struct NSEdgeInsets)ibLayoutMargins;
- (BOOL)ibSupportsLayoutMargins;
- (BOOL)ibSupportsFirstBaseline;
- (BOOL)ibAllowsContainerLikeTreatmentForSiblingConstraintGeneration;
- (BOOL)ibAllowsConstrainingAttribute:(unsigned long long)arg1 toAttribute:(unsigned long long)arg2 ofItem:(id)arg3;
- (unsigned long long)ibPreferredConstrainingLayoutAttributeToSiblingWithAttribute:(unsigned long long)arg1;
- (unsigned long long)ibPreferredItemReplacementAttributeForAttribute:(unsigned long long)arg1;
- (BOOL)ibHasOwnedPositionLayoutInDocument:(id)arg1;
- (BOOL)ibHasOwnedSizeLayoutInDocument:(id)arg1;
- (BOOL)_ibSharedHasOwnedLayoutInDocument:(id)arg1;
- (id)ibPreferredItemForContainerConstraintFromDescendant:(id)arg1 attribute:(unsigned long long)arg2;
- (double)ibPriorityStrongerThanInternalWeakSizeConstraintsForCompressingViewInLayoutEngineForOrientation:(unsigned long long)arg1;
- (unsigned long long)ibOrientationsWithInternalConstraintsThatWeaklyDefineViewSize;
- (unsigned long long)ibCustomSubviewLayoutStrategy;
- (void)ibViewNonRecursiveDisableAutolayoutInDocument:(id)arg1;
- (void)ibDisableAutolayoutInDocument:(id)arg1;
- (void)ibEnableAutolayoutInDocument:(id)arg1 context:(id)arg2;
- (void)_clearXcode5AutolayoutFeatureState;
- (void)ibUpdateTranslatingAutoresizingMaskIntoConstraintsStateInDocument:(id)arg1;
- (void)setIbInspectedTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (BOOL)ibInspectedTranslatesAutoresizingMaskIntoConstraints;
- (void)setIbExternalLastInspectedTranslatesAutoresizingMaskIntoConstraints:(id)arg1;
- (id)ibExternalLastInspectedTranslatesAutoresizingMaskIntoConstraints;
- (id)ibLastInspectedTranslatesAutoresizingMaskIntoConstraintsMetadataKeyInDocument:(id)arg1;
- (void)ibUpdateAutoresizingMaskAfterChangingTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
@property(nonatomic) BOOL ibExternalExplicitTranslatesAutoresizingMaskIntoConstraints;
@property(readonly, nonatomic) BOOL ibExternalEffectiveTranslatesAutoresizingMaskIntoConstraints;
- (BOOL)ibSupportsTranslatesAutoResizingMaskIntoConstraintsWhenUnaffectedByReferencingConstraintsAndIgnoreAmbiguity;
- (id)ibTranslatesAutoresizingMaskIntoConstraintsMetadataKeyInDocument:(id)arg1;
- (void)ibVerifyConstraintsAreWellFormedInDocument:(id)arg1 andPopulateMessages:(id)arg2;
- (void)ibVerifyConstraintsAreSortedInDocument:(id)arg1;
- (void)ibRemoveCandidateConstraints:(id)arg1;
- (void)ibAddCandidateConstraints:(id)arg1 shouldAddToEffectiveEditedConfiguration:(BOOL)arg2;
- (void)ibPrimitiveRemoveConstraintsFromCandidates:(id)arg1 andFromDocument:(id)arg2 allowingCascadingDelete:(BOOL)arg3;
- (void)ibPrimitiveRemoveConstraintsFromCandidateListOnly:(id)arg1 keepingInDocument:(id)arg2;
- (void)ibPrimitiveAddConstraintsToCandidateListOnly:(id)arg1 thatAreAlreadyInDocument:(id)arg2;
- (void)ibSortConstraintChildrenAndCandidatesInDocument:(id)arg1;
- (CDUnknownBlockType)ibConstraintComparatorForDocument:(id)arg1;
- (void)ibPropertyStorage:(id)arg1 didTurnOffCandidate:(id)arg2 forRelationship:(id)arg3 inConfiguration:(id)arg4;
- (void)ibPropertyStorage:(id)arg1 didTurnOnCandidate:(id)arg2 forRelationship:(id)arg3 inConfiguration:(id)arg4;
- (void)_ibDidTurnOnOrOffCandidate:(id)arg1 forRelationship:(id)arg2 inConfiguration:(id)arg3 fromStorage:(id)arg4 onOrOffString:(id)arg5;
- (void)ibPropertyStorage:(id)arg1 didTurnOffForRelationship:(id)arg2 ofObject:(id)arg3 inConfiguration:(id)arg4;
- (void)ibPropertyStorage:(id)arg1 didTurnOnForRelationship:(id)arg2 ofObject:(id)arg3 inConfiguration:(id)arg4;
- (void)ibInvalidateReferencedInstalledConstraintsAfterChangingRelationship:(id)arg1;
- (void)ibPropertyStorage:(id)arg1 didChangeCandidatesForRelationship:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 context:(id)arg5;
- (void)ibPropertyStorage:(id)arg1 willChangeCandidatesForRelationship:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 context:(id)arg5;
@property(retain, nonatomic) id <IBOrderedCollection> ibTurnedOnButPossiblyUninstalledConstraints;
- (id)ibViewsWithReferencingConstraintChangesWhenChangingConstraintsFrom:(id)arg1 to:(id)arg2;
- (id)ibCandidateConstraintsInDocument:(id)arg1;
- (void)ibInvalidateCachedInstalledConstraints;
@property(readonly, nonatomic) id <IBOrderedCollection> ibInstalledConstraintsWithInstalledAncestors;
@property(retain, nonatomic) id <IBOrderedCollection> ibInstalledConstraints;
@property(retain, nonatomic) id <IBOrderedCollection> ibCandidateConstraints;
- (id)ibConstraintsMetadataKeyInDocument:(id)arg1;
- (id)ibChildConstraintsOrderedFromBackToFront;
- (id)ibPossiblyStaleLastDrawnConstraintOrder;
- (void)setIbPossiblyStaleLastDrawnConstraintOrder:(id)arg1;
@property(readonly, nonatomic) id <IBCollection> ibCandidateReferencingConstraints;
@property(readonly, nonatomic) id <IBCollection> ibTurnedOnButPossiblyUninstalledReferencingConstraints;
@property(readonly, nonatomic) id <IBCollection> ibInstalledReferencingConstraints;
- (BOOL)ibIsValidConstraintItem;
- (void)ibUnArchivePlatformItems:(id)arg1;
- (void)ibArchivePlatformItems:(id)arg1;
- (BOOL)ibShouldArchiveMenuItems;
- (BOOL)ibShouldArchiveAutolayoutPropertiesWithNSViewProperties;
- (void)ibApplyPlaceholderSizeToConstrainedCollapsedViewsWithUnarchiver:(id)arg1;
- (struct CGRect)ibUnarchivingPlaceholderSizeForAutomaticallyFrameDecidedView;
- (void)ibUnarchiveAutolayoutProperties:(id)arg1;
- (void)ibArchiveAutolayoutProperties:(id)arg1;
- (void)_ibUnarchiveConstraints:(id)arg1;
- (void)ibArchiveConstraints:(id)arg1;
- (void)ibUnarchiveTranslatesAutoresizingMaskIntoConstraints:(id)arg1;
- (void)ibArchiveTranslatesAutoresizingMaskIntoConstraints:(id)arg1;
- (void)ibUnarchiveAutoresizingMask:(id)arg1;
- (void)ibArchiveAutoresizingMask:(id)arg1;
- (BOOL)ibShouldPersistAutoresizingMaskInDocument:(id)arg1;
- (void)ibUnarchiveFrameCenterRotation:(id)arg1;
- (void)ibArchiveFrameCenterRotation:(id)arg1;
- (void)ibUnarchiveFrame:(id)arg1;
- (struct CGRect)ibSquashedXcode7InitialFrameFromAddingToNonAnyAny;
- (BOOL)ibHasSquashedAnyAnyFrame:(struct CGRect)arg1;
- (void)_flattenFrameVariationFromXcode7AndPriorWithUnarchivedFrame:(struct CGRect)arg1 unarchiver:(id)arg2;
- (void)awakeAfterUsingDocumentUnarchiver:(id)arg1;
- (BOOL)ibWantsSynthesizedMemberIDWhenUnarchivedWithUnarchiver:(id)arg1;
- (void)ibUnarchiveSubviews:(id)arg1;
- (void)ibArchiveSubviews:(id)arg1;
- (void)setIbArchivedSubviews:(id)arg1 withConfigurationPropertyStorage:(id)arg2;
- (id)ibArchivedSubviewsWithConfigurationPropertyStorage:(id)arg1;
- (void)ibEnumerateLayoutGuidesForDrawingWithBlock:(CDUnknownBlockType)arg1;
- (void)ibDrawBoundsIndicatorInCoordinateSpaceOfView:(id)arg1;
- (BOOL)ibWantsBoundsIndicatorAlways;
- (BOOL)ibWantsBoundsIndicatorDuringTracking;
- (BOOL)ibWantsSolidEditorSelectionHighlight;
- (Class)ibViewRendererClass;
- (unsigned long long)ibOrientationsForSizingToFitFromLibrary;
- (void)ibCustomizeForInsertionIntoNSView:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibDidExtractObjects:(id)arg1 fromPasteboard:(id)arg2 intoDocument:(id)arg3 context:(id)arg4;
- (void)ibDidPutObjects:(id)arg1 onPasteboard:(id)arg2 fromDocument:(id)arg3 context:(id)arg4;
- (void)ibWillPutObjects:(id)arg1 withDescendants:(id)arg2 onPasteboard:(id)arg3 fromDocument:(id)arg4 context:(id)arg5;
- (id)ibPasteboardImageForRenderingDestination:(id)arg1;
- (id)ibViewFromPasteboardImage:(id)arg1;
- (BOOL)ibAcceptsPasteboardImageResourcesAsViews;
- (void)ibSetValue:(id)arg1 forInsertingPasteboardObjectsIntoToManyRelationship:(id)arg2 document:(id)arg3 insertionContext:(id)arg4;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (id)ibIdentifiedViewsFromPasteboardImageResources:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibWillArbitrateInArbitrationUnit:(id)arg1;
- (BOOL)ibVerifyFrameAndBoundsIntegrality;
- (void)ibIntegralizeFrameOrBoundsIfNeeded:(struct CGRect)arg1 callingBlockIfIntegralizationWasNeeded:(CDUnknownBlockType)arg2;
- (void)setIbContentSizeForEditorVerification:(struct CGSize)arg1;
- (struct CGSize)ibContentSizeForEditorVerification;
- (void)ibPopulateAmbiguityWarnings:(id)arg1 forOrientationsWithMask:(unsigned long long)arg2 withAutolayoutStatus:(id)arg3 inDocument:(id)arg4 context:(id)arg5;
- (void)ibPopulateMisplacementWarnings:(id)arg1 withAutolayoutStatus:(id)arg2;
- (BOOL)ibShouldCoalesceAmbiguityWarningsForAutolayoutStatus:(id)arg1;
- (void)ibPopulateWarnings:(id)arg1 forAutolayoutIssuesInDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (id)ibWarningMessageForWarningType:(long long)arg1;
- (long long)ibDetectLeadingOrTrailingWarningsForSiblingView:(id)arg1 inDocument:(id)arg2;
- (id)ibFixedLeadingOrTrailingConstraintsForView:(id)arg1 inDocument:(id)arg2;
- (long long)ibCheckForLeadingOrTrailingLocalizationConstraintWarnings:(BOOL)arg1 withTrailing:(BOOL)arg2 withFixedLeading:(BOOL)arg3 withFixedTrailing:(BOOL)arg4 withLeadingView:(id)arg5 andTrailingView:(id)arg6 inDocument:(id)arg7;
- (void)ibPopulateWarnings:(id)arg1 forLocalizationIssuesInDocument:(id)arg2;
- (BOOL)ibIgnoreMissingPositioningConstraintsForLocalizationWarnings;
- (BOOL)ibIsLeadingOrTrailingConstraint:(unsigned long long)arg1 secondAttr:(unsigned long long)arg2;
- (void)ibIssueOverlappingViewWarning:(id)arg1 forSibling:(id)arg2 withParentView:(id)arg3 inDocument:(id)arg4 withComputationContext:(id)arg5;
- (BOOL)ibShouldGenerateOverlappingViewsWarningsInDocument:(id)arg1;
- (BOOL)ibIsClippingContent;
@property(copy, nonatomic) NSValue *ibExternalDesignTimeIntrinsicContentSize;
- (void)setIbAssociatedDesignTimeIntrinsicContentSize:(id)arg1;
- (id)ibAssociatedDesignTimeIntrinsicContentSize;
- (void)ibPreserveLayoutFrameDuring:(CDUnknownBlockType)arg1;
- (long long)ibPreferredResizeDirection;
- (struct CGSize)ibPreferredSizeRespectingNearestLegalBoundsSize;
- (struct CGSize)ibNearestLegalBoundsSize;
- (struct CGPoint)ibPreferredOriginForSize:(struct CGSize)arg1;
- (struct CGSize)ibPreferredSizeForSize:(struct CGSize)arg1 suggestedWidth:(char *)arg2 suggestedHeight:(char *)arg3 scaleAxesIndependently:(char *)arg4;
- (struct CGSize)ibPreferredLayoutSize;
- (struct CGSize)ibPreferredSize;
- (struct CGSize)ibIntrinsicContentFrameSize;
- (void)ibConstrainBoundsToNearestLegalSize;
- (void)ibSuggestLayoutAllowingResizingTopLevelView:(BOOL)arg1;
- (void)ibSuggestLayoutWithBoundsSize:(struct CGSize)arg1 allowResizingTopLevelView:(BOOL)arg2;
- (void)ibSuggestLayoutWithBoundsSize:(struct CGSize)arg1 andOrigin:(struct CGPoint)arg2 allowResizingTopLevelView:(BOOL)arg3;
- (void)ibSetFrameSizePreferringToAllowTopLevelViewResizing:(struct CGSize)arg1 withSuggestedFrameOrigin:(struct CGPoint)arg2;
- (void)ibSetFrameSize:(struct CGSize)arg1 withSuggestedFrameOrigin:(struct CGPoint)arg2 allowResizingTopLevelView:(BOOL)arg3;
- (void)ibDidSuggestLayout:(struct CGRect)arg1 inView:(id)arg2 context:(id)arg3;
- (void)ibWillSuggestLayout:(struct CGRect)arg1 inView:(id)arg2 context:(id)arg3;
- (BOOL)ibUseFrameDecisionForSuggestingLayout;
- (BOOL)ibShouldUpdateConstraintsForSuggestLayoutInDocument:(id)arg1;
- (void)ibSetFrameAndMarkAsExplicitlyMisplaced:(struct CGRect)arg1;
@property(readonly, nonatomic) long long ibFrameDecisionStrategy;
- (void)ibTakeTrackedFrame:(struct CGRect)arg1;
- (BOOL)ibIsDistanceFromSubviewEdge:(unsigned long long)arg1 ofSubview:(id)arg2 toSameEdgeOfSuperviewChangingOneToOneWithKnob:(CDUnion_31865a80)arg3;
- (BOOL)ibIsEdge:(unsigned long long)arg1 ofSubview:(id)arg2 fixedInPositionOnWindowDuringResizeFromKnob:(CDUnion_31865a80)arg3;
- (void)ibResumeAutoResizingSubviews:(id)arg1;
- (id)ibStopAutoResizingSubviewsWhileGrowingFromKnob:(CDUnion_31865a80)arg1 inDocument:(id)arg2;
- (BOOL)ibPrefersFlippedFrameCoordinates;
- (void)ibSizeToFit;
- (BOOL)ibCanSizeToFit;
- (BOOL)ibIsVerticallyResizable;
- (BOOL)ibIsHorizontallyResizable;
- (BOOL)ibIsSizable;
- (BOOL)ibIsUserSizable;
- (BOOL)ibIsMovable;
- (BOOL)ibIsUserMovable;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (Class)ibTrackerClass;
- (struct CGRect)ibFrameForLayoutFrame:(struct CGRect)arg1;
- (struct CGRect)ibBoundsForLayoutBounds:(struct CGRect)arg1;
- (struct CGRect)ibLayoutFrameForFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGRect ibLayoutFrame;
- (struct CGRect)ibLayoutBoundsForBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect ibLayoutFrameworkBounds;
@property(readonly, nonatomic) struct CGRect ibLayoutBounds;
@property(readonly, nonatomic) double ibShadowedFirstBaselineOffsetFromTop;
- (BOOL)ibIsBaselineAtIndex:(long long)arg1 inMotionWithKnob:(CDUnion_31865a80)arg2;
- (double)ibBaselineAtIndex:(long long)arg1 inCoordinateSpaceOfItem:(id)arg2;
@property(readonly, nonatomic) long long ibBaselineCount;
- (struct CGSize)ibMaximumSize;
- (struct CGSize)_ibMaximumSizeUsingWidgetType;
- (struct CGSize)ibMinimumSize;
- (struct CGSize)_ibMinimumSizeUsingWidgetType;
- (struct CGSize)_ibExtremeSizeForWidgetType:(id)arg1 maximum:(BOOL)arg2;
- (CDStruct_c519178c)ibFrameworkLayoutInset;
@property(readonly, nonatomic) CDStruct_c519178c ibLayoutInset;
- (CDStruct_c519178c)ibLayoutInsetForWidgetType:(id)arg1;
- (id)ibContainerWidgetType;
- (id)ibWidgetType;
- (CDStruct_c519178c)ibInsetToDesignableContentArea;
- (id)ibLayoutManagerForUnitTesting;
- (void)ibPopulateResourceReferences:(id)arg1 withValueToVariantSetMap:(id)arg2;
- (id)ibEnclosingCanvasView;
- (struct CGSize)frameSize;
- (struct CGPoint)frameOrigin;
@property(nonatomic) struct CGRect ibInspectedFrame;
@property(copy) NSString *ibSystemGuideSetIdentifier;
- (void)setIbTransientSystemGuides:(id)arg1;
- (id)ibTransientSystemGuides;
- (void)ibRemoveUserGuide:(id)arg1;
- (void)ibAddUserGuide:(id)arg1;
- (void)setIbExternalUserGuides:(id)arg1;
- (id)ibExternalUserGuides;
@property(copy, nonatomic) NSArray *ibShadowedSubviews;
@property(readonly, nonatomic) NSObject<IBIDEAutolayoutItem> *ibDesignableContentItem;
- (id)ibDesignableContainerViewInDocument:(id)arg1;
@property(readonly, nonatomic) NSView *ibDesignableContentView;
- (void)setIbArchivedDesignableContentView:(id)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) NSView *ibArchivedDesignableContentView;
- (void)ibDidAddWithDefaultChildrenToDocument:(id)arg1;
- (BOOL)ibShouldIncludeKeyPath:(id)arg1 inInitialChildrenForDocument:(id)arg2;
- (id)ibObjectsToReparentWhenAddingOrRemovingActiveContentView;
@property(retain) NSView *ibVerifyContentViewCurrentContentView;
- (id)ibEffectiveContentViewToUseForDocument:(id)arg1;
- (void)verifyFramesInSyncForViewsForAutoresizingMasks;
- (void)ibVerifyXcodeContentViewWithDocument:(id)arg1;
- (void)ibDidRemoveContentViewFromDocumentDuringVerifyContentView;
- (void)ibDidAddContentViewToDocumentDuringVerifyContentView;
- (void)ibDocumentDidChangeDevelopmentTarget:(id)arg1;
- (BOOL)ibCanUseDocumentContentView;
- (id)ibContextLabelForAttributeSearchLocation:(id)arg1 inInspectors:(id)arg2 inDocument:(id)arg3;
- (BOOL)ibIsAttributeSearchLocationReplaceable:(id)arg1 inDocument:(id)arg2;
- (void)ibUnarchiveHidden:(id)arg1;
- (void)ibArchiveHidden:(id)arg1;
- (void)ibArchiveFrame:(id)arg1;
- (void)ibPopulateRequiredDocumentCapabilities:(id)arg1 document:(id)arg2;
- (id)ibArchiveKeyForConfigurableRelationship:(id)arg1;
- (id)ibLocalPerConfigurationToManyChildRelationshipKeyPaths;
- (BOOL)ibIsChildTypicalConnectionTarget:(id)arg1;
- (BOOL)ibSelectingChildWithMouseRequiresEditorConsent:(id)arg1;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (id)ibSecondaryHitTestingRectsForChild:(id)arg1 inFrameController:(id)arg2;
- (id)ibHitRectsForConstraint:(id)arg1 inFrameController:(id)arg2;
- (void)ibWillRemoveFromDocument:(id)arg1 previouslyMemberOfGroup:(id)arg2 identifierInGroup:(id)arg3;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (id)ibBeginDesigningInDocument:(id)arg1;
- (void)ibDidMoveSubviewsForEmbedding:(id)arg1 toNewParent:(id)arg2 document:(id)arg3 context:(id)arg4;
- (void)ibWillMoveSubviewsForEmbedding:(id)arg1 context:(id)arg2;
- (BOOL)ibShouldPreservePositionConstraintsAffectingSubviewsOnEmbedding;
- (id)ibUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibCanUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibShouldIncludeKeyPathInIbtoolPrintingOutput:(id)arg1;
- (void)ibTurnOffChildren:(id)arg1 document:(id)arg2;
- (void)ibTurnOffConstraintsFromChildren:(id)arg1 document:(id)arg2;
- (BOOL)ibCanTurnOffChildren:(id)arg1 document:(id)arg2;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateChildBackToFrontRelationOrder:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (void)ibInvalidateWarningsAfterDescendant:(id)arg1 changedProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (BOOL)ibCanBeBaseObjectOfEditorFrame;
- (id)ibAttributeSnapshot;
- (void)ibTakePastedAttributes:(id)arg1;
- (id)ibPasteboardTypes;
- (id)ibTypeNameForDefaultLabel;
- (BOOL)ibUsesWidgetTypeForTypeNameForDefaultLabel;
- (id)ibWidgetTypeForDefaultLabel;
- (BOOL)ibWantsEditorCanvasFrameContentBorder;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (Class)ibEditorClass;

// Remaining properties
@property(readonly, nonatomic) double baselineOffsetFromBottom; // @dynamic baselineOffsetFromBottom;
@property(readonly, nonatomic) struct CGRect bounds; // @dynamic bounds;
@property(readonly, nonatomic) NSArray *constraints; // @dynamic constraints;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFlipped) BOOL flipped; // @dynamic flipped;
@property(nonatomic) struct CGRect frame; // @dynamic frame;
@property(readonly) unsigned long long hash;
@property(nonatomic) BOOL ibCanFrameDecideEvenWhenAmbiguousForNextStatusUpdate;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize; // @dynamic intrinsicContentSize;
@property(readonly, nonatomic) NSArray *subviews; // @dynamic subviews;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSObject<IBAutolayoutItem> *superview; // @dynamic superview;
@property(nonatomic) BOOL translatesAutoresizingMaskIntoConstraints; // @dynamic translatesAutoresizingMaskIntoConstraints;
@property(readonly, nonatomic) id window; // @dynamic window;
@end

