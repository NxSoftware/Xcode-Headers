//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@interface NSOutlineView (DVTAdditions)
- (void)dvt_expandRowAndPossiblySiblings:(id)arg1;
- (void)dvt_setExpansionState:(BOOL)arg1 forItem:(id)arg2 animated:(BOOL)arg3;
- (void)dvt_toggleExpansionItem:(id)arg1 animated:(BOOL)arg2;
- (id)dvt_childrenOfItem:(id)arg1;
- (void)dvt_cusotmizeDisclosureButtonToAllowDisclosingSiblings:(id)arg1;
- (id)dvt_rowIndexesOfVisibleItems:(id)arg1;
- (id)dvt_contextMenuSelectedItems;
- (id)dvt_selectedItems;
- (id)dvt_itemsAtRowIndexes:(id)arg1;
- (void)dvt_enumerateExpandedItemsUsingBlock:(CDUnknownBlockType)arg1;
@end

