//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBAccessorizedScrollViewScroller.h>

@class IBCanvasScrollView;

@interface IBCanvasScroller : IBAccessorizedScrollViewScroller
{
    IBCanvasScrollView *_canvasScrollView;
}

+ (BOOL)isCompatibleWithOverlayScrollers;
@property(nonatomic) __weak IBCanvasScrollView *canvasScrollView; // @synthesize canvasScrollView=_canvasScrollView;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)arg1;
- (void)setHiddenIgnoringCanUpdateScrollers:(BOOL)arg1;

@end

