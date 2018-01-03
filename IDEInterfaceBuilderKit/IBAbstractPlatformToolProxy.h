//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBAbstractPlatformTool-Protocol.h>
#import <IDEInterfaceBuilderKit/IBDiagnosticsHandlerConfigurator-Protocol.h>

@class DVTStackBacktrace, IBAbstractPlatformToolExecutionContext, IBMessageSendChannel, IBPlatformToolLaunchContext, NSMutableArray, NSPipe, NSString;
@protocol OS_dispatch_queue;

@interface IBAbstractPlatformToolProxy : NSObject <IBAbstractPlatformTool, IBDiagnosticsHandlerConfigurator>
{
    IBMessageSendChannel *_channel;
    DVTStackBacktrace *_previousCommandBacktrace;
    SEL _previousCommandSelector;
    NSMutableArray *_additionalRequestContextStack;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_backtraceQueue;
    NSPipe *_keepAlivePipe;
    BOOL _shouldRaiseOnFailures;
    IBAbstractPlatformToolExecutionContext *_executionContext;
    IBPlatformToolLaunchContext *_launchContext;
    CDUnknownBlockType _terminationHandler;
}

@property(nonatomic) BOOL shouldRaiseOnFailures; // @synthesize shouldRaiseOnFailures=_shouldRaiseOnFailures;
@property(readonly, copy, nonatomic) CDUnknownBlockType terminationHandler; // @synthesize terminationHandler=_terminationHandler;
@property(readonly, nonatomic) IBPlatformToolLaunchContext *launchContext; // @synthesize launchContext=_launchContext;
@property(readonly, nonatomic) IBAbstractPlatformToolExecutionContext *executionContext; // @synthesize executionContext=_executionContext;
- (void).cxx_destruct;
- (void)shutdownAndForceToolProxyKill;
- (void)shutdown;
- (void)loadExtensions:(id)arg1;
- (id)_ON_QUEUE_sendMessage:(SEL)arg1 toChannelReturningError:(id *)arg2 during:(CDUnknownBlockType)arg3;
- (id)sendMessage:(SEL)arg1 toChannelReturningError:(id *)arg2 during:(CDUnknownBlockType)arg3;
- (id)sendMessage:(SEL)arg1 toChannelDuring:(CDUnknownBlockType)arg2;
- (void)pushAdditionalRequestContext:(id)arg1 during:(CDUnknownBlockType)arg2;
- (id)requestContext;
- (void)populateRequestContext:(id)arg1;
- (void)recordLastCommandBacktrace:(id)arg1 cmd:(SEL)arg2;
- (id)effectiveMarshallingResultGivenResult:(id)arg1 andPossibleError:(id)arg2;
- (id)_errorByAddingAdditionalCrashInformationToError:(id)arg1 orRaiseIfNeededOnFailure:(BOOL)arg2 shouldRaiseOnFailures:(BOOL)arg3 waitForCrashLog:(BOOL)arg4;
- (id)errorByAddingAdditionalCrashInformationToError:(id)arg1 orRaiseIfNeededOnFailure:(BOOL)arg2;
- (void)configureDiagnosticsHandler:(id)arg1;
- (id)_previousCommandsBacktrace;
- (id)initWithWriteDescriptor:(int)arg1 readDescriptor:(int)arg2 executionContext:(id)arg3 launchContext:(id)arg4 shouldRaiseOnFailures:(BOOL)arg5 terminationHandler:(CDUnknownBlockType)arg6 error:(id *)arg7;
- (id)initWithSocket:(int)arg1 executionContext:(id)arg2 launchContext:(id)arg3 shouldRaiseOnFailures:(BOOL)arg4 terminationHandler:(CDUnknownBlockType)arg5 error:(id *)arg6;
- (void)didLaunchWithPipeToKeepAlive:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

