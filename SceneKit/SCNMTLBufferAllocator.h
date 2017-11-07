//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, SCNFixedSizePage;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface SCNMTLBufferAllocator : NSObject
{
    id <MTLDevice> _device;
    unsigned long long _bufferSize;
    unsigned long long _elementSize;
    NSString *_name;
    NSMutableArray *_pages;
    SCNFixedSizePage *_currentAllocatorPage;
    struct os_unfair_lock_s _allocatorLock;
}

@property(readonly, nonatomic) unsigned long long elementSize; // @synthesize elementSize=_elementSize;
@property(readonly, nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
- (id)newSubBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 blitEncoder:(id)arg3;
- (id)_newSubBuffer;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 fixedSizeElement:(unsigned long long)arg2 buffersize:(unsigned long long)arg3 name:(id)arg4;

@end

