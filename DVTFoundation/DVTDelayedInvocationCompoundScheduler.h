//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTFoundation/DVTDelayedInvocationScheduler.h>

@class NSArray;

@interface DVTDelayedInvocationCompoundScheduler : DVTDelayedInvocationScheduler
{
    NSArray *_schedulers;
}

@property(readonly, nonatomic) NSArray *schedulers; // @synthesize schedulers=_schedulers;
- (void).cxx_destruct;
- (void)willRunBlockForDelayedInvocation:(id)arg1;
- (void)unscheduleDelayedInvocation:(id)arg1;
- (void)scheduleDelayedInvocation:(id)arg1;
- (id)initWithSchedulers:(id)arg1;

@end

