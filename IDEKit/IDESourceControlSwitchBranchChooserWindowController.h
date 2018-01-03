//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/IDESourceControlWindowController-Protocol.h>

@class DVTBindingToken, DVTBorderedView, DVTReplacementView, DVTSearchField, IDESourceControlSwitchOperationInfo, IDESourceControlWorkspaceUIHandler, IDEWorkspace, NSButton, NSString, NSTextField, NSWindow;
@protocol DVTInvalidation;

@interface IDESourceControlSwitchBranchChooserWindowController : NSWindowController <IDESourceControlWindowController>
{
    NSButton *_chooseButton;
    NSTextField *_messageTextField;
    NSTextField *_informationTextField;
    DVTSearchField *_filterField;
    IDEWorkspace *_workspace;
    IDESourceControlSwitchOperationInfo *_operationInfo;
    NSWindow *_parentWindow;
    id <DVTInvalidation> _token;
    BOOL _inProgress;
    DVTBindingToken *_filterBindingToken;
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
    DVTBorderedView *_borderedView;
    DVTReplacementView *_replacementView;
}

+ (id)keyPathsForValuesAffectingCanContinue;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property __weak IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
@property(retain) IDESourceControlSwitchOperationInfo *operationInfo; // @synthesize operationInfo=_operationInfo;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)endSheet;
- (void)cancel:(id)arg1;
- (void)cancelSheet;
- (void)choose:(id)arg1;
- (void)doubleClickBranch:(id)arg1;
- (void)branchChooserSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)fetchBranches;
@property(readonly) BOOL canContinue;
- (void)displayError:(id)arg1;
- (void)beginSheetForWindow:(id)arg1;
- (id)windowNibName;
- (id)tableViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

