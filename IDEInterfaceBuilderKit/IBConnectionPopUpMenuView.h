//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTStackView_ML.h"

@class DVTTypeCompletionHandler, IBConnectionPopUpMenuItemView, IBImageButton, IBMutableIdentityDictionary, IBScrollingStackView, NSArray, NSColor, NSMutableArray;

@interface IBConnectionPopUpMenuView : DVTStackView_ML
{
    IBScrollingStackView *_scrollingItemView;
    IBImageButton *_scrollUpButton;
    IBImageButton *_scrollDownButton;
    NSColor *_backgroundColor;
    NSMutableArray *_itemViews;
    NSMutableArray *_installedItemViews;
    NSArray *_menuItems;
    DVTTypeCompletionHandler *_typeCompletionHandler;
    IBConnectionPopUpMenuItemView *_explanationItemsSeparator;
    IBConnectionPopUpMenuItemView *_multipleSelectionExplanationItem;
    IBConnectionPopUpMenuItemView *_multipleSelectionAcceptItem;
    IBConnectionPopUpMenuItemView *_alternateItemsExplanationItem;
    IBMutableIdentityDictionary *_itemViewsByItem;
    IBMutableIdentityDictionary *_itemsByItemView;
    BOOL _optionIsDown;
    BOOL _allowsMultipleSelection;
    BOOL _allowsAndNeedsMultipleSelection;
    BOOL _hasAlternateItems;
    id <IBConnectionPopUpMenuDelegate> _delegate;
}

@property(readonly, nonatomic) BOOL hasAlternateItems; // @synthesize hasAlternateItems=_hasAlternateItems;
@property(readonly, nonatomic) BOOL allowsAndNeedsMultipleSelection; // @synthesize allowsAndNeedsMultipleSelection=_allowsAndNeedsMultipleSelection;
@property(nonatomic) BOOL allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
@property __weak id <IBConnectionPopUpMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)effectiveBackgroundColor;
- (void)setAlternateMenuItemsVisible:(BOOL)arg1 returningNewLastHitView:(id *)arg2 returningNewHighlightedItemView:(id *)arg3;
- (void)ensureItemIsVisible:(id)arg1;
- (id)trackValueWithEvent:(id)arg1;
- (id)typeCompletionHandler:(id)arg1 typeCompletionStringForObject:(id)arg2;
- (BOOL)scrollDown;
- (BOOL)scrollUp;
- (void)refreshScrollers;
- (BOOL)isItemView:(id)arg1;
- (void)associateMenuItem:(id)arg1 withItemView:(id)arg2;
- (id)menuItemForItemView:(id)arg1;
- (id)itemViewForMenuItem:(id)arg1;
- (void)setHighlightedBackgroundColor:(id)arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)configureScrollButtonImages:(id)arg1 upButton:(BOOL)arg2;
- (id)initWithMenuItems:(id)arg1 showsStateImagesForItems:(id)arg2 allowsMultipleSelection:(BOOL)arg3 withMultipleSelectionAcceptsTitle:(id)arg4 andMaxWidth:(double)arg5;

@end

