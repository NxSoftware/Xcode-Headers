//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCNScene;

@protocol SCNSceneRendererDelegate <NSObject>

@optional
- (void)renderer:(id <SCNSceneRenderer>)arg1 didRenderScene:(SCNScene *)arg2 atTime:(double)arg3;
- (void)renderer:(id <SCNSceneRenderer>)arg1 willRenderScene:(SCNScene *)arg2 atTime:(double)arg3;
- (void)renderer:(id <SCNSceneRenderer>)arg1 didSimulatePhysicsAtTime:(double)arg2;
- (void)renderer:(id <SCNSceneRenderer>)arg1 didApplyAnimationsAtTime:(double)arg2;
- (void)renderer:(id <SCNSceneRenderer>)arg1 updateAtTime:(double)arg2;
@end
