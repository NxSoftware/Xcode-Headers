//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEClientTracking.h"

@class NSMutableSet, NSString;

@interface IDEConcreteClientTracker : NSObject <IDEClientTracking>
{
    NSMutableSet *_clientTrackingTokensRequiringCancellation;
    NSMutableSet *_clientTrackingTokensRequiringCancellationPrompt;
    NSMutableSet *_clientTrackingTokensNotSupportingCancellation;
    BOOL _isCancelling;
}

@property(readonly) BOOL isCancelling; // @synthesize isCancelling=_isCancelling;
- (void).cxx_destruct;
- (void)_clientCancellationTimeout;
- (void)cancelTrackedClients;
- (void)unregisterClient:(id)arg1;
- (id)clientsNotSupportingCancellation;
- (id)clientsRequiringCancellationPrompt;
- (id)registerUncancellableClientWithName:(id)arg1;
- (id)registerClientWithName:(id)arg1 promptForCancellation:(BOOL)arg2 cancellationBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

