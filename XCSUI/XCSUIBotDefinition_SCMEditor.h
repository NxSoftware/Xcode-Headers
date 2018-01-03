//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/NSTabViewDelegate-Protocol.h>
#import <XCSUI/NSTableViewDataSource-Protocol.h>
#import <XCSUI/NSTableViewDelegate-Protocol.h>
#import <XCSUI/XCSUICreateBotRepositoryTableCellViewDelegate-Protocol.h>

@class DVTBorderedView, DVTColoredSpinner, DVTTableView, IDESourceControlCredentialWindowController, NSArray, NSButton, NSImageView, NSString, NSTextField, NSView, XCSListBranchesResult, XCSUIBotDefinitionContext;
@protocol XCSUIBotDefinition_SCMEditor_AssistantCallback;

@interface XCSUIBotDefinition_SCMEditor : IDEViewController <NSTableViewDataSource, NSTableViewDelegate, NSTabViewDelegate, XCSUICreateBotRepositoryTableCellViewDelegate>
{
    BOOL _skippingPreflight;
    BOOL _viewIsInstalled;
    BOOL _reflightFailureAddressed;
    BOOL _preflightOrReflightInProcess;
    XCSUIBotDefinitionContext *_botDefinitionContext;
    id <XCSUIBotDefinition_SCMEditor_AssistantCallback> _assistantCallback;
    unsigned long long _repositoriesWithUnaddressedIssues;
    unsigned long long _viewState;
    NSView *_currentTopLevelView;
    NSArray *_repositoryIssues;
    NSView *_preflightProgressView;
    DVTColoredSpinner *_preflightProgressSpinner;
    NSImageView *_preflightStatusImageView;
    NSTextField *_preflightStatusMessageField;
    NSTextField *_preflightStatusDetailsField;
    DVTBorderedView *_workspaceInfoBorderedView;
    NSImageView *_workspaceImageView;
    NSTextField *_workspaceNameField;
    NSTextField *_workspacePathField;
    NSButton *_replaceButton;
    NSView *_repositoriesHostView;
    DVTTableView *_repositoriesTableView;
    NSArray *_repositories;
    NSArray *_additionalValidationRepositories;
    IDESourceControlCredentialWindowController *_credentialSheetController;
    XCSListBranchesResult *_listBranchesResult;
}

@property(retain) XCSListBranchesResult *listBranchesResult; // @synthesize listBranchesResult=_listBranchesResult;
@property(retain) IDESourceControlCredentialWindowController *credentialSheetController; // @synthesize credentialSheetController=_credentialSheetController;
@property(copy, nonatomic) NSArray *additionalValidationRepositories; // @synthesize additionalValidationRepositories=_additionalValidationRepositories;
@property(copy, nonatomic) NSArray *repositories; // @synthesize repositories=_repositories;
@property __weak DVTTableView *repositoriesTableView; // @synthesize repositoriesTableView=_repositoriesTableView;
@property(retain) NSView *repositoriesHostView; // @synthesize repositoriesHostView=_repositoriesHostView;
@property __weak NSButton *replaceButton; // @synthesize replaceButton=_replaceButton;
@property __weak NSTextField *workspacePathField; // @synthesize workspacePathField=_workspacePathField;
@property __weak NSTextField *workspaceNameField; // @synthesize workspaceNameField=_workspaceNameField;
@property __weak NSImageView *workspaceImageView; // @synthesize workspaceImageView=_workspaceImageView;
@property __weak DVTBorderedView *workspaceInfoBorderedView; // @synthesize workspaceInfoBorderedView=_workspaceInfoBorderedView;
@property __weak NSTextField *preflightStatusDetailsField; // @synthesize preflightStatusDetailsField=_preflightStatusDetailsField;
@property __weak NSTextField *preflightStatusMessageField; // @synthesize preflightStatusMessageField=_preflightStatusMessageField;
@property __weak NSImageView *preflightStatusImageView; // @synthesize preflightStatusImageView=_preflightStatusImageView;
@property __weak DVTColoredSpinner *preflightProgressSpinner; // @synthesize preflightProgressSpinner=_preflightProgressSpinner;
@property(retain) NSView *preflightProgressView; // @synthesize preflightProgressView=_preflightProgressView;
@property(retain) NSArray *repositoryIssues; // @synthesize repositoryIssues=_repositoryIssues;
@property(retain) NSView *currentTopLevelView; // @synthesize currentTopLevelView=_currentTopLevelView;
@property unsigned long long viewState; // @synthesize viewState=_viewState;
@property(nonatomic) BOOL preflightOrReflightInProcess; // @synthesize preflightOrReflightInProcess=_preflightOrReflightInProcess;
@property unsigned long long repositoriesWithUnaddressedIssues; // @synthesize repositoriesWithUnaddressedIssues=_repositoriesWithUnaddressedIssues;
@property BOOL reflightFailureAddressed; // @synthesize reflightFailureAddressed=_reflightFailureAddressed;
@property BOOL viewIsInstalled; // @synthesize viewIsInstalled=_viewIsInstalled;
@property(readonly) BOOL skippingPreflight; // @synthesize skippingPreflight=_skippingPreflight;
@property __weak id <XCSUIBotDefinition_SCMEditor_AssistantCallback> assistantCallback; // @synthesize assistantCallback=_assistantCallback;
@property(retain) XCSUIBotDefinitionContext *botDefinitionContext; // @synthesize botDefinitionContext=_botDefinitionContext;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)itemForRow:(long long)arg1;
- (BOOL)isAdditionalRepositoryAtRow:(long long)arg1;
- (id)repoIssueForRepo:(id)arg1;
- (void)reloadRepositoriesTableView;
- (void)transitionToViewState:(unsigned long long)arg1;
- (void)createRepositoryIssues:(id)arg1;
- (void)displayFailureMessage:(id)arg1 withDetails:(id)arg2;
- (void)displayStatusMessage:(id)arg1 withDetails:(id)arg2;
- (void)updateCredentialsToResolveIssue:(id)arg1;
- (void)certificateSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)goNextOrFinishDismissingPreflightReflightAlert;
- (void)reflightBranches;
- (void)listBranches;
- (void)extractAndDiplayErrorsFromBlueprintResult:(id)arg1;
- (void)resetRepositoryIssues;
- (void)refreshStatus:(id)arg1;
- (void)redefineBlueprint:(id)arg1;
- (BOOL)isDomainRepositorySupportAvailable;
- (BOOL)isFingerprintEnforcementAvailable;
- (BOOL)isListBranchesXCSCoreEndpointAvailable;
- (void)loadView;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)_updateWorkspaceView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

