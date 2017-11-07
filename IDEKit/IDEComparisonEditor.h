//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEEditor.h>

#import <IDEKit/IDEPathCellDelegate-Protocol.h>
#import <IDEKit/NSPathControlDelegate-Protocol.h>
#import <IDEKit/NSSplitViewDelegate-Protocol.h>
#import <IDEKit/NSTouchBarDelegate-Protocol.h>
#import <IDEKit/NSTouchBarProvider-Protocol.h>

@class DVTBindingToken, DVTComparisonDocumentLocation, DVTDispatchLock, DVTObservingToken, DVTPerformanceMetric, DVTReplacementView, IDEComparisonEditorAutoLayoutView, IDEComparisonEditorSplitView, IDEComparisonEditorSubmode, IDEComparisonNavTimelineBar, IDEEditorDocument, IDENavigableItem, IDENavigableItemCoordinator, IDESourceControlConflictResolutionController, IDESourceControlInteractiveCommitController, NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSSet, NSString, NSTouchBar;
@protocol DVTInvalidation, IDEComparisonEditorCollapsibleSourceList, IDEComparisonEditorDataSource, IDEComparisonEditorDelegate;

@interface IDEComparisonEditor : IDEEditor <NSTouchBarProvider, NSTouchBarDelegate, NSSplitViewDelegate, IDEPathCellDelegate, NSPathControlDelegate>
{
    IDEComparisonNavTimelineBar *_navTimelineBar;
    IDEComparisonEditorSplitView *_aboveView;
    DVTReplacementView *_logReplacementView;
    DVTReplacementView *_submodeReplacementView;
    id <IDEComparisonEditorDelegate> _comparisonEditorDelegate;
    id <IDEComparisonEditorDataSource> _dataSource;
    NSMutableArray *_navItemCoordinatorDidForgetItemsTokens;
    IDENavigableItemCoordinator *_sharedNavigableItemCoordinator;
    IDENavigableItemCoordinator *_primaryNavigableItemCoordinator;
    IDENavigableItemCoordinator *_secondaryNavigableItemCoordinator;
    IDENavigableItem *_primaryRootNavigableItem;
    IDENavigableItem *_secondaryRootNavigableItem;
    IDENavigableItem *_primarySubNavigableItem;
    IDENavigableItem *_secondarySubNavigableItem;
    NSMutableSet *_documentsToRelease;
    NSMutableSet *_documentsToClose;
    NSMutableSet *_documentsToDelete;
    NSMutableSet *_readOnlyDocuments;
    IDEEditorDocument *_primaryDocument;
    id <DVTInvalidation> _primaryDocumentExportToken;
    id <DVTInvalidation> _primaryPathControlUpdateToken;
    IDEEditorDocument *_secondaryDocument;
    id <DVTInvalidation> _secondaryDocumentExportToken;
    id <DVTInvalidation> _secondaryPathControlUpdateToken;
    IDEEditorDocument *_ancestorDocument;
    id <DVTInvalidation> _ancestorDocumentExportToken;
    DVTObservingToken *_diffSessionObservingToken;
    int _editorSubmode;
    IDEComparisonEditorAutoLayoutView *_layoutView;
    DVTComparisonDocumentLocation *_internalComparisonDocumentLocation;
    NSArray *_keyEditorDocumentLocations;
    NSDictionary *_keyEditorAnnotationRepresentedObjectState;
    unsigned long long _conflictCount;
    IDESourceControlConflictResolutionController *_conflictResolutionController;
    IDESourceControlInteractiveCommitController *_interactiveCommitController;
    NSSet *_blacklistedAnnotationProviders;
    BOOL _documentHasUnsavedChanges;
    BOOL _hideToolBar;
    BOOL _hideNavTimelineBar;
    BOOL _disableChangeSourceTree;
    BOOL _disableChangeBranch;
    BOOL _disableChangeRevision;
    BOOL _hideRootJumpBarItem;
    BOOL _ownsDataSource;
    BOOL _shouldSelectFirstDiff;
    BOOL _shouldTakeFocus;
    BOOL _loadedSpecificRevision;
    BOOL _hideDiffMenu;
    BOOL _enableDiffToggles;
    int _toggleAllDiffDescriptorsState;
    unsigned long long _exportOperationsFinished;
    unsigned long long _exportOperationsPending;
    DVTObservingToken *_didScanToken;
    DVTObservingToken *_localStatusUpdateToken;
    id _refreshObservationToken;
    id _refreshWhenSwitchingObservationToken;
    DVTBindingToken *_logViewDocumentBindingToken;
    DVTPerformanceMetric *_performanceMetric;
    DVTDispatchLock *_performanceDispatchLock;
    BOOL _nextFinishPerformanceTestFinishesTest;
    NSString *_pathCellTitle;
}

