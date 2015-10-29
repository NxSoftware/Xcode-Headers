//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (IBFrameworkObjectIntegration)
+ (id)ibObservedPropertiesForInheritableMetricsInvalidation;
+ (id)keyPathsForValuesAffectingIbInspectedIdentityObjectID;
+ (id)keyPathsForValuesAffectingIbInspectedCustomClassName;
+ (id)ibIntegrationThunkTargetForSelector:(SEL)arg1 integrator:(id)arg2;
+ (BOOL)ibExistsAtRuntime;
+ (id)ibKeyPathsAcceptingModuleNameBackfill;
+ (id)keyPathsForValuesAffectingIbEffectiveClassName;
+ (int)ibLibraryInclusionStatusForTargetRuntime:(id)arg1 andDocumentClass:(Class)arg2 assetIdentifier:(id)arg3;
+ (void)ibDidInstantiateForObject:(id)arg1 forAsset:(id)arg2 role:(long long)arg3;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
+ (id)ibInspectorPropertySearchDescriptionsForKeyPath:(id)arg1 idiom:(id)arg2;
+ (id)ibSearchableAttributeKeyPathsForInspectorCategory:(id)arg1 idiom:(id)arg2;
+ (id)ibSearchableInspectorsForCategory:(id)arg1 idiom:(id)arg2;
+ (id)ibSearchableAttributeKeyPathsForIdiom:(id)arg1;
+ (id)ibCachedResultForIdiom:(id)arg1 andInspectorCategory:(id)arg2 withCache:(id)arg3 computationBlock:(CDUnknownBlockType)arg4;
+ (id)ibCachedResultForIdiom:(id)arg1 withCache:(id)arg2 creatingIfNecessaryWithBlock:(CDUnknownBlockType)arg3;
+ (void)ibPopulateAdditionalSearchableAttributeKeyPaths:(id)arg1 forInspectorCategory:(id)arg2;
+ (id)ibTypeIdentifier;
- (BOOL)ibNeedsUpgradePromptToXcode7ForDocument:(id)arg1;
- (void)setIbLiveViewsSceneUpdateWarningMessages:(id)arg1;
- (id)ibLiveViewsSceneUpdateWarningMessages;
- (void)setIbLiveViewsSceneUpdateError:(id)arg1;
- (id)ibLiveViewsSceneUpdateError;
- (BOOL)ibShouldInvalidateSceneOrAutolayoutStatusForChangeToKeyPath:(id)arg1;
- (void)ibInvalidateDesignablesStatusInDocument:(id)arg1;
- (id)ibLiveViewsBundleForUpdatingScene:(id)arg1 inDocument:(id)arg2;
- (void)ibConfigureSceneUpdateRequest:(id)arg1;
- (id)ibMarshalledRepresentationForRendering;
- (BOOL)ibWantsSceneUpdates;
- (BOOL)ibInspectedShouldShowDesignablesStatus;
- (void)setIbInspectedDesignablesStatus:(id)arg1;
- (id)ibInspectedDesignablesStatus;
- (id)ibSegueTemplateSceneControllerOutletDestination;
- (id)ibRelationshipSegueDescriptionForKeypath:(id)arg1;
- (void)ibRelationshipSegue:(id)arg1 setDestination:(id)arg2 withErrors:(id)arg3;
- (void)ibBecameLocalUnitLeaderForDocument:(id)arg1;
- (void)ibWillCopyChild:(id)arg1 forCompilationUnitLeaderOfUnitDownstreamFromUnit:(id)arg2;
- (void)ibCaptureStoryboardCompilationResult:(id)arg1 fromCompilationUnit:(id)arg2;
- (void)ibSetupTriggerForSegueTemplate:(id)arg1 inCompilationUnit:(id)arg2;
- (void)ibStoryboardPrepareForSeparatingChild:(id)arg1 intoCompilationUnit:(id)arg2;
- (BOOL)ibTopLevelSceneObjectWantsInclusionInCompiledStoryboard;
- (BOOL)ibTopLevelSceneObjectWantsToBeKeptAliveByRootViewController;
- (BOOL)ibStoryboardContainsRepeatingSeparationInParentChain;
- (id)ibFirstStoryboardRepeatingAncestor;
- (BOOL)ibSupportsMultipleSeguesFromTrigger:(id)arg1;
- (void)ibWillResignDestinationOfSegue:(id)arg1;
- (void)ibDidBecomeDestinationOfSegue:(id)arg1;
- (id)ibEffectiveStoryboardIdentifier;
- (id)ibExplicitStoryboardIdentifier;
- (BOOL)ibCanBeValidRelationshipDestination;
- (BOOL)ibCanBeReplacedWithExternalStoryboardReference;
- (BOOL)ibWantsStoryboardOutlet;
- (BOOL)ibCanBeValidSegueDestination;
- (BOOL)ibSupportsSiblingTopLevelSceneObjects;
- (BOOL)ibRequiresOutletToStoryboard;
- (BOOL)ibRequiresOutletToFilesOwner;
- (void)ibDidRefactorIntoStoryboard:(id)arg1 withContext:(id)arg2;
- (void)ibWillRefactorOutOfStoryboard:(id)arg1 withContext:(id)arg2;
- (void)ibUpstreamController:(id)arg1 willResignDestinationOfSegue:(id)arg2;
- (void)ibUpstreamController:(id)arg1 didBecomeDestinationOfSegue:(id)arg2;
- (id)ibOutgoingRelationshipSeguesForKeyPath:(id)arg1 inDocument:(id)arg2;
- (id)ibOutgoingSeguesInDocument:(id)arg1;
- (id)ibIncomingSeguesIncludingSelfOriginated:(BOOL)arg1;
- (BOOL)ibCanBePrimarySceneObject;
- (id)ibStoryboardEntryPointIndicatorInvalidatingKeyPaths;
- (id)ibOrderedEntryPointIndicatorsInStoryboard:(id)arg1;
- (void)ibDidChangeGlobalEntryPointStatusForIndicator:(id)arg1 inStoryboard:(id)arg2;
- (void)ibWillChangeGlobalEntryPointStatusForIndicator:(id)arg1 inStoryboard:(id)arg2;
- (BOOL)ibCanBecomeEntryPointForIndicator:(id)arg1 inStoryboard:(id)arg2;
- (void)ibWillResignSourceOfSegue:(id)arg1;
- (void)ibDidBecomeSourceOfSegue:(id)arg1;
- (BOOL)ibInspectedDocumentIsStoryboard;
- (id)ibRelationshipSegueDefaultImage;
- (id)ibRelationshipSegueBadgeImage;
- (id)ibSegueSourceToManyRelationshipKeyPaths;
- (id)ibSegueSourceToOneRelationshipKeyPaths;
- (id)ibSegueTriggers;
- (id)ibDefaultSegueTrigger;
- (int)ibStoryboardSeparationTypeForChild:(id)arg1 storyboardEquivalent:(id)arg2;
- (void)ibUpdateInheritedSimulatedMetrics:(id)arg1;
- (BOOL)ibChildAutolayoutItem:(id)arg1 hasOwnedPositionLayoutInDocument:(id)arg2;
- (BOOL)ibChildAutolayoutItem:(id)arg1 hasOwnedSizeLayoutInDocument:(id)arg2;
- (void)ibPreparePreviewInstance:(id)arg1 context:(id)arg2;
- (BOOL)ibCanHaveDescendantViewHierarchy;
- (id)ibSwizzledDefaultSubtreeDescription;
- (id)ibAcceptDrop:(id)arg1 childIndex:(long long)arg2 forSubgroupWithIdentifier:(id)arg3;
- (unsigned long long)ibDragOperationForDropInfo:(id)arg1 proposedIndex:(long long)arg2 acceptingIndex:(long long *)arg3 isAlternativeItem:(BOOL)arg4 forSubgroupWithIdentifier:(id)arg5;
- (id)ibObjectsForSubgroupWithIdentifier:(id)arg1;
- (id)ibImageForSubgroupWithIdentifier:(id)arg1;
- (id)ibTitleForSubgroupWithIdentifier:(id)arg1;
- (id)ibToManyRelationshipNameForSubgroupWithIdentifier:(id)arg1;
- (BOOL)ibShouldDisplaySubgroupsEvenWithNoChildren;
- (id)ibSubgroupIdentifiers;
- (BOOL)ibShouldChildBeIncludedInArbitrationUnitWithParent:(id)arg1;
- (BOOL)ibIsArbitrationUnitLeaf;
- (BOOL)ibIsChildArbitrationUnitLeaf:(id)arg1;
- (BOOL)ibIsChildArbitrationUnitRoot:(id)arg1;
- (void)ibArbitrationUnitWasCreatedWithReceiverAsRootUnderParent:(id)arg1;
- (BOOL)ibIsLegalArbitrationUnitRoot;
- (id)ibPrefersMarginRelativeConstraintsToChildItem:(id)arg1;
- (void)setIbAutolayoutStatusComputationWarningMessages:(id)arg1;
- (id)ibAutolayoutStatusComputationWarningMessages;
- (void)setIbAutolayoutStatusComputationError:(id)arg1;
- (id)ibAutolayoutStatusComputationError;
- (BOOL)ibShouldEnsureChildViewHasTranslatesAutoresizingMaskIntoConstraintsInCanvas:(id)arg1;
- (BOOL)ibChildViewHasCustomLayoutButAllowsAlignmentConstraints:(id)arg1;
- (BOOL)ibChildViewHasCustomLayoutButAllowsSpacingConstraints:(id)arg1;
- (BOOL)ibChildViewHasCustomLayoutButAllowsEqualSizeConstraints:(id)arg1;
- (BOOL)ibChildViewHasCustomLayoutButAllowsExplicitSizeConstraints:(id)arg1;
- (BOOL)ibChildViewDerivesInternalConstraintsBasedUponInitialFrameSize:(id)arg1;
- (void)ibWillArbitrateInDocument:(id)arg1;
- (id)ibSuperviewOfView:(id)arg1 inDocument:(id)arg2;
- (BOOL)ibIsChildViewResizable:(id)arg1 whenSizingToFitDescendantView:(id)arg2;
- (CDUnknownBlockType)ibWindow:(id *)arg1 forUpdatingConstraintsInDocument:(id)arg2;
- (void)ibDisableAutolayoutInDocument:(id)arg1;
- (void)ibEnableAutolayoutInDocument:(id)arg1 context:(id)arg2;
- (BOOL)ibChildView:(id)arg1 shouldUseConstraintsInsteadOfAutoresizingWhenAddedToDocument:(id)arg2;
- (BOOL)ibOverridablePrefersToVerticallyResizeWithContainer;
- (BOOL)ibOverridablePrefersToHorizontallyResizeWithContainer;
- (BOOL)ibChildPrefersToVerticallyResizeWithContainer:(id)arg1;
- (BOOL)ibChildPrefersToHorizontallyResizeWithContainer:(id)arg1;
- (BOOL)ibInspectedDocumentIsNotUsingAutolayout;
- (BOOL)ibInspectedDocumentIsUsingAutolayout;
- (BOOL)ibIsValidTraitStorageListContainer;
- (void)ibPopulateObjectsToRetainInCompiledTraitStorage:(id)arg1;
- (id)ibCompiledCandidatesForToManyChildRelationshipKeyPath:(id)arg1 withPropertyStorage:(id)arg2;
- (id)ibCompiledValueForKeyPath:(id)arg1 withPropertyStorage:(id)arg2 inConfiguration:(id)arg3;
- (id)ibCompiledConfigurationsWithExplicitValuesForKeyPath:(id)arg1 withPropertyStorage:(id)arg2;
- (id)ibCompiledPerConfigurationToManyRelationshipKeyPaths;
- (id)ibCompiledPerConfigurationAttributeKeyPaths;
- (void)ibPopulateCompiledPerConfigurationToManyRelationshipOrder:(id)arg1;
- (void)ibPopulateCompiledPerConfigurationAttributeOrder:(id)arg1;
- (id)ibDesignTimeConfigurableKeyPathForCompiledKeyPath:(id)arg1;
- (id)ibCompiledKeyPathForDesignTimeConfigurableKeyPath:(id)arg1;
- (BOOL)ibIsTurnedOnInConfiguration:(id)arg1;
- (void)ibPropertyStorage:(id)arg1 didTurnOffCandidate:(id)arg2 forRelationship:(id)arg3 inConfiguration:(id)arg4;
- (void)ibPropertyStorage:(id)arg1 didTurnOnCandidate:(id)arg2 forRelationship:(id)arg3 inConfiguration:(id)arg4;
- (void)ibPropertyStorage:(id)arg1 didTurnOffForRelationship:(id)arg2 ofObject:(id)arg3 inConfiguration:(id)arg4;
- (void)ibPropertyStorage:(id)arg1 didTurnOnForRelationship:(id)arg2 ofObject:(id)arg3 inConfiguration:(id)arg4;
- (void)ibPropertyStorage:(id)arg1 didChangeCandidatesForRelationship:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 context:(id)arg5;
- (void)ibPropertyStorage:(id)arg1 willChangeCandidatesForRelationship:(id)arg2 fromValue:(id)arg3 toValue:(id)arg4 context:(id)arg5;
- (void)ibMergeAdditionsAndOrderingHints:(id)arg1 intoToManyRelationship:(id)arg2 document:(id)arg3 turnOnInEmptyConfiguration:(BOOL)arg4 insertionContext:(id)arg5;
- (void)ibMergeAdditionsAndOrderingHints:(id)arg1 intoToManyRelationship:(id)arg2 document:(id)arg3 insertionContext:(id)arg4;
- (void)ibDidUnarchiveValuesForConfiguration:(id)arg1 withPropertyStorage:(id)arg2 unarchiver:(id)arg3;
- (void)ibDidArchiveValuesForConfiguration:(id)arg1 withPropertyStorage:(id)arg2 archiver:(id)arg3;
- (id)ibUnarchiveValueForAttribute:(id)arg1 inConfiguration:(id)arg2 withDocumentUnarchiver:(id)arg3;
- (void)ibArchiveEvaluatedValue:(id)arg1 forAttribute:(id)arg2 inConfiguration:(id)arg3 withDocumentArchiver:(id)arg4;
- (BOOL)ibShouldArchiveConfigurableProperty:(id)arg1 inConfiguration:(id)arg2 withStorage:(id)arg3;
- (id)ibArchiveKeyForConfigurableRelationship:(id)arg1;
- (void)ibForwardValueForAttribute:(id)arg1 toConfigurationPropertyStorage:(id)arg2 inConfiguration:(id)arg3;
- (void)ibForwardAttributeValuesForEmptyConfigurationToStorage:(id)arg1;
- (void)ibApplyValue:(id)arg1 fromConfigurationPropertyStorage:(id)arg2 forKeyPath:(id)arg3;
- (void)ibApplyValuesFromConfigurationPropertyStorage:(id)arg1 forConfiguration:(id)arg2;
- (id)ibExternalMemberPropertyStorage;
- (BOOL)ibWrapperViewForEditorCanvasFrameIsAffectedByChangeToProperty:(id)arg1;
- (id)ibWrapperViewForEditorCanvasFrame:(id)arg1;
- (void)setIbExternalUserDefinedRuntimeAttributesLocalizableOthers:(id)arg1;
- (id)ibExternalUserDefinedRuntimeAttributesLocalizableOthers;
- (void)setIbExternalUserDefinedRuntimeAttributesLocalizableStrings:(id)arg1;
- (id)ibExternalUserDefinedRuntimeAttributesLocalizableStrings;
- (void)ibDocumentDidChangeUserDefinedRuntimeAttributesInNonUndoableWay;
- (id)ibExternalUserDefinedRuntimeAttributes;
- (void)setIbExternalUserDefinedRuntimeAttributes:(id)arg1;
- (BOOL)ibSupportsUserDefinedRuntimeAttributes;
- (Class)ibClassForUserDefinedRuntimeAttributesPlaceholder;
- (void)setIbInspectedIdentityAccessControl:(long long)arg1;
- (long long)ibInspectedIdentityAccessControl;
- (id)ibInspectedIdentityObjectID;
- (BOOL)ibInspectedIsInstallationConfigurable;
- (id)ibInstallableRelationshipFromParent;
- (void)ibEnumerateDerivedInspectedConfigurablePropertyDefinitions:(CDUnknownBlockType)arg1;
- (id)ibInstallableRelationshipStorage;
- (id)ibAllConfigurationsWithValuesForInspectedConfigurableProperty:(id)arg1;
- (void)ibTakeValue:(id)arg1 forInspectedConfigurableProperty:(id)arg2 inConfiguration:(id)arg3;
- (id)ibValueForInspectedConfigurableProperty:(id)arg1 inConfiguration:(id)arg2;
- (void)setIbInspectedCustomClassName:(id)arg1;
- (id)ibInspectedCustomClassName;
- (void)ibRegisterUndoActionInDocument:(id)arg1 forChangeToKeyPath:(id)arg2 fromValue:(id)arg3;
- (void)ibRegisterUndoActionInDocument:(id)arg1 forChangeToStorage:(id)arg2 property:(id)arg3 fromValue:(id)arg4 inConfiguration:(id)arg5;
- (void)ibUndoValue:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)ibIsTopLevelObject;
- (BOOL)ibIsValidOutletDestination;
- (BOOL)ibAcceptsBindingsValidation;
- (id)ibFontDataSource;
- (void)ibInvalidateWarningsAfterDescendant:(id)arg1 changedProperty:(id)arg2 inDocument:(id)arg3 fromValue:(id)arg4;
- (BOOL)ibWantsSynthesizedMemberIDWhenUnarchivedWithUnarchiver:(id)arg1;
- (id)ibWarningForSubNibOutlet:(id)arg1 document:(id)arg2 withComputationContext:(id)arg3;
- (id)ibWarningForSubNibAction:(id)arg1 document:(id)arg2 withComputationContext:(id)arg3;
- (id)ibCompiledNibFileIdentifierForChild:(id)arg1 inDocument:(id)arg2;
- (id)ibCompiledNibFileIdentifier;
- (id)ibExposedElusiveDescendantsKeyPaths;
- (void)ibDidRemoveFromDocument:(id)arg1;
- (void)ibWillRemoveFromDocument:(id)arg1 previouslyMemberOfGroup:(id)arg2 identifierInGroup:(id)arg3;
- (void)ibDidAddToDocument:(id)arg1 phase:(unsigned long long)arg2;
- (void)ibWasAddedToAutolayoutDocument:(id)arg1;
- (void)ibDocumentDidChangeDevelopmentTarget:(id)arg1;
- (void)ibOptimisticallyDropRecomputableEditorState;
- (void)ibDidAddWithDefaultChildrenToDocument:(id)arg1;
- (void)ibDidAddToDocument:(id)arg1;
- (void)ibAwakeInDocument:(id)arg1;
- (id)ibBeginDesigningInDocument:(id)arg1;
- (BOOL)ibIsInDesignMode;
- (void)ibTakePastedAttributes:(id)arg1 inConfiguration:(id)arg2;
- (void)ibTakeSnapshotValues:(id)arg1 inConfiguration:(id)arg2;
- (id)ibAttributeSnapshot;
- (id)ibAttributeSnapshotPasteboardType;
- (id)ibOrderedSnapshotAttributesKeyPaths;
- (BOOL)ibShouldUseInspectorPropertyTitleInTooltipForKeyPath:(id)arg1;
- (BOOL)ibShouldIncludeKeyPathInIbtoolPrintingOutput:(id)arg1;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (id)ibDocumentationClassName;
- (id)ibDisplayNameForKeyPath:(id)arg1;
- (void)ibWarnings:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibWarnings:(id)arg1 forUserDefinedRuntimeAttributes:(id)arg2 forDocument:(id)arg3 withComputationContext:(id)arg4;
- (BOOL)ibCouldIssueWarningsForUserDefinedRuntimeAttributesForDocument:(id)arg1;
- (struct __CFArray *)ibLocalIntegerSelectorsDefinedByIntegrator;
- (struct __CFArray *)ibLocalObjectSelectorsDefinedByIntegrator;
- (id)ibUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibCanUnembedChildrenInDocument:(id)arg1;
- (BOOL)ibIsPlaceholder;
- (id)ibRuntimeFormattedClassName;
- (id)ibRuntimeFormattedClassSymbol;
- (id)ibRuntimeClassName;
- (BOOL)ibShouldPropagateFramesDuringFrameDecisionForChildItem:(id)arg1;
- (void)ibConstrainBoundsToNearestLegalSize;
- (id)ibContainerWidgetTypeForChildView:(id)arg1;
- (CDStruct_c519178c)ibInsetToDesignableContentAreaForChildView:(id)arg1;
- (BOOL)ibCalculatesInsetToDesignableContentAreaForChildView:(id)arg1;
- (void)setIbExternalIdentityShowNotesWithSelection:(BOOL)arg1;
- (BOOL)ibExternalIdentityShowNotesWithSelection;
- (void)setIbExternalIdentityNotes:(id)arg1;
- (id)ibExternalIdentityNotes;
- (id)ibEffectiveUnformattedClassName;
- (id)ibEffectiveFormattedClassName;
- (id)ibEffectiveFormattedClassSymbol;
- (id)ibEffectiveClassModule;
- (id)ibEffectiveClassName;
- (id)ibExternalCustomUnformattedClassName;
- (id)ibExternalCustomFormattedClassName;
- (void)setIbExternalCustomFormattedClassSymbol:(id)arg1;
- (id)ibExternalCustomFormattedClassSymbol;
- (void)setIbExternalCustomClassModuleProvider:(id)arg1;
- (id)ibExternalCustomClassModuleProvider;
- (void)setIbExternalCustomClassModule:(id)arg1;
- (id)ibExternalCustomClassModule;
- (void)setIbExternalCustomClassName:(id)arg1;
- (id)ibExternalCustomClassName;
- (void)setIbExternalExplicitLabel:(id)arg1;
- (id)ibExternalExplicitLabel;
- (id)ibEffectiveLabel;
- (id)effectiveOutletNameForLabel;
- (void)setIbExternalLabelIdentifier:(id)arg1;
- (id)ibExternalLabelIdentifier;
- (BOOL)ibWantsPrototypeForToOneOutletConnection:(id)arg1 inDocument:(id)arg2;
- (float)ibConnectionCompilationOrderPriority;
- (void)ibDocument:(id)arg1 didAddConnection:(id)arg2;
- (id)ibEquivalentSourceForToOneOutlet:(id)arg1;
- (id)ibInitialConnectionLabelSearchTerm;
- (BOOL)ibIsChildTypicalConnectionTarget:(id)arg1;
- (void)ibPopulateResourceReferences:(id)arg1 withValueToVariantSetMap:(id)arg2;
- (id)ibAllFontDescriptionKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllFontDescriptionKeyPaths;
- (id)ibLocalFontDescriptionKeyPaths;
- (id)ibAllPerConfigurationKeyPathsToSkipForCompilingStartingWithClass:(Class)arg1;
- (id)ibAllPerConfigurationKeyPathsToSkipForCompiling;
- (id)ibLocalPerConfigurationKeyPathsToSkipForCompiling;
- (id)ibAllPerConfigurationToManyChildRelationshipKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllPerConfigurationToManyChildRelationshipKeyPaths;
- (id)ibLocalPerConfigurationToManyChildRelationshipKeyPaths;
- (id)ibAllToManyAutoNullifyingNonChildRelationshipsKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllToManyAutoNullifyingNonChildRelationshipsKeyPaths;
- (id)ibLocalAutoNullifyingNonChildToManyRelationshipsKeyPaths;
- (id)ibAllToManyChildRelationshipsKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllToManyChildRelationshipsKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
- (id)ibAllToManyNonChildRelationshipsKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllToManyNonChildRelationshipsKeyPaths;
- (id)ibLocalNonChildToManyRelationshipsKeyPaths;
- (id)ibAllToManyRelationshipsKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllToManyRelationshipsKeyPaths;
- (id)ibLocalToManyRelationshipsKeyPaths;
- (id)ibAllToOneAutoNullifyingNonChildRelationshipsKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllToOneAutoNullifyingNonChildRelationshipsKeyPaths;
- (id)ibLocalAutoNullifyingNonChildToOneRelationshipsKeyPaths;
- (id)ibAllToOneChildRelationshipsKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllToOneChildRelationshipsKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;
- (id)ibAllToOneNonChildRelationshipsKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllToOneNonChildRelationshipsKeyPaths;
- (id)ibLocalNonChildToOneRelationshipsKeyPaths;
- (id)ibAllToOneRelationshipsKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllToOneRelationshipsKeyPaths;
- (id)ibLocalToOneRelationshipsKeyPaths;
- (id)ibAllPerConfigurationAttributeKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllPerConfigurationAttributeKeyPaths;
- (id)ibLocalPerConfigurationAttributeKeyPaths;
- (id)ibAllSearchableConnectionArrayAttributeKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllSearchableConnectionArrayAttributeKeyPaths;
- (id)ibAllNonreplaceableAttributeKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllNonreplaceableAttributeKeyPaths;
- (id)ibLocalNonreplaceableAttributeKeyPaths;
- (id)ibAllSearchableNumericAttributeKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllSearchableNumericAttributeKeyPaths;
- (id)ibLocalSearchableNumericAttributeKeyPaths;
- (id)ibAllAdditionalIbtoolDescriptionKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllAdditionalIbtoolDescriptionKeyPaths;
- (id)ibAllResourceArrayAttributeKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllResourceArrayAttributeKeyPaths;
- (id)ibLocalResourceArrayAttributeKeyPaths;
- (id)ibAllLocalizableToManyRelationshipsKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllLocalizableToManyRelationshipsKeyPaths;
- (id)ibLocalLocalizableToManyRelationshipsKeyPaths;
- (id)ibAllAdditionalLocalizableAttributeKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllAdditionalLocalizableAttributeKeyPaths;
- (id)ibLocalAdditionalLocalizableAttributeKeyPaths;
- (id)ibAllLocalizableStringArrayAttributeKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllLocalizableStringArrayAttributeKeyPaths;
- (id)ibLocalLocalizableStringArrayAttributeKeyPaths;
- (id)ibAllLocalizableGeometryAttributeKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllLocalizableGeometryAttributeKeyPaths;
- (id)ibLocalLocalizableGeometryAttributeKeyPaths;
- (id)ibAllLocalizableStringsAttributeKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllLocalizableStringsAttributeKeyPaths;
- (id)ibLocalLocalizableStringsAttributeKeyPaths;
- (id)ibAllAttributeKeyPathsStartingWithClass:(Class)arg1;
- (id)ibAllAttributeKeyPaths;
- (id)ibAllPerConfigurationKeyPaths;
- (id)ibAllLocalizableKeyPaths;
- (BOOL)ibDeclaresAttributeKeyPath:(id)arg1;
- (id)ibUndoKeyPathForToManyRelationshipKeyPath:(id)arg1;
- (void)ibWillMoveChild:(id)arg1 toNewParent:(id)arg2 document:(id)arg3;
- (void)ibTurnOffChildren:(id)arg1 inConfiguration:(id)arg2 document:(id)arg3;
- (BOOL)ibCanTurnOffChildren:(id)arg1 document:(id)arg2;
- (void)ibDidRemoveChildren:(id)arg1 fromDocument:(id)arg2;
- (void)ibRemoveChildren:(id)arg1;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (id)ibEditorSelectionOrderRelationLists;
- (BOOL)ibWantsChildWrapperForChild:(id)arg1 inDocument:(id)arg2;
- (void)ibPopulateEditorSelectionOrderRelationLists:(id)arg1;
- (id)ibChildBackToFrontRelationOrder;
- (void)ibPopulateChildBackToFrontRelationOrder:(id)arg1;
- (id)ibChildRelationOrder;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)ibSetNumberOfObjects:(long long)arg1 inToManyRelationship:(id)arg2 addingObjectsWithBlock:(CDUnknownBlockType)arg3;
- (BOOL)ibShouldReattachTransientChildrenToChild:(id)arg1;
- (BOOL)ibShouldReattachTransientChildren;
- (BOOL)ibToManyRelationSupportsReplacement:(id)arg1;
- (BOOL)ibToManyRelationSupportsInsertion:(id)arg1;
- (BOOL)ibShouldIncludeKeyPath:(id)arg1 inInitialChildrenForDocument:(id)arg2;
- (id)ibInitialChildrenForDocument:(id)arg1;
- (id)ibOnlyObjectForToManyRelationshipsAndCardinality:(int *)arg1 forDocument:(id)arg2;
- (id)ibOnlyObjectForToOneRelationshipsAndCardinality:(int *)arg1 forDocument:(id)arg2;
- (id)ibExtractCardinality:(int *)arg1 fromInitialChildRelationships:(SEL)arg2 forDocument:(id)arg3 usingPredicate:(CDUnknownBlockType)arg4;
- (BOOL)ibIsCopyableGivenSelection:(id)arg1;
- (void)ibCustomizeForInsertionIntoDocument:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibSetValue:(id)arg1 forInsertingPasteboardObjectsIntoToManyRelationship:(id)arg2 document:(id)arg3 insertionContext:(id)arg4;
- (void)ibWillAcceptPastedObjects:(id)arg1 atIndexes:(id)arg2 intoToManyRelation:(id)arg3 inDocument:(id)arg4 insertionContext:(id)arg5;
- (void)ibWillAcceptPastedObject:(id)arg1 intoToOneRelation:(id)arg2 inDocument:(id)arg3 insertionContext:(id)arg4;
- (id)ibAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 insertionContext:(id)arg3;
- (BOOL)ibCanAcceptContentsOfPasteboard:(id)arg1 inDocument:(id)arg2 targetChildRelation:(id *)arg3;
- (void)ibDidExtractObjects:(id)arg1 fromPasteboard:(id)arg2 intoDocument:(id)arg3 context:(id)arg4;
- (void)ibDidPutObjects:(id)arg1 onPasteboard:(id)arg2 fromDocument:(id)arg3 context:(id)arg4;
- (void)ibWillPutObjects:(id)arg1 withDescendants:(id)arg2 onPasteboard:(id)arg3 fromDocument:(id)arg4 context:(id)arg5;
- (id)ibPasteboardTypes;
- (long long)ibCompareAttributeSearchLocation:(id)arg1 toLocation:(id)arg2 forKeyPath:(id)arg3 inDocument:(id)arg4;
- (id)ibAttributeSearchLocationDatasForPrimitiveValue:(id)arg1 forKeyPath:(id)arg2 inDocument:(id)arg3;
- (id)ibAttributeSearchLocationsForKeyPath:(id)arg1 inDocument:(id)arg2;
- (BOOL)ibReplaceValueForAttributeSearchLocation:(id)arg1 withStringValue:(id)arg2 inDocument:(id)arg3;
- (BOOL)ibGetUserDefinedRuntimeAttributeAtSearchLocation:(id)arg1 outRuntimeAttribute:(id *)arg2 outProperty:(id *)arg3 outIndex:(unsigned long long *)arg4;
- (BOOL)ibGetArrayObjectAtAttributeSearchLocation:(id)arg1 outObject:(id *)arg2 outIndex:(unsigned long long *)arg3;
- (id)ibPrimitiveReplacementValueForString:(id)arg1 atLocation:(id)arg2 withCurrentValue:(id)arg3 inDocument:(id)arg4;
- (id)ibSearchableStringValueForPrimitiveValue:(id)arg1 atLocation:(id)arg2 inDocument:(id)arg3;
- (id)ibDefaultValueForNumericAttributeSearchLocation:(id)arg1 inDocument:(id)arg2;
- (id)ibStringValueForAttributeSearchLocation:(id)arg1 inDocument:(id)arg2;
- (id)ibContextLabelForAttributeSearchLocation:(id)arg1 inDocument:(id)arg2;
- (BOOL)ibSupportsPartialMatchesForAttributeSearchLocation:(id)arg1 inDocument:(id)arg2;
- (id)ibInspectorCategoryForAttributeSearchLocation:(id)arg1 inDocument:(id)arg2;
- (BOOL)ibShouldRefreshInspectorBeforeShowingFindIndicatorForAttributeSearchLocation:(id)arg1 inDocument:(id)arg2;
- (BOOL)ibIsAttributeSearchLocationReplaceable:(id)arg1 inDocument:(id)arg2;
- (BOOL)ibIsSearchableAttributeKeyPathVisible:(id)arg1 inDocument:(id)arg2;
- (id)ibMemberSearchContextLabelInDocument:(id)arg1;
- (id)ibSearchableAttributeKeyPathsForDocument:(id)arg1;
- (id)ibLocalSearchableConnectionArrayAttributeKeyPaths;
- (id)ibSearchableActionConnections;
- (id)ibSearchableOutletConnections;
- (id)ibOrderedSearchableConnectionsFromSet:(id)arg1 withFilter:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)ibConvertDefaultFont:(id)arg1;
- (id)ibFontForFontManager;
- (id)ibDefaultFontDescriptionKeyPath;
- (void)ibPopulateObjectsForFloatingPanels:(id)arg1;
- (id)ibDefaultFontKeyPath;
- (void)setIbExternalLastKnownCanvasAnchor:(id)arg1;
- (id)ibExternalLastKnownCanvasAnchor;
- (BOOL)ibWantsCanvasLayoutInformationArchivedInDocument;
- (id)ibSpringLoadedObjectAtPoint:(struct CGPoint)arg1 inFrameController:(id)arg2;
- (BOOL)ibCanBeBaseObjectOfEditorFrame;
- (BOOL)ibMustBeBaseObjectOfEditorFrame;
- (void)setIbContentSizeForEditorVerification:(struct CGSize)arg1;
- (struct CGSize)ibContentSizeForEditorVerification;
- (BOOL)ibAllowsClickPassthroughToParentEditorFrames;
- (BOOL)ibChildEditsWithSingleClick:(id)arg1;
- (BOOL)ibIsChildInitiallySelectable:(id)arg1;
- (BOOL)ibAvoidsEditing;
- (BOOL)ibSelectingChildWithMouseRequiresEditorConsent:(id)arg1;
- (BOOL)ibIsChildSelectableInSameEditor:(id)arg1;
- (BOOL)ibShouldHiddenChildViewBeVisible:(id)arg1;
- (BOOL)ibIsChildViewSizable:(id)arg1;
- (BOOL)ibIsChildViewMovable:(id)arg1;
- (BOOL)ibIsChildViewUserSizable:(id)arg1;
- (BOOL)ibIsChildViewUserMovable:(id)arg1;
- (BOOL)ibCanChildChangeCustomClassName:(id)arg1;
- (BOOL)ibCanChangeCustomClassName;
- (struct CGRect)ibRectForChild:(id)arg1 inFrameController:(id)arg2;
- (id)ibSecondaryHitTestingRectsForChild:(id)arg1 inFrameController:(id)arg2;
- (BOOL)ibClipsChild:(id)arg1;
- (void)ibSizeToFit;
- (BOOL)ibCanSizeToFit;
- (id)ibEditorCanvasFrameControllerForDocument:(id)arg1;
- (Class)ibDropTargetResolverClass;
- (Class)ibEditorClass;
- (id)ibPrerequisiteTopLevelEditedSibling;
- (BOOL)ibSupportsMultipleSimultaneousEditors;
- (void)ibPopulateWithLabelAffectingObjects:(id)arg1;
- (id)ibDescriptionWithOID;
- (id)ibLabelQualifierForChild:(id)arg1;
- (id)ibLocalAdditionalIbtoolDescriptionKeyPaths;
- (id)ibLoggingDescription;
- (id)ibDefaultLabel;
- (id)ibWarningLabelInDocument:(id)arg1;
- (id)ibQualifyingInfoForDefaultLabel;
- (BOOL)ibWantsVerboseDefaultLabel;
- (id)ibTypeNameForDefaultLabel;
- (void)decodeTargetRuntime:(id)arg1;
- (void)encodeTargetRuntime:(id)arg1;
- (void)setTargetRuntime:(id)arg1;
- (id)targetRuntime;
@end

