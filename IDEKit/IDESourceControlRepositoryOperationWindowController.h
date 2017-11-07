//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/IDESourceControlWindowController-Protocol.h>

@class IDESourceControlWorkspaceUIHandler, IDEWorkspace, NSArray, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSProgressIndicator, NSString, NSWindow;

@interface IDESourceControlRepositoryOperationWindowController : NSWindowController <IDESourceControlWindowController>
{
    NSProgressIndicator *_progressIndicator;
    NSArray *_workingTrees;
    NSMutableArray *_operationInfos;
    NSOperationQueue *_operationQueue;
    CDUnknownBlockType _continuationBlock;
    int _requestType;
    NSMutableDictionary *_tokenDictionary;
    NSString *_messageText;
    NSWindow *_parentWindow;
    BOOL _inProgress;
    BOOL _disableFastForwards;
    IDEWorkspace *_workspace;
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
    NSArray *_workingTreeItems;
}

@property BOOL disableFastForwards; // @synthesize disableFastForwards=_disableFastForwards;
@property(copy) NSArray *workingTreeItems; // @synthesize workingTreeItems=_workingTreeItems;
@property __weak IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;
@property(copy) NSString *messageText; // @synthesize messageText=_messageText;
@property int requestType; // @synthesize requestType=_requestType;
@property(copy) CDUnknownBlockType continuationBlock; // @synthesize continuationBlock=_continuationBlock;
@property(copy) NSArray *workingTrees; // @synthesize workingTrees=_workingTrees;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)cancelSheet;
- (void)runOperations;
- (id)_operationalItemsForWorkingTree:(id)arg1;
- (void)repositoryChooserSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
- (id)successImage;
- (void)endSheet;
- (void)displayError:(id)arg1;
- (void)beginSheetForWindow:(id)arg1;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

