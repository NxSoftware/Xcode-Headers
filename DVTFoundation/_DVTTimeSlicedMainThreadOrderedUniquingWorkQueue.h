//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DVTFoundation/DVTTimeSlicedMainThreadWorkQueue.h>

@class NSMutableOrderedSet;

@interface _DVTTimeSlicedMainThreadOrderedUniquingWorkQueue : DVTTimeSlicedMainThreadWorkQueue
{
    NSMutableOrderedSet *_workItems;
}

- (void).cxx_destruct;
- (void)_processWorkItemsWithDeadline:(double)arg1;
- (void)_removeWorkItems:(id)arg1;
- (void)_removeWorkItem:(id)arg1;
- (BOOL)_workIsEnqueued;
- (void)_removeAllWorkItems;
- (void)_addWorkItemsAtFront:(id)arg1;
- (void)_addWorkItemAtFront:(id)arg1;
- (void)_addWorkItems:(id)arg1;
- (void)_addWorkItem:(id)arg1;
- (void)primitiveInvalidate;
- (id)_init;

@end

