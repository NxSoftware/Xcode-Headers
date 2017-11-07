//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTReplacementViewDelegate-Protocol.h>
#import <IDEKit/IDENavigatorOutlineViewDelegate-Protocol.h>
#import <IDEKit/IDEOrganizerSource-Protocol.h>
#import <IDEKit/NSSplitViewDelegate-Protocol.h>

@class DVTBorderedView, DVTDelayedInvocation, DVTFilePath, DVTGradientImagePopUpButton, DVTObservingToken, DVTReplacementView, DVTScrollView, DVTSearchField, IDENavigableItemAsyncFilteringCoordinator, IDENavigatorDataCell, IDENavigatorOutlineView, NSArrayController, NSMenu, NSOperationQueue, NSSet, NSString, NSView, NSViewController;

@interface IDEProjectsOrganizerViewController : IDEViewController <NSSplitViewDelegate, IDENavigatorOutlineViewDelegate, DVTReplacementViewDelegate, IDEOrganizerSource>
{
    IDENavigatorOutlineView *_outlineView;
    IDENavigableItemAsyncFilteringCoordinator *_navigableItemCoordinator;
    IDENavigatorDataCell *_dataCell;
    NSMenu *_contextualMenu;
    DVTBorderedView *_filterBar;
    DVTGradientImagePopUpButton *_actionPopUpButton;
    DVTReplacementView *_detailsArea;
    NSViewController *_currentInstalledVC;
    NSArrayController *_arrayController;
    DVTFilePath *_workspaceArenaFolder;
    DVTObservingToken *_openedClosedObserver;
    DVTObservingToken *_selectionObserver;
    NSOperationQueue *_deletionQueue;
    DVTDelayedInvocation *_delayedFileIOInvocation;
    NSString *_filterString;
    NSSet *_allProjects;
    DVTSearchField *_filterField;
    NSView *_sourceListContainerView;
    DVTScrollView *_scrollView;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)_projectScanningQueue;
+ (id)keyPathsForValuesAffectingFilterPredicate;
+ (void)initialize;
@property __weak DVTScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property __weak NSView *sourceListContainerView; // @synthesize sourceListContainerView=_sourceListContainerView;
@property __weak DVTSearchField *filterField; // @synthesize filterField=_filterField;
@property(copy) NSSet *allProjects; // @synthesize allProjects=_allProjects;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (id)_projectLocationFromInfoFileInFolder:(id)arg1;
- (id)_projectInfoFromFolder:(id)arg1 usingModelKey:(id)arg2;
- (id)_projectsCurrentlyOpened;
- (void)_rebuildProjectsList:(id)arg1;
- (void)_rebuildProjectsListImmediately;
- (id)_delayedFileIOInvocation;
- (void)_delayedUpdateProjects;
- (void)_updateProjectItemOpenState;
- (id)_existingMatchingItemOrProjectItem:(id)arg1 knownProjects:(id)arg2;
- (id)_navigableItemWithProjectItem:(id)arg1;
- (BOOL)splitView:(id)arg1 shouldAdjustSizeOfSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)_deleteProjectAlertDidEnd:(id)arg1 returnCode:(long long)arg2 projects:(id)arg3;
- (void)deleteAction:(id)arg1;
- (void)revealAction:(id)arg1;
- (void)openAction:(id)arg1;
- (id)_selectedOrClickedProjects;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 isGroupHeaderItem:(id)arg2;
- (id)filterPredicate;
- (void)primitiveInvalidate;
- (void)_configureDetailView;
- (void)_configureEmptyView;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)liveQueryDidUpdate:(id)arg1;
- (void)liveQueryDidFinish:(id)arg1;
- (void)_setUpObservers;
- (void)viewDidInstall;
- (void)loadView;
- (id)dvtExtraBindings;

// Remaining properties
@property(readonly) BOOL canRevertWithEmptyStateDictionary;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

