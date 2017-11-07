//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, IDERunnable, IDESchemeCommand, NSArray, NSDictionary, NSSet, NSString;
@protocol IDEBuildableProduct, IDEPrimitiveSchemeCommand, IDETestingSpecifier;

@interface IDETestRunSpecification : NSObject
{
    BOOL _useDestinationArtifacts;
    BOOL _useInternalIOSLaunchStyleRsync;
    BOOL _isUITestBundle;
    BOOL _useUITargetAppProvidedByTests;
    BOOL _UITestingTargetAppMainThreadCheckerEnabled;
    BOOL _treatMissingBaselinesAsFailures;
    id <IDETestingSpecifier> _testingSpecifier;
    NSSet *_testIdentifiersToRun;
    NSSet *_testIdentifiersToSkip;
    DVTFilePath *_testBundleFilePath;
    NSString *_testBundleDestinationRelativePathString;
    IDERunnable *_testHostRunnable;
    NSString *_bundleIdForTestHost;
    long long _testHostStyle;
    NSArray *_filePathsForDependentProducts;
    NSSet *_bundleIDsForCrashReportEmphasis;
    NSString *_productModuleName;
    NSArray *_toolchainsSettingValue;
    NSArray *_commandLineArguments;
    NSDictionary *_environmentVariables;
    NSDictionary *_testingEnvironmentVariables;
    IDESchemeCommand<IDEPrimitiveSchemeCommand> *_schemeCommand;
    NSString *_testLanguage;
    NSString *_testRegion;
    long long _systemAttachmentLifetime;
    long long _userAttachmentLifetime;
    NSString *_UITestingTargetAppBundleId;
    DVTFilePath *_UITestingTargetAppPath;
    NSArray *_UITestingTargetAppCommandLineArguments;
    NSDictionary *_UITestingTargetAppEnvironmentVariables;
    NSString *_blueprintProviderRelativePath;
    NSString *_blueprintName;
    NSString *_baselineFilePathString;
    id <IDEBuildableProduct> _buildableProductForUIRecordingManager;
    id <IDEBuildableProduct> _buildableProductForDebugger;
    NSString *_clangProfileDataDirectoryPathString;
}

