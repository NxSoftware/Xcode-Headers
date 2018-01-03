//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUToolsServices/ExportTexture-Protocol.h>

@class DYTextureSizeInfo;
@protocol DYTexture;

__attribute__((visibility("hidden")))
@interface ExportDYTexture : NSObject <ExportTexture>
{
    BOOL _isDepth;
    id <DYTexture> _texture;
    DYTextureSizeInfo *_info;
}

@property(readonly, nonatomic) BOOL isDepth; // @synthesize isDepth=_isDepth;
@property(readonly, nonatomic) DYTextureSizeInfo *info; // @synthesize info=_info;
@property(readonly, nonatomic) id <DYTexture> texture; // @synthesize texture=_texture;
- (void).cxx_destruct;
- (id)uncompressedData;
- (id)dataForMipmapLevel:(int)arg1 layer:(int)arg2;
- (unsigned int)pixelFormat;
- (BOOL)isYAxisDown;
- (unsigned int)numberOfMipmapLevels;
- (unsigned int)numberOfFaces;
- (unsigned int)numberOfArrayElements;
- (unsigned int)pixelDepth;
- (unsigned int)pixelHeight;
- (unsigned int)pixelWidth;
- (id)initWithTexture:(id)arg1 info:(id)arg2 properties:(id)arg3;

@end

