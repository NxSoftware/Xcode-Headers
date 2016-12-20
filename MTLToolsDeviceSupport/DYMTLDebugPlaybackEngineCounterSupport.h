//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DYPlaybackEngine, NSMutableDictionary;

@interface DYMTLDebugPlaybackEngineCounterSupport : NSObject
{
    vector_5b503382 _commandBufferFrameProfilesInfo;
    vector_5b503382 _commandBufferFrameProfilesDrawCallInfo;
    struct vector<unsigned long long, std::__1::allocator<unsigned long long>> _commandBufferFrameProfiles;
    NSMutableDictionary *_frameProfiling;
    DYPlaybackEngine *_engine;
    _Bool _needsMultiplePasses;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCounters:(id)arg1;
- (id)availableCounters;
- (id)_profileFrameWithCounterListsForProfileInfo:(id)arg1;
- (id)profileFrameWithCounterListsForProfileInfo:(id)arg1;
- (struct NSDictionary *)profileEncoders;
- (void)addCommandBufferFrameProfile:(const vector_5b503382 *)arg1;
- (id)profileFrameWithPayload:(id)arg1;
- (void)_clearData;
- (BOOL)_processProfileInfosWithPayload:(id)arg1;
- (void)_computeAverageForFrameProfile:(vector_5b503382 *)arg1 forProfile:(const vector_5b503382 *)arg2;
- (void)_setupPState;
- (id)initWithPlaybackEngine:(id)arg1;

@end
