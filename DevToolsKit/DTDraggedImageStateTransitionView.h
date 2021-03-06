//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class DTDraggedImageState;

@interface DTDraggedImageStateTransitionView : NSView
{
    float progress;
    DTDraggedImageState *fromState;
    DTDraggedImageState *toState;
}

- (id)toState;
- (id)fromState;
- (float)progress;
- (void)setProgress:(float)arg1;
- (double)duration;
- (struct CGPoint)anchorPoint;
- (void)dealloc;
- (id)initWithFromState:(id)arg1 andToState:(id)arg2;

@end

