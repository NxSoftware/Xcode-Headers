//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet;

@interface _DVTTimeSlicedMainThreadActiveWorkQueues : NSObject
{
    NSMutableOrderedSet *_workQueues[5];
    char _workQueuesActive[5];
    BOOL _nextProcessingBatchScheduled;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)_removeWorkQueue:(id)arg1 atSlot:(unsigned long long)arg2;
- (void)_addWorkQueue:(id)arg1 atSlot:(unsigned long long)arg2;
- (void)_scheduleProcessing;
- (id)_nextWorkQueue;
- (void)_processWorkQueuesOnDeadline;
- (id)init;

@end

