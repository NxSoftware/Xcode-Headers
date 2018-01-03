//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBICAbstractCatalogItem, IBMutableIdentityDictionary, NSArray, NSMutableArray;

@interface IBICOutlineViewItem : NSObject
{
    IBMutableIdentityDictionary *_catalogChildrenToOutlineChildren;
    NSMutableArray *_filteredOrderedOutlineChildren;
    IBICOutlineViewItem *_parent;
    BOOL _expanded;
    BOOL _passedLastFilter;
    IBICAbstractCatalogItem *_catalogItem;
}

@property BOOL passedLastFilter; // @synthesize passedLastFilter=_passedLastFilter;
@property(getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property(readonly) NSArray *filteredOrderedOutlineChildren; // @synthesize filteredOrderedOutlineChildren=_filteredOrderedOutlineChildren;
@property(readonly) IBICAbstractCatalogItem *catalogItem; // @synthesize catalogItem=_catalogItem;
@property(readonly) __weak IBICOutlineViewItem *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (id)description;
- (id)selectDragDestinationForItems:(id)arg1 andInsertionIndex:(long long *)arg2;
- (BOOL)isFiltered;
- (BOOL)childrenHaveIntrinsicOrder;
- (id)outlineItemForDescendantCatalogItem:(id)arg1 applyingFilter:(BOOL)arg2;
- (void)recursivelyPopulateExpandedItemIDs:(id)arg1;
- (void)recursivelyApplyExpansionStateToOutlineView:(id)arg1;
- (void)expandReceiverAndAncestors;
- (void)refreshWithFilterComponents:(id)arg1;
- (BOOL)directlyPassesFilterComponents:(id)arg1;
- (void)dvt_shouldDeallocate;
- (id)initWithItem:(id)arg1 parent:(id)arg2;

@end