+ (id)specificationWithSpecifier:(id)arg1 testBundleFilePath:(id)arg2 testHostRunnable:(id)arg3 bundleIdForTestHost:(id)arg4 testHostStyle:(long long)arg5 filePathsForDependentProducts:(id)arg6 bundleIDsForCrashReportEmphasis:(id)arg7 productModuleName:(id)arg8 toolchainsSettingValue:(id)arg9 testingEnvironmentVariables:(id)arg10 schemeCommand:(id)arg11 isUITestBundle:(BOOL)arg12 useUITargetAppProvidedByTests:(BOOL)arg13 UITestingTargetAppPath:(id)arg14 buildableProductForUIRecordingManager:(id)arg15 buildableProductForDebugger:(id)arg16 treatMissingBaselinesAsFailures:(BOOL)arg17 blueprintProviderRelativePath:(id)arg18 blueprintName:(id)arg19;
+ (id)groupLongTestIdentifiersFor:(id)arg1;
+ (id)languageAgnosticIdentifersFor:(id)arg1;
+ (CDUnknownBlockType)launchParametersBlockForShouldDebugXPCServices:(BOOL)arg1 shouldDebugAppExtensions:(BOOL)arg2 workspace:(id)arg3 pgoController:(id)arg4 schemeIdentifier:(id)arg5 workingDirectory:(id)arg6 selectedLauncherIdentifier:(id)arg7 selectedDebuggerIdentifier:(id)arg8 buildConfiguration:(id)arg9 buildParameters:(id)arg10 debugProcessAsUID:(unsigned int)arg11 diagnosticsDictionary:(id)arg12 testLanguage:(id)arg13 testRegion:(id)arg14 suppressSimulatorApplication:(BOOL)arg15;
+ (id)buildableProductForTestingSpecifier:(id)arg1;
+ (id)pathForBuildableProduct:(id)arg1 buildParameters:(id)arg2 runDestination:(id)arg3;
+ (id)testHostRunnableForUsesXCTRunner:(BOOL)arg1 runDestination:(id)arg2 buildableProduct:(id)arg3 buildParameters:(id)arg4 testingSpecifier:(id)arg5 outError:(id *)arg6;
+ (id)computedHostApplicationForBuildableProduct:(id)arg1 forRunDestination:(id)arg2 buildParameters:(id)arg3 workspace:(id)arg4;
+ (id)hostBuildableProductForBuildable:(id)arg1 buildParameters:(id)arg2 workspace:(id)arg3;
+ (BOOL)_path:(id)arg1 containsProductName:(id)arg2;
+ (id)bundleIDsForDependentProductsForBuildables:(id)arg1 buildParameters:(id)arg2;
+ (id)bundleIDForBuildableProduct:(id)arg1 buildParameters:(id)arg2;
+ (id)filePathsForDependentProductsForBuildables:(id)arg1 buildParameters:(id)arg2 runDestination:(id)arg3;
+ (id)_dependentProductsForBuildables:(id)arg1;
+ (id)baselinePlistFilePathForTestingSpecifier:(id)arg1 bundleBaselineFilePath:(id)arg2 baselineOverridesFilePath:(id)arg3 runDestination:(id)arg4 withError:(id *)arg5;
+ (id)environmentVariablesForBuildParameters:(id)arg1 runDestination:(id)arg2 hostApplication:(id)arg3 testHostBuildSetting:(id)arg4 testingSpecifier:(id)arg5 usesXCTRunner:(BOOL)arg6 testBundleFilePath:(id)arg7;
+ (id)removePathPlaceholdersIn:(id)arg1 forTestRootPath:(id)arg2 workspace:(id)arg3;
+ (id)insertPathPlaceholdersIn:(id)arg1 forTestRootPath:(id)arg2 workspace:(id)arg3;
+ (void)applyRunSkippedTestsOnlyToSpecifications:(id)arg1;
+ (void)applyTestIdentifiersToRun:(id)arg1 toSpecifications:(id)arg2;
+ (void)applyTestIdentifiersToSkip:(id)arg1 toSpecifications:(id)arg2;
+ (BOOL)writeTestRunSpecifications:(id)arg1 toFilePath:(id)arg2 workspace:(id)arg3 error:(id *)arg4;
+ (id)testRunSpecificationsAtFilePath:(id)arg1 workspace:(id)arg2 error:(id *)arg3;
+ (id)testRunSpecificationsForTestingSpecifiers:(id)arg1 buildOperation:(id)arg2 withBuildParameters:(id)arg3 environmentVariables:(id)arg4 commandLineArguments:(id)arg5 includeClangProfileParameters:(BOOL)arg6 doingCodeCoverage:(BOOL)arg7 diagnosticsDictionary:(id)arg8 shouldDebugAppExtensions:(BOOL)arg9 testLanguage:(id)arg10 testRegion:(id)arg11 systemAttachmentLifetime:(long long)arg12 userAttachmentLifetime:(long long)arg13 internalIOSLaunchStyle:(int)arg14 error:(id *)arg15;
+ (id)outputDirectoriesForBuildables:(id)arg1 buildParameters:(id)arg2;
@property(retain) NSString *clangProfileDataDirectoryPathString; // @synthesize clangProfileDataDirectoryPathString=_clangProfileDataDirectoryPathString;
@property(retain) id <IDEBuildableProduct> buildableProductForDebugger; // @synthesize buildableProductForDebugger=_buildableProductForDebugger;
@property(retain) id <IDEBuildableProduct> buildableProductForUIRecordingManager; // @synthesize buildableProductForUIRecordingManager=_buildableProductForUIRecordingManager;
@property NSString *baselineFilePathString; // @synthesize baselineFilePathString=_baselineFilePathString;
@property BOOL treatMissingBaselinesAsFailures; // @synthesize treatMissingBaselinesAsFailures=_treatMissingBaselinesAsFailures;
@property(copy) NSString *blueprintName; // @synthesize blueprintName=_blueprintName;
@property(copy) NSString *blueprintProviderRelativePath; // @synthesize blueprintProviderRelativePath=_blueprintProviderRelativePath;
@property BOOL UITestingTargetAppMainThreadCheckerEnabled; // @synthesize UITestingTargetAppMainThreadCheckerEnabled=_UITestingTargetAppMainThreadCheckerEnabled;
@property(copy) NSDictionary *UITestingTargetAppEnvironmentVariables; // @synthesize UITestingTargetAppEnvironmentVariables=_UITestingTargetAppEnvironmentVariables;
@property(copy) NSArray *UITestingTargetAppCommandLineArguments; // @synthesize UITestingTargetAppCommandLineArguments=_UITestingTargetAppCommandLineArguments;
@property(copy) DVTFilePath *UITestingTargetAppPath; // @synthesize UITestingTargetAppPath=_UITestingTargetAppPath;
@property(copy) NSString *UITestingTargetAppBundleId; // @synthesize UITestingTargetAppBundleId=_UITestingTargetAppBundleId;
@property BOOL useUITargetAppProvidedByTests; // @synthesize useUITargetAppProvidedByTests=_useUITargetAppProvidedByTests;
@property BOOL isUITestBundle; // @synthesize isUITestBundle=_isUITestBundle;
@property long long userAttachmentLifetime; // @synthesize userAttachmentLifetime=_userAttachmentLifetime;
@property long long systemAttachmentLifetime; // @synthesize systemAttachmentLifetime=_systemAttachmentLifetime;
@property(copy) NSString *testRegion; // @synthesize testRegion=_testRegion;
@property(copy) NSString *testLanguage; // @synthesize testLanguage=_testLanguage;
@property(retain) IDESchemeCommand<IDEPrimitiveSchemeCommand> *schemeCommand; // @synthesize schemeCommand=_schemeCommand;
@property(copy) NSDictionary *testingEnvironmentVariables; // @synthesize testingEnvironmentVariables=_testingEnvironmentVariables;
@property(copy) NSDictionary *environmentVariables; // @synthesize environmentVariables=_environmentVariables;
@property(copy) NSArray *commandLineArguments; // @synthesize commandLineArguments=_commandLineArguments;
@property(copy) NSArray *toolchainsSettingValue; // @synthesize toolchainsSettingValue=_toolchainsSettingValue;
@property(copy) NSString *productModuleName; // @synthesize productModuleName=_productModuleName;
@property(copy) NSSet *bundleIDsForCrashReportEmphasis; // @synthesize bundleIDsForCrashReportEmphasis=_bundleIDsForCrashReportEmphasis;
@property(copy) NSArray *filePathsForDependentProducts; // @synthesize filePathsForDependentProducts=_filePathsForDependentProducts;
@property BOOL useInternalIOSLaunchStyleRsync; // @synthesize useInternalIOSLaunchStyleRsync=_useInternalIOSLaunchStyleRsync;
@property BOOL useDestinationArtifacts; // @synthesize useDestinationArtifacts=_useDestinationArtifacts;
@property long long testHostStyle; // @synthesize testHostStyle=_testHostStyle;
@property(copy) NSString *bundleIdForTestHost; // @synthesize bundleIdForTestHost=_bundleIdForTestHost;
@property(retain) IDERunnable *testHostRunnable; // @synthesize testHostRunnable=_testHostRunnable;
@property(copy) NSString *testBundleDestinationRelativePathString; // @synthesize testBundleDestinationRelativePathString=_testBundleDestinationRelativePathString;
@property(copy) DVTFilePath *testBundleFilePath; // @synthesize testBundleFilePath=_testBundleFilePath;
@property(copy, nonatomic) NSSet *testIdentifiersToSkip; // @synthesize testIdentifiersToSkip=_testIdentifiersToSkip;
@property(copy, nonatomic) NSSet *testIdentifiersToRun; // @synthesize testIdentifiersToRun=_testIdentifiersToRun;
@property(retain) id <IDETestingSpecifier> testingSpecifier; // @synthesize testingSpecifier=_testingSpecifier;
- (void).cxx_destruct;
- (id)testArchitectureForRunDestination:(id)arg1 buildParameters:(id)arg2;
- (id)clangProfileFilePathStringForRunDestination:(id)arg1;
- (id)clangRawProfileDirectoryPathStringForRunDestination:(id)arg1;
- (id)preparedTestEnvironmentVariablesForRunDestination:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
@property(readonly, copy) NSDictionary *dictionaryRepresentation;
- (void)applyLanguageAndRegionToArguments;
- (BOOL)validateRunDestination:(id)arg1 error:(id *)arg2;
@property(readonly) NSArray *testDependencySearchDirectories;

@end

