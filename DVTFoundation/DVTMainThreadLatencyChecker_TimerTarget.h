//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTStackBacktrace;

@interface DVTMainThreadLatencyChecker_TimerTarget : NSObject
{
    DVTStackBacktrace *_creationBacktrace;
    id _realTarget;
    SEL _realSelector;
}

@property SEL realSelector; // @synthesize realSelector=_realSelector;
@property(retain) id realTarget; // @synthesize realTarget=_realTarget;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
- (void).cxx_destruct;
- (void)timerFireMethod:(id)arg1;

@end

