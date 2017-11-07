//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DebuggerUI/NSObject-Protocol.h>

@class NSEvent, NSMenu, SCNNode;

@protocol DBGInteractiveSceneViewDelegate <NSObject>
- (void)navigateSceneWithKeyboardEvent:(NSEvent *)arg1;
- (void)sceneViewDidChangeFrameSize;
- (void)rotate3DViewsWithXValue:(double)arg1 yValue:(double)arg2;
- (void)adjustCameraPanWithXValue:(double)arg1 yValue:(double)arg2;
- (void)adjustCameraZoomLevelWithValue:(double)arg1 towardsCursorLocation:(struct SCNVector3)arg2;
- (void)resetPivotNode;
- (void)updatePivotNodeWithNode:(SCNNode *)arg1 withHitLocation:(struct SCNVector3)arg2;
- (void)draggedRangeSliderNode:(SCNNode *)arg1 withEvent:(NSEvent *)arg2 locationInSceneView:(struct CGPoint)arg3;
- (void)mouseMovedAfterRest;
- (void)mouseRests;
- (void)hideViewsForNode:(SCNNode *)arg1 withEvent:(NSEvent *)arg2;
- (NSMenu *)menuForNode:(SCNNode *)arg1 withEvent:(NSEvent *)arg2;
- (void)mouseUpAfterDraggingRangeSliderNode:(SCNNode *)arg1;
- (void)mouseUpAfterDrag;
- (void)mousedOverNode:(SCNNode *)arg1;
- (void)mouseClickedAndHitRangeSliderNode:(SCNNode *)arg1 withEvent:(NSEvent *)arg2;
- (void)mouseClickedAndHitNode:(SCNNode *)arg1 withEvent:(NSEvent *)arg2;
@end

