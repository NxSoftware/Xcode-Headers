//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTQualifiableProfile-Protocol.h>
#import <DVTFoundation/NSObject-Protocol.h>

@class DVTAppIDFeatures, DVTDevice, DVTFilePath, DVTPlatform, DVTSigningCertificate, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, NSURL;
@protocol DVTProvisioningProfile;

@protocol DVTProvisioningProfile <NSObject, DVTQualifiableProfile>
@property(readonly) NSArray *identityCertificates;
@property(readonly) NSArray *certificates;
@property(readonly) BOOL isPushEnabled;
@property(readonly) BOOL isOMCEnabled;
@property(readonly) BOOL isWACEnabled;
@property(readonly) BOOL isHomeKitEnabled;
@property(readonly) BOOL isHealthKitEnabled;
@property(readonly) NSString *dataProtectionLevel;
@property(readonly) BOOL isAssociatedDomainsEnabled;
@property(readonly) BOOL isVPNLiteEnabled;
@property(readonly) BOOL isApplicationGroupsEnabled;
@property(readonly) BOOL isKeychainAccessGroupsEnabled;
@property(readonly) BOOL isGameCenterEnabled;
@property(readonly) BOOL isMapsEnabled;
@property(readonly) BOOL isInterAppAudioEnabled;
@property(readonly) BOOL isNearFieldCommunicationTagReadingEnabled;
@property(readonly) BOOL isNetworkExtensionsEnabled;
@property(readonly) BOOL isMultipathEnabled;
@property(readonly) BOOL isHotspotConfigurationEnabled;
@property(readonly) BOOL isSiriEnabled;
@property(readonly) BOOL isDataProtectionEnabled;
@property(readonly) BOOL isPassbookEnabled;
@property(readonly) BOOL isICloudEnabled;
@property(readonly) BOOL usesExplicitAppIdentifier;
@property(readonly) NSData *dataRepresentation;
@property(readonly) NSSet *supportedUDIDs;
@property(readonly) DVTPlatform *dvt_platform;
@property(readonly) NSString *platform;
@property(readonly) NSString *preferredFilenameExtension;
@property(readonly) BOOL isMacProfile;
@property(readonly) BOOL isUniversal;
@property(readonly) BOOL expiredOrWillExpireSoon;
@property(readonly) BOOL willExpireSoon;
@property(readonly) NSArray *signingCertificates;
@property(readonly, copy) DVTFilePath *filePath;
@property(readonly) NSDate *creationDate;
@property(readonly) NSArray *teamIdentifierPrefixes;
@property(readonly) NSString *appIdentifierName;
@property(readonly) NSArray *appIdentifierPrefixes;
@property(readonly) NSString *appIdentifierEntitlementWithoutPrefix;
@property(readonly) NSString *appIdentifierEntitlement;
@property(readonly) DVTAppIDFeatures *features;
@property(readonly) NSDictionary *entitlements;
@property(readonly) int version;
@property(readonly) NSString *teamID;
@property(readonly) NSString *UUID;
- (BOOL)containsCertificate:(struct OpaqueSecCertificateRef *)arg1;
- (NSString *)longDescription;
- (BOOL)writeToURL:(NSURL *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)writeToFile:(NSString *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (long long)dateCompareDecending:(id <DVTProvisioningProfile>)arg1;
- (long long)dateCompare:(id <DVTProvisioningProfile>)arg1;
- (long long)localizedCompare:(id <DVTProvisioningProfile>)arg1;
- (long long)compare:(id <DVTProvisioningProfile>)arg1;
- (BOOL)canBeInstalledOnDeviceWithIdentifier:(NSString *)arg1;
- (BOOL)canBeInstalledOnDevice:(DVTDevice *)arg1;
- (BOOL)containsSigningCertificate:(DVTSigningCertificate *)arg1;
- (BOOL)hasCertificateMatchingIdentity:(NSString *)arg1 includeExpired:(BOOL)arg2;
- (BOOL)allowsFeatures:(DVTAppIDFeatures *)arg1 missingFeatures:(id *)arg2;
@end

