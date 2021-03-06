//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IDEWorkspace, IDEWorkspaceTabController, NSMutableArray;

@interface IDETestReportBaselineUpdateController : NSObject
{
    CDUnknownBlockType _completionBlock;
    NSMutableArray *_testRunsUpdateQueue;
    unsigned long long _countOfTestGroups;
    unsigned long long _countOfTestRuns;
    unsigned long long _countOfFinishedTestRuns;
    NSMutableArray *_groupsReadyToRunQueue;
    NSMutableArray *_updateErrors;
    unsigned long long _baselineRecordBehavior;
    IDEWorkspace *_workspace;
    IDEWorkspaceTabController *_workspaceTabController;
}

+ (id)schemeActionRunDestinationRecordForSchemeActionsInvocationRecord:(id)arg1 deviceIdentifier:(id)arg2 architecture:(id)arg3;
@property(retain) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)_updateBaselineRecordForTestRun:(id)arg1 perfMetric:(id)arg2 userBaselineOverride:(double)arg3 userRSTDOverride:(id)arg4 workspace:(id)arg5 workspaceWindow:(id)arg6;
- (void)updateBaselineForPerfMetric:(id)arg1 inTestRun:(id)arg2 newBaseline:(double)arg3 newAllowedSTD:(id)arg4;
- (void)updateBaselinesInTestRuns:(id)arg1;
- (void)applyBaselineFinishedForTestRun:(id)arg1 error:(id)arg2;
- (void)addGroupToQueue:(id)arg1;
- (void)updateBaseLinesForTestGroups:(id)arg1 baselineRecordBehavior:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

