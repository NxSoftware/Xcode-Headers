//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEiOSSupportCore/DVTAbstractiOSDevice.h>

#import <IDEiOSSupportCore/DVTDeviceApplicationInstaller-Protocol.h>
#import <IDEiOSSupportCore/IDERunDestinationFallbackSelectorDeviceInfo-Protocol.h>
#import <IDEiOSSupportCore/XCDTMobileIS_XPCDebuggingProcotol-Protocol.h>

@class DTXChannel, DVTDeviceOperation, DVTDispatchLock, DVTNotificationToken, DVTObservingToken, DVTPlatform, IDELaunchParametersSnapshot, NSError, NSMutableArray, NSMutableSet, NSObject, NSSet, NSString;
@protocol DTDKRemoteDeviceToken, OS_dispatch_queue;

@interface DVTiOSDevice : DVTAbstractiOSDevice <DVTDeviceApplicationInstaller, IDERunDestinationFallbackSelectorDeviceInfo, XCDTMobileIS_XPCDebuggingProcotol>
{
    NSObject<OS_dispatch_queue> *_deviceInstallQueue;
    NSMutableArray *_developmentStateObservingTokens;
    DVTObservingToken *_proxiedTokensObservingToken;
    DVTNotificationToken *_deviceProgressToken;
    DVTNotificationToken *_deviceConnectionDidAppearToken;
    DVTDispatchLock *_crashLogsLock;
    _Bool _deviceWantsToBeForgotten;
    struct __CFDictionary *_xpcStdoutFDForPid;
    NSMutableSet *_proxiedDevices;
    DVTPlatform *_platform;
    BOOL _ignored;
    BOOL _removedProfDataFiles;
    _Bool _deviceReady;
    _Bool _inHasConnected;
    BOOL _deviceInstallIsCancelled;
    BOOL _deviceIsTransient;
    NSString *bootArgs;
    DVTDeviceOperation *deviceProgressOperation;
    DVTDispatchLock *deviceProgressOperationLock;
    DVTDeviceOperation *deviceConnectingOperation;
    NSObject<DTDKRemoteDeviceToken> *_token;
    NSString *_mountOptions;
    NSError *_developerPrepError;
    IDELaunchParametersSnapshot *_scriptLaunchParameters;
    DTXChannel *_xpcAttachServiceChannel;
    DTXChannel *_xpcProxyAttachServiceChannel;
}

