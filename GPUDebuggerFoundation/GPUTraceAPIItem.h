//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPUDebuggerFoundation/GPUTraceOutlineItem.h>

#import <GPUDebuggerFoundation/DYPTraceAPIItem-Protocol.h>

@class GPUTraceFramebufferItem, GPUTracePerformanceItem, GPUTracePipelineStatisticsItem, GPUTraceResourcesItem, NSArray, NSString;
@protocol DYPStateMirror, DYPTraceAPIItem;

@interface GPUTraceAPIItem : GPUTraceOutlineItem <DYPTraceAPIItem>
{
    int _functionIndex;
    int _displayIndex;
    BOOL _hasStateMirror;
    int _maxIssueSeverity;
    GPUTraceFramebufferItem *_framebufferItem;
    GPUTraceResourcesItem *_boundResourcesItem;
    GPUTraceResourcesItem *_allResourcesItem;
    GPUTracePerformanceItem *_performanceItem;
    GPUTracePipelineStatisticsItem *_pipelineStatisticsItem;
    NSArray *_stackFrames;
    id <DYPTraceAPIItem> _previousDisplayableItem;
}

@property(nonatomic) __weak id <DYPTraceAPIItem> previousDisplayableItem; // @synthesize previousDisplayableItem=_previousDisplayableItem;
@property(readonly) int displayIndex; // @synthesize displayIndex=_displayIndex;
@property(readonly) int functionIndex; // @synthesize functionIndex=_functionIndex;
- (void).cxx_destruct;
- (void)populateUnusedResourcesData;
- (void)populateUnusedResourcesMetadata;
@property(readonly, nonatomic) id <DYPStateMirror> stateMirror;
- (id)generateFenumInfo;
- (id)generateLabel;
- (void)generateFilterItems;
- (void)purgeResources;
- (id)stackFramesWithFilter:(long long)arg1;
@property(readonly, nonatomic) NSArray *stackFrames;
@property(readonly, nonatomic) GPUTracePerformanceItem *performanceItem;
@property(readonly, nonatomic) GPUTracePipelineStatisticsItem *pipelineStatisticsItem;
@property(readonly, nonatomic) GPUTraceOutlineItem *defaultOutlineItem;
@property(readonly, nonatomic) GPUTraceResourcesItem *allResourcesItem;
@property(readonly, nonatomic) GPUTraceResourcesItem *boundResourcesItem;
@property(readonly, nonatomic) GPUTraceFramebufferItem *framebufferItem;
- (id)APIItem;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithController:(id)arg1 parent:(id)arg2 functionIndex:(int)arg3 displayIndex:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) struct Function *decodedFunction;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

