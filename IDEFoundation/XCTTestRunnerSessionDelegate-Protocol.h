//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/XCTDaemonSessionDelegate-Protocol.h>

@class NSDictionary, NSError, NSNumber, NSString, XCActivityRecord, XCTProcessLaunchParameters, XCTSourceLocation, XCTTestRunnerSession;
@protocol NSSecureCoding><NSCopying><NSObject;

@protocol XCTTestRunnerSessionDelegate <XCTDaemonSessionDelegate>
- (void)testRunnerSession:(XCTTestRunnerSession *)arg1 didReportSelfDiagnosisIssue:(NSString *)arg2 description:(NSString *)arg3;
- (void)testRunnerSession:(XCTTestRunnerSession *)arg1 didReceiveDebugLogMessage:(NSString *)arg2;
- (void)testRunnerSession:(XCTTestRunnerSession *)arg1 didReceiveLogMessage:(NSString *)arg2;
- (NSNumber *)testRunnerSession:(XCTTestRunnerSession *)arg1 progressForLaunchWithToken:(id <NSSecureCoding><NSCopying><NSObject>)arg2 error:(id *)arg3;
- (BOOL)testRunnerSession:(XCTTestRunnerSession *)arg1 terminateProcessWithToken:(id <NSSecureCoding><NSCopying><NSObject>)arg2 error:(id *)arg3;
- (void)testRunnerSession:(XCTTestRunnerSession *)arg1 launchProcessWithParameters:(XCTProcessLaunchParameters *)arg2 completion:(void (^)(id <NSSecureCoding><NSCopying><NSObject>, NSError *))arg3;
- (void)testRunnerSession:(XCTTestRunnerSession *)arg1 testCase:(NSString *)arg2 method:(NSString *)arg3 didMeasureMetric:(NSDictionary *)arg4 sourceLocation:(XCTSourceLocation *)arg5;
- (void)testRunnerSession:(XCTTestRunnerSession *)arg1 testCase:(NSString *)arg2 method:(NSString *)arg3 didFinishActivity:(XCActivityRecord *)arg4;
- (void)testRunnerSession:(XCTTestRunnerSession *)arg1 testCase:(NSString *)arg2 method:(NSString *)arg3 willStartActivity:(XCActivityRecord *)arg4;
- (void)testRunnerSession:(XCTTestRunnerSession *)arg1 testCase:(NSString *)arg2 method:(NSString *)arg3 didStallOnMainThreadAtSourceLocation:(XCTSourceLocation *)arg4;
- (void)testRunnerSession:(XCTTestRunnerSession *)arg1 testCaseDidFinishForTestClass:(NSString *)arg2 method:(NSString *)arg3 status:(NSString *)arg4 duration:(double)arg5;
- (void)testRunnerSession:(XCTTestRunnerSession *)arg1 testCaseDidFailForTestClass:(NSString *)arg2 method:(NSString *)arg3 failureMessage:(NSString *)arg4 sourceLocation:(XCTSourceLocation *)arg5;
- (void)testRunnerSession:(XCTTestRunnerSession *)arg1 testCaseDidStartForTestClass:(NSString *)arg2 method:(NSString *)arg3;
- (void)testRunnerSession:(XCTTestRunnerSession *)arg1 testSuite:(NSString *)arg2 didFinishAt:(NSString *)arg3 runCount:(unsigned long long)arg4 failureCount:(unsigned long long)arg5 unexpectedFailureCount:(unsigned long long)arg6 testDuration:(double)arg7 totalDuration:(double)arg8;
- (void)testRunnerSession:(XCTTestRunnerSession *)arg1 testSuite:(NSString *)arg2 didStartAt:(NSString *)arg3;
- (void)testRunnerSession:(XCTTestRunnerSession *)arg1 initializationForUITestingDidFailWithError:(NSError *)arg2;
- (void)testRunnerSessionDidStartInitializingForUITesting:(XCTTestRunnerSession *)arg1;
- (void)testRunnerSessionDidFinishExecutingTests:(XCTTestRunnerSession *)arg1;
- (void)testRunnerSessionDidStartExecutingTests:(XCTTestRunnerSession *)arg1;
- (void)testRunnerSessionDidDisconnect:(XCTTestRunnerSession *)arg1;
- (void)testRunnerSession:(XCTTestRunnerSession *)arg1 didFailInitializationWithError:(NSError *)arg2;
- (void)testRunnerSessionDidBecomeReady:(XCTTestRunnerSession *)arg1;
- (void)testRunnerSessionDidAcquireConnection:(XCTTestRunnerSession *)arg1;
@end

