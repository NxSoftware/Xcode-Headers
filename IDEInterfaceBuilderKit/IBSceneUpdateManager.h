//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>

@class DVTDelayedInvocation, DVTDelayedInvocationScheduler, DVTStackBacktrace, IBIncrementalSceneUpdateTracker, NSMutableSet, NSString;
@protocol IBSceneUpdateManagerDelegate;

@interface IBSceneUpdateManager : NSObject <DVTInvalidation>
{
    DVTDelayedInvocation *_updateInvocation;
    NSMutableSet *_objectsWithPendingSceneUpdates;
    NSMutableSet *_issuedSceneUpdates;
    long long _ignoreSceneInvalidationNestingCount;
    long long _assertOnSynchronousUpdatesNestingCount;
    long long _delaySceneUpdatesNestingCount;
    IBIncrementalSceneUpdateTracker *_incrementalUpdateTracker;
    NSString *_incrementalUpdateSessionID;
    BOOL _shouldUpdateScenesAsynchronously;
    id <IBSceneUpdateManagerDelegate> _delegate;
}

+ (id)ibtesting_collectDiagnosticsReportsDuring:(CDUnknownBlockType)arg1;
+ (id)runSynchronousUpdateForRoot:(id)arg1 deviceTypeDescription:(id)arg2 targetRuntime:(id)arg3 request:(id)arg4 requestConfigurationBlock:(CDUnknownBlockType)arg5;
+ (void)initialize;
@property(nonatomic) BOOL shouldUpdateScenesAsynchronously; // @synthesize shouldUpdateScenesAsynchronously=_shouldUpdateScenesAsynchronously;
@property(nonatomic) __weak id <IBSceneUpdateManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateScenesIteratively;
- (void)_updateScenes;
- (void)_updateScene:(id)arg1;
- (id)_objectPackageForSceneUpdateRequest:(id)arg1;
- (id)_sceneRootsForInvalidatedObjects;
- (id)_remoteRequesterForSceneUpdate:(id)arg1;
- (void)_cancelPendingUpdates;
- (void)_clearSceneUpdate:(id)arg1;
- (id)_sceneUpdateForEndingIncrementalSessionWithID:(id)arg1 withOriginalSceneUpdate:(id)arg2;
- (void)noteObject:(id)arg1 changedValueForKeyPath:(id)arg2;
- (BOOL)isInIncrementalUpdateSession;
- (void)establishIncrementalUpdateSessionForObject:(id)arg1 duringBlock:(CDUnknownBlockType)arg2;
- (void)ibtesting_waitForPendingUpdates;
- (void)waitForPendingUpdates;
- (void)removeReferencesToObject:(id)arg1;
- (void)stopDelayingSceneUpdatesAndUpdatePendingScenes:(BOOL)arg1;
- (void)startDelayingSceneUpdates;
- (BOOL)areSynchronousSceneUpdatesAllowed;
- (void)assertOnSynchronousUpdatesDuring:(CDUnknownBlockType)arg1;
- (void)ignoreSceneInvalidationDuring:(CDUnknownBlockType)arg1;
- (BOOL)isIgnoringSceneInvalidation;
- (void)invalidateSceneContainingObject:(id)arg1 forReason:(CDUnknownBlockType)arg2;
- (BOOL)canUpdateSceneWithRoot:(id)arg1;
@property(retain, nonatomic) DVTDelayedInvocationScheduler *updateScheduler;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

