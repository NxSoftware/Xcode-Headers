//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUResourceEditor.h"

#import "GPUDataTableViewDataProvider.h"
#import "GPUDataTableViewDelegate.h"

@class DYRenderingAttributes, GPUDataTableView, NSColor, NSObject<GPUGLVertexAttributesProtocol>, NSString;

__attribute__((visibility("hidden")))
@interface GPUGLVertexAttributesEditor : GPUResourceEditor <GPUDataTableViewDataProvider, GPUDataTableViewDelegate>
{
    NSObject<GPUGLVertexAttributesProtocol> *_attributes;
    DYRenderingAttributes *_renderingAttributes;
    BOOL _isPopulated;
    BOOL _hasVertexArray;
    NSColor *_backgroundColor;
    GPUDataTableView *_tableView;
    long long _vertexCount;
}

@property(nonatomic) long long vertexCount; // @synthesize vertexCount=_vertexCount;
@property(nonatomic) __weak GPUDataTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)supportedResourceClasses;
- (void)viewWillUninstall;
- (void)beginEditor;
- (void)populate;
- (void)setRepresentedObject:(id)arg1;
- (void)loadView;
- (double)dataTableView:(id)arg1 minimumWidthForColumn:(long long)arg2 inGroup:(long long)arg3;
- (id)dataTableView:(id)arg1 textForCellAtRow:(long long)arg2 column:(long long)arg3 inColumnGroup:(long long)arg4;
- (BOOL)isElementIndexPrimitiveRestart:(unsigned long long)arg1;
- (id)dataTableView:(id)arg1 titleForColumnGroup:(long long)arg2;
- (id)dataTableView:(id)arg1 titleForColumn:(long long)arg2 inGroup:(long long)arg3;
- (long long)dataTableView:(id)arg1 numberOfColumnsInGroup:(long long)arg2;
- (long long)numberOfColumnGroupsInTableView:(id)arg1;
- (long long)numberOfRowsInDataTableView:(id)arg1;
- (id)processColumnGroup:(long long)arg1 usingBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

