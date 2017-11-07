//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerFoundation/DYPOutlineItem-Protocol.h>
#import <GPUDebuggerFoundation/GPUFilterableObject-Protocol.h>
#import <GPUDebuggerFoundation/IDEDebugNavigableModel-Protocol.h>

@class GPUDebuggerController, GPUGlobalStateManager, GPUTraceAPIItem, GPUTraceModelFactory, IDELaunchSession, NSArray, NSMutableArray, NSMutableSet, NSSet, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface GPUTraceOutlineItem : NSObject <IDEDebugNavigableModel, DYPOutlineItem, GPUFilterableObject>
{
    GPUTraceOutlineItem *_parent;
    GPUDebuggerController *_controller;
    NSMutableSet *_filterItems;
    NSSet *_parentFilterItems;
    NSString *_UUID;
    NSString *_label;
    NSMutableArray *_children;
    shared_ptr_2d3f6817 _decodedFunction;
    NSObject<OS_dispatch_queue> *_filterItemsQueue;
    BOOL _filterItemsGenerated;
}

@property(readonly, nonatomic) __weak GPUTraceOutlineItem *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) NSSet *parentFilterItems; // @synthesize parentFilterItems=_parentFilterItems;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(nonatomic) __weak GPUDebuggerController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)pathToAncestorItem:(id)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfChildren;
@property(readonly, nonatomic) struct Function *decodedFunction;
- (void)setDecodedFunctionPointer:(shared_ptr_2d3f6817)arg1;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)setParent_DoNotCallMe:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSSet *filterItems; // @synthesize filterItems=_filterItems;
- (void)generateFilterItems;
- (int)labelSource;
@property(readonly, nonatomic) GPUTraceAPIItem *APIItem;
@property(readonly, nonatomic) GPUTraceModelFactory *modelFactory;
@property(readonly, nonatomic) NSURL *locationURL;
@property(readonly, nonatomic) NSURL *captureArchiveURL;
@property(readonly, nonatomic) GPUGlobalStateManager *globalStateManager;
- (void)dealloc;
- (id)initWithController:(id)arg1 parent:(id)arg2;
- (void)sortChildren;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) NSArray *filterableChildObjects;
@property(readonly) Class superclass;

@end

