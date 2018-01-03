//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBIdiom.h>

@class NSMutableDictionary;

@interface IBCocoaTouchIdiom : IBIdiom
{
    NSMutableDictionary *_screenMetricByPossibleArchiveIdentifiers;
}

+ (id)idiomWithArchiveIdentifier:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)populateLaunchJobsForSimulatorSessionType:(long long)arg1 requiredIdentifiers:(id)arg2 disabledIdentifiers:(id)arg3;
- (id)deviceSubtypeWithIdentifier:(id)arg1;
- (BOOL)supportsSimRuntime:(id)arg1;
- (id)simDeviceTypeForToolDescription:(id)arg1 error:(id *)arg2;
- (id)effectiveDeviceTypeIdentifierForScaleFactor:(double)arg1;
- (void)populateAdditionalSimDeviceTypeSearchPaths:(id)arg1;
- (BOOL)shouldLaunchPlatformToolsUsingCoreSimulator;
- (id)preferredSimulatorDeviceTypeForSubtype:(id)arg1;
- (BOOL)hasSimulatorDeviceTypeForIdentifier:(id)arg1;
- (id)makeDeviceMaskForSubtype:(id)arg1;
- (id)symbolicConstantValueForFirstAttribute:(unsigned long long)arg1 andSecondAttribute:(unsigned long long)arg2;
- (BOOL)supportsVerticalBaselineStandardSpacingConstraints;
- (id)screenMetricsWithArchiveIdentifier:(id)arg1;
- (id)deviceSubtypeWithArchiveIdentifier:(id)arg1;
- (id)inheritableSplitViewMasterSizeMetricsForScreenMetrics:(id)arg1;
- (id)pageSheetFixedSizeMetricsForOrientationMetrics:(id)arg1 screenMetric:(id)arg2;
- (struct CGSize)pageSheetFixedSizeForOrientationMetrics:(id)arg1 screenMetric:(id)arg2;
- (id)formSheetFixedSizeMetricsForOrientationMetrics:(id)arg1 screenMetrics:(id)arg2;
- (struct CGSize)formSheetFixedSizeForOrientationMetrics:(id)arg1 screenMetrics:(id)arg2;
- (id)splitViewDetailFixedSizeMetricsForOrientationMetrics:(id)arg1 screenMetrics:(id)arg2;
- (id)splitViewMasterFixedSizeMetricsForOrientationMetrics:(id)arg1 screenMetrics:(id)arg2;
- (id)splitViewDetailMemberConfigurationForOrientationMetrics:(id)arg1 screenMetrics:(id)arg2;
- (id)splitViewMasterMemberConfigurationForOrientationMetrics:(id)arg1 screenMetrics:(id)arg2;
- (double)masterWidthForScreenWidth:(double)arg1;
- (BOOL)detailUsesSplitScreen:(id)arg1 screenMetrics:(id)arg2;
- (BOOL)masterUsesSplitScreen:(id)arg1 screenMetrics:(id)arg2;
- (long long)legacyTypeForScreenMetrics:(id)arg1;
- (id)screenMetricsForLegacyType:(long long)arg1;
- (void)populateVariantForResolvingMediaResources:(id)arg1 forDocument:(id)arg2;
- (id)foldingStrategy;
- (Class)storyboardCompilerClass;
- (Class)xibCompilerClass;
- (void)unarchiveIdiomDependentDataForDocument:(id)arg1 withDocumentUnarchiver:(id)arg2;
- (void)archiveIdiomDependentDataForDocument:(id)arg1 withDocumentArchiver:(id)arg2;
- (id)xibArchivingSchema;
- (id)storyboardArchivingSchema;
- (id)storyboardScenePasteboardType;
- (id)storyboardPrimarySceneObjectPasteboardType;
- (id)viewPasteboardType;
- (id)objectPasteboardType;
- (Class)screenMetricsClass;
- (Class)storyboardAssetProviderClass;
- (Class)xibAssetProviderClass;
- (Class)storyboardVerifierClass;
- (Class)xibVerifierClass;
- (double)defaultEditingZoomFactorForCanvasBackingScaleFactor:(double)arg1;
- (id)actionFiringRuntimeClassNames;
- (id)supportedAdBannerSizes;
- (id)supportedOSVersions;
- (id)minimumOSVersion;
- (id)resourceIdiomVariant;
- (id)presentationOrderedSiblingIdioms;
- (id)presentationOrderedConcreteScreenMetrics;
- (id)presentationOrderedConcreteSubtypes;
- (id)allScreenMetricsForArchiving;
- (id)concreteScreenMetrics;
- (id)concreteSubtypes;
- (id)nextScreenMetricsForTogglingFromMetrics:(id)arg1;
- (id)defaultScreenMetricsForEmptyConfiguration;
- (id)defaultOrientationMetricsForConfiguration:(id)arg1;
- (id)defaultScreenMetricsForArchiving;
- (id)defaultScreenMetrics;
- (id)defaultSubtypeForArchiving;
- (id)deviceConfigurationForMemberConfiguration:(id)arg1;
- (id)defaultSubtype;
- (id)defaultOrientationMetrics;
- (BOOL)wantsContentScrollingInPreviewEditor;
- (BOOL)supportsSafeAreaLayoutGuidesReplacingTopBottomLayoutGuidesForIOS11AndLater;
- (BOOL)supportsSafeAreaLayoutGuides;
- (BOOL)supportsBarItemLandscapeImages;
- (BOOL)supportsSplitViewControllersOnIOS7AndEarlier;
- (BOOL)ignoresStatusBarForUIBarStyleComputation;
- (BOOL)supportsSearchBarsEmbeddedInBarButtonItems;
- (BOOL)supportsPopoverSegues;
- (BOOL)supportsForceTouchSeguesInDocument:(id)arg1;
- (BOOL)supportsWeightedItalicSystemFonts;
- (BOOL)supportsBuiltInCustomFonts;
- (BOOL)supportsTopToolbars;
- (long long)deviceInterfaceIdiom;
- (long long)defaultOrientationForArchiving;
- (long long)defaultOrientation;
- (BOOL)usesSceneExitPlaceholder;
- (BOOL)supportsLargeTitlesOnNavigationBar;
- (BOOL)wantsRoundedCornersOn6AndEarlier;
- (long long)defaultStatusBarStyleFor6AndEarlier;
- (id)storyboardArchiveType;
- (id)xibArchiveType;
- (id)colorListName;
- (id)iPhoneSimulatorDeviceEnvVar;
- (void)populateSubtypes:(id)arg1;
- (id)subtypes;
- (Class)deviceSubtypeClass;
- (id)pluginName;
- (id)archiveIdentifier;
- (id)idiomName;
- (id)cocoaTouchToolName;
- (id)platform;
- (id)defaultOrientationForPreviewEditor;

@end

