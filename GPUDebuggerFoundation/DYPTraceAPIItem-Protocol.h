//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GPUDebuggerFoundation/DYPOutlineItem-Protocol.h>

@protocol DYPStateMirror, DYPTraceAPIItem;

@protocol DYPTraceAPIItem <DYPOutlineItem>
@property(readonly) int displayIndex;
@property(readonly) int functionIndex;
@property(readonly, nonatomic) __weak id <DYPTraceAPIItem> previousDisplayableItem;
@property(readonly, nonatomic) id <DYPStateMirror> stateMirror;
@end

