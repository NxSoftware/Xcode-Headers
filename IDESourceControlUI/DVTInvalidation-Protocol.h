//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDESourceControlUI/NSObject-Protocol.h>

@class DVTStackBacktrace;

@protocol DVTInvalidation <NSObject>
- (void)primitiveInvalidate;

@optional
+ (BOOL)supportsInvalidationPrevention;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
@property(nonatomic, retain) DVTStackBacktrace *creationBacktrace;
@property(nonatomic, readonly) DVTStackBacktrace *invalidationBacktrace;
- (BOOL)isValid;
- (void)invalidate;

// Remaining properties
@property(nonatomic, readonly) BOOL valid;
@end

