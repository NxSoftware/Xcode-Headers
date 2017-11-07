//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class MTLRenderPassDescriptor, NSArray, NSDictionary, SCNNode, SCNScene;
@protocol MTLCommandBuffer, MTLDevice;

@protocol SCNRendererJSExport <JSExport>
+ (id)rendererWithDevice:(id <MTLDevice>)arg1 options:(NSDictionary *)arg2;
+ (id)rendererWithContext:(void *)arg1 options:(NSDictionary *)arg2;
@property(nonatomic) id delegate;
@property(retain, nonatomic) SCNNode *pointOfView;
@property(nonatomic) BOOL loops;
@property(nonatomic, getter=isPlaying) BOOL playing;
@property(nonatomic) BOOL jitteringEnabled;
@property(nonatomic) double currentTime;
@property(readonly, nonatomic) double nextFrameTime;
@property(retain, nonatomic) SCNScene *scene;
- (void)render;
- (void)updateProbes:(NSArray *)arg1 atTime:(double)arg2;
- (id)snapshotAtTime:(double)arg1 withSize:(struct CGSize)arg2 antialiasingMode:(unsigned long long)arg3;
- (void)renderWithViewport:(struct CGRect)arg1 commandBuffer:(id <MTLCommandBuffer>)arg2 passDescriptor:(MTLRenderPassDescriptor *)arg3;
- (void)updateAtTime:(double)arg1;
- (void)renderAtTime:(double)arg1;
- (void)renderAtTime:(double)arg1 viewport:(struct CGRect)arg2 commandBuffer:(id <MTLCommandBuffer>)arg3 passDescriptor:(MTLRenderPassDescriptor *)arg4;
@end

