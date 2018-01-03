//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "__T022IDEPegasusSourceEditor0B12CodeDocumentCN.h"

#import <IDEPegasusPlaygroundEditor/IDEPlaygroundExecutionDeviceViewContentReceiver-Protocol.h>
#import <IDEPegasusPlaygroundEditor/IDEPlaygroundExecutionSessionDelegate-Protocol.h>
#import <IDEPegasusPlaygroundEditor/IDEPlaygroundHostingDocument-Protocol.h>
#import <IDEPegasusPlaygroundEditor/IDEToyboxDelegate-Protocol.h>

@class IDEPlaygroundExecutionSession, IDEPlaygroundPageSharedContext, IDEPlaygroundSharedContext, IDEToybox, IDEViewToy, NSArray, NSDictionary, NSString;

@interface _TtC26IDEPegasusPlaygroundEditor18PlaygroundDocument : __T022IDEPegasusSourceEditor0B12CodeDocumentCN <IDEPlaygroundHostingDocument, IDEPlaygroundExecutionSessionDelegate, IDEToyboxDelegate, IDEPlaygroundExecutionDeviceViewContentReceiver>
{
    // Error parsing type: , name: notificationTokens
    // Error parsing type: , name: observationTokens
    // Error parsing type: , name: documentObservers
    // Error parsing type: , name: isLegacyDocument
    // Error parsing type: , name: currentUUID
    // Error parsing type: , name: originalContentURLDuringSave
    // Error parsing type: , name: originalSwiftContents
    // Error parsing type: , name: executionSession
    // Error parsing type: , name: executionState
    // Error parsing type: , name: executionIssues
    // Error parsing type: , name: preparationParametersWrapper
    // Error parsing type: , name: consoleItems
    // Error parsing type: , name: toybox
    // Error parsing type: , name: playgroundResultsGeneration
    // Error parsing type: , name: isReadingFromURL
    // Error parsing type: , name: isWritingToURL
    // Error parsing type: , name: isResettingWholeDocument
    // Error parsing type: , name: userHadDiagnosticsEnabled
    // Error parsing type: , name: auxiliarySourceCompilationInProgress
    // Error parsing type: , name: playgroundExpressionIsComplete
    // Error parsing type: , name: executeWhenSessionIsReady
    // Error parsing type: , name: executionSessionSetupFailed
    // Error parsing type: , name: ignoreExecutionErrors
    // Error parsing type: , name: lastExpressionDidComplete
    // Error parsing type: , name: _playgroundContext
    // Error parsing type: , name: _auxiliarySourceFramworks
    // Error parsing type: , name: _firstEditorWorkspaceBuildSettings
    // Error parsing type: , name: lineEndings
    // Error parsing type: , name: playgroundSections
    // Error parsing type: , name: sourceCodePlaygroundSections
    // Error parsing type: , name: _sourceCodePlaygroundSectionCharacterRanges
}

+ (id)keyPathsForValuesAffectingPlaygroundPageContext;
+ (id)keyPathsForValuesAffectingPlaygroundContext;
- (CDUnknownBlockType).cxx_destruct;
- (void)toggleDisplayMode:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (struct _NSRange)lineRangeForLineRange:(struct _NSRange)arg1 fromTimestamp:(double)arg2 toTimestamp:(double)arg3;
@property(nonatomic, readonly) NSArray *sourceCodePlaygroundSectionCharacterRanges;
@property(nonatomic, copy) NSArray *sourceCodePlaygroundSections; // @synthesize sourceCodePlaygroundSections;
@property(nonatomic, copy) NSArray *playgroundSections; // @synthesize playgroundSections;
@property(nonatomic, readonly) unsigned long long lineEndings; // @synthesize lineEndings;
@property(nonatomic, readonly) NSString *contents;
- (void)pegasusUpgradeFormat:(id)arg1;
@property(nonatomic, copy) NSDictionary *firstEditorWorkspaceBuildSettings;
- (void)clearErrorsFromPreviousExecutionSessions;
- (void)unregisterDocumentEditor:(id)arg1;
- (void)registerPlaygroundEditor:(id)arg1;
- (void)viewContentProvider:(id)arg1 didUpdateIOSurfaceID:(unsigned int)arg2 screenSize:(struct CGSize)arg3;
- (void)configureViewContentHandlerForDeviceService:(id)arg1;
- (void)configureInputEventHandlerForDeviceService:(id)arg1;
- (void)toybox:(id)arg1 didRemoveToy:(id)arg2;
- (void)toybox:(id)arg1 didAddToy:(id)arg2;
- (void)toyboxArchivableStateDidChange:(id)arg1;
- (void)handlePlaygroundResult:(id)arg1;
- (void)playgroundExecutionSession:(id)arg1 didEncounterError:(id)arg2;
- (void)playgroundExecutionSession:(id)arg1 didReceiveConsoleItem:(id)arg2;
- (void)playgroundExecutionSession:(id)arg1 didReceiveResult:(id)arg2;
- (void)playgroundExecutionSessionDidFinishExecution:(id)arg1;
- (void)playgroundExecutionSessionWillFinishExecution:(id)arg1;
- (void)playgroundExecutionSessionDidCompleteExpression:(id)arg1;
- (void)playgroundExecutionSessionWillBeginExpression:(id)arg1;
- (void)playgroundExecutionSession:(id)arg1 didMoveToState:(unsigned long long)arg2;
- (void)cancelExecution;
- (void)execute;
- (BOOL)attemptExecutionAndReturnError:(id *)arg1;
- (void)prepareExecutionSession;
- (void)prepareExecutionSessionIfNeeded;
- (id)sourceCodePreambleForExecution;
@property(nonatomic, readonly) NSString *sourceCodeForExecution;
- (void)executionGenerationDidEnd;
- (void)playgroundExpressionCompleted;
- (void)executionGenerationWillEnd;
- (void)beginExecutionGeneration;
- (void)addPlaygroundLoggerResult:(id)arg1;
- (void)removeAllPlaygroundResults;
- (BOOL)resetAllPlaygroundPagesAndReturnError:(id *)arg1;
- (void)resetPlaygroundImpl;
- (void)resetPlayground;
- (id)fileWrapperOfType:(id)arg1 error:(id *)arg2;
- (BOOL)writeToURL:(id)arg1 ofType:(id)arg2 forSaveOperation:(unsigned long long)arg3 originalContentsURL:(id)arg4 error:(id *)arg5;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)editorDocumentWillClose;
- (id)init;
@property(nonatomic, copy) NSString *displayName;
@property(nonatomic, readonly) IDEPlaygroundPageSharedContext *playgroundPageContext;
@property(nonatomic, readonly) IDEPlaygroundSharedContext *playgroundContext;
@property(nonatomic, retain) IDEPlaygroundSharedContext *_playgroundContext; // @synthesize _playgroundContext;
@property(nonatomic, readonly) IDEViewToy *viewToy;
@property(nonatomic, retain) IDEToybox *toybox; // @synthesize toybox;
@property(nonatomic, copy) NSArray *consoleItems; // @synthesize consoleItems;
@property(nonatomic, copy) NSArray *executionIssues; // @synthesize executionIssues;
@property(nonatomic) unsigned long long executionState; // @synthesize executionState;
@property(nonatomic, retain) IDEPlaygroundExecutionSession *executionSession; // @synthesize executionSession;
- (BOOL)dvt_shouldShowDocumentDirtyState;
@property(nonatomic, readonly) BOOL isLegacyDocument; // @synthesize isLegacyDocument;

@end
