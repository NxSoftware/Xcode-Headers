//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceOutlineItem.h>

@class GPUTraceAPIItem, NSArray;

@interface GPUTraceResourcesItem : GPUTraceOutlineItem
{
    NSArray *_resourceItems;
    long long _type;
}

@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)APIItem;
- (void)purgeResourceObjects:(id)arg1;
- (void)populateUnusedResourcesData;
- (void)populateUnusedResourcesMetadata;
@property(readonly, nonatomic) NSArray *resourceItems;
@property(readonly, nonatomic) BOOL areResourceItemsLoaded;
- (id)initWithType:(long long)arg1 controller:(id)arg2 parent:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) __weak GPUTraceAPIItem *parent; // @dynamic parent;

@end

