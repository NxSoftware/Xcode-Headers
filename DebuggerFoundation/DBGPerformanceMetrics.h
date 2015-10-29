//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTPerformanceMetric, NSObject<OS_dispatch_queue>;

@interface DBGPerformanceMetrics : NSObject
{
    DVTPerformanceMetric *_perceivedStepMetric;
    DVTPerformanceMetric *_variablesViewUpdateMetric;
    DVTPerformanceMetric *_nonPrimaryPCUpdateMetric;
    DVTPerformanceMetric *_viewDebuggingSceneLoadMetric;
    NSObject<OS_dispatch_queue> *_viewDebuggingSceneCounterQueue;
    long long _viewDebuggingSceneCounter;
    struct DBGPerformanceViewDebuggingStats _viewDebuggingStats;
}

+ (id)defaultMetrics;
- (void).cxx_destruct;
- (void)decrementOutstandingSnapshotsWithTime:(double)arg1 incrementCount:(BOOL)arg2;
- (void)incrementOutstandingSnapshots;
- (void)memoryGraphDebuggerHierarchyFetchCompleted:(id)arg1;
- (void)memoryGraphDebuggerHierarchyFetchStarted:(id)arg1;
- (void)viewDebuggerSceneLoadCompleted:(id)arg1;
- (void)viewDebuggerSceneLoadStarted:(id)arg1;
- (id)_sceneLoadIdentifierForViewDebugger:(id)arg1;
- (void)viewDebuggerHierarchyFetchCompleted:(id)arg1;
- (void)viewDebuggerHierarchyFetchStarted:(id)arg1;
- (void)disassemblyFetchCompleted:(id)arg1;
- (void)disassemblyFetchStarted:(id)arg1;
- (void)formattedSummaryFetchCompleted:(id)arg1;
- (void)formattedSummaryFetchStarted:(id)arg1;
- (void)nonPrimaryPCUpdateCompleted;
- (void)nonPrimaryPCUpdateStarted;
- (void)stackFrameFetchCheckpoint:(id)arg1 withLabel:(id)arg2;
- (void)stackFrameFetchCompleted:(id)arg1;
- (void)stackFrameFetchStarted:(id)arg1;
- (void)variablesViewUpdateCompleted;
- (void)variablesViewUpdateStarted;
- (void)perceivedStepCompleted;
- (void)perceivedStepCheckpoint:(id)arg1;
- (void)perceivedStepStarted;
- (void)debugSessionCompleted:(id)arg1;
- (void)debugSessionStarted:(id)arg1;

@end

