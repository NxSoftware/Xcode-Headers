//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Xcode3Core/IDEWorkspaceDelegate-Protocol.h>

@class DVTCommandLineParser, DVTMacroDefinitionTable, DVTSourceControlWorkspaceBlueprint, IDEScheme, IDEWorkspace, IDEXBSBuildParameters, NSArray, NSDictionary, NSFileHandle, NSMutableArray, NSMutableDictionary, NSNumber, NSOperationQueue, NSString, Xcode3Project;
@protocol IDEXBSXcodebuildSupportProvider;

@interface Xcode3CommandLineBuildTool : NSObject <IDEWorkspaceDelegate>
{
    id _containerDidOpenContainerNotificationObserver;
    DVTCommandLineParser *_parser;
    BOOL _shouldExit;
    BOOL _allTargets;
    BOOL _skipUnsupportedDestinations;
    BOOL _parallelizeTargets;
    BOOL _hideShellScriptEnvironment;
    BOOL _dontActuallyRunCommands;
    BOOL _skipUnavailableActions;
    BOOL _quieterOutput;
    BOOL _runSkippedTestsOnly;
    BOOL _disableConcurrentTesting;
    BOOL _outputAsJSON;
    BOOL _readSourceControlBlueprint;
    BOOL _allowProvisioningUpdates;
    BOOL _allowProvisioningDeviceRegistration;
    int _toolCommand;
    NSString *_name;
    NSArray *_arguments;
    NSDictionary *_environment;
    NSFileHandle *_standardInput;
    NSFileHandle *_standardOutput;
    NSFileHandle *_standardError;
    long long _exitStatus;
    NSString *_projectName;
    NSArray *_targetNames;
    NSString *_workspaceName;
    NSString *_schemeName;
    NSString *_xcconfigPathFromOption;
    NSString *_xcconfigPathFromEnvVar;
    NSString *_actionResultsBundlePathWithBaselineOverridesFromOption;
    NSString *_automaticBaselineDescription;
    NSString *_nameOfFileToFind;
    NSString *_archivePath;
    NSString *_exportOptionsPlist;
    NSString *_exportDestinationPath;
    NSArray *_buildActions;
    NSArray *_potentialBuildActions;
    NSArray *_buildSettingAssignmentStrings;
    Xcode3Project *_project;
    NSMutableArray *_targets;
    IDEWorkspace *_workspace;
    NSMutableDictionary *_perActionRunDestinations;
    NSString *_configurationName;
    NSArray *_architectures;
    NSString *_baseSdkName;
    NSArray *_toolchainNames;
    NSArray *_destinationSpecifications;
    NSNumber *_destinationTimeout;
    NSNumber *_maxConcurrency;
    NSNumber *_maxDeviceTestConcurrency;
    NSNumber *_maxSimulatorTestConcurrency;
    NSString *_localizationPath;
    NSArray *_exportLanguages;
    NSString *_codeCoverageEnabled;
    NSString *_addressSanitizerEnabled;
    NSString *_threadSanitizerEnabled;
    NSString *_UBSanitizerEnabled;
    NSString *_testRunSpecificationPathString;
    NSArray *_skipTestIdentifiers;
    NSArray *_onlyTestIdentifiers;
    NSMutableDictionary *_testApplicationMappingOverrides;
    NSString *_testWithLanguage;
    NSString *_testWithRegion;
    NSString *_templateOutputPath;
    NSString *_templateTeamID;
    NSString *_templateName;
    NSString *_templatePlatform;
    NSString *_templateOptions;
    NSDictionary *_templateNonPermutedOptionValues;
    NSArray *_templateRequiredOptions;
    DVTMacroDefinitionTable *_synthesizedMacros;
    DVTMacroDefinitionTable *_macrosFromCommandLine;
    DVTMacroDefinitionTable *_macrosFromXcconfigOption;
    DVTMacroDefinitionTable *_macrosFromXcconfigEnvVar;
    NSMutableDictionary *_userDefaults;
    NSMutableDictionary *_environmentUserDefaults;
    NSOperationQueue *_buildToolQueue;
    NSString *_resultBundlePath;
    NSString *_sourceControlSSHKeyPath;
    DVTSourceControlWorkspaceBlueprint *_sourceControlBlueprint;
    IDEXBSBuildParameters *_xbsBuildParameters;
    id <IDEXBSXcodebuildSupportProvider> _xbsXcodebuildSupportProvider;
    IDEScheme *_scheme;
}