+ (id)keyPathsForValuesAffectingIsPasscodeLocked;
+ (id)keyPathsForValuesAffectingProcessorDescription;
+ (id)keyPathsForValuesAffectingIsUsedForDevelopment;
+ (id)keyPathsForValuesAffectingIgnored;
+ (id)keyPathsForValuesAffectingIsPaired;
+ (id)keyPathsForValuesAffectingIsWirelessEnabled;
+ (id)keyPathsForValuesAffectingAddresses;
+ (id)keyPathsForValuesAffectingPrimaryAddress;
+ (id)keyPathsForValuesAffectingHostname;
+ (id)keyPathsForValuesAffectingHasWiredConnection;
+ (id)keyPathsForValuesAffectingHasWirelessConnection;
+ (id)keyPathsForValuesAffectingIsWireless;
+ (void)presentError:(id)arg1;
+ (id)keyPathsForValuesAffectingSystemApplications;
+ (id)keyPathsForValuesAffectingApplications;
+ (id)keyPathsForValuesAffectingDeviceIsPaired;
+ (id)keyPathsForValuesAffectingAvailable;
+ (id)keyPathsForValuesAffectingCanRename;
+ (id)keyPathsForValuesAffectingDeviceAttached;
+ (id)itemWithPlistRepresentation:(id)arg1;
+ (id)keyPathsForValuesAffectingNativeArchitecture;
+ (id)keyPathsForValuesAffectingUnavailabilityError;
+ (id)keyPathsForValuesAffectingRsyncPort;
+ (id)keyPathsForValuesAffectingTelnetPort;
+ (id)keyPathsForValuesAffectingSshPort;
+ (id)keyPathsForValuesAffectingIsRunningSupportedOS;
+ (id)keyPathsForValuesAffectingIsSupportedHardware;
+ (id)keyPathsForValuesAffectingProvisioningProfiles;
+ (id)keyPathsForValuesAffectingName;
+ (id)keyPathsForValuesAffectingCanBeWatchCompanion;
+ (id)iPhoneDeviceWithDeviceToken:(id)arg1;
+ (id)alliOSDevices;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingCanExecute;
+ (id)allDeveloperDiskImagePathsForPlatform:(id)arg1;
+ (id)pathForInternalExecutable:(id)arg1 searchInPlatform:(id)arg2;
@property(retain) DTXChannel *xpcProxyAttachServiceChannel; // @synthesize xpcProxyAttachServiceChannel=_xpcProxyAttachServiceChannel;
@property(retain) DTXChannel *xpcAttachServiceChannel; // @synthesize xpcAttachServiceChannel=_xpcAttachServiceChannel;
@property BOOL deviceIsTransient; // @synthesize deviceIsTransient=_deviceIsTransient;
@property(retain) IDELaunchParametersSnapshot *scriptLaunchParameters; // @synthesize scriptLaunchParameters=_scriptLaunchParameters;
@property BOOL deviceInstallIsCancelled; // @synthesize deviceInstallIsCancelled=_deviceInstallIsCancelled;
@property(retain) NSObject<OS_dispatch_queue> *deviceInstallQueue; // @synthesize deviceInstallQueue=_deviceInstallQueue;
@property(copy) NSError *developerPrepError; // @synthesize developerPrepError=_developerPrepError;
@property _Bool inHasConnected; // @synthesize inHasConnected=_inHasConnected;
@property _Bool deviceReady; // @synthesize deviceReady=_deviceReady;
@property BOOL removedProfDataFiles; // @synthesize removedProfDataFiles=_removedProfDataFiles;
@property(readonly, copy) NSString *mountOptions; // @synthesize mountOptions=_mountOptions;
@property(readonly) _Bool deviceWantsToBeForgotten; // @synthesize deviceWantsToBeForgotten=_deviceWantsToBeForgotten;
@property(retain) NSObject<DTDKRemoteDeviceToken> *token; // @synthesize token=_token;
- (void)setIgnored:(BOOL)arg1;
@property(retain) DVTDeviceOperation *deviceConnectingOperation; // @synthesize deviceConnectingOperation;
@property(retain, nonatomic) DVTDispatchLock *deviceProgressOperationLock; // @synthesize deviceProgressOperationLock;
@property(retain) DVTDeviceOperation *deviceProgressOperation; // @synthesize deviceProgressOperation;
@property(retain) NSString *bootArgs; // @synthesize bootArgs;
- (void).cxx_destruct;
- (void)_syncDeviceCrashLogsDirectoryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)monitorWirelessConnection;
- (id)primaryInstrumentsServer;
- (id)platform;
- (_Bool)isPasscodeLocked;
- (id)processorDescription;
- (void)setUsedForDevelopment:(BOOL)arg1;
- (BOOL)isUsedForDevelopment;
- (BOOL)isIgnored;
- (_Bool)isPaired;
- (void)attemptRecoveryFromUnavailabilityError;
- (id)hostPairingToken;
- (void)forget;
- (void)unpair;
- (_Bool)extendedPairWithError:(id *)arg1 extendedInformationHandler:(CDUnknownBlockType)arg2;
- (_Bool)usesPairingRecord;
- (_Bool)canEnableWireless;
- (void)disableWireless;
- (id)enableWireless;
- (_Bool)isWirelessEnabled;
- (id)addresses;
- (id)primaryAddress;
- (id)hostname;
- (_Bool)hasWiredConnection;
- (_Bool)hasWirelessConnection;
- (_Bool)isWireless;
- (BOOL)deviceHasUI;
@property(readonly, copy) NSString *description;
@property(readonly) NSSet *systemApplications;
@property(readonly) NSSet *applications;
- (BOOL)canChangeDeviceSoftwareVersion;
- (_Bool)deviceIsPaired;
- (BOOL)isAvailable;
- (void)renameDevice:(id)arg1;
- (void)setName:(id)arg1;
- (BOOL)canRename;
@property(readonly) _Bool deviceHasWakeupToken;
@property(readonly) _Bool deviceAttached;
- (void)dealloc;
- (void)setCrashLogDirectory:(id)arg1;
- (id)plistRepresentation;
- (void)downloadOptimizationProfilesFromBundleIdentifiers:(id)arg1 orPaths:(id)arg2 toFilePath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)downloadOptimizationProfilesFromBundleIdentifier:(id)arg1 orPath:(id)arg2 toFilePath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)optimizationProfilesPathFromBundleIdentifier:(id)arg1;
- (id)scriptingEnvironment;
- (id)uncachedOverridingPropertiesForBuildable:(id)arg1 buildParameters:(id)arg2;
- (id)executionDisplayName;
- (id)supportedSDKsForBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (BOOL)canBeDefaultDeviceForBuildable:(id)arg1 buildParameters:(id)arg2;
- (id)displayNameAdditionsWhenUsingArchitecture:(id)arg1 withSDK:(id)arg2;
- (id)supportedArchitectures;
- (id)nativeArchitecture;
- (BOOL)shouldPresentDeviceForBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (id)errorMessageForBuildable:(id)arg1 buildParameters:(id)arg2;
- (BOOL)deviceSupportsBuildable:(id)arg1 buildParameters:(id)arg2 error:(id *)arg3;
- (id)supportedDeviceFamilies;
- (BOOL)canBeRunDestination;
- (id)unavailabilityError;
- (id)_deviceIsUnpairedError;
- (long long)rsyncPort;
@property(readonly) long long telnetPort;
- (long long)sshPort;
- (_Bool)_askForAlternateApplicationIfNeeded:(id *)arg1;
- (BOOL)isRunningSupportedOS;
- (BOOL)isSupportedHardware;
- (BOOL)supportsProvisioning;
@property(readonly, nonatomic) NSString *ide_fallbackSelectorDeviceGroupingFamily;
- (id)deviceClassForDisplay;
- (void)uninstallProvisioningProfile:(id)arg1;
- (void)installProvisioningProfiles:(id)arg1;
- (BOOL)installProvisioningProfileAtURL:(id)arg1 error:(id *)arg2;
- (void)installProvisioningProfile:(id)arg1;
- (id)provisioningProfiles;
- (BOOL)runsRemoteFromHostLauncher;
- (id)softwareVersion;
- (id)viewDebuggerDylibPathInLaunchSessionWithEnvironmentVariables:(id)arg1;
- (id)extraDebuggingRuntimeDylibPath;
- (id)recordedFramesLibdispatchIntrospectionDylibPath;
- (BOOL)supportsAttachByPIDOrName;
- (id)operatingSystemVersionWithBuildNumber;
- (id)operatingSystemBuild;
- (id)operatingSystemVersion;
- (id)modelCode;
- (id)modelUTI;
- (id)modelName;
- (id)name;
- (id)displayOrder;
- (BOOL)canIgnore;
- (BOOL)canBeWatchCompanion;
- (unsigned long long)supportsFetchEvents;
- (BOOL)supportsRoutingCoverageFile;
- (BOOL)supportsLocationSimulation;
- (BOOL)supportsApplicationDataUploading;
- (void)cancelDeviceInstall;
- (id)startUpDevice;
- (void)markDeviceIsNotWaitingForConnection;
- (void)markDeviceIsWaitingForConnection;
- (id)activeProxiedDevice;
- (void)attachToken:(id)arg1;
- (void)stopDebuggingXPCServices:(id)arg1 forPairedDevice:(BOOL)arg2;
- (void)xpcServiceObserved:(id)arg1 withProcessIdentifier:(int)arg2 requestedByProcess:(int)arg3 options:(id)arg4;
- (void)outputReceived:(id)arg1 fromProcess:(int)arg2 atTime:(unsigned long long)arg3;
- (void)debugXPCServices:(id)arg1 onPairedDevice:(BOOL)arg2 completionSemaphore:(id)arg3;
- (void)_setXPCAttachChannel:(id)arg1 ForPairedDevice:(BOOL)arg2;
- (id)_xpcChannelForPairedDevice:(BOOL)arg1;
- (BOOL)supportsDYLDPrintToStdErr;
- (unsigned long long)supportedLaunchOptionsForProxiedDevice;
- (unsigned long long)supportedLaunchOptions;
- (id)initWithDeviceLocation:(id)arg1 extension:(id)arg2;
- (void)didFinishRunning;
- (id)startDebugServerServiceForLaunchSession:(id)arg1;
- (id)deviceArbitrationForcedCheckIn;
- (id)deviceArbitrationCheckIn;
- (BOOL)installApplicationWithLaunchSession:(id)arg1 error:(id *)arg2;
- (void)_resolveApplicationIcon:(id)arg1;
- (void)presentAlertForNoRoutingCoverageFileAtPath:(id)arg1;
- (BOOL)downloadApplicationDataToPath:(id)arg1 forInstalledApplicationWithBundleIdentifier:(id)arg2 error:(id *)arg3;
- (BOOL)uploadApplicationDataWithPath:(id)arg1 forInstalledApplicationWithBundleIdentifier:(id)arg2 error:(id *)arg3;
- (void)_storeAppDataSyncRecords:(id)arg1 forApplication:(id)arg2;
- (id)_appDataSyncRecordsForApplication:(id)arg1;
- (id)_customDataSpecifierForApplication:(id)arg1;
- (BOOL)installForRsyncDeveloperModeWithSession:(id)arg1 error:(id *)arg2;
- (id)deviceInstallPathForLaunchSession:(id)arg1 andBuildProductsPath:(id)arg2;
- (BOOL)_configureTestingForLaunchSession:(id)arg1 outError:(id *)arg2;
- (BOOL)installForMobileInstallWithSession:(id)arg1 error:(id *)arg2;
- (id)_updateTestingEnvironmentVariables:(id)arg1 forApplication:(id)arg2 deviceConfigPath:(id)arg3 testConfiguration:(id)arg4 error:(id *)arg5;
- (BOOL)installForTestBundleWithSession:(id)arg1 error:(id *)arg2;
- (id)_waitForApplicationForSession:(id)arg1;
- (id)_uncachedBundleIdentifierForSession:(id)arg1;
- (id)applicationForSession:(id)arg1;
- (id)deviceBuiltProductsDir;
- (id)deviceMountedProductsDir;
- (id)localBuiltProductsPathWithSession:(id)arg1 error:(id *)arg2;
- (id)buildParametersForLaunchSession:(id)arg1;
- (_Bool)_copyBackAlternateApplication:(id)arg1 atPath:(id *)arg2 error:(id *)arg3;
- (void)setInstallProgress:(long long)arg1 text:(id)arg2;
- (void)setInstallProgress:(long long)arg1 path:(id)arg2;
- (long long)updateInstalledApplicationsWithResult:(id *)arg1;
- (id)taskForDeviceCommand:(id)arg1 withArguments:(id)arg2 error:(id *)arg3;
- (void)installActivityDidEndInWorkspace:(id)arg1 withError:(id)arg2;
- (void)installActivityInWorkspace:(id)arg1 operationInProgress:(id)arg2 details:(id)arg3;
- (void)installActivityWillBeginInWorkspace:(id)arg1 withProductName:(id)arg2;
- (id)invokeUserScript:(id)arg1;
- (BOOL)canExecute;
- (void)hasDisconnected;
- (void)hasConnected;
- (id)_remoteDeviceProperties;
- (id)locateDeveloperRoot;
- (id)developerDiskImageSearchPaths;
- (id)_openTCPRelayConnection;
- (BOOL)_hasSpringBoard;
- (BOOL)_bothHaveInternalSupport;
- (id)_transformPathForDevice:(id)arg1 error:(id *)arg2;
- (id)_deviceHostname;
- (id)_rsyncEnvironment;
- (id)enableKeyBasedSSH;
- (id)_additionalRsyncParameters;
- (id)_copyPath:(id)arg1 toPath:(id)arg2 sync:(_Bool)arg3 onDevice:(_Bool)arg4 withStatusObserver:(CDUnknownBlockType)arg5;
- (void)_closeConnection;
- (id)analysisOperationWithAnalysisToolService:(id)arg1 location:(id)arg2 workingDirectory:(id)arg3 workspaceFilePath:(id)arg4 projectFilePath:(id)arg5 outError:(id *)arg6;
- (CDUnknownBlockType)_analysisOperationWithAnalysisToolService:(id)arg1 location:(id)arg2 workingDirectory:(id)arg3 workspaceFilePath:(id)arg4 projectFilePath:(id)arg5 outError:(id *)arg6;
- (id)installApplicationSync:(id)arg1 options:(id)arg2;
- (id)installApplicationsSync:(id)arg1 options:(id)arg2;
- (void)uninstallApplications:(id)arg1;
- (id)uninstallApplicationWithBundleIdentifierSync:(id)arg1;
- (void)installApplications:(id)arg1 allowReplacing:(BOOL)arg2;
- (void)_installApplicationsImpl:(id)arg1 allowReplacing:(BOOL)arg2 options:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)processAppInstallSet:(id)arg1 appUninstallSet:(id)arg2 installOptions:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)validateApplicationAtPath:(id)arg1 forInstallationToToken:(id)arg2;
- (BOOL)_checkForARM64SliceAtPath:(id)arg1 executableName:(id)arg2 zipFile:(id)arg3 subpath:(id)arg4;
- (id)installedApplicationWithBundleIdentifier:(id)arg1;
- (id)crashReportsDirectoryPaths;
- (id)connectionServicesFrameworkPath;
- (BOOL)runningSupportedBuildForUITesting;
- (id)deviceForRunningTestsWithHost:(id)arg1 error:(id *)arg2;
- (id)testRunnerSessionForConfiguration:(id)arg1;
- (id)testDaemonRecordingSession;
- (id)testDaemonControlSession;
- (id)testDaemonTransportProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSMutableSet *mutableProxiedDevices; // @dynamic mutableProxiedDevices;
@property(readonly) Class superclass;

@end

