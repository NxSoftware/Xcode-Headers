//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IBAutolayoutFoundation/IBSceneUpdateProcessingRequest.h>

@interface IBRenderingProcessingRequest : IBSceneUpdateProcessingRequest
{
    BOOL _shouldRequestAsynchronously;
}

+ (struct CGColorSpace *)colorSpace;
@property(readonly, nonatomic) BOOL shouldRequestAsynchronously; // @synthesize shouldRequestAsynchronously=_shouldRequestAsynchronously;
- (BOOL)requiresSynchronousResultProcessing;
- (id)initWithResultPhase:(long long)arg1 shouldRequestAsynchronously:(BOOL)arg2 postProcessingBlock:(CDUnknownBlockType)arg3;
- (id)initWithResultPhase:(long long)arg1 postProcessingBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

