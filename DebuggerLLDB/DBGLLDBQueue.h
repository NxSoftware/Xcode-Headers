//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEDebugQueue.h>

@protocol DBGSBQueue;

@interface DBGLLDBQueue : IDEDebugQueue
{
    id <DBGSBQueue> _lldbQueue;
    BOOL _derivedPendingBlocks;
    unsigned long long _numberOfPendingBlocks;
}

+ (BOOL)supportsInvalidationPrevention;
- (unsigned long long)numberOfPendingBlocks;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)pendingBlocksThreads;
- (id)lldbSession;
- (id)lldbQueue;
- (id)initWithParentProcess:(id)arg1 lldbQueue:(id)arg2;

@end

