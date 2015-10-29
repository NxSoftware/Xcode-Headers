//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface DYRenderingAttributes : NSObject
{
    struct ReductionJob<float> floatReductionJob;
    struct ReductionJob<int> intReductionJob;
    struct ReductionJob<unsigned int> uintReductionJob;
    id <DYResource> _toneMapResource;
    unsigned int _fundamentalType;
    struct CGColorSpace *_colorSpace;
    BOOL _toneMapEnable;
    BOOL _toneMapIsFromUser;
    BOOL _redEnable;
    BOOL _greenEnable;
    BOOL _blueEnable;
    BOOL _alphaEnable;
    BOOL _convertTosRGB;
    BOOL _convertToLinear;
    float _toneMapExtentMin;
    float _toneMapExtentMax;
    float _toneMapSliderMin;
    float _toneMapSliderMax;
    int _selectedMipmapLevel;
    int _selectedLayer;
    double _toneMapMin;
    double _toneMapMax;
    long long _numberOfColumns;
    NSString *_displayFormat;
    struct CGRect _documentRect;
}

+ (id)renderedImageWithImageInfo:(struct ImageInfo)arg1 size:(struct CGSize)arg2 imageData:(id)arg3 dataOffset:(unsigned long long)arg4 showDepth:(BOOL)arg5 flipped:(BOOL)arg6 showAlpha:(BOOL)arg7;
+ (unsigned int)getRenderableFormatFromImage:(id)arg1 showDepth:(BOOL)arg2 dataOffsetOut:(unsigned long long *)arg3;
@property(copy, nonatomic) NSString *displayFormat; // @synthesize displayFormat=_displayFormat;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) struct CGRect documentRect; // @synthesize documentRect=_documentRect;
@property(nonatomic) int selectedLayer; // @synthesize selectedLayer=_selectedLayer;
@property(nonatomic) int selectedMipmapLevel; // @synthesize selectedMipmapLevel=_selectedMipmapLevel;
@property(nonatomic) BOOL convertToLinear; // @synthesize convertToLinear=_convertToLinear;
@property(nonatomic) BOOL convertTosRGB; // @synthesize convertTosRGB=_convertTosRGB;
@property(nonatomic) BOOL alphaEnable; // @synthesize alphaEnable=_alphaEnable;
@property(nonatomic) BOOL blueEnable; // @synthesize blueEnable=_blueEnable;
@property(nonatomic) BOOL greenEnable; // @synthesize greenEnable=_greenEnable;
@property(nonatomic) BOOL redEnable; // @synthesize redEnable=_redEnable;
@property(nonatomic) float toneMapSliderMax; // @synthesize toneMapSliderMax=_toneMapSliderMax;
@property(nonatomic) float toneMapSliderMin; // @synthesize toneMapSliderMin=_toneMapSliderMin;
@property(nonatomic) float toneMapExtentMax; // @synthesize toneMapExtentMax=_toneMapExtentMax;
@property(nonatomic) float toneMapExtentMin; // @synthesize toneMapExtentMin=_toneMapExtentMin;
@property(nonatomic) BOOL toneMapIsFromUser; // @synthesize toneMapIsFromUser=_toneMapIsFromUser;
@property(readonly, nonatomic) double toneMapMax; // @synthesize toneMapMax=_toneMapMax;
@property(readonly, nonatomic) double toneMapMin; // @synthesize toneMapMin=_toneMapMin;
@property(nonatomic) BOOL toneMapEnable; // @synthesize toneMapEnable=_toneMapEnable;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)renderedImageUsingRenderer:(struct ImageRenderer *)arg1 imageInfo:(struct ImageInfo)arg2 size:(struct CGSize)arg3 imageData:(id)arg4 dataOffset:(unsigned long long)arg5 showDepth:(BOOL)arg6 flipped:(BOOL)arg7;
- (void)calculateToneMapMinMaxForResource:(id)arg1 showDepth:(BOOL)arg2 usingRenderer:(struct ImageRenderer *)arg3;
- (unsigned int)toneMapType;
- (void)dealloc;
- (id)init;
- (CDStruct_c3b9c2ee)_toneMapUsingRenderer:(struct ImageRenderer *)arg1 showDepth:(BOOL)arg2;
- (BOOL)_calculateMinMaxUsingRenderer:(struct ImageRenderer *)arg1 showDepth:(BOOL)arg2;
- (BOOL)calculateMinMaxFromUserInputForType:(unsigned int)arg1;

@end

