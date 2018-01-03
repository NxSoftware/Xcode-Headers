//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTDeviceKitBase/DTDKDeviceTokenBase.h>

@class DTDKRemoteDeviceConnection, DTDKRemoteDeviceConsoleController, DTDKTCPRelayProcess, DVTDispatchLock, DVTFuture, DVTNotificationToken, DVTPlatform, NSArray, NSError, NSMutableArray, NSNumber, NSSet, NSString;

@interface DTDKMobileDeviceToken : DTDKDeviceTokenBase
{
    DVTPlatform *_platform;
    NSMutableArray *_connections;
    DVTDispatchLock *_connectionsLock;
    DVTNotificationToken *_connectionRemovedToken;
    DVTNotificationToken *_connectionAddedToken;
    NSError *_developerDiskImageMountError;
    NSError *_darwinNotificationServiceError;
    void *_wakeupToken;
    float _startSecureServicesRetryNextSeconds;
    float _startSecureServicesRetryMinSeconds;
    float _startSecureServicesRetryMaxSeconds;
    float _startSecureServicesRetryFalloff;
    DVTFuture *_startSecureServicesOp;
    DVTDispatchLock *_startSecureServicesLock;
    _Bool _deviceAllowsSecureServices;
    _Bool _inReloadApplications;
    _Bool _inReloadSystemApplications;
    _Bool _inReloadProvisioningProfiles;
    _Bool _isWirelessEnabled;
    NSString *deviceIdentifier;
    NSString *deviceSoftwareVersion;
    DTDKRemoteDeviceConnection *_primaryWiredConection;
    DTDKRemoteDeviceConnection *_primaryWirelessConection;
    NSArray *systemApplicationDictionaries;
    NSArray *applicationDictionaries;
    id darwinNotificationService;
    NSString *bonjourServiceName;
    DTDKTCPRelayProcess *_tcpRelayProcess;
    DTDKRemoteDeviceConsoleController *_deviceConsoleController;
    NSString *_deviceName;
    NSNumber *_deviceECID;
    NSString *_deviceIMEI;
    NSString *_deviceClass;
    NSString *_deviceActivationState;
    NSString *_deviceType;
    NSString *_deviceWiFiMAC;
    NSString *_deviceBluetoothMAC;
    NSString *_deviceCodename;
    NSString *_productVersion;
    NSString *_buildVersion;
    NSString *_deviceSerialNumber;
    NSString *_deviceColorString;
    NSString *_deviceEnclosureColorString;
    NSString *_deviceArchitecture;
    NSNumber *_deviceTotalCapacity;
    NSNumber *_deviceAvailableCapacity;
    NSString *_deviceToolsType;
    NSNumber *_isPasscodeLockedObj;
    NSNumber *_deviceProductionSOC;
    NSNumber *_canBeWatchCompanionObj;
    NSArray *_supportedDeviceFamilies;
    NSNumber *_deviceBatteryCapacity;
    NSString *_deviceDevelopmentStatus;
    NSNumber *_deviceChipID;
    NSSet *_applications;
    NSSet *_systemApplications;
    NSSet *_provisioningProfiles;
    CDUnknownBlockType _extendedPairRequestHandler;
}

