//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUDebuggerController.h"

@class DVTFilePath, DVTObservingToken, DYMTLAnalyzerArchiveVisitor, GPUMTLFrameStats, NSCache, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface GPUMTLDebuggerController : GPUDebuggerController
{
    NSCache *_sourceCache;
    DYMTLAnalyzerArchiveVisitor *_analyzerVisitor;
    DVTObservingToken *_overviewSamplesObserver;
    NSMutableArray *_overviewSampleArray;
    BOOL _finalizedOverview;
    NSMutableDictionary *_changedLibraries;
    NSObject<OS_dispatch_queue> *_libraryUpdateQueue;
    NSMutableDictionary *_perEncoderStats;
    DVTFilePath *_libraryPath;
    BOOL _updateLibrary;
    BOOL _shadersUpdatable;
    GPUMTLFrameStats *_frameStats;
}

+ (id)assetBundle;
@property(readonly) GPUMTLFrameStats *frameStats; // @synthesize frameStats=_frameStats;
- (BOOL)shadersUpdatable;
- (void).cxx_destruct;
- (BOOL)supportsDebugBarShaderUpdate;
- (id)statsForEncoder:(unsigned long long)arg1;
- (BOOL)analyzeStoredCaptureArchive;
- (void)onRequestProfilerData:(id)arg1;
- (BOOL)isDisassemblerAvailable;
- (id)runShaderProfiler;
- (void)handleInferiorSessionActiveState;
- (void)traceSessionEstablishedWithNewArchive:(BOOL)arg1;
- (BOOL)_configureInvestigatorWithCaseConfigData:(id)arg1;
- (id)createProgramPerformanceReportProvider:(id)arg1;
- (id)createInvestigatorReportProvider:(id)arg1;
- (void)createReportWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_updateLibrary:(const Library_fcf3a16e *)arg1 withChanges:(id)arg2 forDocument:(id)arg3 onDevice:(unsigned long long)arg4;
- (void)_updateDefaultLibrary:(const Library_fcf3a16e *)arg1 onDevice:(unsigned long long)arg2;
- (BOOL)isOfflineShaderInLoadedCapture;
- (void)_updateShaderState;
- (void)updateShaders;
- (void)handleDocumentChanged:(id)arg1 currentAPIItem:(id)arg2;
- (void)resetResourceManagerWithResourceStreamer:(id)arg1;
- (BOOL)handleCaptureSessionFinalization:(id)arg1;
- (void)setupCaptureSessionInfoWithArchive:(id)arg1;
- (void)handleAppSessionTransportMessage:(id)arg1;
- (void)_unarchiveReports;
- (void)setupGuestAppSession:(id)arg1;
- (id)newGuestAppSessionWithGuestApp:(id)arg1 device:(id)arg2 deferLaunch:(BOOL)arg3;
- (void)createModelFactory;
- (BOOL)supportsInvestigator;
- (void)primitiveInvalidate;
- (id)init;

@end

