//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, DVTVersion, IDEEntityIdentifier, IDELocationScenarioReference, IDEProductType, IDESchemeOptionReference, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString;
@protocol IDEBuildableProduct;

@interface IDELaunchParametersSnapshot : NSObject
{
    struct {
        unsigned int _launchStyle:1;
        unsigned int _commandLineArgs:1;
        unsigned int _toolchainLLDBFrameworkPath:1;
        unsigned int _stopOnEveryThreadSanitizerIssue:1;
        unsigned int _stopOnEveryUBSanitizerIssue:1;
        unsigned int _stopOnEveryMainThreadCheckerIssue:1;
        unsigned int _isLaunchedForTesting:1;
    } _uninitializedFlags;
    BOOL _stopOnEveryThreadSanitizerIssue;
    BOOL _stopOnEveryUBSanitizerIssue;
    BOOL _stopOnEveryMainThreadCheckerIssue;
    BOOL _isLaunchedForTesting;
    BOOL _askOnLaunchChangedRunnable;
    BOOL _allowLocationSimulation;
    BOOL _showNonLocalizedStrings;
    BOOL _debugAsAService;
    BOOL _usingCommandLineUnitTesting;
    BOOL _debugXPCServices;
    BOOL _debugAppExtensions;
    BOOL _viewDebuggingEnabled;
    BOOL _queueDebuggingEnabled;
    BOOL _shouldGenerateOptimizationProfile;
    BOOL _enableUBSanitizer;
    BOOL _mallocScribble;
    BOOL _mallocGuardEdges;
    BOOL _guardMalloc;
    BOOL _NSZombieEnabled;
    BOOL _mallocStackLogging;
    BOOL _mallocStackLoggingLite;
    BOOL _dyldPrintAPIs;
    BOOL _dyldPrintLibraries;
    BOOL _useDestinationArtifactsForTest;
    BOOL _skipInternalInstallSDKCheck;
    BOOL _suppressSimulatorApplication;
    int _launchStyle;
    int _runnableType;
    unsigned int _debugProcessAsUID;
    int _enableGPUFrameCaptureMode;
    int _enableGPUValidationMode;
    int _debugServiceFD;
    int _runnableAppExtensionHostRunMode;
    int _internalIOSLaunchStyle;
    NSArray *_commandLineArgs;
    NSMutableDictionary *_testingEnvironmentVariables;
    NSDictionary *_environmentVariables;
    DVTFilePath *_runnableLocation;
    DVTFilePath *_filePathToBinary;
    NSString *_toolchainLLDBFrameworkPath;
    IDEEntityIdentifier *_schemeIdentifier;
    NSString *_selectedLauncherIdentifier;
    NSString *_selectedDebuggerIdentifier;
    unsigned long long _launchAutomaticallySubstyle;
    NSString *_runnableBundleIdentifier;
    NSDictionary *_appExtensionBuiltPaths;
    DVTFilePath *_replacementRunnableLocation;
    DVTFilePath *_workingDirectory;
    NSString *_architecture;
    IDELocationScenarioReference *_locationScenarioReference;
    NSString *_language;
    NSString *_region;
    IDESchemeOptionReference *_routingCoverageFileReference;
    NSString *_sdkPath;
    NSString *_remoteInstallPath;
    id _debugServiceObject;
    id _deviceArbitrationObject;
    NSString *_platformIdentifier;
    NSString *_buildConfiguration;
    id <IDEBuildableProduct> _buildableProduct;
    NSSet *_buildProductDirectories;
    NSArray *_testingCommandLineArgs;
    NSArray *_testingAdditionalBuiltDependenciesProductPaths;
    NSDictionary *_additionalDeviceSubstitutionPaths;
    NSString *_deviceAppDataPackage;
    long long _consoleMode;
    NSString *_optimizationProfilePathString;
    IDEProductType *_productType;
    NSString *_internalIOSSubstitutionApp;
    NSString *_customLaunchCommand;
    NSString *_debugServiceExtension;
    DVTVersion *_runnableSwiftVersion;
}

