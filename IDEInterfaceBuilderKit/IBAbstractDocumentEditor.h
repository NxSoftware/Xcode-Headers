//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <IDEInterfaceBuilderKit/DVTFindBarFindable-Protocol.h>
#import <IDEInterfaceBuilderKit/DVTReplacementViewDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBDocumentArbitrationResponder-Protocol.h>
#import <IDEInterfaceBuilderKit/IBDocumentAsynchronousToolLoadingQueueDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBDocumentEditorLoadingViewControllerDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IBStructureViewControllerDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/IDESourceExpressionSource-Protocol.h>
#import <IDEInterfaceBuilderKit/NSPopoverDelegate-Protocol.h>
#import <IDEInterfaceBuilderKit/NSTextFinderClient-Protocol.h>
#import <IDEInterfaceBuilderKit/NSUserInterfaceValidations-Protocol.h>

@class DVTDelayedInvocation, DVTMutableOrderedSet, DVTNotificationToken, DVTObservingToken, DVTPerformanceMetric, DVTReplacementView, DVTSDK, DVTSourceExpression, DVTSourceLanguageService, DVTSplitView, DVTStackBacktrace, IBAttributeSearchLocation, IBAutolayoutStatus, IBCancellationToken, IBCanvasView, IBCanvasViewController, IBDocument, IBDocumentAsynchronousToolLoadingQueue, IBDocumentEditorLoadingViewController, IBInvalidationToken, IBMenuTargetResponderForwarder, IBMutableIdentityDictionary, IBStructureAreaDockLabelContainer, IBStructureViewController, NSArray, NSDictionary, NSMutableOrderedSet, NSMutableSet, NSObject, NSOrderedSet, NSPopover, NSSegmentedControl, NSSet, NSString, NSTimer;
@protocol IBSelectionProvider, OS_dispatch_queue;

@interface IBAbstractDocumentEditor : IDEEditor <IBStructureViewControllerDelegate, NSPopoverDelegate, DVTFindBarFindable, NSTextFinderClient, IBDocumentEditorLoadingViewControllerDelegate, IBDocumentAsynchronousToolLoadingQueueDelegate, DVTReplacementViewDelegate, IDESourceExpressionSource, NSUserInterfaceValidations, IBDocumentArbitrationResponder>
{
    NSSegmentedControl *_toggleStructureButton;
    NSArray *_currentSelectedItemsMembers;
    NSArray *_currentSelectedItemsObjects;
    NSSet *_currentSelectedItemsObjectsAsSet;
    NSSet *_currentSelectedItemsMembersAsSet;
    BOOL _establishingInitialSelection;
    BOOL _kickedOffInitialEnsureSelectionIsNonEmptyValidation;
    NSDictionary *_previouslyRestoredStateDictionary;
    NSMutableSet *_connectionPanelControllers;
    BOOL _isInvalidating;
    DVTNotificationToken *_documentMemberRemovedObserver;
    DVTNotificationToken *_colorPanelObservation;
    DVTObservingToken *_kvoDocumentObservingToken;
    BOOL _registeredWithDocument;
    DVTDelayedInvocation *_selectionPushInvocation;
    DVTDelayedInvocation *_ensureAnObjectEditorIsOpenInvocation;
    NSMutableSet *_highlightProviders;
    DVTMutableOrderedSet *_selectionProviders;
    DVTObservingToken *_mainViewControllerObservationToken;
    DVTNotificationToken *_windowBackingObservationToken;
    NSObject<OS_dispatch_queue> *_quickHelpIndexAccessQueue;
    IBMutableIdentityDictionary *_flattenedObjectObservers;
    IBMutableIdentityDictionary *_objectObservers;
    IBMutableIdentityDictionary *_allObjectsObservers;
    IBMutableIdentityDictionary *_allConfigurationStorageObservers;
    long long _nextObjectObserverKey;
    NSSet *_possiblyStalePreviouslyHighlightedObjects;
    IBCancellationToken *_possiblyStaleCancelationTokenForPreviouslyHighlightedObjects;
    NSPopover *_currentConstraintAdditionPopover;
    IBAttributeSearchLocation *_selectedAttributeSearchLocation;
    IBCancellationToken *_findIndicatorCancellationToken;
    NSMutableOrderedSet *_activeLookObservers;
    IBDocumentEditorLoadingViewController *_loadingOverlayViewController;
    BOOL _isShowingLoadUI;
    BOOL _contentViewWantedLayerBeforeShowingLoadUI;
    NSTimer *_loadingUIMinimumTimeTimer;
    NSMutableSet *_loadingProgressTokenIdentifiers;
    DVTDelayedInvocation *_fadeOutLoadingUIDelayedInvocation;
    DVTPerformanceMetric *_loadingMetric;
    IBDocumentAsynchronousToolLoadingQueue *_asynchronousToolLoadingQueue;
    DVTDelayedInvocation *_asynchronousToolLoadingInvocation;
    IBInvalidationToken *_asynchronousToolLoadingProgressToken;
    BOOL _displayedToolFailure;
    BOOL _turnedOnBoundsRectsForToolFailure;
    IBCanvasViewController *_canvasViewController;
    IBStructureAreaDockLabelContainer *_dockItemLabelPopUpContainer;
    DVTReplacementView *_structureAreaContainer;
    DVTSplitView *_structureAreaSplitView;
    DVTReplacementView *_canvasContainer;
    NSArray *_currentSelectedItems;
    IBStructureViewController *_structureViewController;
    DVTSourceExpression *_selectedExpression;
    IBAutolayoutStatus *_scopedAutolayoutStatus;
    NSOrderedSet *_autolayoutStatusArbitrationUnitsScope;
    NSMutableOrderedSet *_selectedOrPreviouslySelectedMembersFromOldToFresh;
    id <IBSelectionProvider> _selectionProvider;
    IBMenuTargetResponderForwarder *_editorMenuTarget;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)visibleDocumentEditorControllersFromBackToFrontInDocument:(id)arg1;
