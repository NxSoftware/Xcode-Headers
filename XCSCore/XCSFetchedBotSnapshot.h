//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface XCSFetchedBotSnapshot : NSObject
{
    NSString *_botName;
    NSString *_xcodeVersion;
    NSString *_issuesStreak;
    NSNumber *_testAdditionRate;
    NSNumber *_regressedPerf;
    NSNumber *_improvedPerf;
    NSNumber *_coverageChange;
}

+ (id)snapshotWithBotName:(id)arg1 xcodeVersion:(id)arg2 issuesStreak:(id)arg3 testAdditionRate:(id)arg4 regressedPerf:(id)arg5 improvedPerf:(id)arg6 coverageChange:(id)arg7;
@property(copy, nonatomic) NSNumber *coverageChange; // @synthesize coverageChange=_coverageChange;
@property(copy, nonatomic) NSNumber *improvedPerf; // @synthesize improvedPerf=_improvedPerf;
@property(copy, nonatomic) NSNumber *regressedPerf; // @synthesize regressedPerf=_regressedPerf;
@property(copy, nonatomic) NSNumber *testAdditionRate; // @synthesize testAdditionRate=_testAdditionRate;
@property(copy, nonatomic) NSString *issuesStreak; // @synthesize issuesStreak=_issuesStreak;
@property(copy, nonatomic) NSString *xcodeVersion; // @synthesize xcodeVersion=_xcodeVersion;
@property(copy, nonatomic) NSString *botName; // @synthesize botName=_botName;
- (void).cxx_destruct;

@end

