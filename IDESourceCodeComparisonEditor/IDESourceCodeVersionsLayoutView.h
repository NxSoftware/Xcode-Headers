//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTBorderedView.h>

@class IDESourceCodeVersionsTwoUpSubmode, NSScroller, NSSplitView, NSTrackingArea, NSView;
@protocol DVTComparisonScrollContentAreaDelegate;

@interface IDESourceCodeVersionsLayoutView : DVTBorderedView
{
    NSTrackingArea *_trackingArea;
    NSSplitView *_comparisonSplitView;
    NSScroller *_globalScroller;
    NSView *_rightContentView;
    id <DVTComparisonScrollContentAreaDelegate> _contentAreaDelegate;
    IDESourceCodeVersionsTwoUpSubmode *_submode;
}

@property __weak IDESourceCodeVersionsTwoUpSubmode *submode; // @synthesize submode=_submode;
@property __weak id <DVTComparisonScrollContentAreaDelegate> contentAreaDelegate; // @synthesize contentAreaDelegate=_contentAreaDelegate;
@property(retain) NSView *rightContentView; // @synthesize rightContentView=_rightContentView;
@property(retain) NSScroller *globalScroller; // @synthesize globalScroller=_globalScroller;
@property(retain) NSSplitView *comparisonSplitView; // @synthesize comparisonSplitView=_comparisonSplitView;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)_windowOrderedOut:(id)arg1;
- (void)_windowOrderedIn:(id)arg1;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)viewDidHide;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewWillDraw;
- (void)updateTrackingAreas;
- (void)layoutTopDown;

@end

