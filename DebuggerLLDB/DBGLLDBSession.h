//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEDebugSession.h>

#import <DebuggerLLDB/DBGDebugSessionBreakpointLifeCycleDelegate-Protocol.h>
#import <DebuggerLLDB/IDEConsoleAdaptorDelegateProtocol-Protocol.h>

@class DBGLLDBLauncher, DVTDispatchLock, NSMutableArray, NSMutableString, NSObject, NSString;
@protocol DBGSBBroadcaster, DBGSBTarget, OS_dispatch_queue;

@interface DBGLLDBSession : IDEDebugSession <IDEConsoleAdaptorDelegateProtocol, DBGDebugSessionBreakpointLifeCycleDelegate>
{
    id <DBGSBTarget> _lldbTarget;
    id <DBGSBBroadcaster> _lldbBroadcaster;
    NSString *_prompt;
    NSMutableArray *_resumeActions;
    NSMutableArray *_actionsOnSessionThread;
    DVTDispatchLock *_actionsLock;
    BOOL _shouldSetIsLongRunningConsoleCommand;
    BOOL _isLongRunningConsoleCommand;
    NSObject<OS_dispatch_queue> *_isLongRunningConsoleCommandQueue;
    unsigned long long _previousHostUserTicks;
    unsigned long long _previousHostSystemTicks;
    unsigned long long _previousHostIdleTicks;
    unsigned long long _totalElapsedMicroSec;
    unsigned long long _previousElapsedMicroSec;
    unsigned long long _previousUsedMicroSec;
    struct __CFDictionary *_previousUsedMicroSecForThreadTable;
    unsigned long long _previousEnergy;
    double _CPUCapAverage;
    unsigned long long _CPUCapIntervalCounter;
    BOOL _profilingCPUCapForWatch;
    NSMutableString *_previousProfileDataString;
    NSString *_memoryProfilingDisabledMessage;
    NSMutableArray *_threadSanitizerIssues;
    NSMutableArray *_UBSanitizerIssues;
    NSMutableArray *_mainThreadCheckerIssues;
    NSMutableArray *_swiftRuntimeReportingIssues;
    BOOL _RPCServerExited;
    BOOL _RPCServerCrashed;
    BOOL _isTracingOnDeviceAndTargetGotJetsam;
    BOOL _targetShouldNotAutoContinue;
    BOOL _profilingEnabled;
    BOOL _pauseRequested;
    BOOL _fetchEventRequested;
    BOOL _killCalled;
    BOOL _readyForActionsWhenPaused;
    BOOL _shouldIssueKillAfterPause;
    int _profileScanType;
    struct _opaque_pthread_t *_sessionThreadIdentifier;
    NSMutableArray *_actionsWhenPaused;
    NSMutableArray *_expressionsWhenPaused;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (BOOL)breakpointHit:(void *)arg1 thread:(id)arg2 location:(id)arg3;
+ (void)initialize;
@property(retain) NSMutableArray *expressionsWhenPaused; // @synthesize expressionsWhenPaused=_expressionsWhenPaused;
@property BOOL shouldIssueKillAfterPause; // @synthesize shouldIssueKillAfterPause=_shouldIssueKillAfterPause;
@property BOOL readyForActionsWhenPaused; // @synthesize readyForActionsWhenPaused=_readyForActionsWhenPaused;
@property(retain) NSMutableArray *actionsWhenPaused; // @synthesize actionsWhenPaused=_actionsWhenPaused;
@property BOOL killCalled; // @synthesize killCalled=_killCalled;
@property BOOL fetchEventRequested; // @synthesize fetchEventRequested=_fetchEventRequested;
@property BOOL pauseRequested; // @synthesize pauseRequested=_pauseRequested;
@property int profileScanType; // @synthesize profileScanType=_profileScanType;
@property(nonatomic, getter=isProfilingEnabled) BOOL profilingEnabled; // @synthesize profilingEnabled=_profilingEnabled;
@property struct _opaque_pthread_t *sessionThreadIdentifier; // @synthesize sessionThreadIdentifier=_sessionThreadIdentifier;
@property BOOL targetShouldNotAutoContinue; // @synthesize targetShouldNotAutoContinue=_targetShouldNotAutoContinue;
@property BOOL isTracingOnDeviceAndTargetGotJetsam; // @synthesize isTracingOnDeviceAndTargetGotJetsam=_isTracingOnDeviceAndTargetGotJetsam;
@property BOOL RPCServerCrashed; // @synthesize RPCServerCrashed=_RPCServerCrashed;
@property BOOL RPCServerExited; // @synthesize RPCServerExited=_RPCServerExited;
- (void).cxx_destruct;
- (void)_delayedTurnOnMemoryDebugging;
- (void)_handleSessionThreadEndOfLifeWithExitCode:(long long)arg1 exitDescription:(id)arg2;
- (void)_setUpRecordingStackFramesForAttach;
- (id)_lldbProcessPlugnPacketSend:(const char *)arg1;
- (void)primitiveInvalidate;
- (void)stopMemoryDebugging;
- (void)startMemoryDebuggingIfNeeded;
- (BOOL)_shouldIgnoreSigTermKill;
- (void)_runPendingExpressionsAndPurgeList;
- (void)_refreshThreadListAndUpdateCurrentThread:(int *)arg1;
- (void)assertIsLLDBSessionThread;
- (void)_handleThreadEvent:(id)arg1;
- (id)dbgLLDBProcess;
- (void)forceRefreshPausedStates;
- (id)memoryProfilingDisabledMessage;
- (void)appendProfileDataString:(id)arg1;
- (void)processProfileDataString:(id)arg1;
- (id)_stringFromHexString:(id)arg1;
- (const char *)_getProfileEnableString;
- (void)terminateCurrentDebuggerCommandIfNeeded;
- (id)supportedDataValueFormatsForDataValue:(id)arg1;
- (BOOL)consoleShouldTrackInputHistory;
- (id)_sbBreakpointLocationForIDEBreakpointLocationID:(unsigned long long)arg1 parentBreakpointID:(unsigned long long)arg2;
- (void)breakpointLocationEnablementChanged:(id)arg1;
- (void)breakpointLocationIgnoreCount:(id)arg1;
- (void)breakpointLocationConditionChanged:(id)arg1;
- (void)breakpointEnablementChanged:(id)arg1;
- (void)breakpointIgnoreCountChanged:(id)arg1;
- (void)breakpointConditionChanged:(id)arg1;
- (void)_logBreakpointState:(id)arg1 usingPrefix:(id)arg2;
- (void)watchpointEnablementChanged:(id)arg1;
- (void)activationStateChanged:(BOOL)arg1 forBreakpoints:(id)arg2;
- (void)_deleteBreakpointFromLLDBSessionThread:(id)arg1 breakpointLocations:(id)arg2;
- (void)deleteBreakpoint:(id)arg1;
- (void)_handleBreakpointLocationsRemovedEvent:(id)arg1;
- (void)_handleBreakpointLocationsAddedEvent:(id)arg1;
- (void)_handleBreakpointRemovedEventFromLLDB:(id)arg1;
- (id)_breakpointLocationFromSBBreakpointLocation:(id)arg1;
- (void)_handleBreakpointAddedEventFromLLDB:(id)arg1;
- (void)_deleteWatchpointFromLLDBSessionThread:(id)arg1;
- (void)deleteWatchpoint:(id)arg1;
- (id)_createBreakpointFromAddressBreakpoint:(id)arg1;
- (id)_createBreakpointFromExceptionBreakpoint:(id)arg1;
- (id)_createBreakpointFromSwiftErrorBreakpoint:(id)arg1;
- (id)_createBreakpointFromConstraintErrorBreakpoint:(id)arg1;
- (id)_createBreakpointFromTestFailureBreakpoint:(id)arg1;
- (id)_sbBreakpointForSymbolsNames:(id)arg1;
- (id)_createBreakpointFromSymbolicBreakpoint:(id)arg1;
- (id)_createBreakpointFromFileBreakpoint:(id)arg1;
- (void)createBreakpointIfNecessary:(id)arg1;
- (void)_evaluateExpressionFromSessionThread:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)evaluateExpression:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)evaluateExpression:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_setProfilingEnabled:(BOOL)arg1;
- (id)commandsExpectingExpressions;
- (void)_delayedSetRunningState;
- (void)_quitWatchdogOnProcessState:(int *)arg1 forceQuit:(BOOL)arg2;
- (void)_cancelAndClearAllSessionThreadActionsByFirstTakingActionsLock;
- (void)_cancelAndClearAllSessionThreadActionsWithActionsLockAlreadyTaken;
- (BOOL)handleNextActionWithState:(int *)arg1 withRunPending:(char *)arg2;
- (void)addSessionThreadAction:(CDUnknownBlockType)arg1;
- (void)completeString:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)printDescriptionOfDataValueToConsole:(id)arg1 runAllThreads:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)requestDataContainerForSymbol:(id)arg1 atLocation:(id)arg2;
- (id)_createNSStringForCString:(const char *)arg1;
- (id)_logicalValueForBreakpointActionExpression:(id)arg1;
- (void)_performBreakpointActions:(id)arg1 frame:(id)arg2;
- (void)_removeBreakpointHitCallback:(unsigned long long)arg1;
- (void)_addBreakpointHitCallback:(id)arg1;
- (void)requestLoadDylibAtPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestMovePCInStackFrame:(id)arg1 toLineNumber:(unsigned long long)arg2;
- (BOOL)supportsMultiplePCAnnotation;
- (void)executeDebuggerCommand:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3;
- (void)executeConsoleCommand:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3;
- (void)_putLLDBInThreadID:(unsigned long long)arg1 stackFrameID:(unsigned long long)arg2 restoreThreadFrameAfterWork:(BOOL)arg3 toDoWork:(CDUnknownBlockType)arg4;
- (void)_requestFetchEventOnSessionThread;
- (void)requestUISnapshotRefresh;
- (void)requestFetchEvent;
- (void)_runActionOnSessionThreadWhenPaused:(CDUnknownBlockType)arg1;
- (void)requestContinueToLocation:(id)arg1;
- (void)requestStepIntoCallSymbol:(id)arg1 atLocation:(id)arg2;
- (void)requestStop;
- (void)requestDetach;
- (void)requestContinue;
- (void)requestPause;
- (void)requestStepOut;
- (void)requestStepOverSuspendOtherThreads;
- (void)requestStepOverInstruction;
- (void)requestStepOverLine;
- (void)requestStepIntoInstruction;
- (void)requestStepInSuspendOtherThreads;
- (void)requestStepIn;
- (void)_appendProcessControlAction:(int)arg1 scope:(int)arg2 arg:(unsigned long long)arg3 location:(id)arg4;
- (void)_appendProcessControlAction:(int)arg1 scope:(int)arg2 arg:(unsigned long long)arg3;
- (void)_setSessionThreadIdentifier:(struct _opaque_pthread_t *)arg1;
- (BOOL)currentThreadIsSessionThread;
- (void)debuggerHasStandardOutput;
- (void)_resetFlagsForTestingLongRunningConsoleCommand;
- (void)_setAndAppendPrompt:(id)arg1;
- (id)prompt;
- (void)trackProcess;
- (id)lldbBroadcaster;
- (id)lldbTarget;
- (void)setTarget:(id)arg1;
@property(readonly) DBGLLDBLauncher *launcher;
- (void)_setupProfileScanType:(id)arg1;
- (id)initWithDebugLauncher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSMutableArray *mutableMainThreadCheckerIssues; // @dynamic mutableMainThreadCheckerIssues;
@property(readonly, copy) NSMutableArray *mutableSwiftRuntimeReportingIssues; // @dynamic mutableSwiftRuntimeReportingIssues;
@property(readonly, copy) NSMutableArray *mutableThreadSanitizerIssues; // @dynamic mutableThreadSanitizerIssues;
@property(readonly, copy) NSMutableArray *mutableUBSanitizerIssues; // @dynamic mutableUBSanitizerIssues;

@end

