//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTDeviceKit/NSObject-Protocol.h>

@class NSNumber, NSString;

@protocol DVTDeviceToken <NSObject>
@property(readonly, copy, nonatomic) NSString *bonjourServiceName;
@property(readonly, copy) NSString *deviceIdentifier;
@property(readonly) _Bool deviceIsProduction;
@property(readonly) _Bool isPasscodeLocked;
@property(readonly) _Bool canBeWatchCompanion;
@property(readonly, copy) NSNumber *deviceProductionSOC;
@property(readonly, copy) NSString *deviceToolsType;
@property(readonly, copy) NSNumber *deviceChipID;
@property(readonly, copy) NSNumber *deviceBatteryCapacity;
@property(readonly, copy) NSNumber *deviceAvailableCapacity;
@property(readonly, copy) NSNumber *deviceTotalCapacity;
@property(readonly, copy) NSString *deviceArchitecture;
@property(readonly, copy) NSString *deviceEnclosureColorString;
@property(readonly, copy) NSString *deviceColorString;
@property(readonly, copy) NSString *deviceDevelopmentStatus;
@property(readonly, copy) NSString *deviceSerialNumber;
@property(readonly, copy) NSString *buildVersion;
@property(readonly, copy) NSString *productVersion;
@property(readonly, copy) NSString *deviceCodename;
@property(readonly, copy) NSString *deviceBluetoothMAC;
@property(readonly, copy) NSString *deviceWiFiMAC;
@property(readonly, copy) NSString *deviceType;
@property(readonly, copy) NSString *deviceActivationState;
@property(readonly, copy) NSString *deviceClass;
@property(readonly, copy) NSString *deviceIMEI;
@property(readonly, copy) NSNumber *deviceECID;
@property(readonly, copy) NSString *deviceName;
- (_Bool)extendedPairWithError:(id *)arg1 extendedInformationHandler:(void (^)(void (^)(NSString *, BOOL)))arg2;
- (NSString *)hostPairingToken;
@end

