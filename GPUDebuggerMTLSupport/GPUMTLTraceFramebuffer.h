//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerMTLSupport/GPUTraceDisplaySet-Protocol.h>
#import <GPUDebuggerMTLSupport/GPUTraceFramebuffer-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol DYFramebuffer, DYResource;

__attribute__((visibility("hidden")))
@interface GPUMTLTraceFramebuffer : NSObject <GPUTraceFramebuffer, GPUTraceDisplaySet>
{
    id <DYFramebuffer> _frameBufferObject;
    NSMutableDictionary *_colorResourceObjects;
    id <DYResource> _depthResourceObject;
    id <DYResource> _stencilResourceObject;
    id <DYResource> _wireframeImage;
}

@property(retain) id <DYResource> wireframeImage; // @synthesize wireframeImage=_wireframeImage;
@property(retain) id <DYResource> stencilResourceObject; // @synthesize stencilResourceObject=_stencilResourceObject;
@property(retain) id <DYResource> depthResourceObject; // @synthesize depthResourceObject=_depthResourceObject;
@property(readonly) NSMutableDictionary *colorResourceObjects; // @synthesize colorResourceObjects=_colorResourceObjects;
@property(readonly) id <DYFramebuffer> frameBufferObject; // @synthesize frameBufferObject=_frameBufferObject;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *elementIDs;
@property(readonly, nonatomic) unsigned int numElements;
- (id)attachments;
- (id)attachmentForAttachmentID:(unsigned long long)arg1;
- (id)initWithFBO:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

