//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/IDENavigableItemCoordinatorDelegate-Protocol.h>
#import <IDEKit/IDEReviewFilesViewControllerDelegate-Protocol.h>
#import <IDEKit/NSMenuDelegate-Protocol.h>

@class DVTObservingToken, IDENavigableItemAsyncFilteringCoordinator, IDENavigableItemUniquingAsyncFilteringCoordinator, IDEReviewFilesViewController, IDESourceControlRequest, IDEWorkspace, NSArray, NSMutableArray, NSString, NSWindow;
@protocol IDESourceControlRefreshHistoryDocument;

@interface IDESourceControlReviewFilesWindowController : NSWindowController <IDENavigableItemCoordinatorDelegate, IDEReviewFilesViewControllerDelegate, NSMenuDelegate>
{
    NSWindow *_parentWindow;
    NSMutableArray *_workingTreeItems;
    BOOL _hasSetupDefaultCheckedFilePaths;
    BOOL _settingDiffDescriptorToggledState;
    DVTObservingToken *_checkedFilePathsToken;
    DVTObservingToken *_mixedStateFilePathsToken;
    DVTObservingToken *_selectedNavigatorToken;
    DVTObservingToken *_allDiffDescriptorsToggledStateToken;
    DVTObservingToken *_navigatorFilterToken;
    BOOL _showIgnoredFiles;
    IDEReviewFilesViewController *_reviewFilesViewController;
    IDEWorkspace *_workspace;
    NSArray *_workingTrees;
    NSArray *_files;
    IDESourceControlRequest *_currentRequest;
    IDENavigableItemUniquingAsyncFilteringCoordinator *_workspaceNavigableItemCoordinator;
    IDENavigableItemAsyncFilteringCoordinator *_fileSystemNavigableItemCoordinator;
    IDENavigableItemAsyncFilteringCoordinator *_flatFileNavigableItemCoordinator;
    id <IDESourceControlRefreshHistoryDocument> _refreshDocument;
}

+ (id)containerFileTypesBlacklistedFromOutlineViewCompression;
+ (id)sourceControlReviewFilesWindowControllerLogAspect;
@property __weak id <IDESourceControlRefreshHistoryDocument> refreshDocument; // @synthesize refreshDocument=_refreshDocument;
@property(readonly) IDENavigableItemAsyncFilteringCoordinator *flatFileNavigableItemCoordinator; // @synthesize flatFileNavigableItemCoordinator=_flatFileNavigableItemCoordinator;
@property(readonly) IDENavigableItemAsyncFilteringCoordinator *fileSystemNavigableItemCoordinator; // @synthesize fileSystemNavigableItemCoordinator=_fileSystemNavigableItemCoordinator;
@property(readonly) IDENavigableItemUniquingAsyncFilteringCoordinator *workspaceNavigableItemCoordinator; // @synthesize workspaceNavigableItemCoordinator=_workspaceNavigableItemCoordinator;
@property BOOL showIgnoredFiles; // @synthesize showIgnoredFiles=_showIgnoredFiles;
@property(retain) IDESourceControlRequest *currentRequest; // @synthesize currentRequest=_currentRequest;
@property(copy) NSArray *files; // @synthesize files=_files;
@property(copy) NSArray *workingTrees; // @synthesize workingTrees=_workingTrees;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property(readonly) IDEReviewFilesViewController *reviewFilesViewController; // @synthesize reviewFilesViewController=_reviewFilesViewController;
- (void).cxx_destruct;
- (void)uncheckAll:(id)arg1;
- (void)checkAll:(id)arg1;
- (void)_revertChangesAlertDidEnd:(id)arg1 returnCode:(long long)arg2 selectedFilePaths:(id)arg3;
- (void)revertChanges:(id)arg1;
- (id)filesPathsOfContextualMenuSelectedItems;
- (id)selectedNavigableItemsofContextualMenu;
- (BOOL)validateMenuItem:(id)arg1;
- (void)setupContextMenu;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2;
- (void)endSheetWithReturnCode:(long long)arg1;
- (void)endSheet;
- (id)defaultDisabledFilePaths;
- (id)defaultCheckedFilePaths;
- (id)workingTreeItemFilterPredicate;
- (id)workspaceItemFilterPredicate;
- (void)reloadNavigableItems;
- (void)setInitialSelectionForNavigatorOutlineView:(id)arg1;
- (void)setupNavigableItemsForFlatDataSource;
- (void)setupNavigableItemsForFileSystemDataSource;
- (void)setupNavigableItemsForWorkspaceDataSource;
- (id)flatNavigableItem;
- (id)workingTreeNavigableItem;
- (id)workspaceNavigableItem;
@property(copy) NSMutableArray *workingTreeItems;
- (id)itemsForWorkingTree:(id)arg1;
- (id)flatDataSource;
- (id)fileSystemDataSource;
- (id)workspaceDataSource;
- (void)initDataSources;
- (void)displayError:(id)arg1;
- (void)displayError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)beginReviewFiles;
- (void)beginSheetForWindow:(id)arg1;
- (void)setWindowSize;
- (void)reviewFilesViewController:(id)arg1 didInstallComparisonEditor:(id)arg2;
- (void)windowDidLoad;
- (id)windowNibName;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

