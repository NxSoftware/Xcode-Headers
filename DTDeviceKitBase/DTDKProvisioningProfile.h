//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTProvisioningProfile.h"
#import "NSCopying.h"

@class DVTAppIDFeatures, DVTCertificateUtilities, DVTFilePath, DVTNotificationToken, DVTPlatform, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString;

@interface DTDKProvisioningProfile : NSObject <NSCopying, DVTProvisioningProfile>
{
    DVTNotificationToken *_notificationToken;
    DVTCertificateUtilities *_certificateUtilities;
    BOOL _usesExplicitAppIdentifier;
    BOOL _isUniversal;
    BOOL _isMacProfile;
    int _version;
    struct _MISProfile *_profile;
    DVTFilePath *_filePath;
    NSString *_UUID;
    NSString *_name;
    NSDictionary *_entitlements;
    NSString *_appIdentifierEntitlement;
    NSString *_appIdentifierEntitlementWithoutPrefix;
    NSArray *_appIdentifierPrefixes;
    NSArray *_teamIdentifierPrefixes;
    NSDate *_expirationDate;
    NSDate *_creationDate;
    NSString *_platform;
    DVTPlatform *_dvt_platform;
    NSString *_preferredFilenameExtension;
    NSSet *_supportedUDIDs;
    NSString *_teamID;
    NSString *_teamName;
    NSArray *_certificates;
    NSArray *_signingCertificates;
    NSArray *_identitySigningCertificates;
}

+ (id)profileWithData:(id)arg1 certificateUtilities:(id)arg2 error:(id *)arg3;
+ (id)profileWithFilePath:(id)arg1 certificateUtilities:(id)arg2 error:(id *)arg3;
+ (id)profileWithURL:(id)arg1 certificateUtilities:(id)arg2 error:(id *)arg3;
+ (id)profileWithPath:(id)arg1 certificateUtilities:(id)arg2 error:(id *)arg3;
+ (id)profileWithMISProfile:(struct _MISProfile *)arg1 certificateUtilities:(id)arg2 error:(id *)arg3;
+ (BOOL)couldBeProfileFilename:(id)arg1;
@property(readonly) DVTCertificateUtilities *certificateUtilities; // @synthesize certificateUtilities=_certificateUtilities;
@property(readonly) NSString *teamID; // @synthesize teamID=_teamID;
@property(readonly) NSSet *supportedUDIDs; // @synthesize supportedUDIDs=_supportedUDIDs;
@property(readonly) NSString *preferredFilenameExtension; // @synthesize preferredFilenameExtension=_preferredFilenameExtension;
@property(readonly) DVTPlatform *dvt_platform; // @synthesize dvt_platform=_dvt_platform;
@property(readonly) NSString *platform; // @synthesize platform=_platform;
@property(readonly) BOOL isMacProfile; // @synthesize isMacProfile=_isMacProfile;
@property(readonly) BOOL isUniversal; // @synthesize isUniversal=_isUniversal;
@property(readonly) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly) NSArray *teamIdentifierPrefixes; // @synthesize teamIdentifierPrefixes=_teamIdentifierPrefixes;
@property(readonly) NSArray *appIdentifierPrefixes; // @synthesize appIdentifierPrefixes=_appIdentifierPrefixes;
@property(readonly) BOOL usesExplicitAppIdentifier; // @synthesize usesExplicitAppIdentifier=_usesExplicitAppIdentifier;
@property(readonly) NSString *appIdentifierEntitlementWithoutPrefix; // @synthesize appIdentifierEntitlementWithoutPrefix=_appIdentifierEntitlementWithoutPrefix;
@property(readonly) NSString *appIdentifierEntitlement; // @synthesize appIdentifierEntitlement=_appIdentifierEntitlement;
@property(readonly) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly) int version; // @synthesize version=_version;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSString *UUID; // @synthesize UUID=_UUID;
@property(copy) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property struct _MISProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
@property(readonly) NSArray *identityCertificates;
- (BOOL)containsCertificate:(struct OpaqueSecCertificateRef *)arg1;
@property(readonly, copy) NSString *localPath;
- (id)longDescription;
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
@property(readonly) BOOL isDataProtectionEnabled;
@property(readonly) NSString *dataProtectionLevel;
@property(readonly) BOOL isPassbookEnabled;
@property(readonly) BOOL isICloudEnabled;
- (BOOL)allowsFeatures:(id)arg1 missingFeatures:(id *)arg2;
@property(readonly) NSString *teamName; // @synthesize teamName=_teamName;
@property(readonly, copy) NSString *description;
- (long long)dateCompareDecending:(id)arg1;
- (long long)dateCompare:(id)arg1;
- (long long)localizedCompare:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matchesBundleIdentifier:(id)arg1;
- (BOOL)canBeInstalledOnDevice:(id)arg1;
- (BOOL)canBeInstalledOnDeviceWithIdentifier:(id)arg1;
@property(readonly) NSData *dataRepresentation;
@property(readonly) BOOL expiredOrWillExpireSoon;
@property(readonly) BOOL willExpireSoon;
@property(readonly) BOOL expired;
- (BOOL)hasCertificateMatchingIdentity:(id)arg1 includeExpired:(BOOL)arg2;
- (BOOL)containsSigningCertificate:(id)arg1;
@property(readonly) NSArray *identitySigningCertificates; // @synthesize identitySigningCertificates=_identitySigningCertificates;
@property(readonly) NSArray *signingCertificates; // @synthesize signingCertificates=_signingCertificates;
@property(readonly) NSArray *certificates; // @synthesize certificates=_certificates;
@property(readonly) DVTAppIDFeatures *features;
- (BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1 certificateUtilities:(id)arg2 error:(id *)arg3;
- (id)initWithPath:(id)arg1 certificateUtilities:(id)arg2 error:(id *)arg3;
- (id)initWithMISProfile:(struct _MISProfile *)arg1 certificateUtilities:(id)arg2 error:(id *)arg3;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

