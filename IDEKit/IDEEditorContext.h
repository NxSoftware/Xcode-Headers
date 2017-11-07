//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTFindBarHostable-Protocol.h>
#import <IDEKit/DVTScopeBarHost-Protocol.h>
#import <IDEKit/DVTStateRepositoryDelegate-Protocol.h>
#import <IDEKit/IDEEditorContextProtocol-Protocol.h>
#import <IDEKit/IDEEditorDelegate-Protocol.h>
#import <IDEKit/IDEEditorSplittingControllerDelegate-Protocol.h>
#import <IDEKit/IDENavigableItemCoordinatorDelegate-Protocol.h>
#import <IDEKit/IDEPathCellDelegate-Protocol.h>
#import <IDEKit/NSAnimationDelegate-Protocol.h>
#import <IDEKit/NSMenuDelegate-Protocol.h>
#import <IDEKit/NSPathControlDelegate-Protocol.h>

@class CALayer, DVTBindingToken, DVTBorderedView, DVTFileDataType, DVTFindBar, DVTGradientImagePopUpButton, DVTNotificationToken, DVTObservingToken, DVTScopeBarsManager, DVTStackBacktrace, DVTStateRepository, IDEEditor, IDEEditorArea, IDEEditorGeniusResults, IDEEditorHistoryController, IDEEditorHistoryItem, IDEEditorIssueMenuController, IDEEditorMultipleContext, IDEEditorNavigableItemCoalescingState, IDEEditorReadOnlyIndicatorController, IDEEditorSplittingController, IDEEditorStepperView, IDENavBar, IDENavigableItem, IDENavigableItemCoordinator, NSArray, NSArrayController, NSDictionary, NSIndexSet, NSMutableArray, NSScrollView, NSString, NSURL, NSView, _IDEGeniusResultsContext;
@protocol DVTCancellable, IDEEditorContextDelegate;

