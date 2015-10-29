//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTDispatchLock, NSMapTable, NSMutableArray, NSObject<OS_dispatch_queue>, _IDEPlaygroundDataSerializationRead;

@interface IDEPlaygroundDataSerializationCoordinator : NSObject
{
    DVTDispatchLock *_coordinatorDataLock;
    NSMutableArray *_pendingWrites;
    NSMutableArray *_pendingReads;
    _IDEPlaygroundDataSerializationRead *_currentRead;
    NSObject<OS_dispatch_queue> *_readEventQueue;
    NSMapTable *_playgroundPathsToSerializationOperations;
    BOOL ioOperationInProgress;
}

+ (id)sharedPlaygroundDataSerializationCoordinator;
- (void).cxx_destruct;
- (id)_cachePathForPlaygroundPath:(id)arg1;
- (void)_processPendingWrite:(id)arg1;
- (BOOL)_processPendingRead:(id)arg1;
- (id)_locked_nextOperationToDo;
- (void)_processPendingSerializationOperations;
- (void)_locked_removePendingOperation:(id)arg1 fromQueue:(id)arg2;
- (void)_locked_addPendingOperation:(id)arg1 toQueue:(id)arg2;
- (void)replaySerializedPlaygroundDataForPlayground:(id)arg1 overridingSerializedDataPath:(id)arg2 callbackQueue:(id)arg3 callbackBlock:(CDUnknownBlockType)arg4;
- (void)clearSerializedPlaygroundDataForPlaygroundDocument:(id)arg1;
- (void)handleNewSerializedPlaygroundDataAtPath:(id)arg1 forPlaygroundDocument:(id)arg2;
- (void)_unscheduleOperationsForPlaygroundDocument:(id)arg1 unscheduleReadsOnly:(BOOL)arg2;
- (void)playgroundDocumentWillClose:(id)arg1;
- (void)playgroundDocumentDidStartNewExecution:(id)arg1;
- (void)removeTemporarySerializedPlaygroundDataAtPath:(id)arg1;
- (id)init;

@end

