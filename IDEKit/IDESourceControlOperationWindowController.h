//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/IDESourceControlOperationViewDelegate-Protocol.h>
#import <IDEKit/IDESourceControlWindowController-Protocol.h>
#import <IDEKit/NSTouchBarDelegate-Protocol.h>

@class DVTReplacementView, DVTViewController, IDESourceControlWorkspaceUIHandler, IDEWorkspace, NSButton, NSDate, NSImageView, NSLayoutConstraint, NSOperationQueue, NSString, NSTextField, NSTimer, NSWindow;
@protocol IDESourceControlOperationViewController, IDESourceControlRefreshHistoryDocument;

@interface IDESourceControlOperationWindowController : NSWindowController <NSTouchBarDelegate, IDESourceControlWindowController, IDESourceControlOperationViewDelegate>
{
    NSWindow *_parentWindow;
    NSOperationQueue *_dismissalQueue;
    NSTimer *_showProgressTimer;
    NSDate *_showBusyTime;
    IDESourceControlWorkspaceUIHandler *_workspaceUIHandler;
    IDEWorkspace *_workspace;
    id <IDESourceControlRefreshHistoryDocument> _refreshDocument;
    NSImageView *_iconView;
    DVTReplacementView *_replacementView;
    NSButton *_primaryButton;
    NSButton *_secondaryButton;
    NSTextField *_titleTextField;
    NSTextField *_subtitleTextField;
    NSLayoutConstraint *_replacementViewHeight;
    NSLayoutConstraint *_replacementViewWidth;
    NSLayoutConstraint *_aboveReplacementViewSpacing;
    NSLayoutConstraint *_belowReplacementViewSpacing;
}

@property __weak NSLayoutConstraint *belowReplacementViewSpacing; // @synthesize belowReplacementViewSpacing=_belowReplacementViewSpacing;
@property __weak NSLayoutConstraint *aboveReplacementViewSpacing; // @synthesize aboveReplacementViewSpacing=_aboveReplacementViewSpacing;
@property __weak NSLayoutConstraint *replacementViewWidth; // @synthesize replacementViewWidth=_replacementViewWidth;
@property __weak NSLayoutConstraint *replacementViewHeight; // @synthesize replacementViewHeight=_replacementViewHeight;
@property __weak NSTextField *subtitleTextField; // @synthesize subtitleTextField=_subtitleTextField;
@property __weak NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property __weak NSButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property __weak NSButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property __weak NSImageView *iconView; // @synthesize iconView=_iconView;
@property __weak id <IDESourceControlRefreshHistoryDocument> refreshDocument; // @synthesize refreshDocument=_refreshDocument;
@property __weak IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property __weak IDESourceControlWorkspaceUIHandler *workspaceUIHandler; // @synthesize workspaceUIHandler=_workspaceUIHandler;
- (void).cxx_destruct;
- (id)makeTouchBar;
- (id)makeButtonGroupButtonWithButton:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)beginSheetForWorkspaceTabController:(id)arg1 workingCopy:(id)arg2 operationViewControllerClass:(Class)arg3 context:(id)arg4;
@property(readonly) DVTViewController<IDESourceControlOperationViewController> *embeddedViewController;
- (void)enablePrimaryButton:(BOOL)arg1;
- (void)updateStatus:(id)arg1 withState:(long long)arg2 progress:(double)arg3 determinate:(BOOL)arg4 error:(id)arg5;
- (void)updateStatus:(id)arg1 withState:(long long)arg2 error:(id)arg3;
- (void)updateStatus:(id)arg1 withProgress:(double)arg2;
- (void)updateStatus:(id)arg1 withState:(long long)arg2;
- (void)displayError:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)primaryAction:(id)arg1;
- (void)endSheetImmediately;
- (void)endSheet;
- (void)windowDidLoad;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSWindow *window;

@end

