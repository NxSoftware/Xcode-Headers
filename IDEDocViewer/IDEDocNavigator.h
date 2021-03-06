//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEOutlineBasedNavigator.h>

@class NSArray, NSMutableSet, NSSet;

@interface IDEDocNavigator : IDEOutlineBasedNavigator
{
    NSSet *_expandedItems;
    BOOL _restoringState;
    id _selectedItem;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (void)initialize;
@property(retain) id selectedItem; // @synthesize selectedItem=_selectedItem;
- (void).cxx_destruct;
- (id)nameArraysForItems:(id)arg1;
- (id)itemsForNameArrays:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (id)stateSavingExpandedItems;
- (void)setStateSavingExpandedItems:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)focusSearchField;
- (void)updateWithURL:(id)arg1;
- (void)updateWithDomainObjects:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *contextMenuSelectedNavItems;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(copy) NSSet *expandedItems; // @dynamic expandedItems;
@property(readonly, copy) NSMutableSet *mutableExpandedItems; // @dynamic mutableExpandedItems;

@end

