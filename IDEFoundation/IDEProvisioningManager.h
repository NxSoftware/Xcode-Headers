//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDEProvisioningMechanicContextProvider-Protocol.h>
#import <IDEFoundation/IDEProvisioningMechanicDelegate-Protocol.h>
#import <IDEFoundation/IDEProvisioningStyleDataSourceProvider-Protocol.h>

@class DVTDispatchLock, DVTLogAspect, DVTPerformanceMetric, DVTProvisioningProfileManager, DVTSigningCertificateManager, DVTStackBacktrace, IDEProvisioningLedger, IDEProvisioningManagerContext, IDEProvisioningTeamManager, IDEProvisioningUserAction, NSMapTable, NSMutableSet, NSSet, NSString;
@protocol IDEProvisionableProvider, IDEProvisioningManagerDelegate, OS_dispatch_queue;

@interface IDEProvisioningManager : NSObject <IDEProvisioningMechanicDelegate, DVTInvalidation, IDEProvisioningStyleDataSourceProvider, IDEProvisioningMechanicContextProvider>
{
    DVTDispatchLock *_onDemandEvaluationFuturesLock;
    NSMutableSet *_onDemandEvaluationFutures;
    BOOL _finishedInitialProvisionableLoading;
    IDEProvisioningManagerContext *_context;
    IDEProvisioningLedger *_ledger;
    NSMapTable *_provisionablesToManagers;
    DVTLogAspect *_logAspect;
    DVTPerformanceMetric *_loadingMetric;
    DVTDispatchLock *_repairLock;
    NSMapTable *_repairablesToObservers;
    NSMapTable *_observersToRepairables;
    NSMapTable *_repairableToRepairState;
    IDEProvisioningUserAction *_delegateApprovedUserAction;
    id <IDEProvisionableProvider> _provisionableProvider;
    id <IDEProvisioningManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateCallbackQueue;
}

+ (id)keyPathsForValuesAffectingProvisionableDevices;
+ (void)setRequiredCodesignableDevices:(id)arg1;
+ (id)requiredCodesignableDevices;
+ (void)setAutomaticallyRegisterDevices:(BOOL)arg1;
+ (BOOL)automaticallyRegisterDevices;
+ (void)setSupportCommandLineRepairs:(BOOL)arg1;
+ (BOOL)supportCommandLineRepairs;
+ (id)keyPathsForValuesAffectingFinishedLoading;
+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateCallbackQueue; // @synthesize delegateCallbackQueue=_delegateCallbackQueue;
@property(nonatomic) __weak id <IDEProvisioningManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <IDEProvisionableProvider> provisionableProvider; // @synthesize provisionableProvider=_provisionableProvider;
@property(retain, nonatomic) IDEProvisioningUserAction *delegateApprovedUserAction; // @synthesize delegateApprovedUserAction=_delegateApprovedUserAction;
@property(readonly, nonatomic) NSMapTable *repairableToRepairState; // @synthesize repairableToRepairState=_repairableToRepairState;
@property(readonly, nonatomic) NSMapTable *observersToRepairables; // @synthesize observersToRepairables=_observersToRepairables;
@property(readonly, nonatomic) NSMapTable *repairablesToObservers; // @synthesize repairablesToObservers=_repairablesToObservers;
@property(readonly, nonatomic) DVTDispatchLock *repairLock; // @synthesize repairLock=_repairLock;
@property(retain, nonatomic) DVTPerformanceMetric *loadingMetric; // @synthesize loadingMetric=_loadingMetric;
@property(nonatomic) BOOL finishedInitialProvisionableLoading; // @synthesize finishedInitialProvisionableLoading=_finishedInitialProvisionableLoading;
@property(retain, nonatomic) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(retain, nonatomic) NSMapTable *provisionablesToManagers; // @synthesize provisionablesToManagers=_provisionablesToManagers;
@property(readonly, nonatomic) IDEProvisioningLedger *ledger; // @synthesize ledger=_ledger;
@property(retain, nonatomic) IDEProvisioningManagerContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)setDelegate:(id)arg1 callbackQueue:(id)arg2;
- (void)repairForRepairable:(id)arg1 userAction:(id)arg2 didFailWithError:(id)arg3;
- (void)repairUserAction:(id)arg1 didFinishForRepairable:(id)arg2;
- (void)_userActionFinished:(id)arg1;
- (void)repairUserActionDidBeginForRepairable:(id)arg1;
- (void)repairForRepairable:(id)arg1 requiresUserAction:(id)arg2;
- (BOOL)_doesDelegateAuthorizeOrPendUserAction:(id)arg1 repairable:(id)arg2 observers:(id)arg3;
- (void)repairForRepairable:(id)arg1 didFailWithError:(id)arg2;
- (void)repairDidFinishForRepairable:(id)arg1;
- (void)repairForRepairable:(id)arg1 isExecutingStep:(id)arg2;
- (void)repairDidBeginForRepairable:(id)arg1;
- (void)repairPendingForRepairable:(id)arg1;
- (void)_performStateUpdateOnMainThreadForRepairable:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (id)_observersForRepairable:(id)arg1;
- (id)_repairablesForObserver:(id)arg1;
- (id)_allRepairables;
- (void)_removeObserver:(id)arg1 forRepairable:(id)arg2;
- (void)_addObserver:(id)arg1 forRepairable:(id)arg2;
- (void)setRepairables:(id)arg1 forObserver:(id)arg2 retryExistingRepairs:(BOOL)arg3 repairStateCallback:(CDUnknownBlockType)arg4;
- (void)setRepairables:(id)arg1 forObserver:(id)arg2 repairStateCallback:(CDUnknownBlockType)arg3;
- (void)setRepairables:(id)arg1 forObserver:(id)arg2;
- (id)evaluateProvisioningForProvisionable:(id)arg1 overrides:(id)arg2 deviceSnapshots:(id)arg3 isXBS:(BOOL)arg4;
- (void)waitUntilFinished;
@property(readonly, nonatomic) NSSet *provisionableDevices;
- (id)teamsForScheme:(id)arg1 commands:(id)arg2 buildConfiguration:(id)arg3;
@property(readonly, getter=isFinishedLoading) BOOL finishedLoading;
- (void)_provisionablesChanged;
- (void)_finishedLoading;
- (void)_setUpObservations;
@property(readonly, nonatomic) NSSet *provisionableManagers;
- (id)managerForProvisionable:(id)arg1;
- (id)mechanic;
@property(readonly, nonatomic) DVTSigningCertificateManager *certificateManager;
@property(readonly, nonatomic) DVTProvisioningProfileManager *profileManager;
@property(readonly, nonatomic) IDEProvisioningTeamManager *teamManager;
- (void)primitiveInvalidate;
- (void)_commonInit;
- (id)initWithProvisionableProvider:(id)arg1 context:(id)arg2;
- (id)initWithProvisionableProvider:(id)arg1 provisioningContext:(id)arg2;
- (id)initWithProvisionableProvider:(id)arg1;
- (id)_defaultContext;
- (id)_newMechanic;
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

