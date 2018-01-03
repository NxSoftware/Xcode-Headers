//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerFoundation/DVTInvalidation-Protocol.h>
#import <GPUDebuggerFoundation/DYPDebuggerControllerProxyDelegate-Protocol.h>
#import <GPUDebuggerFoundation/DYShaderProfilerDelegate-Protocol.h>
#import <GPUDebuggerFoundation/GPUPerformanceDataProvider-Protocol.h>

@class DVTObservingToken, DVTStackBacktrace, DYCaptureSessionInfo, DYDeviceInfo, DYInvestigatorCaseConfigData, DYShaderProfiler, DYShaderProfilerResult, GPUCaptureInfoMessage, GPUInferiorSession, GPUInvestigatorReportItem, GPUTraceModelFactory, GPUTraceSession, NSArray, NSDictionary, NSError, NSImage, NSMutableArray, NSSet, NSString, NSURL;
@protocol DYPPipelineStatistics, DYPResourceManager, GPUCapturableObject, OS_dispatch_queue;

@interface GPUDebuggerController : NSObject <DVTInvalidation, DYShaderProfilerDelegate, DYPDebuggerControllerProxyDelegate, GPUPerformanceDataProvider>
{
    DVTObservingToken *_extensionsObserver;
    NSMutableArray *_debugStateObservers;
    int _postCaptureDebugState;
    NSMutableArray *_capturableObjects;
    id <GPUCapturableObject> _currentCapturableObject;
    unsigned int _api;
    NSString *_apiDisplayName;
    double _appFrameRate;
    double _appTargetFrameRate;
    NSDictionary *_maxIssueSeverity;
    DYShaderProfiler *_shaderProfiler;
    NSObject<OS_dispatch_queue> *_shaderProfilerReplyQueue;
    DYShaderProfilerResult *_shaderProfilerResults;
    DYShaderProfilerResult *_shaderProfilerResultsBase;
    id <DYPPipelineStatistics> _pipelineStatistics;
    DYInvestigatorCaseConfigData *_investigatorCaseConfigData;
    BOOL _finalizedOverview;
    NSString *_sessionID;
    NSObject<OS_dispatch_queue> *_extraAnalyzerFindingsQueue;
    NSObject<OS_dispatch_queue> *_shaderProfilerCompleteQueue;
    NSMutableArray *_extraAnalyzerFindings;
    BOOL _reprofileOnGPUTraceLoad;
    BOOL _supportsInvestigator;
    BOOL _isInvestigatorReady;
    BOOL _archiveHasPendingChanges;
    BOOL _shouldDisableCaptureFrameButton;
    BOOL _noRecentGPUWorkloadDetected;
    BOOL _shadersUpdatable;
    int _debugState;
    int _enableGPUValidationMode;
    id <DYPResourceManager> _resourceManager;
    GPUTraceModelFactory *_modelFactory;
    unsigned long long _lastActiveTimestamp;
    GPUInvestigatorReportItem *_reportItem;
    DYCaptureSessionInfo *_captureSessionInfo;
    GPUTraceSession *_traceSession;
    GPUInferiorSession *_inferiorSession;
    DYDeviceInfo *_deviceInfo;
    NSError *_error;
    NSString *_appName;
    NSArray *_appArguments;
    NSArray *_analyzerFindings;
    NSArray *_extensions;
    NSSet *_fenumsWithErrors;
    NSURL *_captureArchiveURL;
    GPUCaptureInfoMessage *_captureInfoMessage;
    NSObject<OS_dispatch_queue> *_synchronousJobQueue;
}

