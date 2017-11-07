//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSScrollView.h>

@class NSMutableArray, NSView;

@interface XDScrollView : NSScrollView
{
    NSMutableArray *_vScrollerViews;
    NSMutableArray *_hScrollerViews;
    double _vScrollerMargin;
    double _hScrollerMargin;
    NSView *_vScrollerAccessoryView;
    NSView *_hScrollerAccessoryView;
    double _vScrollerAccessoryViewThickness;
    double _hScrollerAccessoryViewThickness;
    struct _XDScrollViewFlags _svFlags;
}

+ (double)defaultReservedThicknessForHorizontalScrollerAccessoryView;
+ (void)setDefaultReservedThicknessForHorizontalScrollerAccessoryView:(double)arg1;
+ (double)defaultReservedThicknessForVerticalScrollerAccessoryView;
+ (void)setDefaultReservedThicknessForVerticalScrollerAccessoryView:(double)arg1;
+ (double)defaultHorizontalScrollerMargin;
+ (void)setDefaultHorizontalScrollerMargin:(double)arg1;
+ (double)defaultVerticalScrollerMargin;
+ (void)setDefaultVerticalScrollerMargin:(double)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawBorderForHorizontalScrollerViews;
- (void)_drawBorderForVerticalScrollerViews;
- (void)tile;
- (void)tileHorizontalScrollerViews;
- (void)tileVerticalScrollerViews;
- (double)reservedThicknessForHorizontalScrollerAccessoryView;
- (void)setReservedThicknessForHorizontalScrollerAccessoryView:(double)arg1;
- (double)reservedThicknessForVerticalScrollerAccessoryView;
- (void)setReservedThicknessForVerticalScrollerAccessoryView:(double)arg1;
- (id)horizontalScrollerAccessoryView;
- (void)setHorizontalScrollerAccessoryView:(id)arg1;
- (id)verticalScrollerAccessoryView;
- (void)setVerticalScrollerAccessoryView:(id)arg1;
- (int)_horizontalScrollerAccessoryViewPosition;
- (int)horizontalScrollerAccessoryViewPosition;
- (void)setHorizontalScrollerAccessoryViewPosition:(int)arg1;
- (int)_verticalScrollerAccessorViewPosition;
- (int)verticalScrollerAccessoryViewPosition;
- (void)setVerticalScrollerAccessoryViewPosition:(int)arg1;
- (BOOL)hasHorizontalScrollerAccessoryView;
- (void)setHasHorizontalScrollerAccessoryView:(BOOL)arg1;
- (BOOL)hasVerticalScrollerAccessoryView;
- (void)setHasVerticalScrollerAccessoryView:(BOOL)arg1;
- (void)removeAllHorizontalScrollerViews;
- (void)removeHorizontalScrollerViewAtIndex:(long long)arg1;
- (void)removeHorizontalScrollerView:(id)arg1;
- (void)insertHorizontalScrollerView:(id)arg1 atIndex:(long long)arg2;
- (void)addHorizontalScrollerView:(id)arg1;
- (void)removeAllVerticalScrollerViews;
- (void)removeVerticalScrollerViewAtIndex:(long long)arg1;
- (void)removeVerticalScrollerView:(id)arg1;
- (void)insertVerticalScrollerView:(id)arg1 atIndex:(long long)arg2;
- (void)addVerticalScrollerView:(id)arg1;
- (id)_horizontalScrollerViews;
- (id)_verticalScrollerViews;
- (id)horizontalScrollerViews;
- (id)verticalScrollerViews;
- (int)_horizontalScrollerViewsPosition;
- (int)horizontalScrollerViewsPosition;
- (void)setHorizontalScrollerViewsPosition:(int)arg1;
- (int)_verticalScrollerViewsPosition;
- (int)verticalScrollerViewsPosition;
- (void)setVerticalScrollerViewsPosition:(int)arg1;
- (BOOL)hasHorizontalScrollerViews;
- (void)setHasHorizontalScrollerViews:(BOOL)arg1;
- (BOOL)hasVerticalScrollerViews;
- (void)setHasVerticalScrollerViews:(BOOL)arg1;
- (double)horizontalScrollerMargin;
- (void)setHorizontalScrollerMargin:(double)arg1;
- (double)verticalScrollerMargin;
- (void)setVerticalScrollerMargin:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