+ (id)keyPathsForValuesAffectingCurrentSelectedDocumentLocations;
+ (id)keyPathsForValuesAffectingPrimaryEditorInstance;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
+ (id)keyPathsForValuesAffectingKeyEditor;
+ (BOOL)automaticallyNotifiesObserversOfInternalComparisonDocumentLocation;
+ (id)keyPathsForValuesAffectingSubmode;
+ (id)keyPathsForValuesAffectingIsThreeWayDiff;
+ (id)keyPathsForValuesAffectingSecondaryRootNavigableItem_arrayOfOne;
+ (id)keyPathsForValuesAffectingPrimaryRootNavigableItem_arrayOfOne;
+ (void)initialize;
+ (id)performanceLogAspect;
+ (id)comparisonEditorLogAspect;
@property(retain) IDENavigableItem *secondaryRootNavigableItem; // @synthesize secondaryRootNavigableItem=_secondaryRootNavigableItem;
@property(retain) IDENavigableItem *primaryRootNavigableItem; // @synthesize primaryRootNavigableItem=_primaryRootNavigableItem;
@property int toggleAllDiffDescriptorsState; // @synthesize toggleAllDiffDescriptorsState=_toggleAllDiffDescriptorsState;
@property BOOL enableDiffToggles; // @synthesize enableDiffToggles=_enableDiffToggles;
@property BOOL hideDiffMenu; // @synthesize hideDiffMenu=_hideDiffMenu;
@property(retain) NSSet *blacklistedAnnotationProviders; // @synthesize blacklistedAnnotationProviders=_blacklistedAnnotationProviders;
@property BOOL documentHasUnsavedChanges; // @synthesize documentHasUnsavedChanges=_documentHasUnsavedChanges;
@property unsigned long long conflictCount; // @synthesize conflictCount=_conflictCount;
@property BOOL shouldTakeFocus; // @synthesize shouldTakeFocus=_shouldTakeFocus;
@property(retain) NSDictionary *keyEditorAnnotationRepresentedObjectState; // @synthesize keyEditorAnnotationRepresentedObjectState=_keyEditorAnnotationRepresentedObjectState;
@property(copy) NSArray *keyEditorDocumentLocations; // @synthesize keyEditorDocumentLocations=_keyEditorDocumentLocations;
@property BOOL disableChangeRevision; // @synthesize disableChangeRevision=_disableChangeRevision;
@property BOOL disableChangeBranch; // @synthesize disableChangeBranch=_disableChangeBranch;
@property BOOL disableChangeSourceTree; // @synthesize disableChangeSourceTree=_disableChangeSourceTree;
@property(nonatomic) BOOL shouldSelectFirstDiff; // @synthesize shouldSelectFirstDiff=_shouldSelectFirstDiff;
@property(retain) DVTReplacementView *submodeReplacementView; // @synthesize submodeReplacementView=_submodeReplacementView;
@property(retain) DVTReplacementView *logReplacementView; // @synthesize logReplacementView=_logReplacementView;
@property(retain) IDEComparisonEditorAutoLayoutView *layoutView; // @synthesize layoutView=_layoutView;
@property(retain) IDEComparisonEditorSplitView *aboveView; // @synthesize aboveView=_aboveView;
@property(retain) IDEComparisonNavTimelineBar *navTimelineBar; // @synthesize navTimelineBar=_navTimelineBar;
@property(retain) id <IDEComparisonEditorDelegate> comparisonEditorDelegate; // @synthesize comparisonEditorDelegate=_comparisonEditorDelegate;
@property(retain) IDEEditorDocument *ancestorDocument; // @synthesize ancestorDocument=_ancestorDocument;
@property(retain) IDEEditorDocument *secondaryDocument; // @synthesize secondaryDocument=_secondaryDocument;
@property(retain) IDEEditorDocument *primaryDocument; // @synthesize primaryDocument=_primaryDocument;
- (void).cxx_destruct;
- (BOOL)pathCell:(id)arg1 shouldPopUpMenuForPathComponentCell:(id)arg2 item:(id)arg3;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (BOOL)splitView:(id)arg1 shouldHideDividerAtIndex:(long long)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (void)_setupEmptyEditors;
- (BOOL)isCurrentPrimaryRevisionInMemoryOrLocal;
- (void)takeFocus;
- (void)_unpackAndApplyAnnotationRepresentedObjectState;
- (void)navigateToAnnotationWithRepresentedObject:(id)arg1 wantsIndicatorAnimation:(BOOL)arg2 exploreAnnotationRepresentedObject:(id)arg3;
- (void)selectDocumentLocations:(id)arg1;
- (BOOL)_comparisonDocumentLocationContainsSourceControlDocumentLocations:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (id)currentSelectedItems;
- (void)_exportAncestorDocument;
- (void)_exportSecondaryDocument;
- (void)_exportPrimaryDocument;
- (void)_disposeDocument:(id)arg1;
- (void)_trackDocument:(id)arg1 options:(long long)arg2;
- (void)_updateSecondaryPathControl;
- (void)_updatePrimaryPathControl;
- (void)_updateBothPathControlsForcingReload:(BOOL)arg1;
- (id)_cleanupDocumentLocationFromStateSaving:(id)arg1;
- (void)_convertDocumentLocationToComparisonDocumentLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (struct CGRect)overlayFrameForView:(id)arg1;
- (id)interactiveCommitController;
- (id)conflictResolutionController;
- (BOOL)disableBlame;
@property(readonly) BOOL isThreeWayDiff;
@property(readonly) NSArray *secondaryRootNavigableItem_arrayOfChildren;
@property(readonly) NSArray *primaryRootNavigableItem_arrayOfChildren;
@property(readonly) NSArray *secondaryRootNavigableItem_arrayOfOne;
@property(readonly) NSArray *primaryRootNavigableItem_arrayOfOne;
- (id)secondaryEditorInstance;
- (id)primaryEditorInstance;
- (id)keyEditor;
@property(retain) IDENavigableItem *secondarySubNavigableItem; // @synthesize secondarySubNavigableItem=_secondarySubNavigableItem;
@property(retain) IDENavigableItem *primarySubNavigableItem; // @synthesize primarySubNavigableItem=_primarySubNavigableItem;
- (void)setInternalComparisonDocumentLocation:(id)arg1;
- (void)reloadComparisonEditorWithComparisonDocumentLocation:(id)arg1 force:(BOOL)arg2;
@property(retain) id <IDEComparisonEditorCollapsibleSourceList> collapsibleSourceListDelegate;
- (void)_setPathCellTitle:(id)arg1;
- (void)_finishPerformanceTest;
- (void)_exportOperationFinished;
- (void)_exportOperationFinished:(BOOL)arg1;
- (void)_pendingExportOperations:(unsigned long long)arg1 withDocumentLocation:(id)arg2 force:(BOOL)arg3;
- (id)internalComparisonDocumentLocation;
@property(readonly) IDEComparisonEditorSubmode *submode;
@property int editorSubmode;
@property BOOL hideNavTimelineBar;
@property BOOL hideRootJumpBarItem; // @synthesize hideRootJumpBarItem=_hideRootJumpBarItem;
@property BOOL hideToolBar;
- (void)_willOpenSpecifier:(id)arg1;
- (void)_validateAndUpdateOnSubmodeChange;
- (void)_updateOnSubmodeChange;
- (void)showRevision:(id)arg1;
- (void)compareCurrentRevisionToRevision:(id)arg1;
- (void)compareRevisionChange:(id)arg1;
- (id)pathCellNoSelectionTitle;
- (void)_setupSupportViews;
- (void)_cleanupSupportViews;
- (void)_editorDocumentDirtyStatusDidChange:(id)arg1;
- (void)viewWillUninstall;
@property(retain) id <IDEComparisonEditorDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)viewDidInstall;
- (void)loadView;
- (BOOL)secondaryEditorShowsDocumentPreview;
- (BOOL)primaryEditorShowsDocumentPreview;
- (BOOL)shouldShowAnnotationsFromProviderClass:(Class)arg1;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;
- (void)_setupNavItemCoordinators;
- (void)_cleanupNavItemCoordinators;
- (id)performanceMetric;
- (id)comparisonEditorDFRController;
- (id)_modeActionItemWithIdentifier:(id)arg1;
- (id)_navigationItemWithIdentifier:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (void)_registerForComparisonEditorModeChange;
- (id)_touchBarForComparisonSubmode;
- (id)_touchBarForComparisonEditor;
- (id)makeTouchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSTouchBar *touchBar;

@end