+ (BOOL)issueIsHiddenForGPUIssueFilter:(int)arg1 issueFilterLevel:(int)arg2;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
+ (id)logAspect;
@property(readonly) NSObject<OS_dispatch_queue> *synchronousJobQueue; // @synthesize synchronousJobQueue=_synchronousJobQueue;
@property(retain) GPUCaptureInfoMessage *captureInfoMessage; // @synthesize captureInfoMessage=_captureInfoMessage;
@property(nonatomic) BOOL shadersUpdatable; // @synthesize shadersUpdatable=_shadersUpdatable;
@property BOOL noRecentGPUWorkloadDetected; // @synthesize noRecentGPUWorkloadDetected=_noRecentGPUWorkloadDetected;
@property int enableGPUValidationMode; // @synthesize enableGPUValidationMode=_enableGPUValidationMode;
@property BOOL shouldDisableCaptureFrameButton; // @synthesize shouldDisableCaptureFrameButton=_shouldDisableCaptureFrameButton;
@property(readonly) id <DYPPipelineStatistics> pipelineStatistics; // @synthesize pipelineStatistics=_pipelineStatistics;
@property(readonly) DYShaderProfilerResult *shaderProfilerResultsBase; // @synthesize shaderProfilerResultsBase=_shaderProfilerResultsBase;
@property(readonly) DYShaderProfilerResult *shaderProfilerResults; // @synthesize shaderProfilerResults=_shaderProfilerResults;
@property(retain) NSURL *captureArchiveURL; // @synthesize captureArchiveURL=_captureArchiveURL;
@property(retain) NSSet *fenumsWithErrors; // @synthesize fenumsWithErrors=_fenumsWithErrors;
@property(retain) NSArray *extensions; // @synthesize extensions=_extensions;
@property(readonly) NSArray *extraAnalyzerFindings; // @synthesize extraAnalyzerFindings=_extraAnalyzerFindings;
@property(retain) NSArray *analyzerFindings; // @synthesize analyzerFindings=_analyzerFindings;
@property(readonly) double appTargetFrameRate; // @synthesize appTargetFrameRate=_appTargetFrameRate;
@property(readonly) double appFrameRate; // @synthesize appFrameRate=_appFrameRate;
@property(retain) NSArray *appArguments; // @synthesize appArguments=_appArguments;
@property(retain) NSString *appName; // @synthesize appName=_appName;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) DYDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) GPUInferiorSession *inferiorSession; // @synthesize inferiorSession=_inferiorSession;
@property(nonatomic) __weak GPUTraceSession *traceSession; // @synthesize traceSession=_traceSession;
@property(retain) DYCaptureSessionInfo *captureSessionInfo; // @synthesize captureSessionInfo=_captureSessionInfo;
@property BOOL archiveHasPendingChanges; // @synthesize archiveHasPendingChanges=_archiveHasPendingChanges;
@property(retain, nonatomic) GPUInvestigatorReportItem *reportItem; // @synthesize reportItem=_reportItem;
@property BOOL isInvestigatorReady; // @synthesize isInvestigatorReady=_isInvestigatorReady;
@property(readonly) BOOL supportsInvestigator; // @synthesize supportsInvestigator=_supportsInvestigator;
@property unsigned long long lastActiveTimestamp; // @synthesize lastActiveTimestamp=_lastActiveTimestamp;
@property int debugState; // @synthesize debugState=_debugState;
@property(retain) GPUTraceModelFactory *modelFactory; // @synthesize modelFactory=_modelFactory;
@property(retain, nonatomic) id <DYPResourceManager> resourceManager; // @synthesize resourceManager=_resourceManager;
@property(readonly) NSString *apiDisplayName; // @synthesize apiDisplayName=_apiDisplayName;
@property(readonly) unsigned int api; // @synthesize api=_api;
@property(retain) id <GPUCapturableObject> currentCapturableObject; // @synthesize currentCapturableObject=_currentCapturableObject;
@property(readonly) NSArray *capturableObjects; // @synthesize capturableObjects=_capturableObjects;
- (void).cxx_destruct;
- (void)_onShaderEditContinueResourcesUpdated;
- (void)_onShaderEditContinueEndWithCompleted:(BOOL)arg1;
- (void)_onShaderEditContinueBegin;
- (void)_performPostShaderEditContinueActions;
- (id)createAnnotationContext:(id)arg1;
- (id)issuesForFunctionIndex:(int)arg1;
@property(nonatomic) int issueFilterLevel;
- (id)maxIssueSeverityImage:(int)arg1;
- (int)maxIssueSeverity:(int)arg1;
- (void)addExtraAnalyzerFindings:(id)arg1;
- (id)getExtraAnalyzerFindings;
@property(readonly) NSArray *invalidOverrides;
- (void)dumpFramesTime:(id)arg1;
- (id)modifiedCaptureArchive;
- (BOOL)isOfflineShaderInLoadedCapture;
- (void)updateShaders;
@property(readonly, nonatomic) BOOL supportsDebugBarShaderUpdate;
- (id)createProgramPerformanceReportProvider:(id)arg1;
- (id)createInvestigatorReportProvider:(id)arg1;
- (void)handleDocumentChanged:(id)arg1 currentAPIItem:(id)arg2;
- (id)runShaderProfiler:(long long)arg1;
- (id)_profileShaders:(long long)arg1 progressDigest:(id)arg2;
- (id)_profileFrame:(long long)arg1 progressDigest:(id)arg2;
- (void)displayAlertWithTitle:(id)arg1 andDetails:(id)arg2;
- (void)loadShaderProfilerResults;
- (void)saveShaderProfilerResults;
@property(readonly) BOOL isDisassemblerAvailable;
@property(readonly) BOOL shaderProfilerResultsHaveBeenUpdated;
@property(readonly) BOOL isMacOSXDevice;
@property(readonly) BOOL isShaderProfilerAvailable;
@property(readonly) BOOL isRuntimeOSAppleInternal;
- (id)queryShaderInfoWithPayload:(id)arg1;
- (id)derivedCounterInfo:(id)arg1;
- (unsigned long long)_getTargetFrameRateFromDisplayLinkInfo:(id)arg1;
- (void)createReportWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)resetResourceManagerWithResourceStreamer:(id)arg1;
- (void)archiveReports;
- (BOOL)isDeviceBusy;
- (void)touchDebugState;
- (BOOL)relinquishAutomatedDebugState;
- (BOOL)requestAutomatedDebugState:(int)arg1;
- (void)_handleDebuggerStateChanges;
- (void)addCapturableObject:(id)arg1;
- (void)removeAllCapturableObjectsWithType:(id)arg1;
- (void)removeAllCapturableObjects;
- (BOOL)isSafeToDeactivate;
- (void)handleTraceSessionFinalization:(unsigned int)arg1;
- (void)handleInferiorSessionActiveState;
- (void)_runShaderProfilerJobSync;
- (BOOL)_configureInvestigatorWithCaseConfigData:(id)arg1;
- (void)onObservedDictionaryUpdated:(id)arg1 archiveKey:(id)arg2;
- (void)traceSessionEstablishedWithNewArchive:(BOOL)arg1;
- (id)unarchiveDictionaryForKey:(id)arg1;
- (void)handleUpdatedDictionary:(id)arg1 forKey:(id)arg2;
- (void)startGPUTraceSessionInitiatedByInferior:(id)arg1;
- (void)stopGPUCapture;
- (void)captureGPUTraceFromBreakpoint:(id)arg1;
- (id)copyAdjunctDataForFilename:(id)arg1 error:(id *)arg2;
- (BOOL)storeAdjunctData:(id)arg1 filename:(id)arg2 error:(id *)arg3;
- (id)retrieveArchivedDataForKey:(id)arg1 error:(id *)arg2;
- (BOOL)archiveData:(id)arg1 withKey:(id)arg2 replaceData:(BOOL)arg3 error:(id *)arg4;
- (void)handleCaptureSessionTearDown;
- (BOOL)handleCaptureSessionFinalization:(id)arg1;
- (void)_handleExtensions;
- (BOOL)analyzeStoredCaptureArchive;
- (void)setupCaptureSessionInfoWithArchive:(id)arg1;
- (void)setupCaptureSession:(id)arg1;
- (void)setupGuestAppSession:(id)arg1;
- (BOOL)archiveLastDisplayableRenderBufferImage;
@property(readonly) NSImage *archivedRenderbufferImage;
- (void)handleAppSessionTransportMessage:(id)arg1;
- (void)cancelAnalysis;
- (void)beginAnalysis;
- (id)captureArchive;
- (void)createModelFactory;
- (id)newGuestAppSessionWithGuestApp:(id)arg1 device:(id)arg2 deferLaunch:(BOOL)arg3 error:(id *)arg4;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

