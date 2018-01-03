//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBICSchemaProvider-Protocol.h>

@class IBICColorSpace, IBICDeviceOrientation, IBICExtent, IBICHeightClass, IBICIdiom, IBICLanguageDirection, IBICPlatform, IBICScale, IBICSize, IBICSubtype, IBICSystemVersion, IBICWidthClass, NSString;

@interface IBICCocoaTouchSchemaAdditions : NSObject <IBICSchemaProvider>
{
    IBICPlatform *_iOSPlatform;
    IBICIdiom *_universalIdiom;
    IBICIdiom *_phoneIdiom;
    IBICIdiom *_padIdiom;
    IBICIdiom *_carIdiom;
    IBICIdiom *_marketingIdiom;
    IBICSubtype *_anySubtype;
    IBICSubtype *_retina4Subtype;
    IBICSubtype *_retinaHDSubtype;
    IBICSubtype *_retina47Subtype;
    IBICSubtype *_phoneXSubtype;
    IBICScale *_anyScale;
    IBICScale *_oneXScale;
    IBICScale *_twoXScale;
    IBICScale *_threeXScale;
    IBICSize *_size20;
    IBICSize *_size29;
    IBICSize *_size40;
    IBICSize *_size50;
    IBICSize *_size57;
    IBICSize *_size60;
    IBICSize *_size72;
    IBICSize *_size76;
    IBICSize *_size83_5;
    IBICSize *_size1024;
    IBICSize *_size27x20;
    IBICSize *_size32x24;
    IBICSize *_size60x45;
    IBICSize *_size67x50;
    IBICSize *_size74x55;
    IBICSize *_size1024x768;
    IBICDeviceOrientation *_portraitOrientation;
    IBICDeviceOrientation *_portraitUpsideDownOrientation;
    IBICDeviceOrientation *_landscapeOrientation;
    IBICDeviceOrientation *_landscapeLeftOrientation;
    IBICDeviceOrientation *_landscapeRightOrientation;
    IBICExtent *_extentToStatusBar;
    IBICExtent *_extentFullScreen;
    IBICSystemVersion *_iOSv7;
    IBICSystemVersion *_iOSv8;
    IBICSystemVersion *_iOSv9;
    IBICSystemVersion *_iOSv10;
    IBICSystemVersion *_iOSv11;
    IBICWidthClass *_anyWidth;
    IBICWidthClass *_compactWidth;
    IBICWidthClass *_regularWidth;
    IBICHeightClass *_anyHeight;
    IBICHeightClass *_compactHeight;
    IBICHeightClass *_regularHeight;
    IBICColorSpace *_anyColorSpace;
    IBICColorSpace *_sRGBColorSpace;
    IBICColorSpace *_P3ColorSpace;
    IBICLanguageDirection *_anyLanguageDirection;
    IBICLanguageDirection *_leftToRightLanguageDirection;
    IBICLanguageDirection *_rightToLeftLanguageDirection;
}

- (void).cxx_destruct;
- (BOOL)hideD22;
- (void)registerColorSetSlots:(id)arg1;
- (void)registerTextureSetSlots:(id)arg1;
- (void)registerModelSetSlots:(id)arg1;
- (void)registerDataSetSlots:(id)arg1;
- (void)registerLaunchImageSetSlots:(id)arg1;
- (void)registerStickerIconSlots:(id)arg1;
- (void)registerAppIconSetSlots:(id)arg1;
- (id)appIconDetailAreaGroupPathForIdiom:(id)arg1 size:(id)arg2;
- (void)registerImageSetSlots:(id)arg1;
- (void)registerSchemaComponents:(id)arg1;
- (void)registerClasses:(id)arg1;
- (void)captureExistingSlotComponents:(id)arg1;
- (void)registerSlotComponents:(id)arg1;
- (double)precedence;
- (id)platformID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

