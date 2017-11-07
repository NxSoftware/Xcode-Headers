//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTExtension, IBICPlatform, NSString;

@interface IBICAbstractPlatformAdapter : NSObject
{
    DVTExtension *_extension;
    NSString *_platformIdentifier;
}

+ (void)verifyCatalogDocument:(id)arg1 presentingConfirmationOnWindow:(id)arg2;
+ (id)adapterForPlatformNamed:(id)arg1 error:(id *)arg2;
+ (id)platformAdapterClasses;
+ (id)extensions;
+ (id)extensionPoint;
@property(readonly) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
@property(readonly) DVTExtension *extension; // @synthesize extension=_extension;
- (void).cxx_destruct;
- (BOOL)shouldIncludePDFImageSet:(id)arg1 inCARFileWithOptions:(id)arg2;
- (BOOL)shouldIncludeJPEGImageSet:(id)arg1 inCARFileWithOptions:(id)arg2;
- (BOOL)shouldIncludeImageSetRep:(id)arg1 requiringFeatureIntroducedInVersion:(id)arg2 inCARFileWithOptions:(id)arg3;
- (id)description;
- (id)selectLaunchImageRepsFromCollection:(id)arg1 ignoringItems:(id)arg2 forCompilingWithOptions:(id)arg3 populatingIssues:(id)arg4;
- (id)selectBundleIconRepsFromCollection:(id)arg1 ignoringItems:(id)arg2 forCompilingWithOptions:(id)arg3 populatingIssues:(id)arg4;
- (id)selectIconSetRepsFromCollection:(id)arg1 ignoringItems:(id)arg2 forCompilingWithOptions:(id)arg3 populatingIssues:(id)arg4;
- (id)filterSlottedAssetRepsByPreferredColorSpaceOrder:(id)arg1;
- (id)validChildInCollection:(id)arg1 withSlotComponent:(id)arg2;
- (id)likeRepsForRep:(id)arg1 extractedFrom:(id)arg2;
- (id)matchingCatalogItemsOfClass:(Class)arg1 fromCollection:(id)arg2 ignoringItems:(id)arg3 withOptions:(id)arg4 populatingIssues:(id)arg5 itemsRejectedByFilter:(id *)arg6 filter:(CDUnknownBlockType)arg7;
- (id)selectCatalogItemsForCARCompilerFromCollection:(id)arg1 ignoringItems:(id)arg2 forCompilingWithOptions:(id)arg3 populatingIssues:(id)arg4;
- (id)selectCatalogAppIconsFromCollection:(id)arg1 ignoringItems:(id)arg2 forLocation:(long long)arg3 withOptions:(id)arg4 populatingIssues:(id)arg5;
- (id)selectStickerPackFromCollection:(id)arg1 ignoringItems:(id)arg2 forLocation:(long long)arg3 withOptions:(id)arg4 populatingIssues:(id)arg5;
- (id)selectCatalogItemsFromCollection:(id)arg1 ignoringItems:(id)arg2 forLocation:(long long)arg3 withOptions:(id)arg4 populatingIssues:(id)arg5;
- (BOOL)mipsetIsValidForCompiling:(id)arg1;
- (void)defineCatalogSelectionScope:(id)arg1 options:(id)arg2;
- (void)enumerateScopeDefiningItemsWithOptions:(id)arg1 forScope:(id)arg2 enumerator:(CDUnknownBlockType)arg3;
- (BOOL)isValidOutputLocation:(long long)arg1 forIconSetRep:(id)arg2 withCompilationOptions:(id)arg3 populatingIssues:(id)arg4;
- (BOOL)isValidOutputLocation:(long long)arg1 forBundleIconSetRep:(id)arg2 withCompilationOptions:(id)arg3 populatingIssues:(id)arg4;
- (long long)outputLocationForDataSetRep:(id)arg1 withCompilationOptions:(id)arg2;
- (long long)outputLocationForImageSetRep:(id)arg1 withCompilationOptions:(id)arg2;
- (id)firstVersionSupportingThinning;
- (id)firstVersionSupportingOnDemandResources;
- (BOOL)usesBrandAssetCollectionsInsteadOfAppIcons;
- (BOOL)canHostPDFContentOutsideOfCARFiles;
- (id)unavailableFeatureIssuesForCompilationSelection:(id)arg1 usingOptions:(id)arg2;
- (void)compileStandaloneCatalogItems:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)copyAssetRep:(id)arg1 toPath:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (void)addLaunchImageWarningsToResults:(id)arg1 forIconReps:(id)arg2 withOptions:(id)arg3;
- (void)addBundleIconWarningsToResults:(id)arg1 forSelection:(id)arg2 withOptions:(id)arg3;
- (void)addSlottedAssetWarningsToResults:(id)arg1 filteredByIdioms:(id)arg2 forReps:(id)arg3 withOptions:(id)arg4;
- (id)absoluteMinimumDeploymentTarget;
- (void)compileStandaloneSpriteAtlases:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)compileCatalogCollection:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)compileBrandAssetCollectionsFromSelection:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)compileLaunchImageFromSelection:(id)arg1 options:(id)arg2;
- (id)compileBundleIconFromSelection:(id)arg1 options:(id)arg2;
- (void)compileCARItems:(id)arg1 tagSolutionSpace:(id)arg2 options:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)compileSelectedItems:(id)arg1 options:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)validateApplicabilityForOnDemandResources:(id)arg1 options:(id)arg2 tagSolutionSpace:(id)arg3;
- (id)tagSolutionSpaceFromSources:(id)arg1;
- (id)selectCatalogItemsForCompilingCollection:(id)arg1 options:(id)arg2;
- (id)imageCatalogCompilerOptionsFromToolArguments:(id)arg1 forCatalogCollection:(id)arg2 populatingResults:(id)arg3;
- (id)impliedIdiomsForOptions:(id)arg1;
- (id)filterTraitsForDevice:(id)arg1 populatingResults:(id)arg2;
@property(readonly) IBICPlatform *platform;
@property(readonly) NSString *deviceFamilyName;
- (id)platformForDeviceThinningDatabase;
- (id)targetPlatformForArguments:(id)arg1;
- (id)defaultTargetDevices;
- (BOOL)supportsICNSFiles;
- (id)minimumDeploymentTargetSupportingIconsInCARFiles;
- (id)minimumDeploymentTargetSupportingAppIconsInCARFiles;
- (id)minimumDeploymentTargetSupportingModels;
- (id)minimumDeploymentTargetSupportingNamedColors;
- (id)minimumDeploymentTargetSupportingTexturesInCARFiles;
- (id)minimumDeploymentTargetSupportingAppIcons;
- (id)minimumDeploymentTargetSupportingDataInCARFiles;
- (id)minimumDeploymentTargetSupportingSpriteAtlasesInCARFiles;
- (id)minimumDeploymentTargetSupportingHEIFFiles;
- (id)minimumDeploymentTargetSupportingPDFInCARFiles;
- (id)minimumDeploymentTargetSupportingJPGInCARFiles;
- (id)minimumDeploymentTargetSupportingCARFiles;
- (id)initWithPlatformIdentifier:(id)arg1 extension:(id)arg2;

@end

