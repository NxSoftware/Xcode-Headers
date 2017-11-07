//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GPURenderTargetEditor/NSObject-Protocol.h>

@class DYRenderingAttributes;
@protocol DYResource;

@protocol DYOpenGLViewContentProvider <NSObject>
- (struct DYInterposeVersion *)usedInterposerVersion;
- (DYRenderingAttributes *)renderingAttributes;
- (BOOL)flipped;
- (BOOL)wantsDepth;
- (struct CGSize)imageSize;
- (id <DYResource>)resource;
- (id <DYResource>)overlayResource;
@end

