//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class IDESchemeActionResult, IDESchemeActionsInvocationRecord;

@protocol IDESchemeActionsInvocationRecordUpdateDelegate
- (BOOL)shouldActionsInvocationRecord:(IDESchemeActionsInvocationRecord *)arg1 refetchRemoteCodeCoverageForSchemeActionResult:(IDESchemeActionResult *)arg2 withOriginalRemoteCodeCoverageIdentifier:(id)arg3 newRemoteCodeCoverageIdentifier:(id)arg4;
- (BOOL)shouldActionsInvocationRecord:(IDESchemeActionsInvocationRecord *)arg1 refetchRemoteCodeCoverageWithOriginalRemoteCodeCoverageIdentifier:(id)arg2 newRemoteCodeCoverageIdentifier:(id)arg3;
- (BOOL)shouldActionsInvocationRecord:(IDESchemeActionsInvocationRecord *)arg1 refetchRemoteTestSummaryForSchemeActionResult:(IDESchemeActionResult *)arg2 withOriginalRemoteTestSummaryIdentifier:(id)arg3 newRemoteTestSummaryIdentifier:(id)arg4;
- (BOOL)shouldActionsInvocationRecord:(IDESchemeActionsInvocationRecord *)arg1 refetchRemoteTestSummaryWithOriginalRemoteTestSummaryIdentifier:(id)arg2 newRemoteTestSummaryIdentifier:(id)arg3;
- (BOOL)shouldActionsInvocationRecord:(IDESchemeActionsInvocationRecord *)arg1 refetchRemoteLogForSchemeActionResult:(IDESchemeActionResult *)arg2 withOriginalRemoteLogIdentifier:(id)arg3 newRemoteLogIdentifier:(id)arg4;
- (void)fetchCodeCoverageAndUpdateRecord:(IDESchemeActionsInvocationRecord *)arg1 withCompletionBlock:(void (^)(BOOL, BOOL, NSError *))arg2;
- (void)fetchTestSummariesAndUpdateRecord:(IDESchemeActionsInvocationRecord *)arg1 withCompletionBlock:(void (^)(BOOL, BOOL, NSError *))arg2;
- (void)fetchLogsAndUpdateRecord:(IDESchemeActionsInvocationRecord *)arg1 withCompletionBlock:(void (^)(BOOL, BOOL, NSError *))arg2;
- (void)updateRecord:(IDESchemeActionsInvocationRecord *)arg1 withCompletionBlock:(void (^)(BOOL, BOOL, NSError *))arg2;
@end

