//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTSysmonBridgeDelegate-Protocol.h>
#import <IDEFoundation/IDEDebuggingAddition-Protocol.h>

@class DVTStackBacktrace, DVTSysmonBridge, IDEDataMatrix, IDELaunchSession, NSString;

@interface IDEEnergyAddition : NSObject <IDEDebuggingAddition, DVTSysmonBridgeDelegate>
{
    int _selectedPID;
    IDEDataMatrix *_metricsOverTime;
    NSString *_identifier;
    IDELaunchSession *_launchSession;
    id _launchSessionObservationToken;
    id _launchSessionObservationToken2;
    DVTSysmonBridge *_sysmonBridge;
}

+ (void)initialize;
+ (BOOL)shouldInstantiateInLaunchSession:(id)arg1;
@property(readonly, nonatomic) int selectedPID; // @synthesize selectedPID=_selectedPID;
@property(retain, nonatomic) DVTSysmonBridge *sysmonBridge; // @synthesize sysmonBridge=_sysmonBridge;
@property(retain, nonatomic) id launchSessionObservationToken2; // @synthesize launchSessionObservationToken2=_launchSessionObservationToken2;
@property(retain, nonatomic) id launchSessionObservationToken; // @synthesize launchSessionObservationToken=_launchSessionObservationToken;
@property(retain, nonatomic) IDELaunchSession *launchSession; // @synthesize launchSession=_launchSession;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) IDEDataMatrix *metricsOverTime; // @synthesize metricsOverTime=_metricsOverTime;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)bridgeHasNewProcessInformation:(id)arg1;
- (void)_handlePIDChange:(int)arg1;
- (void)_sysmondControl:(int)arg1;
- (void)processFinalLaunchParameters:(id)arg1;
- (id)initInLaunchSession:(id)arg1 withAppDisplayName:(id)arg2 runDestination:(id)arg3 fromExtension:(id)arg4;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

