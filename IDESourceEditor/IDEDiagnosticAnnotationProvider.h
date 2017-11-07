//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTAnnotationProvider.h>

#import <IDESourceEditor/DVTMessageBubbleAnnotationDelegate-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, IDEAnnotationContext, IDEBuildOperation, NSPopover, NSString;
@protocol DVTCancellable;

@interface IDEDiagnosticAnnotationProvider : DVTAnnotationProvider <DVTMessageBubbleAnnotationDelegate>
{
    IDEAnnotationContext *_context;
    DVTObservingToken *_diagnosticsObservingToken;
    DVTNotificationToken *_textStorageDidEndEditingNotificationToken;
    DVTObservingToken *_editorLiveIssuesPrefObserver;
    id <DVTCancellable> _issueObservingToken;
    id _issueCoalescingObserver;
    DVTNotificationToken *_workspaceLiveSourceIssuesEnabledObserver;
    DVTObservingToken *_buildOperationToken;
    IDEBuildOperation *_buildOperation;
    NSPopover *_hudPopUpController;
    BOOL _applyingFixItItems;
    BOOL _wasAutoCompletionEnabled;
    BOOL _liveSourceIssuesEnabled;
    BOOL _diagnosticIssuesProvided;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
@property(retain) NSPopover *hudPopUpController; // @synthesize hudPopUpController=_hudPopUpController;
@property(retain) IDEAnnotationContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)didDeleteOrReplaceParagraphForAnnotation:(id)arg1;
- (void)_revealInIssueNavigator:(id)arg1;
- (id)contextMenuItemsForAnnotation:(id)arg1 inTextSidebarView:(id)arg2;
- (void)didClickMessageBubbleForAnnotation:(id)arg1 onIcon:(BOOL)arg2 inView:(id)arg3 event:(id)arg4;
- (double)sidebarMarkerOpacityForAnnotation:(id)arg1;
- (BOOL)shouldMoveCursorForAnnotation:(id)arg1;
- (void)didClickAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (void)applyFixItItemsForDiagnosticAnnotation:(id)arg1 inTextView:(id)arg2 animate:(BOOL)arg3;
- (void)showFixItForDiagnosticMessage:(id)arg1 diagnosticAnnotation:(id)arg2 inTextView:(id)arg3;
- (void)applyFixItItemsForFixableDiagnosticItems:(id)arg1 diagnosticAnnotation:(id)arg2 inTextView:(id)arg3 animate:(BOOL)arg4;
- (void)_applyFixItItemsForFixableDiagnosticItems:(id)arg1 diagnosticAnnotation:(id)arg2 inTextView:(id)arg3 animate:(BOOL)arg4 updateFixItInfo:(BOOL)arg5;
- (void)cleanUpFixItController;
- (void)closeFixItHints;
- (void)providerWillUninstall;
- (id)initWithContext:(id)arg1;
- (void)_liveIssuesPrefsChanged;
- (void)_startObservingIssuesWithURL:(id)arg1;
- (void)_startObservingDiagnosticItemsWithEditorDocument:(id)arg1;
- (void)_rebuildAnnotations;
- (void)_addAnnotation:(id)arg1 toLineRangeMap:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

