//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DTTimelineMouseStateValidator : NSObject
{
    id <DTTimelineMouseStateValidatorDelegate> _delegate;
    unsigned long long _currentState;
}

+ (id)_validStateTransistions;
+ (id)descriptionForState:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
- (void).cxx_destruct;
- (void)transitionToState:(unsigned long long)arg1 event:(id)arg2;
- (void)_assertOrLogOldState:(unsigned long long)arg1 newState:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

@end

