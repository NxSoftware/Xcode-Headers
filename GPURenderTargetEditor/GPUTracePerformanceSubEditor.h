//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPURenderTargetEditor/GPUTraceSubEditor.h>

#import <GPURenderTargetEditor/IDEFilterControlBarTarget-Protocol.h>
#import <GPURenderTargetEditor/NSCollectionViewDataSource-Protocol.h>
#import <GPURenderTargetEditor/NSCollectionViewDelegate-Protocol.h>
#import <GPURenderTargetEditor/NSMenuDelegate-Protocol.h>
#import <GPURenderTargetEditor/NSOutlineViewDelegate-Protocol.h>

@class GPUTraceNoDataViewController, GPUTracePerformanceBottleneckTableDataSource, GPUTracePerformanceCounterTableDataSource, GPUTracePerformanceItem, GPUTracePerformanceSubEditorOutlineView, IDETokenFilterControlBar, NSCollectionView, NSMenu, NSMenuItem, NSScrollView, NSString, NSTableView, NSView;

__attribute__((visibility("hidden")))
@interface GPUTracePerformanceSubEditor : GPUTraceSubEditor <NSCollectionViewDataSource, NSCollectionViewDelegate, NSOutlineViewDelegate, NSMenuDelegate, IDEFilterControlBarTarget>
{
    GPUTracePerformanceCounterTableDataSource *_counterTableDataSource;
    GPUTracePerformanceBottleneckTableDataSource *_bottleneckDataSource;
    GPUTraceNoDataViewController *_noDataViewController;
    NSScrollView *_scrollView;
    NSCollectionView *_collectionView;
    NSView *_counterTableContainerView;
    NSView *_bottleneckTableContainerView;
    NSView *_tabBarContainerView;
    GPUTracePerformanceSubEditorOutlineView *_counterOutlineView;
    GPUTracePerformanceSubEditorOutlineView *_bottleneckOutlineView;
    NSMenu *_contextMenu;
    NSMenuItem *_showCounterDocumentationItem;
    IDETokenFilterControlBar *_filterControlBar;
    NSView *_floatingView;
    NSTableView *_floatingTableView;
    id _objectValue;
}

@property(retain, nonatomic) id objectValue; // @synthesize objectValue=_objectValue;
@property __weak NSTableView *floatingTableView; // @synthesize floatingTableView=_floatingTableView;
@property __weak NSView *floatingView; // @synthesize floatingView=_floatingView;
@property __weak IDETokenFilterControlBar *filterControlBar; // @synthesize filterControlBar=_filterControlBar;
@property __weak NSMenuItem *showCounterDocumentationItem; // @synthesize showCounterDocumentationItem=_showCounterDocumentationItem;
@property __weak NSMenu *contextMenu; // @synthesize contextMenu=_contextMenu;
@property __weak GPUTracePerformanceSubEditorOutlineView *bottleneckOutlineView; // @synthesize bottleneckOutlineView=_bottleneckOutlineView;
@property __weak GPUTracePerformanceSubEditorOutlineView *counterOutlineView; // @synthesize counterOutlineView=_counterOutlineView;
@property __weak NSView *tabBarContainerView; // @synthesize tabBarContainerView=_tabBarContainerView;
@property __weak NSView *bottleneckTableContainerView; // @synthesize bottleneckTableContainerView=_bottleneckTableContainerView;
@property __weak NSView *counterTableContainerView; // @synthesize counterTableContainerView=_counterTableContainerView;
@property __weak NSCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)filteredItemsChanged;
- (id)filterButtonAccessibilityDescription;
- (id)filterButtonToolTip;
- (id)filterButtonMenu;
- (id)filterDefinitionIdentifier;
- (void)collectionView:(id)arg1 willDisplayItem:(id)arg2 forRepresentedObjectAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)_notifyRelayoutBottleneckView;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (id)_createCounterTableSection:(id)arg1;
- (id)_createBottleneckSection:(id)arg1;
- (void)_constraintView:(id)arg1 toParentView:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldShowOutlineCellForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (void)gotoButtonClicked:(id)arg1;
- (void)showCounterDocumentation:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)handleNotification:(id)arg1;
@property(retain) GPUTracePerformanceItem *representedObject; // @dynamic representedObject;
- (void)_addNoDataView;
- (void)_refreshDataSource;
- (double)_heightOfOutlineView:(id)arg1;
- (void)_setupFilterBar;
- (void)_updateFloatingViewPosition;
- (void)scrollBoundsDidChange:(id)arg1;
- (void)collectionViewFrameDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSView *view;

@end

