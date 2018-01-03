//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class IDEDocSearchResultItem;

@interface IDEDocSearchResultTableRowView : NSTableRowView
{
    BOOL _mouseInside;
    IDEDocSearchResultItem *_resultItem;
}

+ (id)keyPathsForValuesAffectingSeparator;
+ (id)keyPathsForValuesAffectingHeader;
+ (id)keyPathsForValuesAffectingSelectable;
@property(nonatomic) BOOL mouseInside; // @synthesize mouseInside=_mouseInside;
@property(retain) IDEDocSearchResultItem *resultItem; // @synthesize resultItem=_resultItem;
- (void).cxx_destruct;
- (void)drawSeparatorInRect:(struct CGRect)arg1;
- (void)drawSelectionInRect:(struct CGRect)arg1;
- (long long)selectionHighlightStyle;
- (void)setFrame:(struct CGRect)arg1;
@property(readonly, getter=isSeparator) BOOL separator;
- (BOOL)isHeader;
@property(readonly, getter=isSelectable) BOOL header;

// Remaining properties
@property(readonly, getter=isSelectable) BOOL selectable;

@end

