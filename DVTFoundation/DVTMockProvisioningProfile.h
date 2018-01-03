//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/DVTProvisioningProfile-Protocol.h>

@class DVTAppIDFeatures, DVTFilePath, DVTPlatform, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString;

@interface DVTMockProvisioningProfile : NSObject <DVTProvisioningProfile>
{
    BOOL _isUniversalMock;
    BOOL _appleInternalMock;
    BOOL _xcodeManagedMock;
    BOOL _isActiveMock;
    NSArray *_signingCertificatesMock;
    NSDate *_creationDateMock;
    NSDate *_expirationDateMock;
    NSString *_UUIDMock;
    NSString *_nameMock;
    NSDictionary *_entitlementsMock;
    NSSet *_supportedUDIDsMock;
    NSString *_teamIDMock;
    NSString *_teamNameMock;
    NSString *_appIdentifierEntitlementMock;
    NSArray *_appIdentifierPrefixesMock;
    NSArray *_teamIdentifierPrefixesMock;
    NSString *_platformMock;
    NSString *_appIdentifierNameMock;
    DVTFilePath *_filePathMock;
}

@property(retain) DVTFilePath *filePathMock; // @synthesize filePathMock=_filePathMock;
@property(retain) NSString *appIdentifierNameMock; // @synthesize appIdentifierNameMock=_appIdentifierNameMock;
@property(nonatomic) BOOL isActiveMock; // @synthesize isActiveMock=_isActiveMock;
@property(nonatomic, getter=isXcodeManaged) BOOL xcodeManagedMock; // @synthesize xcodeManagedMock=_xcodeManagedMock;
@property(nonatomic, getter=isAppleInternalMock) BOOL appleInternalMock; // @synthesize appleInternalMock=_appleInternalMock;
@property(retain) NSString *platformMock; // @synthesize platformMock=_platformMock;
@property(retain) NSArray *teamIdentifierPrefixesMock; // @synthesize teamIdentifierPrefixesMock=_teamIdentifierPrefixesMock;
@property(retain) NSArray *appIdentifierPrefixesMock; // @synthesize appIdentifierPrefixesMock=_appIdentifierPrefixesMock;
@property(retain) NSString *appIdentifierEntitlementMock; // @synthesize appIdentifierEntitlementMock=_appIdentifierEntitlementMock;
@property(retain) NSString *teamNameMock; // @synthesize teamNameMock=_teamNameMock;
@property(retain) NSString *teamIDMock; // @synthesize teamIDMock=_teamIDMock;
@property(retain) NSSet *supportedUDIDsMock; // @synthesize supportedUDIDsMock=_supportedUDIDsMock;
@property BOOL isUniversalMock; // @synthesize isUniversalMock=_isUniversalMock;
@property(retain) NSDictionary *entitlementsMock; // @synthesize entitlementsMock=_entitlementsMock;
@property(retain) NSString *nameMock; // @synthesize nameMock=_nameMock;
@property(retain) NSString *UUIDMock; // @synthesize UUIDMock=_UUIDMock;
@property(retain) NSDate *expirationDateMock; // @synthesize expirationDateMock=_expirationDateMock;
@property(retain) NSDate *creationDateMock; // @synthesize creationDateMock=_creationDateMock;
@property(retain) NSArray *signingCertificatesMock; // @synthesize signingCertificatesMock=_signingCertificatesMock;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)longDescription;
- (BOOL)matchesBundleIdentifier:(id)arg1;
@property(readonly) BOOL isPushEnabled;
@property(readonly) BOOL isOMCEnabled;
@property(readonly) BOOL isWACEnabled;
@property(readonly) BOOL isHomeKitEnabled;
@property(readonly) BOOL isApplicationGroupsEnabled;
@property(readonly) BOOL isHealthKitEnabled;
@property(readonly) BOOL isAssociatedDomainsEnabled;
@property(readonly) BOOL isVPNLiteEnabled;
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
@property(readonly) NSString *dataProtectionLevel;
@property(readonly) BOOL isPassbookEnabled;
@property(readonly) BOOL isICloudEnabled;
- (BOOL)allowsFeatures:(id)arg1 missingFeatures:(id *)arg2;
@property(readonly) DVTAppIDFeatures *features;
@property(readonly) NSString *appIdentifierEntitlement;
@property(readonly) BOOL expired;
@property(readonly) BOOL expiredOrWillExpireSoon;
@property(readonly) BOOL willExpireSoon;
@property(readonly) BOOL usesExplicitAppIdentifier;
@property(readonly) NSString *appIdentifierUserDescription;
@property(readonly) NSString *appIdentifierEntitlementWithoutPrefix;
@property(readonly) DVTPlatform *dvt_platform;
@property(readonly) BOOL isMacProfile;
- (long long)dateCompareDecending:(id)arg1;
- (long long)dateCompare:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
@property(readonly) NSData *dataRepresentation;
@property(readonly, copy) DVTFilePath *filePath;
- (BOOL)hasCertificateMatchingIdentity:(id)arg1 includeExpired:(BOOL)arg2;
@property(readonly) NSArray *identityCertificates;
- (BOOL)containsCertificate:(struct OpaqueSecCertificateRef *)arg1;
@property(readonly) NSArray *certificates;
@property(readonly) NSString *preferredFilenameExtension;
@property(readonly) int version;
@property(readonly) BOOL isActive;
- (BOOL)isAppleInternal;
@property(readonly) NSString *provisioningProfilePlatformIdentifier;
@property(readonly) NSString *platform;
@property(readonly) NSArray *teamIdentifierPrefixes;
@property(readonly) NSString *appIdentifierName;
@property(readonly) NSArray *appIdentifierPrefixes;
@property(readonly) NSString *teamName;
@property(readonly) NSString *teamID;
@property(readonly) NSSet *supportedUDIDs;
@property(readonly) BOOL isUniversal;
@property(readonly) NSDictionary *entitlements;
@property(readonly) NSString *name;
@property(readonly) NSString *UUID;
@property(readonly) NSDate *expirationDate;
@property(readonly) NSDate *creationDate;
@property(readonly) NSArray *signingCertificates;
- (BOOL)canBeInstalledOnDevice:(id)arg1;
- (BOOL)canBeInstalledOnDeviceWithIdentifier:(id)arg1;
- (BOOL)containsSigningCertificate:(id)arg1;
- (void)validate;
@property(readonly, copy) NSString *description;
- (id)initWithDictionary:(id)arg1 certTable:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPlist:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

