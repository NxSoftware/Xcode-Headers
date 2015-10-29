//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBTargetRuntime.h"

@class IBCocoaTouchIdiom, IBCocoaTouchOSVersion, IBCocoaTouchPlatform, IBColorList, IBUIFontDataSource, IBUIScreenMetrics, IBUISimulatedOrientationMetrics, IBUISimulatedStatusBarMetrics, NSArray, NSDictionary, NSMutableDictionary;

@interface IBCocoaTouchTargetRuntime : IBTargetRuntime
{
    IBCocoaTouchIdiom *_idiom;
    NSDictionary *systemNamesToGenericColorsMap;
    IBColorList *colorList;
    NSArray *availableFonts;
    NSDictionary *_textStyles;
    NSDictionary *_fontDescriptorTextStyles;
    NSMutableDictionary *fontsByFontName;
    NSMutableDictionary *fontsByFamily;
    NSDictionary *systemFontSizes;
    NSDictionary *systemFontInfo;
    NSDictionary *boldSystemFontInfo;
    NSDictionary *italicSystemFontInfo;
    IBUIFontDataSource *fontDataSource;
    id <DVTCancellable> _fontsObservationToken;
    IBCocoaTouchOSVersion *_cocoaTouchOSVersion;
}

+ (id)targetRuntimeWithSystemColor:(id)arg1;
+ (id)targetRuntimeForIdiom:(id)arg1 andOSVersion:(id)arg2;
+ (id)targetRuntimeForIdiom:(id)arg1 andUserInterfaceEra:(long long)arg2;
@property(readonly, nonatomic) IBCocoaTouchOSVersion *cocoaTouchOSVersion; // @synthesize cocoaTouchOSVersion=_cocoaTouchOSVersion;
- (void).cxx_destruct;
- (BOOL)populateEnvironment:(id)arg1 forExecutionContext:(id)arg2 error:(id *)arg3;
- (id)registerSceneUpdateRenderingDelegate:(id)arg1 forScaleFactor:(double)arg2 returningSceneIdentifier:(long long *)arg3 error:(id *)arg4;
- (Class)sceneUpdateRequestProcessorClass;
- (Class)imageRequestProcessorClass;
- (id)toolDescriptionForAutolayoutOperationsWithRole:(long long)arg1 scaleFactor:(double)arg2;
- (id)toolDescriptionForSceneUpdatesWithRole:(long long)arg1 scaleFactor:(double)arg2 renderingFidelity:(long long)arg3;
- (id)defaultToolDescriptionWithRole:(long long)arg1 scaleFactor:(double)arg2;
- (id)toolProxyManager;
- (id)alternateTargetRuntimeForEra:(long long)arg1;
- (id)alternateTargetRuntimeForSevenAndLater;
- (id)nextPreviewableTargetRuntime;
- (void)installColorListIfNeeded;
- (id)URLForFontName:(id)arg1;
- (id)textStyleForArchiveName:(id)arg1;
- (id)archiveNameForTextStyle:(id)arg1;
- (id)fontDataSource;
- (BOOL)isTextStyleDeprecated:(id)arg1;
- (BOOL)isValidFontName:(id)arg1;
- (double)fontPointSizeForTextStyle:(id)arg1;
- (double)fontPointSizeForSize:(long long)arg1;
- (unsigned long long)fontTraitsForFontName:(id)arg1;
- (unsigned long long)fontTraitsForType:(long long)arg1 andTextStyle:(id)arg2;
- (id)fontFamilyForFontName:(id)arg1;
- (id)fontFamilyNameForType:(long long)arg1 andTextStyle:(id)arg2;
- (long long)systemFontTypeForTextStyle:(id)arg1;
- (id)fontNameForType:(long long)arg1 andTextStyle:(id)arg2;
- (id)fontNameForFamily:(id)arg1 andTraits:(unsigned long long)arg2;
- (id)ib_textStyles;
- (void)ensureFontDescriptorTextStylesAreUpdated;
@property(readonly) NSDictionary *availableFontDescriptorTextStyles;
- (void)invalidateAvailableFonts;
@property(readonly) NSArray *availableFonts;
- (id)accessFontDataWithBlock:(CDUnknownBlockType)arg1;
@property(readonly) IBColorList *colorList;
- (BOOL)shouldIncludeColorInColorList:(id)arg1;
- (id)tableCellBlueTextColor;
- (id)defaultTintColor;
- (id)lightTextColor;
- (id)darkTextColor;
- (id)scrollViewTexturedBackgroundColor;
- (id)tableCellGroupedBackgroundColor;
- (id)groupTableViewBackgroundColor;
- (id)genericColorForSystemColor:(id)arg1;
- (id)systemColorForGenericColor:(id)arg1;
- (id)keyPathForGenericColor:(id)arg1;
- (id)systemColorForKeyPath:(id)arg1;
- (BOOL)isSystemPatternColor:(id)arg1;
- (BOOL)isSystemColor:(id)arg1;
- (id)keyPathForSystemColor:(id)arg1;
- (id)systemNamesToGenericColorsMap;
- (id)regeneratePerScaleSystemNamesToGenericColorsMap;
- (id)regenerateSystemNamesToGenericColorsMapForScale:(id)arg1;
- (id)readPerScaleExistingSystemNamesToGenericColorsMap;
- (CDUnknownBlockType)defaultClassValueDiagnosticsBlock;
@property(readonly) IBUISimulatedStatusBarMetrics *defaultLibraryStatusBarMetrics;
@property(readonly) IBUISimulatedStatusBarMetrics *defaultStatusBarMetrics;
@property(readonly) IBUISimulatedOrientationMetrics *defaultOrientationMetrics;
@property(readonly) IBUIScreenMetrics *defaultScreenMetrics;
- (BOOL)wantsRoundedCorners;
- (double)defaultOverviewZoomFactor;
- (id)icon;
- (id)displayNameForUserInterfaceStyle;
@property(readonly, nonatomic) long long userInterfaceEra;
@property(readonly, nonatomic) IBCocoaTouchIdiom *idiom;
- (id)archiveVariantIdentifier;
- (id)archiveIdentifier;
- (id)identifier;
@property(readonly, nonatomic) IBCocoaTouchPlatform *platform;
- (void)dealloc;
- (id)targetRuntimeWithIdiom:(id)arg1;
- (id)initWithIdiom:(id)arg1 andOSVersion:(id)arg2;

@end

