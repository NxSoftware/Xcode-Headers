//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPSImageHistogram;
@protocol MTLBuffer, MTLComputePipelineState, MTLRenderPipelineState, MTLTexture;

__attribute__((visibility("hidden")))
@interface SCNPostProcessPass : NSObject
{
    unsigned long long _frameBufferFormat;
    unsigned long long _frameBufferWidth;
    unsigned long long _frameBufferHeight;
    unsigned long long _postProcessConstants;
    float _scaleFactor;
    id <MTLTexture> _dofColorCoCTexture;
    id <MTLTexture> _dofCoCTextureA;
    id <MTLTexture> _dofCoCTextureB;
    id <MTLTexture> _dofBlurTexture;
    int _dofSampleCount;
    id <MTLComputePipelineState> _dofPipelineState[5];
    id <MTLBuffer> _dofKernel;
    id <MTLTexture> _mbTileMax;
    id <MTLTexture> _mbNeighborMax;
    id <MTLTexture> _mbTexture;
    id <MTLTexture> _mbColor;
    id <MTLRenderPipelineState> _mbBlurPipelineState;
    id <MTLComputePipelineState> _mbVelocityPipelineState[3];
    id <MTLTexture> _bloomTextureA;
    id <MTLTexture> _bloomTextureB;
    id <MTLRenderPipelineState> _bloomBlurPipelineState[15];
    id <MTLComputePipelineState> _downSampleBloomDOFPipelineState[6];
    id <MTLRenderPipelineState> _postProcessPipelineState;
    MPSImageHistogram *_histogramBuilder;
    id <MTLBuffer> _framebufferHistogramBuffer;
    id <MTLBuffer> _luminanceHistogramBuffer;
    id <MTLComputePipelineState> _histogramAnalyserPipelineState;
    id <MTLBuffer> _histogramAnalysisBuffer;
    id <MTLComputePipelineState> _histogramImmediateLuminancePipelineState;
    id <MTLComputePipelineState> _histogramAdaptativeLuminancePipelineState;
    id <MTLTexture> _frameLumTexture;
    id <MTLTexture> _averageLumTexture;
    id <MTLBuffer> _autoExposureParametersBuffer;
    id <MTLRenderPipelineState> _frameLuminancePipelineState;
    id <MTLComputePipelineState> _frameLuminanceCS;
    id <MTLComputePipelineState> _slidingLuminancePipelineState;
    id <MTLComputePipelineState> _adaptativeLuminancePipelineState;
    id <MTLComputePipelineState> _fixedLuminancePipelineState;
    unsigned int _frameIndex;
}

- (void)executeWithContext:(CDStruct_b9d91b93 *)arg1;
-     // Error parsing type: v32@0:8^{?=fffffffffffffffffffIIfiff}16^{__C3DCamera={__C3DEntity={__CFRuntimeBase=QAQ}^v^{__CFString}^{__CFString}^{__CFDictionary}^{__C3DScene}q}{?=b1b1b1b1b1b1b1dddfd(C3DMatrix4x4=[16f][4]{?=[4]})dd}ffffiib1b1b1b1C(C3DMatrix4x4=[16f][4]{?=[4]})fffffffffffffffffffff{?=fffffii}^{__C3DEffectSlot}Q^{__C3DFXTechnique}}24, name: _computeDofUniforms:camera:
-     // Error parsing type: I40@0:8^{?=[16]}1624f32B36, name: _computeBloomBlurUniforms:textureSize:radius:horizontal:
- (void)setupWithContext:(CDStruct_b9d91b93 *)arg1;
- (void)_createFramebufferDependantResourcesWithRenderContext:(id)arg1 renderPassDesc:(id)arg2 postProcessConstants:(unsigned long long)arg3;
- (void)dealloc;

@end