+ (id)keyPathsForValuesAffectingDeviceTelnetPort;
+ (id)keyPathsForValuesAffectingDeviceRsyncPort;
+ (id)keyPathsForValuesAffectingDeviceSSHPort;
+ (id)keyPathsForValuesAffectingApplications;
+ (id)keyPathsForValuesAffectingDeviceIsSupported;
+ (id)keyPathsForValuesAffectingDeviceIsActivated;
+ (id)keyPathsForValuesAffectingDevelopmentFlag;
+ (id)keyPathsForValuesAffectingDeviceIsProduction;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceIsProduction;
+ (id)keyPathsForValuesAffectingHasLoaded_canBeWatchCompanion;
+ (id)keyPathsForValuesAffectingCanBeWatchCompanion;
+ (id)keyPathsForValuesAffectingHasLoaded_isPasscodeLocked;
+ (id)keyPathsForValuesAffectingIsPasscodeLocked;
+ (id)keyPathsForValuesAffectingDeviceHasStandardTools;
+ (id)keyPathsForValuesAffectingDeviceHasInternalTools;
+ (id)keyPathsForValuesAffectingDeviceCrashReporterKey;
+ (id)keyPathsForValuesAffectingDeviceSoftwareVersion;
+ (id)keyPathsForValuesAffectingDeviceProcessorDescription;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceChipID;
+ (id)keyPathsForValuesAffectingDeviceChipID;
+ (id)keyPathsForValuesAffectingHasLoadedDeviceDevelopmentStatus;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceBatteryCapacity;
+ (id)keyPathsForValuesAffectingDeviceBatteryCapacity;
+ (id)keyPathsForValuesAffectingDeviceHasBattery;
+ (id)keyPathsForValuesAffectingHasLoaded_supportedDeviceFamilies;
+ (id)keyPathsForValuesAffectingHasLoaded_canBeWatchCompanionObj;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceProductionSOC;
+ (id)keyPathsForValuesAffectingHasLoaded_isPasscodeLockedObj;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceToolsType;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceAvailableCapacity;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceTotalCapacity;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceArchitecture;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceEnclosureColorString;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceColorString;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceSerialNumber;
+ (id)keyPathsForValuesAffectingHasLoaded_buildVersion;
+ (id)keyPathsForValuesAffectingHasLoaded_productVersion;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceCodename;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceBluetoothMAC;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceWiFiMAC;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceType;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceActivationState;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceClass;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceIMEI;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceECID;
+ (id)keyPathsForValuesAffectingHasLoaded_deviceName;
+ (id)_wirelessHostID;
+ (id)keyPathsForValuesAffectingHasDirectConnection;
+ (id)keyPathsForValuesAffectingDeviceIsPaired;
+ (id)keyPathsForValuesAffectingHasWirelessConnection;
+ (id)keyPathsForValuesAffectingHasWiredConnection;
+ (id)keyPathsForValuesAffectingDeviceAddresses;
+ (id)keyPathsForValuesAffectingDeviceHostname;
+ (id)keyPathsForValuesAffectingWakeupToken;
+ (id)keyPathsForValuesAffectingDeviceClassForDisplay;
+ (id)keyPathsForValuesAffectingLocalizedDeviceModel;
+ (id)keyPathsForValuesAffectingIsConnected;
+ (id)keyPathsForValuesAffectingIsSupportedOS;
+ (id)deviceLock;
+ (id)devices;
+ (void)initialize;
@property(copy) CDUnknownBlockType extendedPairRequestHandler; // @synthesize extendedPairRequestHandler=_extendedPairRequestHandler;
@property _Bool isWirelessEnabled; // @synthesize isWirelessEnabled=_isWirelessEnabled;
@property _Bool inReloadProvisioningProfiles; // @synthesize inReloadProvisioningProfiles=_inReloadProvisioningProfiles;
@property _Bool inReloadSystemApplications; // @synthesize inReloadSystemApplications=_inReloadSystemApplications;
@property _Bool inReloadApplications; // @synthesize inReloadApplications=_inReloadApplications;
- (void)setProvisioningProfiles:(id)arg1;
- (void)setSystemApplications:(id)arg1;
- (void)setApplications:(id)arg1;
- (void)setDeviceChipID:(id)arg1;
- (void)setDeviceDevelopmentStatus:(id)arg1;
- (void)setDeviceBatteryCapacity:(id)arg1;
- (void)setSupportedDeviceFamilies:(id)arg1;
@property(copy, nonatomic) NSNumber *canBeWatchCompanionObj; // @synthesize canBeWatchCompanionObj=_canBeWatchCompanionObj;
@property(copy, nonatomic) NSNumber *deviceProductionSOC; // @synthesize deviceProductionSOC=_deviceProductionSOC;
@property(copy, nonatomic) NSNumber *isPasscodeLockedObj; // @synthesize isPasscodeLockedObj=_isPasscodeLockedObj;
- (void)setDeviceToolsType:(id)arg1;
- (void)setDeviceAvailableCapacity:(id)arg1;
- (void)setDeviceTotalCapacity:(id)arg1;
- (void)setDeviceArchitecture:(id)arg1;
- (void)setDeviceEnclosureColorString:(id)arg1;
- (void)setDeviceColorString:(id)arg1;
- (void)setDeviceSerialNumber:(id)arg1;
- (void)setBuildVersion:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setDeviceCodename:(id)arg1;
- (void)setDeviceBluetoothMAC:(id)arg1;
- (void)setDeviceWiFiMAC:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setDeviceActivationState:(id)arg1;
- (void)setDeviceClass:(id)arg1;
- (void)setDeviceIMEI:(id)arg1;
- (void)setDeviceECID:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceConsoleController:(id)arg1;
@property _Bool deviceAllowsSecureServices; // @synthesize deviceAllowsSecureServices=_deviceAllowsSecureServices;
@property(retain, nonatomic) DTDKTCPRelayProcess *tcpRelayProcess; // @synthesize tcpRelayProcess=_tcpRelayProcess;
- (void)setBonjourServiceName:(id)arg1;
- (id)bonjourServiceName;
- (void)setDarwinNotificationService:(id)arg1;
- (id)darwinNotificationService;
- (void)setApplicationDictionaries:(id)arg1;
- (id)applicationDictionaries;
- (void)setSystemApplicationDictionaries:(id)arg1;
- (id)systemApplicationDictionaries;
- (void)setPrimaryWirelessConection:(id)arg1;
- (id)primaryWirelessConection;
- (void)setPrimaryWiredConection:(id)arg1;
- (id)primaryWiredConection;
- (void)setDeviceSoftwareVersion:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (id)deviceIdentifier;
- (void).cxx_destruct;
- (id)startTCPRelay;
@property(readonly) long long deviceTelnetPort;
@property(readonly) long long deviceRsyncPort;
@property(readonly) long long deviceSSHPort;
- (id)takeWirelessPowerAssertionWithName:(id)arg1 deatils:(id)arg2 andTimeout:(double)arg3;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)_markDeviceAllowsSecureServices;
- (_Bool)_shouldRetryNotificationListenerStart;
- (void)startSecureServices;
- (void)uninstallProvisioningProfiles:(id)arg1;
- (void)uninstallProvisioningProfile:(id)arg1;
- (void)installProvisioningProfiles:(id)arg1;
- (void)installProvisioningProfile:(id)arg1;
- (void)reload_provisioningProfiles;
- (id)provisioningProfiles;
- (void)fetchApplications:(CDUnknownBlockType)arg1;
- (id)fetchApplications;
- (void)reload_systemApplications;
- (id)systemApplications;
- (void)reload_applications;
- (id)applications;
- (void)renameDevice:(id)arg1;
- (id)installedProvisioningProfileWithUUID:(id)arg1;
- (_Bool)deviceIsSupported;
- (_Bool)deviceIsActivated;
- (id)setDevelopmentFlag:(_Bool)arg1;
- (_Bool)developmentFlag;
- (void)setDeviceIsProduction:(_Bool)arg1;
- (_Bool)deviceIsProduction;
- (_Bool)hasLoaded_deviceIsProduction;
- (_Bool)hasLoaded_canBeWatchCompanion;
- (_Bool)canBeWatchCompanion;
- (_Bool)hasLoaded_isPasscodeLocked;
- (_Bool)isPasscodeLocked;
- (_Bool)deviceHasStandardTools;
- (_Bool)deviceHasInternalTools;
- (_Bool)deviceAllowsIMEIQuery;
- (id)deviceCrashReporterKey;
- (id)deviceSoftwareVersion;
- (id)deviceProcessorDescription;
- (_Bool)hasLoaded_deviceChipID;
- (id)reload_deviceChipID;
- (id)deviceChipID;
- (_Bool)syncSetDevelopmentFlag:(BOOL)arg1 error:(id *)arg2;
- (_Bool)hasLoaded_deviceDevelopmentStatus;
- (id)reload_deviceDevelopmentStatus;
- (id)deviceDevelopmentStatus;
- (_Bool)hasLoaded_deviceBatteryCapacity;
- (id)reload_deviceBatteryCapacity;
- (id)deviceBatteryCapacity;
- (_Bool)deviceHasBattery;
- (_Bool)hasLoaded_supportedDeviceFamilies;
- (id)reload_supportedDeviceFamilies;
- (id)reloadIfNeeded_supportedDeviceFamilies;
- (id)supportedDeviceFamilies;
- (_Bool)hasLoaded_canBeWatchCompanionObj;
- (id)reload_canBeWatchCompanionObj;
- (id)reloadIfNeeded_canBeWatchCompanionObj;
- (_Bool)hasLoaded_deviceProductionSOC;
- (id)reload_deviceProductionSOC;
- (id)reloadIfNeeded_deviceProductionSOC;
- (_Bool)hasLoaded_isPasscodeLockedObj;
- (id)reload_isPasscodeLockedObj;
- (id)reloadIfNeeded_isPasscodeLockedObj;
- (_Bool)hasLoaded_deviceToolsType;
- (id)reload_deviceToolsType;
- (id)reloadIfNeeded_deviceToolsType;
- (id)deviceToolsType;
- (_Bool)hasLoaded_deviceAvailableCapacity;
- (id)reload_deviceAvailableCapacity;
- (id)reloadIfNeeded_deviceAvailableCapacity;
- (id)deviceAvailableCapacity;
- (_Bool)hasLoaded_deviceTotalCapacity;
- (id)reload_deviceTotalCapacity;
- (id)reloadIfNeeded_deviceTotalCapacity;
- (id)deviceTotalCapacity;
- (_Bool)hasLoaded_deviceArchitecture;
- (id)reload_deviceArchitecture;
- (id)reloadIfNeeded_deviceArchitecture;
- (id)deviceArchitecture;
- (_Bool)hasLoaded_deviceEnclosureColorString;
- (id)reload_deviceEnclosureColorString;
- (id)reloadIfNeeded_deviceEnclosureColorString;
- (id)deviceEnclosureColorString;
- (_Bool)hasLoaded_deviceColorString;
- (id)reload_deviceColorString;
- (id)reloadIfNeeded_deviceColorString;
- (id)deviceColorString;
- (_Bool)hasLoaded_deviceSerialNumber;
- (id)reload_deviceSerialNumber;
- (id)reloadIfNeeded_deviceSerialNumber;
- (id)deviceSerialNumber;
- (_Bool)hasLoaded_buildVersion;
- (id)reload_buildVersion;
- (id)reloadIfNeeded_buildVersion;
- (id)buildVersion;
- (_Bool)hasLoaded_productVersion;
- (id)reload_productVersion;
- (id)reloadIfNeeded_productVersion;
- (id)productVersion;
- (_Bool)hasLoaded_deviceCodename;
- (id)reload_deviceCodename;
- (id)reloadIfNeeded_deviceCodename;
- (id)deviceCodename;
- (_Bool)hasLoaded_deviceBluetoothMAC;
- (id)reload_deviceBluetoothMAC;
- (id)reloadIfNeeded_deviceBluetoothMAC;
- (id)deviceBluetoothMAC;
- (_Bool)hasLoaded_deviceWiFiMAC;
- (id)reload_deviceWiFiMAC;
- (id)reloadIfNeeded_deviceWiFiMAC;
- (id)deviceWiFiMAC;
- (_Bool)hasLoaded_deviceType;
- (id)reload_deviceType;
- (id)reloadIfNeeded_deviceType;
- (id)deviceType;
- (_Bool)hasLoaded_deviceActivationState;
- (id)reload_deviceActivationState;
- (id)reloadIfNeeded_deviceActivationState;
- (id)deviceActivationState;
- (_Bool)hasLoaded_deviceClass;
- (id)reload_deviceClass;
- (id)reloadIfNeeded_deviceClass;
- (id)deviceClass;
- (_Bool)hasLoaded_deviceIMEI;
- (id)reload_deviceIMEI;
- (id)reloadIfNeeded_deviceIMEI;
- (id)deviceIMEI;
- (_Bool)hasLoaded_deviceECID;
- (id)reload_deviceECID;
- (id)reloadIfNeeded_deviceECID;
- (id)deviceECID;
- (_Bool)hasLoaded_deviceName;
- (id)reload_deviceName;
- (id)reloadIfNeeded_deviceName;
- (id)deviceName;
- (_Bool)uninstallApplicationWithIdentifier:(id)arg1 options:(id)arg2 andError:(id *)arg3 withCallback:(CDUnknownBlockType)arg4;
- (_Bool)upgradeApplicationAtPath:(id)arg1 withOptions:(id)arg2 andError:(id *)arg3 withCallback:(CDUnknownBlockType)arg4;
- (_Bool)installApplicationAtPath:(id)arg1 withOptions:(id)arg2 andError:(id *)arg3 withCallback:(CDUnknownBlockType)arg4;
- (_Bool)transferPath:(id)arg1 withOptions:(id)arg2 andError:(id *)arg3 withCallback:(CDUnknownBlockType)arg4;
- (_Bool)installApplicationBundleAtPath:(id)arg1 withOptions:(id)arg2 andError:(id *)arg3 withCallback:(CDUnknownBlockType)arg4;
- (id)checkDeviceCapabilities:(id)arg1 withOptions:(id)arg2 andError:(id *)arg3;
- (_Bool)simulateLatitude:(id)arg1 andLongitude:(id)arg2 withError:(id *)arg3;
- (_Bool)stopSimulatingLocationWithError:(id *)arg1;
- (id)copyAndProcessSharedCache;
- (id)developerDiskImageMountError;
- (_Bool)mountDeveloperDiskImageWithError:(id *)arg1;
- (id)developerDiskImageForDeviceType:(id)arg1 productVersion:(id)arg2 buildVersion:(id)arg3;
- (_Bool)mountDeveloperDiskImage:(id)arg1 withError:(id *)arg2;
- (id)exactSymbolsDirectory:(id *)arg1;
- (id)idealExistingSymbolsDirectory:(id *)arg1;
- (struct _AMDServiceConnection *)startLocationSimulationServiceWithError:(id *)arg1;
- (struct _AMDServiceConnection *)startSharedCacheCopyingServiceWithError:(id *)arg1;
- (struct _AMDServiceConnection *)startXcodeDeviceMonitorServiceWithError:(id *)arg1;
- (struct _AMDServiceConnection *)startSyslogServiceWithError:(id *)arg1;
- (struct _AMDServiceConnection *)startCrashReportCopyMobileServiceWithError:(id *)arg1;
- (struct _AMDServiceConnection *)startCrashReportMoverServiceWithError:(id *)arg1;
- (struct _AMDServiceConnection *)startAppInstallationServiceWithError:(id *)arg1;
- (struct _AMDServiceConnection *)startDebugServerServiceWithError:(id *)arg1;
- (struct _AMDServiceConnection *)startServiceWithIdentifier:(id)arg1 andError:(id *)arg2;
- (id)deviceArbitrationForcedCheckIn;
- (id)deviceArbitrationCheckIn;
- (id)_deviceArbitrationCheckIn:(id)arg1;
- (id)startXcodeDeviceArbitrationService;
- (id)startHouseArrestServiceForAppIdentifier:(id)arg1;
- (id)startXcodeDeviceMonitorService;
- (id)wirelessInstrumentsServer;
- (id)wiredInstrumentsServer;
- (id)primaryInstrumentsServer;
- (id)startInstrumentsServerService;
- (id)startSyslogService;
- (id)startAppListService;
- (id)startLocationSimulationService;
- (id)startSharedCacheCopyingService;
- (id)startCrashReportCopyMobileService;
- (id)startCrashReportMoverService;
- (id)startAppInstallationService;
- (id)startSpringboardService;
- (id)startDarwinNotificationService;
- (id)startDebugServerServiceWithExtension:(id)arg1;
- (id)_debugServiceArrayWithExtension:(id)arg1 services:(id)arg2;
- (id)startFirstServiceOf:(id)arg1 unlockKeybag:(_Bool)arg2;
- (id)startFirstServiceOf:(id)arg1;
- (id)startServiceWithIdentifier:(id)arg1;
- (void)unpair;
- (_Bool)extendedPairWithError:(id *)arg1 extendedInformationHandler:(CDUnknownBlockType)arg2;
- (void)_updateWirelessEnabledStatus:(_Bool)arg1;
- (void)disableWireless;
- (id)enableWireless;
- (id)wakeup;
- (int)executeInSession:(CDUnknownBlockType)arg1;
- (void)disconnect;
- (void)removeConnection:(id)arg1;
- (void)addConnection:(id)arg1;
- (_Bool)hasDirectConnection;
- (_Bool)_hasDirectConnection;
- (id)connections;
- (id)deviceConsoleController;
- (void)_updatePrimaryConnection;
- (void)_startListeningForProxiedDeviceTokens;
- (id)activeProxiedDeviceToken;
- (id)proxiedDeviceTokens;
- (_Bool)deviceIsPaired;
- (_Bool)hasWirelessConnection;
- (_Bool)hasWiredConnection;
- (void)_setPrimaryConnection:(id)arg1;
- (id)deviceAddresses;
- (id)deviceHostname;
- (void *)wakeupToken;
- (id)deviceClassForDisplay;
- (id)deviceModelUTI;
- (id)localizedDeviceModel;
- (_Bool)isConnected;
- (_Bool)isSupportedOS;
- (id)platform;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (void)awakeWithDictionaryRepresentation:(id)arg1;
- (void)willDetachFromChild:(id)arg1;
- (void)_resetStartSecureServicesRetryState;
- (id)init;

@end

