//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class DVTColoredSpinner, DVTSourceControlRemoteRepository, DVTSourceControlRevisionLocation, NSArray, NSButton, NSPopUpButton, NSTextField, XCSUICreateBotRepositoryIssue;
@protocol DVTSourceControlCancellable;

@interface XCSUIBotDefinition_SCMEditor_LocationCellView : NSTableCellView
{
    id <DVTSourceControlCancellable> _listBranchesOperation;
    NSArray *_remoteBranches;
    BOOL _credentialCheckingInProgress;
    BOOL _showingUnlistedBranch;
    DVTSourceControlRemoteRepository *_repository;
    XCSUICreateBotRepositoryIssue *_issue;
    NSArray *_branches;
    DVTSourceControlRevisionLocation *_currentLocation;
    NSTextField *_repositoryName;
    NSTextField *_repositoryURL;
    NSTextField *_repositoryError;
    NSPopUpButton *_branchPopUpButton;
    NSTextField *_singleBranchLabel;
    NSButton *_checkBox;
    NSButton *_credentialErrorButton;
    DVTColoredSpinner *_verificationProgressIndicator;
    CDUnknownBlockType _repositorySelectionChanged;
    CDUnknownBlockType _credentialErrorButtonClicked;
    CDUnknownBlockType _repositoryBranchChanged;
}

@property(nonatomic) BOOL showingUnlistedBranch; // @synthesize showingUnlistedBranch=_showingUnlistedBranch;
@property(nonatomic) BOOL credentialCheckingInProgress; // @synthesize credentialCheckingInProgress=_credentialCheckingInProgress;
@property(copy, nonatomic) CDUnknownBlockType repositoryBranchChanged; // @synthesize repositoryBranchChanged=_repositoryBranchChanged;
@property(copy, nonatomic) CDUnknownBlockType credentialErrorButtonClicked; // @synthesize credentialErrorButtonClicked=_credentialErrorButtonClicked;
@property(copy, nonatomic) CDUnknownBlockType repositorySelectionChanged; // @synthesize repositorySelectionChanged=_repositorySelectionChanged;
@property __weak DVTColoredSpinner *verificationProgressIndicator; // @synthesize verificationProgressIndicator=_verificationProgressIndicator;
@property __weak NSButton *credentialErrorButton; // @synthesize credentialErrorButton=_credentialErrorButton;
@property __weak NSButton *checkBox; // @synthesize checkBox=_checkBox;
@property __weak NSTextField *singleBranchLabel; // @synthesize singleBranchLabel=_singleBranchLabel;
@property __weak NSPopUpButton *branchPopUpButton; // @synthesize branchPopUpButton=_branchPopUpButton;
@property __weak NSTextField *repositoryError; // @synthesize repositoryError=_repositoryError;
@property __weak NSTextField *repositoryURL; // @synthesize repositoryURL=_repositoryURL;
@property __weak NSTextField *repositoryName; // @synthesize repositoryName=_repositoryName;
@property(retain, nonatomic) DVTSourceControlRevisionLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) NSArray *branches; // @synthesize branches=_branches;
@property(retain, nonatomic) XCSUICreateBotRepositoryIssue *issue; // @synthesize issue=_issue;
@property(retain, nonatomic) DVTSourceControlRemoteRepository *repository; // @synthesize repository=_repository;
- (void).cxx_destruct;
- (void)selectRepository:(id)arg1;
- (void)selectBranch:(id)arg1;
- (void)_refreshUI;
- (void)clickErrorButton:(id)arg1;
- (void)awakeFromNib;

@end

