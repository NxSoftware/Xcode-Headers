//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface IBFileBuildSettingsSnapshot : NSObject
{
    NSMutableDictionary *_cachedValueByBuildableThenConfigurationThenSetting;
    NSDictionary *_buildParametersByBuildableThenConfiguration;
    NSMutableDictionary *_cachedValuesByBuildSetting;
    NSArray *_buildables;
}

+ (id)buildSettingsSnapshotFilePath:(id)arg1 inWorkspaces:(id)arg2;
@property(readonly) NSArray *buildables; // @synthesize buildables=_buildables;
- (void).cxx_destruct;
@property(readonly) NSArray *unpreprocessedInfoPlistPaths;
- (void)enumerateValuesForBuildSetting:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)minimumDeploymentTargetForPlatform:(id)arg1;
@property(readonly) NSString *minimumIOSDeploymentTarget;
@property(readonly) NSString *minimumMacOSXDeploymentTarget;
- (id)minimumDeploymentTargetOfTargets:(id)arg1;
- (id)deploymentTargetsForPlatform:(id)arg1;
- (id)pathsToAssetCatalogAppIconsPassingTest:(CDUnknownBlockType)arg1;
@property(readonly) NSArray *iOSDeploymentTargets;
@property(readonly) NSArray *macOSXDeploymentTargets;
@property(readonly) NSArray *toolchainIdentifiers;
@property(readonly) BOOL anyBuildablesAreUsingSwift3OrHigher;
@property(readonly) BOOL anyBuildablesRequireManualSynthesis;
@property(readonly) BOOL anyBuildablesAreUsingFragileIvarLayout;
@property(readonly) BOOL allBuildablesAreUsingFragileIvarLayout;
- (BOOL)isBuildableUsingSwift3OrHigher:(id)arg1;
- (BOOL)isBuildableIncapableOfAutoSynthesize:(id)arg1;
- (BOOL)isBuildableUsingFragileIvarLayout:(id)arg1;
- (id)cachedValueForBuildSetting:(id)arg1 forConfiguration:(id)arg2 ofBuildable:(id)arg3;
@property(readonly) BOOL anyBuildablesAreUsingAutomaticReferencingCounting;
@property(readonly) BOOL allBuildablesAreUsingAutomaticReferencingCounting;
- (id)cachedValuesForBuildSetting:(id)arg1;
- (BOOL)isEmpty;
- (id)listValuesForBuildSetting:(id)arg1;
- (id)valuesForBuildSetting:(id)arg1;
- (id)valuesForBuildSetting:(id)arg1 type:(int)arg2;
- (id)valuesForBuildSettingByBuildableThenConfiguration:(id)arg1 type:(int)arg2;
- (id)buildParametersForConfiguration:(id)arg1 ofBuildable:(id)arg2;
- (id)initWithBuildables:(id)arg1 buildParametersByBuildableThenConfiguration:(id)arg2;

@end