+ (id)environmentVariablesToMergeFromTestingEnvironmentVariables;
+ (id)snapshotForUnitTestingWithLauncherIdentifier:(id)arg1 debuggerIdentifier:(id)arg2 runnableLocation:(id)arg3 commandLineArgs:(id)arg4 environmentVariables:(id)arg5;
+ (id)launchParametersWithSchemeIdentifier:(id)arg1 launcherIdentifier:(id)arg2 debuggerIdentifier:(id)arg3 launchStyle:(int)arg4 runnableLocation:(id)arg5 debugProcessAsUID:(unsigned int)arg6 workingDirectory:(id)arg7 commandLineArgs:(id)arg8 environmentVariables:(id)arg9 architecture:(id)arg10 platformIdentifier:(id)arg11 buildConfiguration:(id)arg12 buildableProduct:(id)arg13 deviceAppDataPackage:(id)arg14 allowLocationSimulation:(BOOL)arg15 locationScenarioReference:(id)arg16 showNonLocalizedStrings:(BOOL)arg17 language:(id)arg18 region:(id)arg19 routingCoverageFileReference:(id)arg20 enableGPUFrameCaptureMode:(int)arg21 enableGPUValidationMode:(int)arg22 debugXPCServices:(BOOL)arg23 debugAppExtensions:(BOOL)arg24 internalIOSLaunchStyle:(int)arg25 internalIOSSubstitutionApp:(id)arg26 launchAutomaticallySubstyle:(unsigned long long)arg27;
@property(nonatomic) BOOL suppressSimulatorApplication; // @synthesize suppressSimulatorApplication=_suppressSimulatorApplication;
@property(nonatomic) BOOL skipInternalInstallSDKCheck; // @synthesize skipInternalInstallSDKCheck=_skipInternalInstallSDKCheck;
@property(nonatomic) BOOL useDestinationArtifactsForTest; // @synthesize useDestinationArtifactsForTest=_useDestinationArtifactsForTest;
@property(nonatomic) BOOL dyldPrintLibraries; // @synthesize dyldPrintLibraries=_dyldPrintLibraries;
@property(nonatomic) BOOL dyldPrintAPIs; // @synthesize dyldPrintAPIs=_dyldPrintAPIs;
@property(nonatomic) BOOL mallocStackLoggingLite; // @synthesize mallocStackLoggingLite=_mallocStackLoggingLite;
@property(nonatomic) BOOL mallocStackLogging; // @synthesize mallocStackLogging=_mallocStackLogging;
@property(nonatomic) BOOL NSZombieEnabled; // @synthesize NSZombieEnabled=_NSZombieEnabled;
@property(nonatomic) BOOL guardMalloc; // @synthesize guardMalloc=_guardMalloc;
@property(nonatomic) BOOL mallocGuardEdges; // @synthesize mallocGuardEdges=_mallocGuardEdges;
@property(nonatomic) BOOL mallocScribble; // @synthesize mallocScribble=_mallocScribble;
@property(nonatomic) BOOL enableUBSanitizer; // @synthesize enableUBSanitizer=_enableUBSanitizer;
@property(retain) DVTVersion *runnableSwiftVersion; // @synthesize runnableSwiftVersion=_runnableSwiftVersion;
@property(copy) NSString *debugServiceExtension; // @synthesize debugServiceExtension=_debugServiceExtension;
@property(copy) NSString *customLaunchCommand; // @synthesize customLaunchCommand=_customLaunchCommand;
@property(copy) NSString *internalIOSSubstitutionApp; // @synthesize internalIOSSubstitutionApp=_internalIOSSubstitutionApp;
@property(retain) IDEProductType *productType; // @synthesize productType=_productType;
@property(copy, nonatomic) NSString *optimizationProfilePathString; // @synthesize optimizationProfilePathString=_optimizationProfilePathString;
@property BOOL shouldGenerateOptimizationProfile; // @synthesize shouldGenerateOptimizationProfile=_shouldGenerateOptimizationProfile;
@property(nonatomic) long long consoleMode; // @synthesize consoleMode=_consoleMode;
@property BOOL queueDebuggingEnabled; // @synthesize queueDebuggingEnabled=_queueDebuggingEnabled;
@property BOOL viewDebuggingEnabled; // @synthesize viewDebuggingEnabled=_viewDebuggingEnabled;
@property int internalIOSLaunchStyle; // @synthesize internalIOSLaunchStyle=_internalIOSLaunchStyle;
@property int runnableAppExtensionHostRunMode; // @synthesize runnableAppExtensionHostRunMode=_runnableAppExtensionHostRunMode;
@property(readonly) BOOL debugAppExtensions; // @synthesize debugAppExtensions=_debugAppExtensions;
@property(readonly) BOOL debugXPCServices; // @synthesize debugXPCServices=_debugXPCServices;
@property(readonly) NSString *deviceAppDataPackage; // @synthesize deviceAppDataPackage=_deviceAppDataPackage;
@property(copy) NSDictionary *additionalDeviceSubstitutionPaths; // @synthesize additionalDeviceSubstitutionPaths=_additionalDeviceSubstitutionPaths;
@property(getter=isUsingCommandLineUnitTesting) BOOL usingCommandLineUnitTesting; // @synthesize usingCommandLineUnitTesting=_usingCommandLineUnitTesting;
@property(copy) NSArray *testingAdditionalBuiltDependenciesProductPaths; // @synthesize testingAdditionalBuiltDependenciesProductPaths=_testingAdditionalBuiltDependenciesProductPaths;
@property(copy) NSArray *testingCommandLineArgs; // @synthesize testingCommandLineArgs=_testingCommandLineArgs;
@property(copy) NSSet *buildProductDirectories; // @synthesize buildProductDirectories=_buildProductDirectories;
@property(readonly) id <IDEBuildableProduct> buildableProduct; // @synthesize buildableProduct=_buildableProduct;
@property(readonly) NSString *buildConfiguration; // @synthesize buildConfiguration=_buildConfiguration;
@property(readonly) NSString *platformIdentifier; // @synthesize platformIdentifier=_platformIdentifier;
@property(retain) id deviceArbitrationObject; // @synthesize deviceArbitrationObject=_deviceArbitrationObject;
@property(retain) id debugServiceObject; // @synthesize debugServiceObject=_debugServiceObject;
@property int debugServiceFD; // @synthesize debugServiceFD=_debugServiceFD;
@property BOOL debugAsAService; // @synthesize debugAsAService=_debugAsAService;
@property(copy) NSString *remoteInstallPath; // @synthesize remoteInstallPath=_remoteInstallPath;
@property(copy) NSString *sdkPath; // @synthesize sdkPath=_sdkPath;
@property(readonly) int enableGPUValidationMode; // @synthesize enableGPUValidationMode=_enableGPUValidationMode;
@property(readonly) int enableGPUFrameCaptureMode; // @synthesize enableGPUFrameCaptureMode=_enableGPUFrameCaptureMode;
@property(readonly) IDESchemeOptionReference *routingCoverageFileReference; // @synthesize routingCoverageFileReference=_routingCoverageFileReference;
@property(readonly, copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly) BOOL showNonLocalizedStrings; // @synthesize showNonLocalizedStrings=_showNonLocalizedStrings;
@property(readonly) IDELocationScenarioReference *locationScenarioReference; // @synthesize locationScenarioReference=_locationScenarioReference;
@property(readonly) BOOL allowLocationSimulation; // @synthesize allowLocationSimulation=_allowLocationSimulation;
@property(readonly, copy) NSString *architecture; // @synthesize architecture=_architecture;
@property(readonly) DVTFilePath *workingDirectory; // @synthesize workingDirectory=_workingDirectory;
@property unsigned int debugProcessAsUID; // @synthesize debugProcessAsUID=_debugProcessAsUID;
@property(copy) DVTFilePath *replacementRunnableLocation; // @synthesize replacementRunnableLocation=_replacementRunnableLocation;
@property BOOL askOnLaunchChangedRunnable; // @synthesize askOnLaunchChangedRunnable=_askOnLaunchChangedRunnable;
@property(copy) NSDictionary *appExtensionBuiltPaths; // @synthesize appExtensionBuiltPaths=_appExtensionBuiltPaths;
@property int runnableType; // @synthesize runnableType=_runnableType;
@property(copy) NSString *runnableBundleIdentifier; // @synthesize runnableBundleIdentifier=_runnableBundleIdentifier;
@property(readonly) unsigned long long launchAutomaticallySubstyle; // @synthesize launchAutomaticallySubstyle=_launchAutomaticallySubstyle;
@property(nonatomic) int launchStyle; // @synthesize launchStyle=_launchStyle;
@property(readonly) NSString *selectedDebuggerIdentifier; // @synthesize selectedDebuggerIdentifier=_selectedDebuggerIdentifier;
@property(readonly) NSString *selectedLauncherIdentifier; // @synthesize selectedLauncherIdentifier=_selectedLauncherIdentifier;
@property(readonly) IDEEntityIdentifier *schemeIdentifier; // @synthesize schemeIdentifier=_schemeIdentifier;
@property(nonatomic) BOOL isLaunchedForTesting; // @synthesize isLaunchedForTesting=_isLaunchedForTesting;
@property(nonatomic) BOOL stopOnEveryMainThreadCheckerIssue; // @synthesize stopOnEveryMainThreadCheckerIssue=_stopOnEveryMainThreadCheckerIssue;
@property(nonatomic) BOOL stopOnEveryUBSanitizerIssue; // @synthesize stopOnEveryUBSanitizerIssue=_stopOnEveryUBSanitizerIssue;
@property(nonatomic) BOOL stopOnEveryThreadSanitizerIssue; // @synthesize stopOnEveryThreadSanitizerIssue=_stopOnEveryThreadSanitizerIssue;
@property(copy, nonatomic) NSString *toolchainLLDBFrameworkPath; // @synthesize toolchainLLDBFrameworkPath=_toolchainLLDBFrameworkPath;
- (void).cxx_destruct;
- (id)launchParametersByAppendingPath:(id)arg1 toSearchPathEnvironmentVariable:(id)arg2;
- (id)launchParametersByPrependingPath:(id)arg1 toSearchPathEnvironmentVariable:(id)arg2;
- (id)launchParametersByReplacingEnvironmentVariablesWithDictionary:(id)arg1;
- (id)launchParametersByReplacingCommandLineArgsWithArray:(id)arg1;
@property(readonly) DVTFilePath *filePathToBinary; // @synthesize filePathToBinary=_filePathToBinary;
@property(readonly) DVTFilePath *originalRunnableLocation;
@property(readonly, copy) DVTFilePath *runnableLocation; // @synthesize runnableLocation=_runnableLocation;
@property(readonly, copy) NSDictionary *environmentVariables; // @synthesize environmentVariables=_environmentVariables;
@property(readonly, copy) NSMutableDictionary *testingEnvironmentVariables; // @synthesize testingEnvironmentVariables=_testingEnvironmentVariables;
@property(copy, nonatomic) NSArray *commandLineArgs; // @synthesize commandLineArgs=_commandLineArgs;
@property(readonly) NSArray *rawCommandLineArgs;
- (void)_setUninitializedFlagsToInitialized;
- (id)init;

@end

