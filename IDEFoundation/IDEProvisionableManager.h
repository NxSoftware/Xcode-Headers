//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDEProvisioningManagerRepairObserver-Protocol.h>
#import <IDEFoundation/IDEProvisioningStyleDataSource-Protocol.h>

@class DVTDelayedInvocation, DVTNotificationToken, DVTPerformanceMetric, DVTStackBacktrace, IDEProvisionableStatusEvaluator, IDEProvisioningManager, NSArray, NSMutableSet, NSOrderedSet, NSSet, NSString;
@protocol IDEMutableProvisionable, IDEProvisionable;

@interface IDEProvisionableManager : NSObject <IDEProvisioningManagerRepairObserver, DVTInvalidation, IDEProvisioningStyleDataSource>
{
    unsigned int _currentGeneration;
    NSMutableSet *_repairStateObservers;
    BOOL _disableEvaluation;
    BOOL _configurationsFinishedLoading;
    id <IDEProvisionable> _provisionable;
    IDEProvisioningManager *_manager;
    IDEProvisionableStatusEvaluator *_statusEvaluator;
    NSArray *_statusErrors;
    DVTDelayedInvocation *_delayedStatusEvaluation;
    NSArray *_configurations;
    DVTNotificationToken *_profilesDidChangeToken;
    DVTNotificationToken *_certificatesDidChangeToken;
    DVTNotificationToken *_provisionableDidChangeToken;
    DVTNotificationToken *_repairActionToken;
    DVTNotificationToken *_accountsToken;
    NSSet *_entitlementsFilePaths;
    DVTPerformanceMetric *_loadingMetric;
}

+ (id)keyPathsForValuesAffectingProvisioningSelectionDataSources;
+ (id)keyPathsForValuesAffectingTeams;
+ (id)keyPathsForValuesAffectingFinishedLoading;
+ (id)statusEvaluatorQueue;
+ (void)initialize;
@property(retain, nonatomic) DVTPerformanceMetric *loadingMetric; // @synthesize loadingMetric=_loadingMetric;
@property(retain, nonatomic) NSSet *entitlementsFilePaths; // @synthesize entitlementsFilePaths=_entitlementsFilePaths;
@property(nonatomic) BOOL configurationsFinishedLoading; // @synthesize configurationsFinishedLoading=_configurationsFinishedLoading;
@property(retain) DVTNotificationToken *accountsToken; // @synthesize accountsToken=_accountsToken;
@property(retain) DVTNotificationToken *repairActionToken; // @synthesize repairActionToken=_repairActionToken;
@property(retain) DVTNotificationToken *provisionableDidChangeToken; // @synthesize provisionableDidChangeToken=_provisionableDidChangeToken;
@property(retain) DVTNotificationToken *certificatesDidChangeToken; // @synthesize certificatesDidChangeToken=_certificatesDidChangeToken;
@property(retain) DVTNotificationToken *profilesDidChangeToken; // @synthesize profilesDidChangeToken=_profilesDidChangeToken;
@property(retain) NSArray *configurations; // @synthesize configurations=_configurations;
@property BOOL disableEvaluation; // @synthesize disableEvaluation=_disableEvaluation;
@property(retain) DVTDelayedInvocation *delayedStatusEvaluation; // @synthesize delayedStatusEvaluation=_delayedStatusEvaluation;
@property(copy, nonatomic) NSArray *statusErrors; // @synthesize statusErrors=_statusErrors;
@property(retain, nonatomic) IDEProvisionableStatusEvaluator *statusEvaluator; // @synthesize statusEvaluator=_statusEvaluator;
@property(retain) IDEProvisioningManager *manager; // @synthesize manager=_manager;
@property(retain) id <IDEProvisionable> provisionable; // @synthesize provisionable=_provisionable;
- (void).cxx_destruct;
@property(readonly) BOOL requiresImmediateUserActionResolution;
- (void)_performRepairsForConfigurations:(id)arg1 retryExistingRepairs:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_processEvaluationResults:(id)arg1;
@property(readonly, nonatomic, getter=isProvisioningStyleSelectable) BOOL provisioningStyleSelectable;
@property(readonly) NSArray *provisioningSelectionDataSources;
- (void)setProvisioningStyle:(long long)arg1;
@property(readonly) NSOrderedSet *teams;
@property(readonly, getter=isFinishedLoading) BOOL finishedLoading;
- (void)refreshFromPortal;
@property(readonly) id <IDEMutableProvisionable> mutableProvisionable;
- (void)delayEvaluationUntilAfterPerformingBlock:(CDUnknownBlockType)arg1 evaluateImmediately:(BOOL)arg2;
- (void)primitiveInvalidate;
- (void)immediatelyEvaluateWithOverrides:(id)arg1 deviceSnapshots:(id)arg2 shouldRepairIfNecessary:(BOOL)arg3 isXBS:(BOOL)arg4 callbackQueue:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)_updateEntitlementsFilePathsFromSnapshot:(id)arg1;
- (void)_setUpObservations;
- (void)_evaluateStatusWithStatusEvaluator:(id)arg1 overrides:(id)arg2;
- (void)_commonInit;
- (id)initWithProvisionable:(id)arg1 manager:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

