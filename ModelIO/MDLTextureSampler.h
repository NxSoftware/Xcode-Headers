//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MDLTexture, MDLTextureFilter, MDLTransform;

@interface MDLTextureSampler : NSObject
{
    MDLTexture *texture;
    MDLTextureFilter *hardwareFilter;
    MDLTransform *transform;
}

@property(retain, nonatomic) MDLTransform *transform; // @synthesize transform;
@property(retain, nonatomic) MDLTextureFilter *hardwareFilter; // @synthesize hardwareFilter;
@property(retain, nonatomic) MDLTexture *texture; // @synthesize texture;
- (void).cxx_destruct;

@end

