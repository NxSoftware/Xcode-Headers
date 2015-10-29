//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IBSceneUpdateRequestConfiguring.h"

@class DVTDelayedInvocation, DVTStackBacktrace, IBDocument, IBMutableIdentityDictionary, NSMutableArray, NSMutableOrderedSet, NSString;

@interface IBDocumentAutolayoutManager : NSObject <DVTInvalidation, IBSceneUpdateRequestConfiguring>
{
    IBMutableIdentityDictionary *_cachedAutolayoutStatusIncludingDescendantsByArbitrationUnitRoot;
    IBMutableIdentityDictionary *_autolayoutStatusByArbitrationUnitRoot;
    NSMutableOrderedSet *_objectsWithPendingStatusUpdate;
    DVTDelayedInvocation *_autolayoutStatusInvocation;
    NSMutableArray *_autolayoutStatusChangeObservers;
    long long _ignoreAutolayoutStatusInvalidationNestingCount;
    long long _delayAutolayoutStatusUpdatingNestingCount;
    BOOL _isRunningArbitrationOfUnit;
    BOOL _haveInvalidatedAllObjects;
    BOOL _usesAutolayout;
    BOOL _autolayoutStatusUpdatingEnabled;
    BOOL _shouldOnlyUpdateAutolayoutStatusDuringSceneUpdates;
    IBDocument *_document;
}

