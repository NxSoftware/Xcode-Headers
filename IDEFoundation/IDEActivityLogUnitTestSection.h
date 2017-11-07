//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEActivityLogSection.h>

@class IDETestIdentifier, NSString;

@interface IDEActivityLogUnitTestSection : IDEActivityLogSection
{
    NSString *_testsPassedString;
    NSString *_durationString;
    NSString *_summaryString;
    NSString *_suiteName;
    NSString *_testName;
    NSString *_performanceTestOutputString;
    long long _testsPassedCount;
}

+ (Class)logRecorderClass;
+ (id)defaultLogSectionDomainType;
@property long long testsPassedCount; // @synthesize testsPassedCount=_testsPassedCount;
@property(copy) NSString *performanceTestOutputString; // @synthesize performanceTestOutputString=_performanceTestOutputString;
@property(copy) NSString *testName; // @synthesize testName=_testName;
@property(copy) NSString *suiteName; // @synthesize suiteName=_suiteName;
@property(copy) NSString *summaryString; // @synthesize summaryString=_summaryString;
@property(copy) NSString *durationString; // @synthesize durationString=_durationString;
@property(copy) NSString *testsPassedString; // @synthesize testsPassedString=_testsPassedString;
- (void).cxx_destruct;
@property(readonly, copy) IDETestIdentifier *testIdentifier;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)dvt_initFromDeserializer:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initUnitTestWithTitle:(id)arg1 location:(id)arg2;

@end

