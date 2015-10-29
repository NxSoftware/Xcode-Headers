//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTCancellable.h"

@class DVTOperation, NSString;

@interface DVTDisallowFinishToken : NSObject <DVTCancellable>
{
    DVTOperation *_operation;
    NSString *_reason;
}

@property(readonly) NSString *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (void)cancel;
@property(readonly, getter=isCancelled) BOOL cancelled;
@property(readonly, copy) NSString *description;
- (id)initWithReason:(id)arg1 operation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

