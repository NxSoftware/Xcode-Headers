//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDESourceControlReviewFilesWindowController.h>

@class DVTBorderedView, DVTDiffDescriptor, DVTObservingToken, IDESourceControlUpdateDataSource, NSArray, NSButton, NSPopUpButton, NSSegmentedControl;

@interface IDESourceControlUpdateWindowController : IDESourceControlReviewFilesWindowController
{
    NSButton *_updateButton;
    NSButton *_cancelButton;
    DVTBorderedView *_reviewFilesView;
    NSSegmentedControl *_perDiffSegmentedControl;
    NSPopUpButton *_mergeStrategyPullDownMenu;
    NSArray *_operationInfo;
    IDESourceControlUpdateDataSource *_workspaceDataSource;
    IDESourceControlUpdateDataSource *_fileSystemDataSource;
    IDESourceControlUpdateDataSource *_flatDataSource;
    BOOL _updateInProgress;
    DVTObservingToken *_mergeDirectionObservationToken;
    DVTObservingToken *_descriptorResolvedObservationToken;
    DVTObservingToken *_conflictCountObservationToken;
    DVTObservingToken *_checkedFilePathsObservationToken;
}

@property(copy) NSArray *operationInfo; // @synthesize operationInfo=_operationInfo;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2;
- (void)update:(id)arg1;
- (void)_update;
- (void)updateButtonTitle;
- (void)handleErrors:(id)arg1;
- (void)selectMergeStrategyAllDiffs:(id)arg1;
- (void)selectMergeStrategyForSelectedDiff:(id)arg1;
- (void)overwriteOriginalDocumentsWithMergeDocuments;
- (void)overwriteOriginalDocumentsWithMergeDocumentsForWorkingTree:(id)arg1;
- (void)setupConflictResolutionSupport;
- (void)setupMergeStrategyPullDown;
- (unsigned long long)totalConflictCount;
@property(readonly) DVTDiffDescriptor *selectedMergeDescriptor;
- (void)updatePerDiffSegmentedControl;
- (id)defaultDisabledFilePaths;
- (id)defaultCheckedFilePaths;
- (id)workingTreeItemFilterPredicate;
- (id)workspaceItemFilterPredicate;
- (id)itemsForWorkingTree:(id)arg1;
- (int)statusForWorkingTreeItem:(id)arg1;
- (id)flatDataSource;
- (id)fileSystemDataSource;
- (id)workspaceDataSource;
- (id)operationInfoForWorkingTree:(id)arg1;
- (void)beginSheetForWindow:(id)arg1;
- (void)windowDidLoad;
- (id)windowNibName;
- (id)initWithWindow:(id)arg1;

@end

