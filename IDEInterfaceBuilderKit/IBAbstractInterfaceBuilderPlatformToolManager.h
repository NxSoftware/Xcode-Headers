//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface IBAbstractInterfaceBuilderPlatformToolManager : NSObject
{
    NSHashTable *_tools;
    NSMutableDictionary *_toolCacheByDescription;
    NSMutableDictionary *_callbackEntriesByDescription;
    NSObject<OS_dispatch_queue> *_asyncLaunchingQueue;
    NSObject<OS_dispatch_queue> *_executionQueue;
}

+ (id)_THREADSAFE_launchNewToolWithLaunchContext:(id)arg1 executionContext:(id)arg2 toolProxyClass:(Class)arg3 failureContext:(id)arg4 requestingMethod:(id)arg5 error:(id *)arg6 forReason:(CDUnknownBlockType)arg7;
+ (id)_THREADSAFE_injectDiagnosticsHandlerWithFailureContext:(id)arg1 intoError:(id)arg2 forLaunchingToolWithError:(CDUnknownBlockType)arg3;
+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // @synthesize executionQueue=_executionQueue;
- (void).cxx_destruct;
- (void)enumerateToolsWithBlock:(CDUnknownBlockType)arg1;
- (void)didLaunchTool:(id)arg1 withDescription:(id)arg2;
- (void)shutdownAndClearReferencesToTool:(id)arg1;
- (void)asyncLaunchNewToolWithDescription:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 forReason:(CDUnknownBlockType)arg4;
- (id)launchNewToolWithDescription:(id)arg1 error:(id *)arg2 forReason:(CDUnknownBlockType)arg3;
- (BOOL)_determineContextsForLaunchingToolWithDescription:(id)arg1 returningLaunchContext:(id *)arg2 returningExecutionContext:(id *)arg3 returningFailureContext:(id *)arg4 error:(id *)arg5 forReason:(CDUnknownBlockType)arg6;
- (void)asyncCachedToolWithDescription:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 forReason:(CDUnknownBlockType)arg4;
- (id)cachedToolWithDescription:(id)arg1 error:(id *)arg2 forReason:(CDUnknownBlockType)arg3;
- (void)_saveCachedTool:(id)arg1 forDescription:(id)arg2 orLogLaunchError:(id)arg3;
- (id)_existingCachedToolWithDescription:(id)arg1 requestingMethod:(id)arg2 forReason:(CDUnknownBlockType)arg3;
- (id)_existingCachedToolWithDescriptionWithoutLogging:(id)arg1;
- (id)executionContextForDescription:(id)arg1 error:(id *)arg2;
- (Class)toolProxyClass;
- (id)contextForLaunchingToolWithDescription:(id)arg1 error:(id *)arg2;
- (void)assertOnExecutionQueue;
- (id)init;

@end

