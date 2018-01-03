//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>

@class DVTFilePath, DVTStackBacktrace, IDEWorkspace, IDEWorkspaceArenaInfo, IDEWorkspaceArenaSnapshot, NSString;

@interface IDEWorkspaceArena : NSObject <DVTInvalidation>
{
    IDEWorkspace *_workspace;
    DVTFilePath *_cachedDerivedDataLocation;
    DVTFilePath *_cachedBuildFolderPath;
    DVTFilePath *_cachedBuildProductsFolderPath;
    DVTFilePath *_cachedBuildIntermediatesFolderPath;
    DVTFilePath *_cachedIndexStoreFolderPath;
    NSString *_cachedWorkspaceArenaFolderName;
    BOOL _hasWorkspaceRelativeDerivedDataLocation;
    BOOL didSetUpCachedWorkspaceArenaFolderNameObservations;
    id _derivedDataFolderForWorkspaceObservingToken;
    id _derivedDataNotificationToken;
    id _derivedDataSourceTreesNotificationToken;
    id _derivedDataOverrideNotificationToken;
    IDEWorkspaceArenaSnapshot *_cachedSnapshot;
    DVTFilePath *_indexDataStoreFolderOverride;
    BOOL _indexEnableDataStore;
}

+ (id)defaultBuildSubdirectoryName;
+ (id)defaultWorkspaceRelativeDerivedDataDirLocation;
+ (BOOL)shouldUniqueWorkspaceFoldersInStandardDerivedDataLocation;
+ (id)standardWorkspaceDerivedDataLocationForWorkspace:(id)arg1;
+ (id)_standardDerivedDataLocationPathFragment;
+ (id)keyPathsForValuesAffectingWorkspaceArenaInfo;
+ (id)keyPathsForValuesAffectingTestResultsFolderPath;
+ (id)keyPathsForValuesAffectingLogFolderPath;
+ (id)keyPathsForValuesAffectingIndexPrecompiledHeadersFolderPath;
+ (id)keyPathsForValuesAffectingIndexDataStoreFolderPath;
+ (id)keyPathsForValuesAffectingIndexFolderPath;
+ (id)keyPathsForValuesAffectingTextIndexFolderPath;
+ (id)indexStoreFolderPathForSettings:(id)arg1 usingPlaceholderOfType:(int *)arg2;
+ (id)buildIntermediatesFolderPathForSettings:(id)arg1 usingPlaceholderOfType:(int *)arg2;
+ (id)buildProductsFolderPathForSettings:(id)arg1 usingPlaceholderOfType:(int *)arg2;
+ (id)keyPathsForValuesAffectingPrecompiledHeadersFolderPath;
+ (id)keyPathsForValuesAffectingIBLiveViewsBuildFolderPath;
+ (id)keyPathsForValuesAffectingSwiftMigrationBuildFolderPath;
+ (id)keyPathsForValuesAffectingCodeCoverageBuildFolderPath;
+ (id)keyPathsForValuesAffectingPGOBuildFolderPath;
+ (id)keyPathsForValuesAffectingInstallingBuildFolderPath;
+ (id)keyPathsForValuesAffectingArchivingBuildFolderPath;
+ (id)keyPathsForValuesAffectingBuildIntermediatesFolderPath;
+ (id)keyPathsForValuesAffectingBuildProductsFolderPath;
+ (void)_buildResultsPathForBuildResultsType:(int)arg1 settings:(id)arg2 workspaceArena:(id)arg3 returningFilePath:(id *)arg4 orReturningPathString:(id *)arg5 withPlaceholder:(int *)arg6;
+ (id)_resolvedBuildFolderSettingsGivenSettings:(id)arg1;
+ (id)keyPathsForValuesAffectingPath;
+ (id)keyPathsForValuesAffectingDerivedDataFolderForWorkspace;
+ (id)nameForWorkspaceArenaWithBaseName:(id)arg1 gristInput:(id)arg2;
+ (void)initialize;
@property BOOL hasWorkspaceRelativeDerivedDataLocation; // @synthesize hasWorkspaceRelativeDerivedDataLocation=_hasWorkspaceRelativeDerivedDataLocation;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)createWorkspaceArenaFolderIfNecessary;
- (BOOL)createWorkspaceArenaFolderIfNecessaryWithError:(id *)arg1;
@property(readonly) double workspaceArenaInfoRefreshInterval;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setupIndexPreferences;
- (id)initWithWorkspace:(id)arg1;
@property(readonly) IDEWorkspaceArenaInfo *workspaceArenaInfo;
@property(readonly) DVTFilePath *testResultsFolderPath;
@property(readonly) DVTFilePath *logFolderPath;
@property(readonly) DVTFilePath *indexPrecompiledHeadersFolderPath;
@property(readonly) BOOL indexEnableDataStore;
@property(readonly) DVTFilePath *indexDataStoreFolderPath;
@property(readonly) DVTFilePath *indexFolderPath;
@property(readonly) DVTFilePath *textIndexFolderPath;
@property(readonly) DVTFilePath *precompiledHeadersFolderPath;
@property(readonly) DVTFilePath *IBLiveViewsBuildFolderPath;
@property(readonly) DVTFilePath *swiftMigrationBuildFolderPath;
@property(readonly) DVTFilePath *codeCoverageBuildFolderPath;
@property(readonly) DVTFilePath *pgoBuildFolderPath;
@property(readonly) DVTFilePath *installingBuildFolderPath;
@property(readonly) DVTFilePath *archivingBuildFolderPath;
@property(readonly) DVTFilePath *buildIntermediatesFolderPath;
- (id)indexStoreFolderPathForSettings:(id)arg1;
- (id)buildIntermediatesFolderPathForSettings:(id)arg1;
@property(readonly) DVTFilePath *buildProductsFolderPath;
- (id)buildProductsFolderPathForSettings:(id)arg1;
- (id)_buildResultsPathForBuildResultsType:(int)arg1 settings:(id)arg2;
@property(readonly) DVTFilePath *buildFolderPath;
- (id)_buildFolderPathForSettings:(id)arg1;
- (void)buildFolderSettingsDidChange:(id)arg1;
- (id)presumptiveBuildFolderPathWithName:(id)arg1 baseBuildFolderLocation:(id)arg2;
- (id)_derivedDataFolderPathOverride;
- (id)path;
@property(readonly) DVTFilePath *derivedDataFolderForWorkspace;
- (BOOL)_shouldUniqueWorkspaceInDerivedDataForDerivedDataLocationStyle:(int)arg1 customDerivedDataLocation:(id)arg2;
@property(readonly) DVTFilePath *derivedDataLocation;
- (id)workspaceArenaFolderName;
- (void)primitiveInvalidate;
@property(readonly) IDEWorkspaceArenaSnapshot *currentSnapshot;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

