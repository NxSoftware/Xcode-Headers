//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class CIFilter, NSArray, NSString, SKTextureCache;

@interface SKTexture : NSObject <NSCopying, NSCoding>
{
    BOOL _shouldGenerateMipmaps;
    BOOL _didGenerateMipmaps;
    BOOL _isPath;
    BOOL _isData;
    NSString *_imgName;
    NSArray *_searchPaths;
    struct CGRect _textRect;
    struct CGRect _textCoords;
    BOOL _disableAlpha;
    BOOL _isRotated;
    struct CGPoint _cropScale;
    struct CGPoint _cropOffset;
    int _alignment;
    int _rowLength;
    CIFilter *_filter;
    SKTexture *_originalTexture;
    unsigned int _textureTarget;
    NSString *_originalAtlasName;
    NSString *_subTextureName;
    SKTextureCache *_textureCache;
    struct jet_texture *_backingTexture;
    unsigned int *_alphaMap;
    struct CGSize _alphaMapSize;
}

+ (id)_textureWithImageNamed:(id)arg1;
+ (void)updateTextures;
+ (void)preloadTextures;
+ (void)deleteUnusedTextures;
+ (id)textureWithData:(id)arg1 size:(struct CGSize)arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)textureWithData:(id)arg1 size:(struct CGSize)arg2 flipped:(BOOL)arg3;
+ (id)textureWithData:(id)arg1 size:(struct CGSize)arg2;
+ (id)textureWithImage:(id)arg1;
+ (id)textureWithCGImage:(struct CGImage *)arg1;
+ (id)textureWithCGImage:(struct CGImage *)arg1 pointSize:(struct CGSize)arg2;
+ (id)textureNoiseWithSmoothness:(double)arg1 size:(struct CGSize)arg2 grayscale:(BOOL)arg3;
+ (id)textureVectorNoiseWithSmoothness:(double)arg1 size:(struct CGSize)arg2;
+ (id)textureWithRect:(struct CGRect)arg1 inTexture:(id)arg2;
+ (id)textureWithImageNamed:(id)arg1 rect:(struct CGRect)arg2;
+ (id)textureWithImageNamed:(id)arg1;
+ (void)preloadTextures:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)_addTextureToPreloadlist:(id)arg1;
+ (id)lookupTextureCacheForName:(id)arg1;
+ (void)registerTextureCache:(id)arg1 forName:(id)arg2;
+ (id)_textureWithGLTextureId:(unsigned int)arg1 size:(struct CGSize)arg2;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize)arg2 rowLength:(unsigned int)arg3 alignment:(unsigned int)arg4;
+ (id)_textureByTransferingData:(char *)arg1 size:(struct CGSize)arg2;
+ (id)textureWithImagePath:(id)arg1;
+ (id)_cachedTextureNames;
+ (void)_reloadTextureCacheForImageNamed:(id)arg1;
@property(readonly, nonatomic) struct CGSize alphaMapSize; // @synthesize alphaMapSize=_alphaMapSize;
@property(readonly, nonatomic) unsigned int *alphaMap; // @synthesize alphaMap=_alphaMap;
@property(copy, nonatomic) NSString *subTextureName; // @synthesize subTextureName=_subTextureName;
@property(copy, nonatomic) NSString *originalAtlasName; // @synthesize originalAtlasName=_originalAtlasName;
@property(nonatomic) struct CGPoint cropOffset; // @synthesize cropOffset=_cropOffset;
@property(nonatomic) struct CGPoint cropScale; // @synthesize cropScale=_cropScale;
- (void).cxx_destruct;
- (void)dealloc;
- (void)preload;
- (void)unload;
@property(nonatomic) long long filteringMode;
@property(nonatomic) int wrapMode;
@property(readonly, nonatomic) BOOL isRepeatable;
- (void)_loadOnTextureQueue;
- (void)_ensureImageData;
@property(nonatomic) BOOL usesMipmaps;
- (id)description;
- (id)textureByApplyingCIFilter:(id)arg1;
- (struct CGSize)size;
@property(readonly, nonatomic) struct CGSize pixelSize;
- (BOOL)isInMemory;
- (struct CGRect)textureRect;
@property(nonatomic) BOOL disableAlpha;
@property(readonly, nonatomic) BOOL useAlpha;
@property(readonly, nonatomic) BOOL hasAlpha;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImagePath:(id)arg1;
- (id)init;
- (id)initWithImageNamed:(id)arg1;
- (void)loadImageData;
- (void)initTextureCacheWithImageData;
- (void)preloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadImageDataFromCGImage:(struct CGImage *)arg1 pointsSize:(struct CGSize)arg2;
- (BOOL)loadImageDataFromPVRData:(id)arg1;
- (BOOL)loadImageDataFromPVRGZData:(id)arg1;
- (void)setTextureDimension:(const struct CGSize *)arg1 withPixelSize:(const struct CGSize *)arg2;
- (void)commonInit;
- (struct CGImage *)alphaMask;
- (BOOL)alphaTestX:(double)arg1 y:(double)arg2;
- (void)generateAlphaMapOfSize:(struct CGSize)arg1 fromImage:(struct CGImage *)arg2;
- (id)textureByGeneratingNormalMapWithSmoothness:(double)arg1 contrast:(double)arg2;
- (id)textureByGeneratingNormalMap;
@property(readonly, nonatomic) struct CGImage *CGImage;
- (id)_textureCache;
- (id)imgName;
- (shared_ptr_bb77cfd9)_backingTexture;
- (id)initWithBackingTetxure:(shared_ptr_bb77cfd9)arg1 logicalWidth:(float)arg2 height:(float)arg3;
- (id)initWithBackingTetxure:(shared_ptr_bb77cfd9)arg1;
- (void)_savePngFromGLCache:(id)arg1;
- (struct CGImage *)_newTextureFromGLCache;
- (struct CGImage *)_createCGImage;
- (struct CGImage *)_rotateCGImage:(struct CGImage *)arg1;
- (int)glTextureId;
- (id)_initWithGLTextureId:(unsigned int)arg1 size:(struct CGSize)arg2;
@property(readonly, nonatomic) NSString *imageNameOrPath;
- (id)_generateNormalMap:(double)arg1 contrast:(double)arg2 multiPass:(unsigned long long)arg3;
- (id)_copyImageData;
- (void)load;
@property(nonatomic) unsigned int textureTarget;
@property(nonatomic) BOOL isRotated;
- (void)_setImageName:(id)arg1;

@end