+ (void)revealDocumentMemberAtLocation:(id)arg1 withEditor:(id)arg2 openSpecifierCustomizationBlock:(CDUnknownBlockType)arg3;
+ (id)showTargetIdentifierForObjects:(id)arg1 showLabels:(BOOL)arg2 inDocuments:(id)arg3;
+ (void)cancelAllOutstandingTargetIdentifiers;
+ (id)lastActiveDocumentEditorForWorkspaceTabController:(id)arg1 forDocument:(id)arg2;
+ (id)lastActiveDocumentEditorForWorkspaceTabController:(id)arg1;
+ (void)noteEditorWillDeactivate:(id)arg1 inWorkspaceTabController:(id)arg2;
+ (void)noteEditorDidActivate:(id)arg1 inWorkspaceTabController:(id)arg2 isActive:(BOOL)arg3;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property(readonly) IBMenuTargetResponderForwarder *editorMenuTarget; // @synthesize editorMenuTarget=_editorMenuTarget;
@property(retain, nonatomic) id <IBSelectionProvider> selectionProvider; // @synthesize selectionProvider=_selectionProvider;
@property(readonly) NSMutableOrderedSet *selectedOrPreviouslySelectedMembersFromOldToFresh; // @synthesize selectedOrPreviouslySelectedMembersFromOldToFresh=_selectedOrPreviouslySelectedMembersFromOldToFresh;
@property(retain, nonatomic) NSOrderedSet *autolayoutStatusArbitrationUnitsScope; // @synthesize autolayoutStatusArbitrationUnitsScope=_autolayoutStatusArbitrationUnitsScope;
@property(retain, nonatomic) IBAutolayoutStatus *scopedAutolayoutStatus; // @synthesize scopedAutolayoutStatus=_scopedAutolayoutStatus;
@property(retain, nonatomic) DVTSourceExpression *selectedExpression; // @synthesize selectedExpression=_selectedExpression;
@property(retain, nonatomic) IBStructureViewController *structureViewController; // @synthesize structureViewController=_structureViewController;
@property(copy, nonatomic) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(retain, nonatomic) DVTReplacementView *canvasContainer; // @synthesize canvasContainer=_canvasContainer;
@property(retain, nonatomic) DVTSplitView *structureAreaSplitView; // @synthesize structureAreaSplitView=_structureAreaSplitView;
@property(retain, nonatomic) DVTReplacementView *structureAreaContainer; // @synthesize structureAreaContainer=_structureAreaContainer;
@property(retain, nonatomic) IBStructureAreaDockLabelContainer *dockItemLabelPopUpContainer; // @synthesize dockItemLabelPopUpContainer=_dockItemLabelPopUpContainer;
@property(retain, nonatomic) IBCanvasViewController *canvasViewController; // @synthesize canvasViewController=_canvasViewController;
- (void).cxx_destruct;
- (void)debugShowRemoteToolErrorBanner:(id)arg1;
- (void)displayPlatformToolFailureWithBugReportingBlock:(CDUnknownBlockType)arg1;
- (void)populateIncrementalSceneUpdates:(id)arg1 forUpdatingSceneWithRoot:(id)arg2 sceneUpdateManager:(id)arg3;
- (void)populateFullSceneUpdates:(id)arg1 forUpdatingSceneWithRoot:(id)arg2 objectPackage:(id)arg3 sceneUpdateManager:(id)arg4;
- (id)addLoadingProgressTokenWithNonUniqueIdentifier:(id)arg1;
- (void)escapeHatchRequestedForLoadingViewController:(id)arg1;
- (void)fadeOutLoadingUI;
- (void)hideLoadingUIIfPossible;
- (void)minimumLoadingUITimerDidFire:(id)arg1;
- (void)teardownLoadingViewIfNeededAndClearPendingToolLoadingProgressToken:(BOOL)arg1;
- (void)_clearLoadingPerformanceMetric;
- (void)canvasFrameControllerDidFinishRestoringDeviceConfiguration;
- (void)asynchronousToolLoadingQueue:(id)arg1 launchToolForDeviceTypeDescription:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)asynchronousToolLoadingQueue:(id)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3;
- (void)_clearAsyncToolLoadingProgressTokenAndUpdatePendingScenes:(BOOL)arg1;
- (void)_enqueueRemoteTools;
- (id)_scaleFactorsForEnqueueingRemoteTools;
- (void)setupLoadingViewIfNeeded;
- (BOOL)isShowingLoadingUI;
- (BOOL)shouldShowLoadingProgress;
- (void)toggleAutomaticallyRefreshViews:(id)arg1;
- (void)refreshLiveViews:(id)arg1;
- (void)debugSelectedViews:(id)arg1;
- (void)openInspectorForCategory:(id)arg1;
- (void)openAttributesInspector;
- (void)setLocalizationLockingNonLocalizableProperties:(id)arg1;
- (void)setLocalizationLockingLocalizableProperties:(id)arg1;
- (void)setLocalizationLockingAllProperties:(id)arg1;
- (void)setLocalizationLockingNothing:(id)arg1;
- (void)resetLocalizationLocking:(id)arg1;
- (void)toggleUserInterfaceEra:(id)arg1;
- (void)debugInvalidateScene:(id)arg1;
- (void)debugCompileDocument:(id)arg1;
- (void)fakeActionForValidatingTitleOfAutolayoutIssuesMenuAllItemsHeader:(id)arg1;
- (void)clearAndAddSuggestedConstraintsInArbitrationUnit:(id)arg1;
- (void)clearAndAddSuggestedConstraints:(id)arg1;
- (void)addMissingConstraintsInArbitrationUnit:(id)arg1;
- (void)addMissingConstraints:(id)arg1;
- (void)clearConstraintsInArbitrationUnit:(id)arg1;
- (void)clearConstraints:(id)arg1;
- (void)updateConstraintConstantsInArbitrationUnit:(id)arg1;
- (void)updateConstraintConstants:(id)arg1;
- (void)updateFramesToMatchConstraintsInArbitrationUnit:(id)arg1;
- (void)updateFramesToMatchConstraintsRecursively:(id)arg1;
- (void)updateFramesToMatchConstraints:(id)arg1;
- (BOOL)canUpdateConstraintConstantsWithScope:(long long)arg1;
- (BOOL)canUpdateFramesToMatchConstraintsWithScope:(long long)arg1;
- (BOOL)canClearAndAddConstraintsWithScope:(long long)arg1;
- (BOOL)canAddMissingConstraintsWithScope:(long long)arg1;
- (BOOL)canClearConstraintsWithScope:(long long)arg1;
- (id)itemsForResolvingAmbiguityInScope:(long long)arg1;
- (id)itemsForResolvingMisplacementOrAmbiguityInScope:(long long)arg1;
- (id)itemsForResolvingMisplacementInScope:(long long)arg1;
- (id)viewsForAutolayoutCommandScope:(long long)arg1;
- (void)openAlignmentConstraintAdditionPopover:(id)arg1;
- (void)openSpacingConstraintAdditionPopover:(id)arg1;
- (void)_openConstraintAdditionPopoverWithType:(long long)arg1 sender:(id)arg2;
- (id)_sharedContainingLayoutItemForSelectedLayoutItems;
- (void)popoverDidClose:(id)arg1;
- (void)_closeCurrentConstraintAdditionPopover;
- (void)upgradeDocumentOrPresentOptionToUser;
- (void)document:(id)arg1 willRunArbitrationOfUnits:(id)arg2;
- (id)frameControllersContainingArbitrationUnits:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (id)memberWrappersForMemberIDStrings:(id)arg1;
- (BOOL)memberCanBeSelected:(id)arg1;
- (BOOL)waitingForSubGraphInstantiation;
- (void)debugMenuItemSelectAllInCurrent:(id)arg1;
- (void)debugMenuItemSelectCanvasAndOutlineDeleteTargetsDefault:(id)arg1;
- (void)debugMenuItemSelectModifierAddDeleteInCurrentExceptConstraints:(id)arg1;
- (void)debugMenuItemSelectModifierAddDeleteInCurrent:(id)arg1;
- (void)debugPrintAllPropertyValuesInNonEmptyConfigurations:(id)arg1;
- (void)debugPrintAllPropertyValuesInAllConfigurations:(id)arg1;
- (void)displayLockedMemberAlertForMembers:(id)arg1;
- (BOOL)canAcceptPasteboardTypes:(id)arg1;
- (id)typeForTopLevelPastingWithPasteboard:(id)arg1;
- (void)makeImplicitCanvasAnchorsExplicit;
- (void)updateCanvasLayoutPositioningScale;
- (void)centerCanvasOnAnchorSpacePoint:(struct CGPoint)arg1;
- (struct CGPoint)canvasAnchorSpaceCenter;
- (void)zoomToFactorFromZoomMenu:(id)arg1;
- (void)zoomCanvasToIrrationalFactor:(id)arg1;
- (void)zoomCanvasOut:(id)arg1;
- (void)zoomCanvasIn:(id)arg1;
- (void)toggleShowingInvolvedViewsForSelectedConstraints:(id)arg1;
- (void)toggleShowingIntrinsicSizeConstraints:(id)arg1;
- (void)toggleShowingConstraints:(id)arg1;
- (void)toggleShowingBoundsRectangles:(id)arg1;
- (void)toggleShowingPlaceholderBackgrounds:(id)arg1;
- (void)toggleSceneMaskAndBezels:(id)arg1;
- (void)toggleShowingLayoutRectangles:(id)arg1;
@property(getter=isShowingInvolvedViewsForSelectedConstraints) BOOL showingInvolvedViewsForSelectedConstraints;
@property(getter=isShowingIntrinsicSizeConstraints) BOOL showingIntrinsicSizeConstraints;
@property(getter=isShowingConstraints) BOOL showingConstraints;
@property(getter=isShowingPlaceholderBackgrounds) BOOL showingPlaceholderBackgrounds;
@property(getter=isShowingSceneMaskAndBezels) BOOL showingSceneMaskAndBezels;
@property(getter=isShowingBoundsRectangles) BOOL showingBoundsRectangles;
@property(getter=isShowingLayoutRectangles) BOOL showingLayoutRectangles;
- (void)setBoolValue:(BOOL)arg1 forDefaultsKey:(id)arg2 withNotificationName:(id)arg3 defaultValue:(BOOL)arg4;
- (BOOL)isBoolDefaultSetForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (void)toggleSnapToGuides:(id)arg1;
- (void)embedInStackViewWithItems:(id)arg1 withStrategy:(long long)arg2;
- (id)stackViewEmbeddingPolicy;
- (BOOL)canEmbedInStackViewWithItems:(id)arg1 shouldRestrictedToSibilingViews:(BOOL)arg2;
- (long long)inferStackViewLayoutDirectionForItems:(id)arg1;
- (void)embedInStackViewWithSelected:(id)arg1;
- (void)toggleSystemGuide:(id)arg1;
- (id)topLevelViewFromSelection;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)liveViewsManager;
- (void)unembedObjects:(id)arg1;
- (void)embedObjects:(id)arg1;
- (void)revealSelectedObjectsInDocumentOutline:(id)arg1;
- (BOOL)canRevealSelectedObjectsInDocumentOutline;
- (void)toggleStructureArea:(id)arg1;
- (void)jumpToDocumentation:(id)arg1;
- (void)jumpToDefinitionWithShiftPlusAlternate:(id)arg1;
- (void)jumpToDefinitionWithAlternate:(id)arg1;
- (void)jumpToDefinition:(id)arg1;
- (void)jumpToSelection:(id)arg1;
- (void)selectPreviousContentSibling:(id)arg1;
- (void)selectNextContentSibling:(id)arg1;
- (void)selectContentParent:(id)arg1;
- (void)selectContentChild:(id)arg1;
- (BOOL)isExpressionModuleImport:(id)arg1;
- (BOOL)isExpressionPoundImport:(id)arg1;
- (BOOL)expressionContainsExecutableCode:(id)arg1;
- (BOOL)isExpressionFunctionOrMethodCall:(id)arg1;
- (BOOL)isExpressionInFunctionOrMethodBody:(id)arg1;
- (BOOL)isExpressionFunctionOrMethodDefinition:(id)arg1;
- (BOOL)isExpressionInPlainCode:(id)arg1;
- (void)symbolsForExpression:(id)arg1 queue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)expressionFrameForExpression:(id)arg1;
@property(readonly, nonatomic) DVTSourceExpression *mouseOverExpression;
@property(readonly) DVTSourceExpression *contextMenuExpression;
@property(readonly, nonatomic) struct CGRect currentSelectionFrame;
- (void)updateSelectedExpression;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainSplitPosition:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)resizeSplitViewToFitStructureAreaView;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)refreshToggleStructureButtonForEditedConfiguration;
- (void)updateBarGlyphsForCurrentMemberConfigurationForSegmentedControl:(id)arg1;
- (id)barGlyphImageForCurrentMemberConfigurationBasedOnBarGlyphTemplate:(id)arg1;
- (void)didFinishLoadingSubViewControllers;
- (void)structureViewController:(id)arg1 didChangeVisibility:(BOOL)arg2;
- (void)structureViewControllerDidChangeContentSize:(id)arg1;
- (BOOL)isEditorForTopLevelObjectOpenAndShowingKey:(id)arg1;
- (BOOL)isEditorForTopLevelObjectOpen:(id)arg1;
- (void)zoomCanvasToFitSelection:(id)arg1;
- (void)showConnectionPanelWithEvent:(id)arg1 onEditorCanvasFrameController:(id)arg2 withInitialEndPoint:(id)arg3;
- (void)showConnectionPanelForObject:(id)arg1 atLocation:(struct CGPoint)arg2;
- (void)removeConnectionPanelController:(id)arg1;
- (void)addConnectionPanelController:(id)arg1;
- (id)currentSearchLocationStringValueGettingRange:(struct _NSRange *)arg1;
- (id)currentSearchedMember;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (CDUnknownBlockType)selectionPreservationBlockForReplacingConnection:(id)arg1 withConnection:(id)arg2;
- (BOOL)shouldAvoidEditingObject:(id)arg1;
- (void)editedTopLevelObjectsDidChange;
- (void)deselectMembers:(id)arg1;
- (BOOL)hasActiveEditorsOpen;
- (BOOL)hasInstalledSubViewControllers;
- (void)showFindIndicatorAfterInspectorRefreshWithSearchedMember:(id)arg1 attributeSearchLocation:(id)arg2 searchString:(id)arg3 inspectorCategory:(id)arg4 attempts:(long long)arg5;
- (void)showInspectorFindIndicatorWithSearchedMember:(id)arg1 attributeSearchLocation:(id)arg2 searchString:(id)arg3;
- (BOOL)isShowingInspectorForCurrentSearchedMemberWithDisplayedCategory:(id)arg1;
- (void)showFindIndicator;
- (void)cancelFindIndicator;
- (void)selectDocumentLocations:(id)arg1;
- (id)selectableMembersFromDocumentLocations:(id)arg1;
- (void)warnAboutBogusDocumentLocations:(id)arg1;
- (void)selectDocumentMembers:(id)arg1 takeFocus:(BOOL)arg2;
- (void)selectDocumentMembers:(id)arg1;
- (void)selectMembersInCanvasView:(id)arg1 takeFocus:(BOOL)arg2;
- (void)selectMembersInCanvasView:(id)arg1;
- (void)selectMembersInDocumentOutline:(id)arg1;
- (void)navigateToAnnotationWithRepresentedObject:(id)arg1 wantsIndicatorAnimation:(BOOL)arg2 exploreAnnotationRepresentedObject:(id)arg3;
- (id)currentSelectedDocumentLocations;
- (BOOL)selectionContainsMember:(id)arg1;
- (BOOL)selectionContainsObject:(id)arg1;
- (void)pushSelection:(id)arg1;
- (void)invalidateSelectionPushInvocation;
- (id)selectionProviders;
- (id)currentSelectedItemsMembers;
- (id)currentSelectedItemsObjects;
- (void)selectionProviderWasClicked:(id)arg1;
- (void)selectionProvider:(id)arg1 didUpdateSelectedMembers:(id)arg2;
- (void)unregisterSelectionProvider:(id)arg1;
- (void)registerSelectionProvider:(id)arg1;
- (id)defaultSelectionProvider;
- (void)revealDocumentMember:(id)arg1;
- (id)showTargetIdentifierForObjects:(id)arg1 showLabels:(BOOL)arg2;
- (void)unregisterHighlightProvider:(id)arg1;
- (void)registerHighlightProvider:(id)arg1;
- (id)registerActiveLookObserver:(CDUnknownBlockType)arg1;
- (id)highlightProviders;
- (id)mutableHighlightProviders;
- (void)setStateToken:(id)arg1;
- (void)registerSubViewControllersForStateSavingIfNeeded;
- (void)takeFocus;
- (BOOL)canBecomeMainViewController;
@property(readonly) IBDocument *document;
- (void)customizeToggleStructureAreaValueForVisibility:(BOOL)arg1;
- (void)noteConfigurationPropertyStorage:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3 inConfiguration:(id)arg4;
- (void)noteMember:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (id)beginObservingAllConfigurationStoragesWithChangeObserver:(CDUnknownBlockType)arg1;
- (id)beginObservingAllObjectsWithChangeObserver:(CDUnknownBlockType)arg1;
- (id)beginObservingDescendantsOfObject:(id)arg1 withChangeObserver:(CDUnknownBlockType)arg2;
- (id)_registeredChangeObserversForDescendantsOfObject:(id)arg1;
- (BOOL)presentVerificationWarningIfNeeded;
- (void)documentWillBeginRegisteringUndoableChanges;
- (void)didLoadEditor;
- (void)didSetupEditor;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)view;
@property(readonly) IBCanvasView *canvasView;
- (Class)canvasViewControllerClass;
- (Class)structureViewControllerClass;
- (void)primitiveInvalidate;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (void)unregisterWithDocument;
- (void)registerWithDocument;
- (void)recordUsageStatisticsWithReport:(id)arg1;
- (void)recordUsageStatistics;
- (void)colorPanelWillShow:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly) BOOL allowsMultipleSelection;
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, getter=isEditable) BOOL editable;
@property(readonly) struct _NSRange firstSelectedRange;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic) DVTSourceLanguageService *languageService;
@property(readonly) DVTSourceExpression *quickHelpExpression;
@property(readonly) DVTSDK *sdk;
@property(readonly, getter=isSelectable) BOOL selectable;
@property(copy) NSArray *selectedRanges;
@property(readonly, nonatomic) NSString *selectedText;
@property(readonly) NSString *string;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(readonly, copy) NSArray *visibleCharacterRanges;

@end

