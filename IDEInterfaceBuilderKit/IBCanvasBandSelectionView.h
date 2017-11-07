//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CALayer;

@interface IBCanvasBandSelectionView : NSView
{
    CALayer *_bandSelectionLayer;
    CDUnknownBlockType _drawingCompletionBlock;
    struct CGRect _bandSelectionFrame;
}

@property(copy, nonatomic) CDUnknownBlockType drawingCompletionBlock; // @synthesize drawingCompletionBlock=_drawingCompletionBlock;
@property(nonatomic) struct CGRect bandSelectionFrame; // @synthesize bandSelectionFrame=_bandSelectionFrame;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)makeBackingLayer;
- (id)hitTest:(struct CGPoint)arg1;

@end

