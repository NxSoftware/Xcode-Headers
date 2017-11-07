//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/DTTapLocalDelegate-Protocol.h>

@class DTSysmonTapConfig, DTTapLocal, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source, OS_sysmon_request;

@interface DTSysmonTapLocalDelegate : NSObject <DTTapLocalDelegate>
{
    DTTapLocal *_tap;
    DTSysmonTapConfig *_config;
    NSSet *_pidFilter;
    BOOL _isWindowed;
    unsigned long long _lastWindowPurgeTime;
    unsigned long long _purgeEveryNTicks;
    unsigned long long _effectiveWindowSize;
    BOOL _stopWasCalled;
    NSObject<OS_dispatch_source> *_pollTimer;
    NSObject<OS_dispatch_queue> *_serialQ;
    NSObject<OS_dispatch_semaphore> *_samplesLock;
    NSMutableArray *_samples;
    NSMutableDictionary *_newAttributesSample;
    NSDictionary *_processesFromLastSample;
    NSDictionary *_coalitionsFromLastSample;
    NSMutableDictionary *_processesAtWindowBeginning;
    NSMutableDictionary *_systemAtWindowBeginning;
    NSMutableDictionary *_coalitionsAtWindowBeginning;
    NSArray *_processAttributes;
    NSArray *_systemAttributes;
    NSArray *_coalitionAttributes;
    NSObject<OS_sysmon_request> *_processRequest;
    NSObject<OS_sysmon_request> *_systemRequest;
    NSObject<OS_sysmon_request> *_coalitionRequest;
    unsigned long long _processLastSampleTime;
    unsigned long long _systemLastSampleTime;
    unsigned long long _coalitionLastSampleTime;
    unsigned int _cpuCount;
    struct processor_cpu_load_info *_savedTicks;
}

- (void).cxx_destruct;
- (void)fetchDataForReason:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)canFetchWhileArchiving;
- (void)unpause;
- (void)pause;
- (void)stop;
- (void)start;
- (void)_purgeOldSamplesForCurrentTime:(unsigned long long)arg1;
- (void)_createAttributesSample;
- (void)_handleSysmonCoalitionTable:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3;
- (void)_handleSysmonSystemTable:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3;
- (void)_handleSysmonProcessTable:(id)arg1 startTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3;
- (void)_addCPUUsageToSample:(id)arg1;
- (void)_addSample:(id)arg1;
- (void)setTap:(id)arg1;
- (id)validateConfig;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;
- (id)_getSessionMetadata;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

