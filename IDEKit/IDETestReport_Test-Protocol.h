//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDETestReport_Base-Protocol.h>
#import <IDEKit/NSObject-Protocol.h>

@class NSArray, NSImage, NSString;

@protocol IDETestReport_Test <NSObject, IDETestReport_Base>
@property(readonly, nonatomic) BOOL ide_testReport_test_hasActivities;
@property(readonly, copy, nonatomic) NSString *ide_testReport_test_keyPath;
@property(readonly, copy, nonatomic) NSString *ide_testReport_test_UUID;
@property(readonly, copy, nonatomic) NSString *ide_testReport_test_missingBaselineInfo;
@property(readonly, nonatomic) BOOL ide_testReport_test_passed;
@property(readonly, nonatomic) NSImage *ide_testReport_test_statusImage;
@property(readonly, copy, nonatomic) NSString *ide_testReport_test_testClassName;
@property(readonly, copy, nonatomic) NSString *ide_testReport_test_testName;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_test_testRuns;
@property(readonly, nonatomic) BOOL ide_testReport_test_fetchesTestRunsLazily;
@property(readonly, copy, nonatomic) NSArray *ide_testReport_test_perfMetrics;

@optional
- (void)ide_testReport_test_fetchTestsWithCompletionHandler:(void (^)(NSArray *))arg1;
@end

