//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface DTXRemoteInvocationReceipt : NSObject
{
    NSObject<OS_dispatch_queue> *_guard;
    CDUnknownBlockType _completionHandler;
    id _returnValue;
    unsigned int _returnType;
}

- (void).cxx_destruct;
- (void)invokeCompletionWithReturnValue:(id)arg1 error:(id)arg2;
- (void)handleCompletion:(CDUnknownBlockType)arg1;
- (void)_checkedAssign:(CDUnknownBlockType)arg1;
- (id)init;

@end

