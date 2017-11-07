//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDESchemeActionAbstractTestSummaryObject.h>

@class NSArray, NSString;

@interface IDESchemeActionTestSummary : IDESchemeActionAbstractTestSummaryObject
{
    unsigned long long _status;
    double _duration;
    NSString *_identifier;
    NSString *_testSummaryGUID;
    NSArray *_failureSummaries;
    NSArray *_performanceMetrics;
    NSArray *_activitySummaries;
}

+ (unsigned long long)testStatusForString:(id)arg1;
+ (id)stringForTestStatus:(unsigned long long)arg1;
@property(copy) NSArray *activitySummaries; // @synthesize activitySummaries=_activitySummaries;
@property(copy) NSArray *performanceMetrics; // @synthesize performanceMetrics=_performanceMetrics;
@property(copy) NSArray *failureSummaries; // @synthesize failureSummaries=_failureSummaries;
@property(copy) NSString *testSummaryGUID; // @synthesize testSummaryGUID=_testSummaryGUID;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property double duration; // @synthesize duration=_duration;
@property unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;
- (id)dictionaryRepresentation;
- (void)loadAttachmentsFromDirectory:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 status:(unsigned long long)arg3 failureSummaries:(id)arg4 performanceMetrics:(id)arg5 activitySummaries:(id)arg6;

@end

