//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerFoundation/DVTInvalidation-Protocol.h>
#import <GPUDebuggerFoundation/IDETraceInferiorSession-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, DYCaptureArchive, DYCaptureSession, DYCaptureSessionInfo, DYFuture, DYGuestAppSession, DYProgressDigest, GPUDebuggerController, GPUTraceSession, IDELaunchSession, NSError, NSMutableArray, NSMutableDictionary, NSString;
@protocol IDEDebugTopNavigableModel, OS_dispatch_group, OS_dispatch_queue;

@interface GPUInferiorSession : NSObject <IDETraceInferiorSession, DVTInvalidation>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_resourceQueue;
    NSObject<OS_dispatch_group> *_captureSessionProcessingGroup;
    DYFuture *_modelCreationFuture;
    DVTObservingToken *_launchSessionStateObserverToken;
    DVTObservingToken *_traceSessionStateObserverToken;
    DVTObservingToken *_captureSessionNoGPUWorkDetectedObserverToken;
    IDELaunchSession *_launchSession;
    int _state;
    GPUDebuggerController *_debuggerController;
    GPUTraceSession *_currentTraceSession;
    GPUTraceSession *_candidateTraceSession;
    DYGuestAppSession *_guestAppSession;
    DYFuture *_symbolicatorFuture;
    DYCaptureArchive *_nextCaptureArchive;
    DYCaptureSession *_activeCaptureSession;
    NSMutableDictionary *_updatedResourcesDict;
    NSMutableDictionary *_replayUpdatedResourcesDict;
    NSMutableDictionary *_originalResourcesDict;
    NSMutableDictionary *_programInfoDict;
    NSMutableArray *_traceSessionEstablishedJobQueue;
    NSError *_error;
    BOOL _readyToCapture;
    BOOL _archiveFinalized;
    BOOL _finalizedOverview;
    BOOL _isInvalidating;
    BOOL _isDeferredHarvested;
    BOOL _isRemoteDebuggingEnabled;
    BOOL _isOSXSession;
    unsigned int _deviceInterposeVersionGL;
    unsigned int _deviceInterposeVersionMetal;
    unsigned int _updatedResourcesChangeCount;
    NSString *_captureUnavailabilityReason;
    DYProgressDigest *_progressDigest;
    NSString *_inferiorAppName;
    NSString *_sessionID;
}

+ (BOOL)isRemoteDebuggingRequested:(id)arg1;
+ (id)GPUToolsDeviceFromDVTDevice:(id)arg1 error:(id *)arg2;
+ (void)initialize;
+ (id)logAspect;
+ (id)keyPathsForValuesAffectingTraceSession;
@property unsigned int updatedResourcesChangeCount; // @synthesize updatedResourcesChangeCount=_updatedResourcesChangeCount;
@property(readonly) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly) NSString *inferiorAppName; // @synthesize inferiorAppName=_inferiorAppName;
@property BOOL isOSXSession; // @synthesize isOSXSession=_isOSXSession;
@property BOOL isRemoteDebuggingEnabled; // @synthesize isRemoteDebuggingEnabled=_isRemoteDebuggingEnabled;
@property(retain, nonatomic) DYProgressDigest *progressDigest; // @synthesize progressDigest=_progressDigest;
@property(readonly) NSString *captureUnavailabilityReason; // @synthesize captureUnavailabilityReason=_captureUnavailabilityReason;
@property(readonly) unsigned int deviceInterposeVersionMetal; // @synthesize deviceInterposeVersionMetal=_deviceInterposeVersionMetal;
@property(readonly) unsigned int deviceInterposeVersionGL; // @synthesize deviceInterposeVersionGL=_deviceInterposeVersionGL;
@property(readonly) DYGuestAppSession *guestAppSession; // @synthesize guestAppSession=_guestAppSession;
@property(readonly) NSMutableDictionary *programInfoDict; // @synthesize programInfoDict=_programInfoDict;
@property(readonly) NSMutableDictionary *originalResourcesDict; // @synthesize originalResourcesDict=_originalResourcesDict;
@property(readonly) NSMutableDictionary *updatedResourcesDict; // @synthesize updatedResourcesDict=_updatedResourcesDict;
@property(readonly) GPUDebuggerController *debuggerController; // @synthesize debuggerController=_debuggerController;
@property int state; // @synthesize state=_state;
@property(retain) NSError *error; // @synthesize error=_error;
@property BOOL readyToCapture; // @synthesize readyToCapture=_readyToCapture;
@property(retain) GPUTraceSession *currentTraceSession; // @synthesize currentTraceSession=_currentTraceSession;
@property BOOL archiveFinalized; // @synthesize archiveFinalized=_archiveFinalized;
@property(readonly) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
- (void).cxx_destruct;
- (id)infoDictForProgram:(unsigned long long)arg1 container:(unsigned long long)arg2;
- (void)setInfoDictForProgram:(unsigned long long)arg1 dict:(id)arg2 container:(unsigned long long)arg3;
- (void)addOriginalResource:(id)arg1 container:(unsigned long long)arg2;
- (id)updatedResources;
- (void)removeResourceOverride:(id)arg1 container:(unsigned long long)arg2;
- (void)addResourceOverride:(id)arg1 container:(unsigned long long)arg2;
- (void)addUpdatedResource:(id)arg1 container:(unsigned long long)arg2;
- (void)_removeModifiedResourceFromDict:(id)arg1 resource:(id)arg2 container:(unsigned long long)arg3;
- (void)_addModifiedResourceToDict:(id)arg1 resource:(id)arg2 container:(unsigned long long)arg3;
- (id)generateTraceSessionForCaptureArchive:(id)arg1;
- (id)errorForFailedPlayback;
- (BOOL)traceSessionEstablishedJobsQueueIsEmpty;
- (void)flushPendingTraceSessionEstablishedJobsQueue;
- (void)queueTraceSessionEstablishedJobWithId:(id)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)handleTraceSessionCreationSuccess:(id)arg1;
- (void)handleTraceSessionCreationFailure:(id)arg1;
- (void)handleCompleteCaptureSession:(id)arg1;
- (void)handleIncompleteCaptureSession:(id)arg1;
- (void)_handleCaptureSessionStateChange:(int)arg1;
- (void)stopGPUCapture;
- (void)startGPUTraceSessionInitiatedByInferior:(id)arg1;
- (void)captureGPUTrace:(id)arg1;
- (void)_handleBreakpointHit;
- (void)_handleAppDidLaunch;
- (void)ensureNextCaptureArchive;
- (void)createNextCaptureArchive;
- (void)_handleGraphicsAPIUsageUpdate:(BOOL)arg1;
- (void)_recursivePollForGraphicsAPIUsage;
- (id)prepareForLaunch:(id)arg1 error:(id *)arg2;
- (BOOL)launchDebugServerWithError:(id *)arg1;
@property(readonly) id <IDEDebugTopNavigableModel> process;
- (void)primitiveInvalidate;
- (void)releaseCurrentGPUTrace;
- (void)releaseCurrentCaptureSessionAndResumeAppAndGraphicsThreads:(BOOL)arg1;
- (id)GPUToolsDeviceFromDVTDevice:(id)arg1 error:(id *)arg2;
@property(readonly) DYCaptureSessionInfo *captureSessionInfo;
- (void)_setupProgressDigest:(BOOL)arg1;
- (id)initWithAppName:(id)arg1 launchSession:(id)arg2 controller:(id)arg3 launchCommand:(id)arg4 error:(id *)arg5;
- (id)initWithAppName:(id)arg1 launchSession:(id)arg2 controller:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

