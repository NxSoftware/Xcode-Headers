//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCBuildSupport/_TtP7XCBuild24XCBTaskExecutionDelegate_-Protocol.h>
#import <XCBuildSupport/_TtP7XCBuild27XCBTaskConstructionDelegate_-Protocol.h>
#import <XCBuildSupport/_TtP7XCBuild28XCBPlanningOperationDelegate_-Protocol.h>

@class NSData, NSString, _TtC7XCBuild17XCBBuildOperation, _TtC7XCBuild25XCBBuildOperationTaskInfo, _TtC7XCBuild27XCBBuildOperationTargetInfo, _TtC7XCBuild31XCBBuildOperationDiagnosticInfo;

@protocol _TtP7XCBuild25XCBBuildOperationDelegate_ <_TtP7XCBuild28XCBPlanningOperationDelegate_, _TtP7XCBuild27XCBTaskConstructionDelegate_, _TtP7XCBuild24XCBTaskExecutionDelegate_>
- (void)buildOperationPreparationComplete:(_TtC7XCBuild17XCBBuildOperation *)arg1;
- (void)buildOperation:(_TtC7XCBuild17XCBBuildOperation *)arg1 didUpdateProgressMessage:(NSString *)arg2 percentComplete:(double)arg3 showInLog:(BOOL)arg4;
- (void)buildOperation:(_TtC7XCBuild17XCBBuildOperation *)arg1 didEmitDiagnosticMessage:(NSString *)arg2 ofType:(NSString *)arg3 forTask:(NSString *)arg4 info:(_TtC7XCBuild31XCBBuildOperationDiagnosticInfo *)arg5;
- (void)buildOperation:(_TtC7XCBuild17XCBBuildOperation *)arg1 didEmitDiagnosticMessage:(NSString *)arg2 ofType:(NSString *)arg3 forTarget:(NSString *)arg4 info:(_TtC7XCBuild31XCBBuildOperationDiagnosticInfo *)arg5;
- (void)buildOperation:(_TtC7XCBuild17XCBBuildOperation *)arg1 didEmitDiagnosticMessage:(NSString *)arg2 ofType:(NSString *)arg3 info:(_TtC7XCBuild31XCBBuildOperationDiagnosticInfo *)arg4;
- (void)buildOperation:(_TtC7XCBuild17XCBBuildOperation *)arg1 didEmitConsoleOutput:(NSData *)arg2 forTask:(NSString *)arg3;
- (void)buildOperation:(_TtC7XCBuild17XCBBuildOperation *)arg1 didEmitConsoleOutput:(NSData *)arg2 forTarget:(NSString *)arg3;
- (void)buildOperation:(_TtC7XCBuild17XCBBuildOperation *)arg1 didEmitConsoleOutput:(NSData *)arg2;
- (void)buildOperation:(_TtC7XCBuild17XCBBuildOperation *)arg1 didEndTask:(NSString *)arg2 result:(long long)arg3 signalled:(BOOL)arg4;
- (void)buildOperation:(_TtC7XCBuild17XCBBuildOperation *)arg1 didStartTask:(NSString *)arg2 forTarget:(NSString *)arg3 subtaskOf:(NSString *)arg4 info:(_TtC7XCBuild25XCBBuildOperationTaskInfo *)arg5;
- (void)buildOperation:(_TtC7XCBuild17XCBBuildOperation *)arg1 didEndTarget:(NSString *)arg2;
- (void)buildOperation:(_TtC7XCBuild17XCBBuildOperation *)arg1 didStartTarget:(NSString *)arg2 guid:(NSString *)arg3 info:(_TtC7XCBuild27XCBBuildOperationTargetInfo *)arg4;
- (void)buildOperationDidEnd:(_TtC7XCBuild17XCBBuildOperation *)arg1;
- (void)buildOperationDidStart:(_TtC7XCBuild17XCBBuildOperation *)arg1;
- (void)buildOperation:(_TtC7XCBuild17XCBBuildOperation *)arg1 didFinishPlanningOperation:(NSString *)arg2;
- (void)buildOperation:(_TtC7XCBuild17XCBBuildOperation *)arg1 willStartPlanningOperation:(NSString *)arg2;

@optional
- (void)buildOperation:(_TtC7XCBuild17XCBBuildOperation *)arg1 taskWasUpToDate:(NSData *)arg2 forTarget:(NSString *)arg3 subtaskOf:(NSString *)arg4;
- (void)buildOperation:(_TtC7XCBuild17XCBBuildOperation *)arg1 targetWasUpToDate:(NSString *)arg2;
@end