+ (void)initialize;
@property(nonatomic) BOOL shouldOnlyUpdateAutolayoutStatusDuringSceneUpdates; // @synthesize shouldOnlyUpdateAutolayoutStatusDuringSceneUpdates=_shouldOnlyUpdateAutolayoutStatusDuringSceneUpdates;
@property(nonatomic, getter=isAutolayoutStatusUpdatingEnabled) BOOL autolayoutStatusUpdatingEnabled; // @synthesize autolayoutStatusUpdatingEnabled=_autolayoutStatusUpdatingEnabled;
@property(nonatomic) BOOL usesAutolayout; // @synthesize usesAutolayout=_usesAutolayout;
@property(readonly, nonatomic) __weak IBDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (double)priorityForPlaceholderAmbiguousSubviewVerticalConstraintsForView:(id)arg1;
- (double)priorityForPlaceholderAmbiguousSubviewHorizontalConstraintsForView:(id)arg1;
- (double)priorityForPlaceholderUninitializedSubviewVerticalConstraintsForView:(id)arg1;
- (double)priorityForPlaceholderUninitializedSubviewHorizontalConstraintsForView:(id)arg1;
- (BOOL)viewShouldInstallPlaceholderSizeConstraintsOnSubviewInsteadOfReceiver:(id)arg1;
- (BOOL)viewShouldGeneratePlaceholderSizeConstraintsWhenAmbiguous:(id)arg1;
- (BOOL)viewShouldGeneratePlaceholderSizeConstraintsForUninitializedSubviews:(id)arg1;
- (BOOL)viewShouldGeneratePlaceholderPositionConstraintsForUninitializedSubviews:(id)arg1;
- (BOOL)viewHasCandidateReferencingConstraints:(id)arg1;
- (BOOL)viewCanHaveUninitializedAutolayoutAmbiguityStatus:(id)arg1;
- (BOOL)viewHasAnyAmbiguity:(id)arg1;
- (BOOL)viewHasUninitializedAutolayoutStatus:(id)arg1;
- (BOOL)viewIsVerticallyResizable:(id)arg1;
- (BOOL)viewIsHorizontallyResizable:(id)arg1;
- (BOOL)viewPrefersToVerticallyResizeWithContainer:(id)arg1;
- (BOOL)viewPrefersToHorizontallyResizeWithContainer:(id)arg1;
- (double)priorityStrongerThanInternalWeakSizeConstraintsForCompressingView:(id)arg1 inLayoutEngineForOrientation:(unsigned long long)arg2;
- (unsigned long long)orientationsWithInternalConstraintsThatWeaklyDefineViewSizeForView:(id)arg1;
- (unsigned long long)customSubviewLayoutStrategyForView:(id)arg1;
- (BOOL)viewPrefersMarginRelativeConstraints:(id)arg1;
- (BOOL)viewDerivesDesignTimeDefaultIntrinsicContentSize:(id)arg1;
- (BOOL)viewDerivesInternalConstraintsBasedUponInitialFrameSize:(id)arg1;
- (BOOL)viewWithSuperviewOwnedLayoutAllowsSizingConstraints:(id)arg1;
- (BOOL)viewShouldUseConstraintsInsteadOfAutoresizing:(id)arg1;
- (id)designableContentViewForView:(id)arg1;
- (CDStruct_c519178c)insetToDesignableContentAreaForView:(id)arg1;
- (id)containerWidgetTypeForView:(id)arg1;
- (id)widgetTypeForView:(id)arg1;
- (long long)userInterfaceDirection;
- (void)configureSceneUpdateRequest:(id)arg1;
- (void)_runBlockIfSceneStatusUpdatingIsEnabledForObject:(id)arg1 withReasonBlock:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;
- (void)debugMenuItemUpdateStatusInAllUnits:(id)arg1;
- (void)delayAutolayoutStatusUpdatingDuring:(CDUnknownBlockType)arg1;
- (BOOL)isDelayingAutolayoutStatusUpdating;
- (void)ignoreAutolayoutStatusInvalidationDuring:(CDUnknownBlockType)arg1;
- (BOOL)isIgnoringAutolayoutStatusInvalidation;
- (void)invalidateAutolayoutStatusForAllObjectHierarchiesForReasonWithBlock:(CDUnknownBlockType)arg1;
- (void)invalidateAutolayoutStatusForArbitrationUnitContainingObject:(id)arg1 reasonBlock:(CDUnknownBlockType)arg2;
- (void)_invalidateAutolayoutStatusForHierarchyContainingObject:(id)arg1;
- (void)didInvalidateAutolayoutStatusForObject:(id)arg1;
- (void)_runBlockIfStatusInvalidationIsEnabledForObject:(id)arg1 withReasonBlock:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;
- (void)__runBlockIfStatusUpdatingIsEnabledForObject:(id)arg1 operationName:(id)arg2 withReasonBlock:(CDUnknownBlockType)arg3 block:(CDUnknownBlockType)arg4;
- (void)preserveCleanAutolayoutStatusDuring:(CDUnknownBlockType)arg1;
- (void)_clearPendingAutolayoutStatusTables;
- (void)ensureAutolayoutStatusIsValid;
- (void)_scheduleDelayedAutolayoutStatusInvocation;
- (void)didFireAutolayoutStatusDelayedInvocation:(id)arg1;
- (void)updateAutolayoutStatusInArbitrationUnits:(id)arg1;
- (id)_arbitrationUnitsWithInvalidatedObjects;
- (id)registerAutolayoutStatusChangeObserver:(CDUnknownBlockType)arg1;
- (id)mostRecentlyComputedAutolayoutStatusForArbitrationUnitContainingObject:(id)arg1;
- (id)mostRecentlyComputedAutolayoutStatusForArbitrationUnitsContainingAndBelowObject:(id)arg1;
- (id)autolayoutStatusForArbitrationUnitContainingObject:(id)arg1;
- (void)_forwardAutolayoutStatusToConfigurationPropertyStorageForViewsInArbitrationUnit:(id)arg1;
- (void)processAutolayoutStatus:(id)arg1 forArbitrationUnit:(id)arg2;
- (void)_updateStatusForUninstalledViewsInUnit:(id)arg1;
- (void)_updateMisplacedViewsInUnit:(id)arg1 effectiveMisplacedViews:(id)arg2;
- (BOOL)_shouldUpdateMisplacementStateOnAutolayoutItemsDuringStatusComputation;
- (void)_updateViewsWithAnyAmbiguityInUnit:(id)arg1 forStatus:(id)arg2;
- (id)_autolayoutStatusFromConflictingConstraintSets:(id)arg1 ambiguousViews:(id)arg2 misplacedViews:(id)arg3 viewsToLayoutFrames:(id)arg4;
- (void)_updateMisplacedAndAmbiguousViewsThatCannotHaveConstraintsInUnit:(id)arg1 mutableEffectiveAmbiguousViewStatusGroups:(id)arg2 mutableEffectiveMisplacedViews:(id)arg3;
- (void)_updateMisplacedViewsAlsoMarkedAsUninitializedInUnit:(id)arg1 mutableEffectiveAmbiguousViewStatusGroups:(id)arg2 mutableEffectiveMisplacedViews:(id)arg3;
- (void)_updateUninitializedAmbiguityStatusInUnit:(id)arg1 mutableEffectiveAmbiguousViewStatusGroups:(id)arg2;
- (id)_makeAmbiguityGroupForAmbiguityStatus:(id)arg1 orientationMask:(unsigned long long)arg2;
- (void)_clearAutolayoutStatusForAllUnits;
- (void)_setAutolayoutStatus:(id)arg1 forArbitrationUnitRoot:(id)arg2;
- (id)_autolayoutStatusForArbitrationUnitRoot:(id)arg1;
- (void)_respondToAutolayoutArbitrationFailureResult:(id)arg1 arbitrationUnit:(id)arg2 backtrace:(id)arg3;
- (void)_configureDiagnosticsHandler:(id)arg1 withArbitrationFailureResult:(id)arg2 arbitrationUnit:(id)arg3 backtrace:(id)arg4;
- (id)itemsWithCleanAutolayoutStatus;
- (id)misplacedAndNotAmbiguousItems;
- (id)misplacedOrAmbiguousItems;
- (id)ambiguousItems;
- (id)misplacedItems;
- (BOOL)isItemAmbiguous:(id)arg1;
- (BOOL)isItemMisplaced:(id)arg1;
- (void)clearAndAddAllSuggestedConstraints;
- (void)clearAndAddSuggestedConstraintsForItems:(id)arg1;
- (void)addAllMissingConstraints;
- (void)addMissingConstraintsForItems:(id)arg1;
- (void)clearConstraintsForItems:(id)arg1 inAllConfigurations:(BOOL)arg2;
- (void)updateAllConstraintConstants;
- (void)updateConstraintConstantsForItems:(id)arg1;
- (void)updateAllFramesToMatchConstraints;
- (void)updateFramesToMatchConstraintsForItems:(id)arg1;
- (void)_whitelistAndDecideConstraintsForItems:(id)arg1 withOptions:(id)arg2;
- (void)_primitiveUpdateConstraintConstantsForItems:(id)arg1;
- (void)_primitiveClearConstraintsForItems:(id)arg1 inAllConfigurations:(BOOL)arg2;
- (void)_removeConstraintsTurnedOffInAllConfigurations:(id)arg1 fromItem:(id)arg2;
- (void)_scheduleArbitrationOfUnit:(id)arg1 withOptions:(id)arg2;
- (void)decideAndSetFramesOfViewHierarchyContainingObject:(id)arg1 withCurrentAutolayoutStatusAfterPerformingBlock:(CDUnknownBlockType)arg2;
- (void)decideAndSetFramesOfAllViewHierarchiesWithCurrentAutolayoutStatusAfterPerformingBlock:(CDUnknownBlockType)arg1;
- (void)decideAndSetFramesOfAllViewHierarchies;
- (id)sparseAutolayoutInfoForArbitrationUnit:(id)arg1 objectTransformationBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_orderedChildrenChildProducerBlockForBuildingSparseInfo;
- (void)_runAutolayoutCommandForArbitrationUnits:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_dispatchWillArbitrateMessageToObjectsInArbitrationUnits:(id)arg1;
- (Class)autolayoutFrameDecisionDriverClass;
- (Class)autolayoutEngineClass;
- (Class)arbitrationUnitClass;
- (Class)symbolicLayoutConstantClass;
- (Class)layoutConstantClass;
- (void)debugMenuItemPrintArbitrationUnits:(id)arg1;
- (id)arbitrationUnitRootForObject:(id)arg1;
- (id)topMostObjectOfClass:(Class)arg1 inLineageToArbitrationUnitRootContainingObject:(id)arg2;
- (id)arbitrationUnitsAtAndBelowObject:(id)arg1;
- (id)arbitrationUnitsAtAndBelowObjects:(id)arg1;
- (id)_arbitrationUnitsForObjectsStillInDocument:(id)arg1;
- (id)arbitrationUnitsForObjects:(id)arg1;
- (id)arbitrationUnitForObject:(id)arg1;
- (id)itemsInAllArbitrationUnits;
- (id)allArbitrationUnits;
- (void)disableAutolayout;
- (void)enableAutolayout;
- (void)document:(id)arg1 object:(id)arg2 didChangeValue:(id)arg3 toValue:(id)arg4 forKeyPath:(id)arg5;
- (void)documentWillClose:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithDocument:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

