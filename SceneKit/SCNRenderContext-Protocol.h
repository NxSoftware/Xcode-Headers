//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCNRenderTargetRegistry;

@protocol SCNRenderContext <NSObject>
@property(readonly, nonatomic) id <SCNResourceManager> resourceManager;
@property(readonly, nonatomic) SCNRenderTargetRegistry *renderTargetRegistry;
@property(readonly, nonatomic) int profile;
@property(readonly, nonatomic) unsigned int features;
@property(nonatomic) BOOL showsAuthoringEnvironment;
@property(readonly, nonatomic) long long currentFrameIndex;
@property(nonatomic) double contentScaleFactor;
@property(nonatomic) long long sampleCount;
- (void)drawFullScreenQuadForPass:(struct __C3DFXPass *)arg1;
-     // Error parsing type: v148@0:8^{__C3DMesh={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}[9^{__CFArray}]^{C3DSphere}^^{__CFArray}b1b1b1b4q}16^{__C3DMeshElement=}24^{__C3DFXProgram={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}ib1b1^{__C3DFXProgramDelegate}}32^{__C3DEngineContext=}40(C3DMatrix4x4=[16f][4])48r^{C3DColor4=(?=[4f]{?=ffff})}112^{__C3DRasterizerStates=}120^{__C3DBlendStates=}128^{__C3DImage=}136c144, name: renderMesh:meshElement:withProgram:engineContext:transform:color:rasterizerStates:blendState:texture:depthBias:
- (void)renderBackground:(struct __C3DEffectSlot *)arg1 engineContext:(struct __C3DEngineContext *)arg2;
- (struct __C3DMeshElement *)createVolatileMeshElementOfType:(BOOL)arg1 primitiveCount:(long long)arg2 bytesPerIndex:(long long)arg3;
- (void)unmapVolatileMesh:(struct __C3DMesh *)arg1;
- (BOOL)mapVolatileMesh:(struct __C3DMesh *)arg1 verticesCount:(long long)arg2;
- (void)stopProcessingRendererElements;
- (void)drawRenderElement:(struct __C3DRendererElement *)arg1 withPass:(struct __C3DFXPass *)arg2;
- (void)processRendererElement:(struct __C3DRendererElement *)arg1;
- (void)startProcessingRendererElementsWithEngineIterationContext:(CDStruct_256c7a3c *)arg1;
- (id)textureForEffectSlot:(struct __C3DEffectSlot *)arg1;
- (struct __C3DEngineStats *)stats;
- (void)popDebugGroup;
- (void)pushDebugGroup:(NSString *)arg1;
- (id)newRenderTargetWithDescription:(CDStruct_2e3d5ba3 *)arg1 size: /* Error: Ran out of types for this method. */;
- (void)setBackgroundColor:(struct C3DColor4)arg1;
- (void)endRenderPass;
- (BOOL)beginRenderPass:(struct __C3DFXPass *)arg1 isFinalTechnique:(BOOL)arg2;
- (void)endFrameWaitingUntilCompleted:(BOOL)arg1;
- (void)beginFrame:(id)arg1;
@end