@interface IDEEditorContext : IDEViewController <NSMenuDelegate, IDEEditorContextProtocol, IDEEditorSplittingControllerDelegate, DVTFindBarHostable, NSPathControlDelegate, IDEPathCellDelegate, DVTScopeBarHost, IDENavigableItemCoordinatorDelegate, IDEEditorDelegate, DVTStateRepositoryDelegate, NSAnimationDelegate>
{
    NSView *_editorAndNavBarView;
    IDENavBar *_navBar;
    DVTBorderedView *_editorBorderedView;
    DVTGradientImagePopUpButton *_relatedItemsPopUpButton;
    IDEEditorStepperView *_stepperView;
    DVTStateRepository *_stateRepository;
    IDENavigableItem *_greatestDocumentAncestor;
    NSURL *_greatestDocumentAncestor_DocumentURL;
    DVTFileDataType *_cacheFromNavigation_greatestDocumentAncestorFileDataType;
    NSArray *_documentSelectedItems;
    DVTNotificationToken *_editorContextWillOpenNavigableItemNotificationToken;
    DVTNotificationToken *_editorDocumentForNavBarStructureDidChangeNotificationToken;
    DVTNotificationToken *_editorDocumentForNavBarStructureWillCloseNotificationToken;
    DVTNotificationToken *_editorDocumentIsEditedStatusDidChangeNotificationToken;
    DVTNotificationToken *_editorDocumentWillCloseNotificationToken;
    DVTNotificationToken *_findStringChangedNotificationToken;
    DVTNotificationToken *_navigableItemPropertyObserver;
    DVTNotificationToken *_navigableItemCoordinatorWillForgetItemsNotificationToken;
    DVTNotificationToken *_navigableItemCoordinatorDidForgetItemsNotificationToken;
    DVTNotificationToken *_workspaceWillWriteNotificationToken;
    DVTObservingToken *_editorDocumentForNavBarStructureChangedObservingToken;
    DVTObservingToken *_windowMainViewControllerChangedObservingToken;
    DVTNotificationToken *_windowDidBecomeKeyObserverToken;
    DVTObservingToken *_lastActiveEditorContextChangedObservingToken;
    DVTObservingToken *_currentSelectedItemsObservingToken;
    id <DVTCancellable> _deferredUpdateSubDocumentNavigableItemsCancellableToken;
    DVTBindingToken *_navBarNavigableItemRootChildItemsBindingToken;
    DVTBindingToken *_navBarNavigableItemBindingToken;
    IDEEditorNavigableItemCoalescingState *_coalescingState;
    IDENavigableItem *_geniusResultsRootNavigableItem;
    DVTObservingToken *_counterpartsObservingToken;
    IDEEditorHistoryController *_historyController;
    NSArrayController *_navigableItemSiblingsController;
    IDEEditorReadOnlyIndicatorController *_readOnlyIndicatorController;
    DVTObservingToken *_showReadOnlyIndicatorObserver;
    DVTFindBar *_findBar;
    NSDictionary *_editorStateDictionaryPreviousToFind;
    IDEEditorIssueMenuController *_issueMenuController;
    DVTObservingToken *_showIssueMenuControllerObserver;
    IDEEditorSplittingController *_splittingController;
    DVTObservingToken *_workspaceLoadingObservingToken;
    IDEEditorHistoryItem *_beforeUninstallHistoryItem;
    NSString *_emptyContentString;
    NSMutableArray *_commandExtensions;
    DVTStackBacktrace *_beganChangingNavigableItemBacktrace;
    BOOL _changingNavBarNavigableItem;
    BOOL _viewIsInstalled;
    BOOL _shouldObserveDocumentChanges;
    BOOL _editorProvidesPathCellMenuItems;
    BOOL _isPerformingStateRestoration;
    BOOL _isReplacingClosedDocument;
    BOOL _isDraggingPathCell;
    BOOL _isFetchingCurrentSelectedItems;
    BOOL _shouldImmediatleyProcessCurrentSelectedItemsChange;
    unsigned long long _currentSwipeAnimationGeneration;
    CDUnknownBlockType _swipeAnimationAbortBlock;
    BOOL _disableGeniusResultUpdatesDuringSwipeAnimation;
    NSView *_swipeLayerView;
    CALayer *_swipeBackgroundLayer;
    CALayer *_swipeForegroundLayer;
    CDUnknownBlockType _swipeCompletionBlock;
    NSDictionary *_editorStateDictionaryPreviousToSwipe;
    BOOL _showNavBar;
    BOOL _showRelatedItemsControl;
    BOOL _showNavBarHistoryStepperControls;
    BOOL _showSiblingStepperControl;
    BOOL _showMiniIssueNavigator;
    BOOL _showSplittingControls;
    BOOL _canAddSplit;
    BOOL _canRemoveSplit;
    BOOL _hideWorkspaceLoadingProgressIndicator;
    BOOL _isCallingNewEditorDocumentWithClass;
    int _borderSides;
    IDEEditorArea *_editorArea;
    id <IDEEditorContextDelegate> _delegate;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    IDENavigableItem *_navigableItem;
    NSArray *_defaultEditorCategories;
    NSArray *_validEditorCategories;
    DVTScopeBarsManager *_scopeBarsManager;
    IDENavigableItem *_navBarNavigableItem;
    IDENavigableItem *_navBarNavigableItemRoot;
    NSArray *_navigableItemSiblings;
    NSIndexSet *_navigableItemSiblingsSelectionIndexes;
    IDEEditor *_editor;
    CDUnknownBlockType _retryOpenOperationBlock;
    IDEEditorGeniusResults *_editorGeniusResults;
    NSString *_documentExtensionIdentifier;
    IDEEditorMultipleContext *_multipleContext;
    _IDEGeniusResultsContext *_geniusResultsContext;
    NSURL *_originalRequestedDocumentURL;
}

