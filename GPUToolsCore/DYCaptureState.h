//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DYCaptureState : NSObject
{
    unsigned long long _capturedFrames;
    BOOL _allDataReceivedAck;
    unordered_map_59f2ab5d _dispatchQueueLabelMap;
    unordered_map_1ffb0842 _threadLabelMap;
}

@property(readonly, nonatomic) unordered_map_1ffb0842 threadLabelMap; // @synthesize threadLabelMap=_threadLabelMap;
@property(readonly, nonatomic) unordered_map_59f2ab5d dispatchQueueLabelMap; // @synthesize dispatchQueueLabelMap=_dispatchQueueLabelMap;
@property(nonatomic) BOOL allDataReceivedAck; // @synthesize allDataReceivedAck=_allDataReceivedAck;
@property(nonatomic) unsigned long long capturedFrames; // @synthesize capturedFrames=_capturedFrames;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

