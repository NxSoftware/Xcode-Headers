//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTStackBacktrace;

@interface DVTMTLAppleEventManagerHandler : NSObject
{
    id _realHandler;
    SEL _realHandleEventSelector;
    DVTStackBacktrace *_creationBacktrace;
}

@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
@property SEL realHandleEventSelector; // @synthesize realHandleEventSelector=_realHandleEventSelector;
@property __weak id realHandler; // @synthesize realHandler=_realHandler;
- (void).cxx_destruct;
- (void)handleAppleEvent:(id)arg1 withReplyEvent:(id)arg2;

@end

