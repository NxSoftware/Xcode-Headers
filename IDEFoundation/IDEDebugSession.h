//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, DVTTextDocumentLocation, IDEBreakpointManager, IDEDebugProcess, IDELaunchSession, NSMutableSet, NSString;

@interface IDEDebugSession : NSObject <DVTInvalidation>
{
    NSMutableSet *_profileDataObservers;
    BOOL _crashPointSession;
    BOOL _profilingSupported;
    BOOL _isDetached;
    int _state;
    int _lastObserversForGaugesState;
    id <IDEDebugTopNavigableModel> _topNavigableModel;
    IDELaunchSession *_launchSession;
    IDEDebugProcess *_process;
    DVTTextDocumentLocation *_instructionPointerLocation;
    DVTTextDocumentLocation *_instructionPointerLocationForDisassembly;
}

+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (void)initialize;
@property int lastObserversForGaugesState; // @synthesize lastObserversForGaugesState=_lastObserversForGaugesState;
@property BOOL isDetached; // @synthesize isDetached=_isDetached;
@property(getter=isProfilingSupported) BOOL profilingSupported; // @synthesize profilingSupported=_profilingSupported;
@property(copy, nonatomic) DVTTextDocumentLocation *instructionPointerLocationForDisassembly; // @synthesize instructionPointerLocationForDisassembly=_instructionPointerLocationForDisassembly;
@property(copy, nonatomic) DVTTextDocumentLocation *instructionPointerLocation; // @synthesize instructionPointerLocation=_instructionPointerLocation;
@property(retain, nonatomic) IDEDebugProcess *process; // @synthesize process=_process;
@property int state; // @synthesize state=_state;
@property(getter=isCrashPointSession) BOOL crashPointSession; // @synthesize crashPointSession=_crashPointSession;
@property(retain) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(retain, nonatomic) id <IDEDebugTopNavigableModel> topNavigableModel; // @synthesize topNavigableModel=_topNavigableModel;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)determineProfileDataObserversState;
- (void)deregisterProfileDataObserver:(id)arg1;
- (void)registerProfileDataObserver:(id)arg1;
- (void)requestLoadDylibAtPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)commandsExpectingExpressions;
- (BOOL)canContinueToLocation:(id)arg1 withinBlockAtRange:(struct _NSRange)arg2;
- (BOOL)consoleShouldTrackInputHistory;
- (void)evaluateExpression:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)evaluateExpression:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)executeDebuggerCommand:(id)arg1 threadID:(unsigned long long)arg2 stackFrameID:(unsigned long long)arg3;
- (BOOL)shouldAcceptFromDebugSession:(id)arg1 error:(id *)arg2;
- (BOOL)shouldRelinquishToDebugSession:(id)arg1 error:(id *)arg2;
- (void)requestFetchEvent;
- (void)requestDetach;
- (void)requestStop;
- (void)requestContinueToLocation:(id)arg1;
- (void)requestContinue;
- (void)requestPause;
- (void)requestStepOverSuspendOtherThreads;
- (void)requestStepInSuspendOtherThreads;
- (void)requestStepOverInstruction;
- (void)requestStepIntoInstruction;
- (void)requestStepOut;
- (void)requestStepOverLine;
- (void)requestStepIn;
@property(readonly) IDEBreakpointManager *breakpointManager;
@property(readonly) int coalescedState;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