+ (id)_createSpacerViewWithWidth:(double)arg1;
+ (id)_titleForNavigationUserInterfaceItem:(id)arg1 forEventBehavior:(int)arg2 fromPrimaryEditorContext:(BOOL)arg3 isWindowFullscreen:(BOOL)arg4;
+ (BOOL)_canEditEditorHistoryItem:(id)arg1 withEditorCategories:(id)arg2;
+ (BOOL)_canEditDocumentURL:(id)arg1 fileDataType:(id)arg2 documentExtensionIdentifier:(id)arg3 withEditorCategories:(id)arg4;
+ (id)_defaultDocumentExtensionForDocumentURL:(id)arg1 fileDataType:(id)arg2 withEditorCategories:(id)arg3;
+ (BOOL)automaticallyNotifiesObserversOfNavBarNavigableItem;
+ (BOOL)automaticallyNotifiesObserversOfNavigableItem;
+ (id)navigationLogAspect;
+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversOfGreatestDocumentAncestor;
+ (id)keyPathsForValuesAffectingIsLastActiveEditorContext;
+ (id)keyPathsForValuesAffectingNavBarNavigableItemRootChildItems;
+ (id)keyPathsForValuesAffectingOutputSelection;
@property(retain) NSURL *originalRequestedDocumentURL; // @synthesize originalRequestedDocumentURL=_originalRequestedDocumentURL;
@property(retain) _IDEGeniusResultsContext *geniusResultsContext; // @synthesize geniusResultsContext=_geniusResultsContext;
@property(retain) IDEEditorMultipleContext *multipleContext; // @synthesize multipleContext=_multipleContext;
@property(readonly) NSString *documentExtensionIdentifier; // @synthesize documentExtensionIdentifier=_documentExtensionIdentifier;
@property(readonly) IDEEditorGeniusResults *editorGeniusResults; // @synthesize editorGeniusResults=_editorGeniusResults;
@property BOOL isCallingNewEditorDocumentWithClass; // @synthesize isCallingNewEditorDocumentWithClass=_isCallingNewEditorDocumentWithClass;
@property(copy) CDUnknownBlockType retryOpenOperationBlock; // @synthesize retryOpenOperationBlock=_retryOpenOperationBlock;
@property(retain, nonatomic) IDEEditor *editor; // @synthesize editor=_editor;
@property(readonly) NSIndexSet *navigableItemSiblingsSelectionIndexes; // @synthesize navigableItemSiblingsSelectionIndexes=_navigableItemSiblingsSelectionIndexes;
@property(readonly) NSArray *navigableItemSiblings; // @synthesize navigableItemSiblings=_navigableItemSiblings;
@property(readonly) IDENavigableItem *navBarNavigableItemRoot; // @synthesize navBarNavigableItemRoot=_navBarNavigableItemRoot;
@property(readonly) IDENavigableItem *navBarNavigableItem; // @synthesize navBarNavigableItem=_navBarNavigableItem;
@property(readonly) DVTScopeBarsManager *scopeBarsManager; // @synthesize scopeBarsManager=_scopeBarsManager;
@property BOOL hideWorkspaceLoadingProgressIndicator; // @synthesize hideWorkspaceLoadingProgressIndicator=_hideWorkspaceLoadingProgressIndicator;
@property(nonatomic) BOOL canRemoveSplit; // @synthesize canRemoveSplit=_canRemoveSplit;
@property(nonatomic) BOOL canAddSplit; // @synthesize canAddSplit=_canAddSplit;
@property(nonatomic) BOOL showSplittingControls; // @synthesize showSplittingControls=_showSplittingControls;
@property(nonatomic) BOOL showMiniIssueNavigator; // @synthesize showMiniIssueNavigator=_showMiniIssueNavigator;
@property(nonatomic) BOOL showSiblingStepperControl; // @synthesize showSiblingStepperControl=_showSiblingStepperControl;
@property(nonatomic) BOOL showNavBarHistoryStepperControls; // @synthesize showNavBarHistoryStepperControls=_showNavBarHistoryStepperControls;
@property(nonatomic) BOOL showRelatedItemsControl; // @synthesize showRelatedItemsControl=_showRelatedItemsControl;
@property(nonatomic) int borderSides; // @synthesize borderSides=_borderSides;
@property(copy) NSArray *validEditorCategories; // @synthesize validEditorCategories=_validEditorCategories;
@property(copy) NSArray *defaultEditorCategories; // @synthesize defaultEditorCategories=_defaultEditorCategories;
@property(retain, nonatomic) IDENavigableItem *navigableItem; // @synthesize navigableItem=_navigableItem;
@property(readonly) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_navigableItemCoordinator;
@property(retain) id <IDEEditorContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDEEditorArea *editorArea; // @synthesize editorArea=_editorArea;
- (void).cxx_destruct;
- (void)stateRepositoryDidChange:(id)arg1;
- (id)_navigableItemForEditingFromArchivedRepresentation:(id)arg1 error:(id *)arg2;
- (id)navigableItemArchivableRepresentationInSelectedGeniusCategoryForRepresentedObject:(id)arg1;
- (void)discardEditing;
- (BOOL)commitEditingForAction:(int)arg1 errors:(id)arg2;
- (id)scopeBarsManagerForEditor:(id)arg1;
- (void)goForwardInHistoryWithCurrentEvent:(id)arg1;
- (void)goBackInHistoryWithCurrentEvent:(id)arg1;
- (void)goBackInHistoryByCommandWithShiftPlusAlternate:(id)arg1;
- (void)goForwardInHistoryByCommandWithShiftPlusAlternate:(id)arg1;
- (void)goBackInHistoryByCommandWithAlternate:(id)arg1;
- (void)goForwardInHistoryByCommandWithAlternate:(id)arg1;
- (void)goBackInHistoryByCommand:(id)arg1;
- (void)goForwardInHistoryByCommand:(id)arg1;
- (BOOL)canGoBackInHistory;
- (BOOL)canGoForwardInHistory;
- (void)_setShowNavBarHistoryStepperControls:(BOOL)arg1;
- (void)_setShowRelatedItemsControl:(BOOL)arg1;
- (void)_rebuildRightControlGroup;
- (void)_rebuildLeftControlGroup;
- (void)updateWithHistoryStack:(id)arg1;
- (id)currentHistoryStack;
- (void)_openEditorHistoryItemFromStateSaving:(id)arg1;
- (void)_giveEditorFocusIfNeeded;
- (BOOL)_editorHasFocus;
- (BOOL)_findBarHasFocus;
- (BOOL)_viewHasFocus:(id)arg1;
- (void)takeFocus;
- (id)supplementalMainViewController;
- (BOOL)canBecomeMainViewController;
- (id)viewToShowWrapOrEndOfFileBezelOn:(id)arg1;
- (struct _NSRange)selectedRangeForFindBar:(id)arg1;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
- (void)dismissFindBar:(id)arg1 andRestoreSelection:(BOOL)arg2;
- (void)hideFindBar:(id)arg1;
- (void)_hideFindBarAndRestoreSelection:(BOOL)arg1 animate:(BOOL)arg2;
- (void)replaceAndFindPrevious:(id)arg1;
- (void)replaceAndFindNext:(id)arg1;
- (void)replaceAll:(id)arg1;
- (void)replace:(id)arg1;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
- (void)findAndReplace:(id)arg1;
- (void)find:(id)arg1;
- (void)_uninstallFindBar;
- (void)_installFindBar;
- (id)_findScopeBar;
- (id)_findBar;
- (BOOL)dvtFindBar:(id)arg1 validateUserInterfaceItem:(id)arg2;
@property(readonly) NSScrollView *scopeBarsAdjustableScrollView;
@property(readonly) NSView *scopeBarsBaseView;
- (void)primitiveInvalidate;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)_validateOpenInAdjacentEditorCommandForUserInterfaceItem:(id)arg1 forEventBehavior:(int)arg2;
- (void)showMiniIssuesNavigatorMenu:(id)arg1;
- (void)showDocumentItemsMenu:(id)arg1;
- (void)showGroupFilesMenu:(id)arg1;
- (void)showTopLevelItemsMenu:(id)arg1;
- (void)showNextFilesHistoryMenu:(id)arg1;
- (void)showNextHistoryMenu:(id)arg1;
- (void)showPreviousFilesHistoryMenu:(id)arg1;
- (void)showPreviousHistoryMenu:(id)arg1;
- (void)showRelatedItemsMenu:(id)arg1;
- (void)ide_unlockDocument:(id)arg1;
- (void)_popUpMenuForNavigableItem:(id)arg1;
- (void)closeDocument:(id)arg1;
- (BOOL)_canAskDocumentToClose;
- (void)openInAdjacentEditorWithShiftPlusAlternate:(id)arg1;
- (void)openInAdjacentEditorWithAlternate:(id)arg1;
- (void)_openInAdjacentEditorWithEventBehavior:(int)arg1;
- (void)scrollWheel:(id)arg1;
- (void)_moveOverlayToMatchGestureAmount:(double)arg1 imageOfCurrentEditorOnTop:(BOOL)arg2;
- (void)_hideSwipeOverlay;
- (BOOL)_showSwipeOverlayForDirection:(BOOL)arg1 imageOfCurrentEditorOnTop:(char *)arg2;
- (id)_imageOfCurrentEditor;
- (void)_preloadSwipeInfrastructure;
- (struct CGRect)_swipeLayerViewFrame;
- (BOOL)wantsScrollEventsForSwipeTrackingOnAxis:(long long)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)_swipeToGoForward:(BOOL)arg1;
- (void)jumpToInstructionPointer:(id)arg1;
- (void)fixPreviousIssue:(id)arg1;
- (void)fixNextIssue:(id)arg1;
- (void)jumpToPreviousIssue:(id)arg1;
- (BOOL)canJumpToIssue:(id)arg1;
- (void)jumpToNextIssue:(id)arg1;
- (void)jumpToPreviousCounterpartWithShiftPlusAlternate:(id)arg1;
- (void)jumpToPreviousCounterpartWithAlternate:(id)arg1;
- (void)jumpToPreviousCounterpart:(id)arg1;
- (void)jumpToNextCounterpartWithShiftPlusAlternate:(id)arg1;
- (void)jumpToNextCounterpartWithAlternate:(id)arg1;
- (void)jumpToNextCounterpart:(id)arg1;
- (void)_jumpToCounterpartUp:(BOOL)arg1;
- (BOOL)pathControl:(id)arg1 acceptDrop:(id)arg2;
- (BOOL)pathCell:(id)arg1 shouldPopUpMenuForPathComponentCell:(id)arg2 item:(id)arg3;
- (unsigned long long)pathControl:(id)arg1 validateDrop:(id)arg2;
- (id)pathControlPasteboardReadingOptions;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)pathCell:(id)arg1 didEndDragForComponentCell:(id)arg2;
- (BOOL)pathCell:(id)arg1 beginDragForComponentCell:(id)arg2;
- (id)pathCell:(id)arg1 menuItemForNavigableItem:(id)arg2 defaultMenuItem:(id)arg3;
- (BOOL)pathCell:(id)arg1 shouldEnableSelection:(id)arg2;
- (id)pathCell:(id)arg1 childItemsForItem:(id)arg2;
- (void)pathCell:(id)arg1 didUpdateMenu:(id)arg2;
- (id)_hiddenMenuItemForCommandExtension:(id)arg1;
- (BOOL)pathCell:(id)arg1 shouldInitiallyShowMenuSearch:(id)arg2;
- (BOOL)pathCell:(id)arg1 shouldDisplayChildrenForItem:(id)arg2;
- (BOOL)pathCell:(id)arg1 shouldSeparateDisplayOfChildItemsForItem:(id)arg2;
- (void)_currentSelectedItemsChanged;
- (void)_checkShouldCoalesceUpdatesForCurrentSelectedItemsChanged;
- (BOOL)_isCurrentEventARepeatKeyDownEvent;
- (void)_updateSubDocumentNavigableItems;
- (void)_selectNavigableItem:(id)arg1 updateOutputSelection:(id)arg2;
- (void)removeSplitForSplittingController:(id)arg1;
- (void)addSplitForSplittingController:(id)arg1;
- (void)setEmptyContentString:(id)arg1;
- (struct CGRect)grabRect;
- (void)_setSupportsReadOnlyIndicator:(BOOL)arg1;
- (void)_setCanRemoveSplit:(BOOL)arg1;
- (void)_setCanAddSplit:(BOOL)arg1;
- (void)_setShowSplittingControls:(BOOL)arg1;
- (void)_setShowMiniIssueNavigator:(BOOL)arg1;
- (void)_setShowSiblingStepperControl:(BOOL)arg1;
- (void)_updateSiblingStepperControlVisibility;
- (void)menuNeedsUpdate:(id)arg1;
- (void)_clearRecentEditorDocumentsList:(id)arg1;
- (void)_changeMaximumRecentFilesLimit:(id)arg1;
- (id)_recentEditorDocumentsCapacityPreferenceMenuItem;
- (void)_navigateToRelatedNavigableItem:(id)arg1;
- (void)setNavigableItemSiblingsSelectionIndexes:(id)arg1;
- (void)_importNavigableItem:(id)arg1;
- (BOOL)_notifyDelegateAndOpenEditorHistoryItem:(id)arg1 previousHistoryItemOrNil:(id)arg2 alwaysReplaceExistingNavigableItem:(BOOL)arg3 skipSubDocumentNavigationUnlessEditorIsReplaced:(BOOL)arg4;
- (BOOL)_notifyDelegateAndOpenEditorHistoryItem:(id)arg1 updateHistory:(BOOL)arg2 skipSubDocumentNavigationUnlessEditorIsReplaced:(BOOL)arg3;
- (BOOL)_notifyDelegateAndOpenEditorOpenSpecifier:(id)arg1 updateHistory:(BOOL)arg2;
- (BOOL)_notifyDelegateAndOpenNavigableItem:(id)arg1 withContentsURL:(id)arg2 documentExtensionIdentifier:(id)arg3 locationToSelect:(id)arg4 annotationRepresentedObject:(id)arg5 stateDictionary:(id)arg6 annotationWantsIndicatorAnimation:(BOOL)arg7 exploreAnnotationRepresentedObject:(id)arg8 highlightSelection:(BOOL)arg9 alwaysReplaceExistingNavigableItem:(BOOL)arg10 skipSubDocumentNavigationUnlessEditorIsReplaced:(BOOL)arg11;
- (BOOL)_canEditEditorHistoryItem:(id)arg1;
- (BOOL)_canEditEditorOpenSpecifier:(id)arg1;
- (BOOL)_canEditEditorOpenSpecifier:(id)arg1 withEditorCategories:(id)arg2;
- (void)_applyEditorStateDictionary:(id)arg1 forDocumentExtensionIdentifier:(id)arg2 atDocumentURLToCurrentEditor:(id)arg3;
- (int)_openNavigableItem:(id)arg1 documentExtension:(id)arg2 document:(id)arg3 shouldInstallEditorBlock:(CDUnknownBlockType)arg4;
- (void)_testAssertions;
- (int)_openNavigableItem:(id)arg1 withContentsOfURL:(id)arg2 documentExtension:(id)arg3 shouldInstallEditorBlock:(CDUnknownBlockType)arg4;
- (id)_newEditorDocumentWithClass:(Class)arg1 forURL:(id)arg2 withContentsOfURL:(id)arg3 ofType:(id)arg4 extension:(id)arg5 error:(id *)arg6;
- (int)_openNavigableItem:(id)arg1 withContentsOfURL:(id)arg2 shouldInstallEditorBlock:(CDUnknownBlockType)arg3;
- (void)_verifyURLsForDocumentAndDocumentNavItem;
- (id)_defaultDocumentExtensionForNavigableItem:(id)arg1;
- (void)_navigateAwayFromCurrentDocumentWithURL:(id)arg1;
- (BOOL)openEditorHistoryItem:(id)arg1;
- (BOOL)openEditorOpenSpecifier:(id)arg1;
- (BOOL)openEditorOpenSpecifier:(id)arg1 updateHistory:(BOOL)arg2;
- (BOOL)_openEditorHistoryItem:(id)arg1 previousHistoryItemOrNil:(id)arg2 alwaysReplaceExistingNavigableItem:(BOOL)arg3 skipSubDocumentNavigationUnlessEditorIsReplaced:(BOOL)arg4;
- (void)_navigableItemChanged;
- (BOOL)_openEditorHistoryItem:(id)arg1 updateHistory:(BOOL)arg2;
- (BOOL)_openEmptyEditor;
- (void)_teardownDocumentNotifications;
- (void)_registerForDocumentNotificationsForDocument:(id)arg1;
- (void)_navigateAwayFromDocument:(id)arg1 historyItem:(id)arg2;
- (void)_updateNavBarNavigableItemForNavItem:(id)arg1;
- (void)_setEmptyRootNavigableItem;
- (void)_clearWorkspaceloadingObservation;
- (void)_primitiveSetNavBarRootNavigableItem:(id)arg1 selectedNavigableItem:(id)arg2;
- (void)setNavBarNavigableItem:(id)arg1;
- (id)currentHistoryItemWithImageOfCurrentEditor;
- (id)currentHistoryItem;
- (id)_currentSelectedDocumentLocations;
- (void)_updateSiblingInfoFromNavigableItem;
- (void)_performBlockInsideReentrantGuard:(CDUnknownBlockType)arg1;
- (BOOL)_canChangeNavigableItem;
- (void)setupNewEditor:(id)arg1;
- (void)_mainViewControllerChanged;
- (void)_removeFromLastActiveEditorContexts;
@property(readonly) BOOL isPrimaryEditorContext;
- (BOOL)isLastActiveEditorContext;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (BOOL)_enableJumpToCounterpartMenuItems;
- (id)_jumpToCounterpartsCategoryNavigableItem;
- (void)_setEditorGeniusResultsGenerationEnabled:(BOOL)arg1;
- (BOOL)_editorGeniusResultsGenerationEnabled;
- (void)_writeCurrentStateToLastUsedDictionaryIfNeeded;
- (id)_defaultEditorStateDictionaryForDocumentExtensionIdentifier:(id)arg1 forDocumentURL:(id)arg2;
- (id)navigableItemCoordinator:(id)arg1 editorDocumentForNavigableItem:(id)arg2;
- (void)_greatestDocumentAncestorWillBeForgotten;
- (id)willPresentError:(id)arg1;
- (BOOL)presentError:(id)arg1;
- (void)presentError:(id)arg1 modalForWindow:(id)arg2 delegate:(id)arg3 didPresentSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (id)workspace;
- (void)loadView;
- (id)view;
- (void)_setEditorView;
- (void)_didForgetNavigableItemsNotification:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_adjustSubviewBorders;
- (void)setGreatestDocumentAncestor:(id)arg1;
@property(readonly) IDENavigableItem *greatestDocumentAncestor;
- (id)navBarNavigableItemRootChildItems;
- (void)setOutputSelection:(id)arg1;
- (id)outputSelection;
@property(nonatomic) BOOL showNavBar; // @synthesize showNavBar=_showNavBar;
- (id)_generateNodeAndAddMappingToWorkspaceTabControllerLayoutTree:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

