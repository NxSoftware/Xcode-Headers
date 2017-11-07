//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol DYResource;

@interface DYRenderingAttributes : NSObject
{
    unsigned int _fundamentalType;
    struct CGColorSpace *_colorSpace;
    id <DYResource> _toneMapResource;
    char _channelStates[4];
    struct ToneMapRange _toneMapValues[4];
    struct ToneMapRange _toneMapLimits[4];
    struct ToneMapRange _toneMapDefaults[4];
    double _toneMapFactors[4];
    BOOL _userDefaultAlphaOverride;
    BOOL _toneMapIsFromUser;
    BOOL _convertTosRGB;
    unsigned char _alphaChannelIndex;
    int _selectedMipmapLevel;
    int _selectedLayer;
    unsigned int _resourceFormat;
    long long _numberOfColumns;
    NSString *_displayFormat;
    struct CGRect _documentRect;
}

+ (id)renderedImageWithImageInfo:(struct ImageInfo)arg1 size:(struct CGSize)arg2 imageData:(id)arg3 dataOffset:(unsigned long long)arg4 showDepth:(BOOL)arg5 flipped:(BOOL)arg6 showAlpha:(BOOL)arg7;
+ (unsigned char)maxImageChannels;
+ (unsigned char)invalidChannelIndex;
@property(readonly, nonatomic) unsigned char alphaChannelIndex; // @synthesize alphaChannelIndex=_alphaChannelIndex;
@property(copy, nonatomic) NSString *displayFormat; // @synthesize displayFormat=_displayFormat;
@property(nonatomic) long long numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) struct CGRect documentRect; // @synthesize documentRect=_documentRect;
@property(readonly, nonatomic) unsigned int resourceFormat; // @synthesize resourceFormat=_resourceFormat;
@property(nonatomic) int selectedLayer; // @synthesize selectedLayer=_selectedLayer;
@property(nonatomic) int selectedMipmapLevel; // @synthesize selectedMipmapLevel=_selectedMipmapLevel;
@property(nonatomic) BOOL convertTosRGB; // @synthesize convertTosRGB=_convertTosRGB;
@property(nonatomic) BOOL toneMapIsFromUser; // @synthesize toneMapIsFromUser=_toneMapIsFromUser;
- (void).cxx_destruct;
- (id)renderedImageUsingRenderer:(struct ImageRenderer *)arg1 imageInfo:(struct ImageInfo)arg2 size:(struct CGSize)arg3 imageData:(id)arg4 dataOffset:(unsigned long long)arg5 showDepth:(BOOL)arg6 flipped:(BOOL)arg7 showAlpha:(BOOL)arg8;
- (void)updateToneMapRangeAndResource:(id)arg1 showingDepth:(BOOL)arg2 usingRenderer:(struct ImageRenderer *)arg3;
- (double)toneMapFactorForChannelIndex:(unsigned char)arg1;
- (double)defaultMaxForChannelIndex:(unsigned char)arg1;
- (double)defaultMinForChannelIndex:(unsigned char)arg1;
- (double)toneMapLimitMaxForChannelIndex:(unsigned char)arg1;
- (double)toneMapLimitMinForChannelIndex:(unsigned char)arg1;
- (void)setToneMapMax:(double)arg1 forChannelIndex:(unsigned char)arg2;
- (double)toneMapMaxForChannelIndex:(unsigned char)arg1;
- (void)setToneMapMin:(double)arg1 forChannelIndex:(unsigned char)arg2;
- (double)toneMapMinForChannelIndex:(unsigned char)arg1;
- (void)setChannelEnabled:(BOOL)arg1 forIndex:(unsigned char)arg2;
- (BOOL)isChannelEnabledForIndex:(unsigned char)arg1;
@property(readonly, nonatomic) unsigned int toneMapType;
- (void)dealloc;
- (id)init;

@end