+ (id)sharedCommandLineBuildTool;
+ (id)filesInDirectory:(id)arg1 withExtensions:(id)arg2 errorString:(id *)arg3;
+ (id)knownWorkspaceWrapperExtensions;
+ (id)xcodebuildDebugLogAspect;
+ (id)timingLogAspect;
+ (BOOL)useArchiveActionForInstall;
@property(retain) IDEScheme *scheme; // @synthesize scheme=_scheme;
@property BOOL allowProvisioningDeviceRegistration; // @synthesize allowProvisioningDeviceRegistration=_allowProvisioningDeviceRegistration;
@property BOOL allowProvisioningUpdates; // @synthesize allowProvisioningUpdates=_allowProvisioningUpdates;
@property(retain) id <IDEXBSXcodebuildSupportProvider> xbsXcodebuildSupportProvider; // @synthesize xbsXcodebuildSupportProvider=_xbsXcodebuildSupportProvider;
@property(retain) IDEXBSBuildParameters *xbsBuildParameters; // @synthesize xbsBuildParameters=_xbsBuildParameters;
@property(retain) DVTSourceControlWorkspaceBlueprint *sourceControlBlueprint; // @synthesize sourceControlBlueprint=_sourceControlBlueprint;
@property(retain) NSString *sourceControlSSHKeyPath; // @synthesize sourceControlSSHKeyPath=_sourceControlSSHKeyPath;
@property BOOL readSourceControlBlueprint; // @synthesize readSourceControlBlueprint=_readSourceControlBlueprint;
@property BOOL outputAsJSON; // @synthesize outputAsJSON=_outputAsJSON;
@property(retain) NSString *resultBundlePath; // @synthesize resultBundlePath=_resultBundlePath;
@property(retain) NSOperationQueue *buildToolQueue; // @synthesize buildToolQueue=_buildToolQueue;
@property(retain) NSMutableDictionary *environmentUserDefaults; // @synthesize environmentUserDefaults=_environmentUserDefaults;
@property(retain) NSMutableDictionary *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain) DVTMacroDefinitionTable *macrosFromXcconfigEnvVar; // @synthesize macrosFromXcconfigEnvVar=_macrosFromXcconfigEnvVar;
@property(retain) DVTMacroDefinitionTable *macrosFromXcconfigOption; // @synthesize macrosFromXcconfigOption=_macrosFromXcconfigOption;
@property(retain) DVTMacroDefinitionTable *macrosFromCommandLine; // @synthesize macrosFromCommandLine=_macrosFromCommandLine;
@property(retain) DVTMacroDefinitionTable *synthesizedMacros; // @synthesize synthesizedMacros=_synthesizedMacros;
@property(retain) NSArray *templateRequiredOptions; // @synthesize templateRequiredOptions=_templateRequiredOptions;
@property(retain) NSDictionary *templateNonPermutedOptionValues; // @synthesize templateNonPermutedOptionValues=_templateNonPermutedOptionValues;
@property(retain) NSString *templateOptions; // @synthesize templateOptions=_templateOptions;
@property(retain) NSString *templatePlatform; // @synthesize templatePlatform=_templatePlatform;
@property(retain) NSString *templateName; // @synthesize templateName=_templateName;
@property(retain) NSString *templateTeamID; // @synthesize templateTeamID=_templateTeamID;
@property(retain) NSString *templateOutputPath; // @synthesize templateOutputPath=_templateOutputPath;
@property(retain) NSString *testWithRegion; // @synthesize testWithRegion=_testWithRegion;
@property(retain) NSString *testWithLanguage; // @synthesize testWithLanguage=_testWithLanguage;
@property(retain) NSMutableDictionary *testApplicationMappingOverrides; // @synthesize testApplicationMappingOverrides=_testApplicationMappingOverrides;
@property BOOL disableConcurrentTesting; // @synthesize disableConcurrentTesting=_disableConcurrentTesting;
@property BOOL runSkippedTestsOnly; // @synthesize runSkippedTestsOnly=_runSkippedTestsOnly;
@property(retain) NSArray *onlyTestIdentifiers; // @synthesize onlyTestIdentifiers=_onlyTestIdentifiers;
@property(retain) NSArray *skipTestIdentifiers; // @synthesize skipTestIdentifiers=_skipTestIdentifiers;
@property(retain) NSString *testRunSpecificationPathString; // @synthesize testRunSpecificationPathString=_testRunSpecificationPathString;
@property(retain) NSString *UBSanitizerEnabled; // @synthesize UBSanitizerEnabled=_UBSanitizerEnabled;
@property(retain) NSString *threadSanitizerEnabled; // @synthesize threadSanitizerEnabled=_threadSanitizerEnabled;
@property(retain) NSString *addressSanitizerEnabled; // @synthesize addressSanitizerEnabled=_addressSanitizerEnabled;
@property(retain) NSString *codeCoverageEnabled; // @synthesize codeCoverageEnabled=_codeCoverageEnabled;
@property(retain) NSArray *exportLanguages; // @synthesize exportLanguages=_exportLanguages;
@property(retain) NSString *localizationPath; // @synthesize localizationPath=_localizationPath;
@property BOOL quieterOutput; // @synthesize quieterOutput=_quieterOutput;
@property BOOL skipUnavailableActions; // @synthesize skipUnavailableActions=_skipUnavailableActions;
@property BOOL dontActuallyRunCommands; // @synthesize dontActuallyRunCommands=_dontActuallyRunCommands;
@property(copy) NSNumber *maxSimulatorTestConcurrency; // @synthesize maxSimulatorTestConcurrency=_maxSimulatorTestConcurrency;
@property(copy) NSNumber *maxDeviceTestConcurrency; // @synthesize maxDeviceTestConcurrency=_maxDeviceTestConcurrency;
@property(copy) NSNumber *maxConcurrency; // @synthesize maxConcurrency=_maxConcurrency;
@property BOOL hideShellScriptEnvironment; // @synthesize hideShellScriptEnvironment=_hideShellScriptEnvironment;
@property BOOL parallelizeTargets; // @synthesize parallelizeTargets=_parallelizeTargets;
@property(copy) NSNumber *destinationTimeout; // @synthesize destinationTimeout=_destinationTimeout;
@property BOOL skipUnsupportedDestinations; // @synthesize skipUnsupportedDestinations=_skipUnsupportedDestinations;
@property(copy) NSArray *destinationSpecifications; // @synthesize destinationSpecifications=_destinationSpecifications;
@property(retain) NSArray *toolchainNames; // @synthesize toolchainNames=_toolchainNames;
@property(copy) NSString *baseSdkName; // @synthesize baseSdkName=_baseSdkName;
@property(retain) NSArray *architectures; // @synthesize architectures=_architectures;
@property(copy) NSString *configurationName; // @synthesize configurationName=_configurationName;
@property(retain) NSMutableDictionary *perActionRunDestinations; // @synthesize perActionRunDestinations=_perActionRunDestinations;
@property(retain) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property BOOL allTargets; // @synthesize allTargets=_allTargets;
@property(retain) NSMutableArray *targets; // @synthesize targets=_targets;
@property(retain) Xcode3Project *project; // @synthesize project=_project;
@property(retain) NSArray *buildSettingAssignmentStrings; // @synthesize buildSettingAssignmentStrings=_buildSettingAssignmentStrings;
@property(retain) NSArray *potentialBuildActions; // @synthesize potentialBuildActions=_potentialBuildActions;
@property(retain) NSArray *buildActions; // @synthesize buildActions=_buildActions;
@property(copy) NSString *exportDestinationPath; // @synthesize exportDestinationPath=_exportDestinationPath;
@property(copy) NSString *exportOptionsPlist; // @synthesize exportOptionsPlist=_exportOptionsPlist;
@property(copy) NSString *archivePath; // @synthesize archivePath=_archivePath;
@property(copy) NSString *nameOfFileToFind; // @synthesize nameOfFileToFind=_nameOfFileToFind;
@property(copy) NSString *automaticBaselineDescription; // @synthesize automaticBaselineDescription=_automaticBaselineDescription;
@property(copy) NSString *actionResultsBundlePathWithBaselineOverridesFromOption; // @synthesize actionResultsBundlePathWithBaselineOverridesFromOption=_actionResultsBundlePathWithBaselineOverridesFromOption;
@property(copy) NSString *xcconfigPathFromEnvVar; // @synthesize xcconfigPathFromEnvVar=_xcconfigPathFromEnvVar;
@property(copy) NSString *xcconfigPathFromOption; // @synthesize xcconfigPathFromOption=_xcconfigPathFromOption;
@property(copy) NSString *schemeName; // @synthesize schemeName=_schemeName;
@property(copy) NSString *workspaceName; // @synthesize workspaceName=_workspaceName;
@property(retain) NSArray *targetNames; // @synthesize targetNames=_targetNames;
@property(copy) NSString *projectName; // @synthesize projectName=_projectName;
@property(nonatomic) BOOL shouldExit; // @synthesize shouldExit=_shouldExit;
@property int toolCommand; // @synthesize toolCommand=_toolCommand;
@property long long exitStatus; // @synthesize exitStatus=_exitStatus;
@property(retain) NSFileHandle *standardError; // @synthesize standardError=_standardError;
@property(retain) NSFileHandle *standardOutput; // @synthesize standardOutput=_standardOutput;
@property(retain) NSFileHandle *standardInput; // @synthesize standardInput=_standardInput;
@property(copy) NSDictionary *environment; // @synthesize environment=_environment;
@property(copy) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (long long)_buildLogVerbosity;
- (void)run;
- (void)_createNewProjectAndExit;
- (void)_permuteTemplatesAndExit;
- (void)_saveProject;
- (void)_importLocalizationsAndExit;
- (void)_exportLocalizationsAndExit;
- (void)_distributeArchiveAndExit;
- (id)_availableExportArchiveOptionsSection;
- (void)_printVerboseSDKListAndExit;
- (void)_printVerboseInfoForSDK:(id)arg1 keysToEmit:(id)arg2;
- (void)_printShortSDKListAndExit;
- (void)_enumerateAllPlatformsAlphabeticallyWithBlock:(CDUnknownBlockType)arg1;
- (void)_printPathToLibraryAndExit;
- (void)_printPathToExecutableAndExit;
- (id)_sdkForUseWithFind;
- (void)_printContainerInformationAndExit;
- (void)_printVersionInfoAndExit;
- (void)_showBuildSettings;
- (void)_buildWithTimingSection:(id)arg1;
- (id)_concurrentTestOperations:(id)arg1 schemeTask:(long long)arg2 schemeCommand:(id)arg3 executionEnvironment:(id)arg4 invocationRecord:(id)arg5 buildLog:(id)arg6 restorePersistedBuildResults:(BOOL)arg7 deviceOperationLimit:(long long)arg8 simulatorOperationLimit:(long long)arg9 outError:(id *)arg10;
- (BOOL)_shouldTestConcurrentlyForRunDestinations:(id)arg1;
- (void)unableToOpenProjectAtPath:(id)arg1 reason:(id)arg2;
- (void)_workspace:(id)arg1 failedToResolveContainerForProjectFile:(id)arg2;
- (void)_resolveInputOptionsWithTimingSection:(id)arg1;
- (void)_resolveRunDestinationsForBuildAction:(id)arg1;
- (void)_resolveBaseSdk;
- (id)_resolveSdk:(id)arg1;
- (id)_stringByResolvingSymlinksInPath:(id)arg1;
- (void)_parseOptions;
- (id)_actionStringForBuildAction:(id)arg1;
- (id)_schemeCommandForBuildAction:(id)arg1 outSchemeTask:(long long *)arg2;
- (id)_legacyBuildActionMapping;
- (id)_supportedBuildActions;
- (void)_printErrorString:(id)arg1 andFailWithCode:(long long)arg2;
- (void)_printWarningString:(id)arg1;
- (unsigned long long)_projectLoadingTimeout;
- (unsigned long long)_schemeLoadingTimeout;
- (id)overridingProperties;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

