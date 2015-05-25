//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSEvent, NSMenu, SCNNode;

@protocol DBGInteractiveSceneViewDelegate <NSObject>
- (void)sceneViewDidChangeFrameSize;
- (void)adjustCameraPositionWithXValue:(double)arg1 YValue:(double)arg2;
- (void)adjustCameraPanWithXValue:(double)arg1 YValue:(double)arg2;
- (void)adjustCameraZoomLevelWithValue:(double)arg1;
- (void)resetPivotNode;
- (void)updatePivotNodeWithNode:(SCNNode *)arg1 withHitLocation:(struct SCNVector3)arg2;
- (void)draggedRangeSliderNode:(SCNNode *)arg1 withEvent:(NSEvent *)arg2 locationInSceneView:(struct CGPoint)arg3;
- (void)hideViewsForNode:(SCNNode *)arg1 withEvent:(NSEvent *)arg2;
- (NSMenu *)menuForNode:(SCNNode *)arg1 withEvent:(NSEvent *)arg2;
- (void)mouseUpAfterDraggingRangeSliderNode:(SCNNode *)arg1;
- (void)mouseUpAfterDrag;
- (void)mousedOverNode:(SCNNode *)arg1;
- (void)mouseDoubleClickedAndHitNode:(SCNNode *)arg1 withEvent:(NSEvent *)arg2;
- (void)mouseClickedAndHitNode:(SCNNode *)arg1 withEvent:(NSEvent *)arg2;
@end
