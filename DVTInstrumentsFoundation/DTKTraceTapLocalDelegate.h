//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTTapLocalDelegate.h"

@class DTKPSession, DTKTraceTapConfig, DTTapLocal, NSMutableArray, NSString;

@interface DTKTraceTapLocalDelegate : NSObject <DTTapLocalDelegate>
{
    DTTapLocal *_tap;
    DTKTraceTapConfig *_config;
    CDUnknownBlockType _taskForPid;
    BOOL _removeArchivingURLWhenComplete;
    long long _triggerCount;
    unsigned int *_triggerIDs;
    NSMutableArray *_metadataByTriggerIndex;
    DTKPSession *_session;
    BOOL _stopWasCalled;
}

- (void).cxx_destruct;
- (void)fetchDataForReason:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)canFetchWhileArchiving;
- (void)unpause;
- (void)pause;
- (void)stop;
- (void)start;
- (void)setTaskForPidBlock:(CDUnknownBlockType)arg1;
- (void)setTap:(id)arg1;
- (id)validateConfig;
- (id)initWithConfig:(id)arg1;
- (id)_getSessionMetadata;
- (unsigned long long)bufferSizeForConfiguration:(id)arg1;
- (unsigned long long)_clampBufferSize:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

