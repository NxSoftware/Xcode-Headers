//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GPURenderTargetEditor/GPUFauxUIElement.h>

@class GPURenderBuffer, NSString;

__attribute__((visibility("hidden")))
@interface GPURenderBufferUIElement : GPUFauxUIElement
{
    GPURenderBuffer *_renderBuffer;
    NSString *_accessibilityTitle;
}

@property(readonly, nonatomic) NSString *accessibilityTitle; // @synthesize accessibilityTitle=_accessibilityTitle;
@property(readonly, nonatomic) GPURenderBuffer *renderBuffer; // @synthesize renderBuffer=_renderBuffer;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithRenderBuffer:(id)arg1 parent:(id)arg2 title:(id)arg3;

@end

