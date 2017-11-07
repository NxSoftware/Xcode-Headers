//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GPUDebuggerKit/GPUBufferViewerResourceValue-Protocol.h>

@class GPUTraceResourceItem, NSString;

__attribute__((visibility("hidden")))
@interface GPUBufferViewerResourceValue : NSObject <GPUBufferViewerResourceValue>
{
    GPUTraceResourceItem *_resourceItem;
    unsigned long long _offset;
}

@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(readonly, nonatomic) GPUTraceResourceItem *resourceItem; // @synthesize resourceItem=_resourceItem;
- (void).cxx_destruct;
- (id)initWithResourceItem:(id)arg1 offset:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

