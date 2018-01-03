//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTProvisioningProfileManager, DVTSigningCertificateManager;

@interface IDEProvisioningPortal : NSObject
{
    DVTSigningCertificateManager *_signingCertificateManager;
    DVTProvisioningProfileManager *_provisioningProfileManager;
}

+ (id)_errorForNoContainerTypeWithPortalKey:(id)arg1;
+ (id)_errorForUnknownFeatureWithPortalKey:(id)arg1;
+ (id)_errorForLackOfMatchingCertificateWithSerialNumber:(id)arg1;
+ (id)_errorForNoCertificateTypeWithOID:(id)arg1;
+ (id)_errorForNoMatchingTeam:(id)arg1;
+ (id)concurrentQueue;
+ (id)portalWithSigningCertificateManager:(id)arg1 provisioningProfileManager:(id)arg2;
+ (id)defaultPortal;
@property(retain) DVTProvisioningProfileManager *provisioningProfileManager; // @synthesize provisioningProfileManager=_provisioningProfileManager;
@property(retain) DVTSigningCertificateManager *signingCertificateManager; // @synthesize signingCertificateManager=_signingCertificateManager;
- (void).cxx_destruct;
- (id)_portalSubPlatformForDVTPlatformIdentifier:(id)arg1;
- (id)_portalPlatformForDVTPlatformIdentifier:(id)arg1;
- (id)errorForMissingProfileData;
- (id)listTeamsAndRolesWithSession:(id)arg1 account:(id)arg2 error:(id *)arg3;
- (id)portalTeamForTeam:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (id)devicesForPrograms:(id)arg1 session:(id)arg2 team:(id)arg3 error:(id *)arg4;
- (BOOL)installProfile:(id)arg1 error:(id *)arg2;
- (id)_containerTypeFromPortalKey:(id)arg1 error:(id *)arg2;
- (id)_featureTypeFromPortalKey:(id)arg1 error:(id *)arg2;
- (id)containerTypesToValuesFromLegacyRequiredFeatures:(id)arg1 error:(id *)arg2;
- (id)featuresToValuesFromLegacyRequiredFeatures:(id)arg1 error:(id *)arg2;
- (BOOL)_addDevices:(id)arg1 session:(id)arg2 team:(id)arg3 error:(id *)arg4;
- (id)profilesWithSession:(id)arg1 team:(id)arg2 platform:(id)arg3 error:(id *)arg4;
- (id)inMemoryProfileForPortalProfile:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (id)portalProfilesWithSession:(id)arg1 team:(id)arg2 platform:(id)arg3 nameOrUUID:(id)arg4 error:(id *)arg5;
- (id)portalCertificatesWithSession:(id)arg1 team:(id)arg2 type:(id)arg3 memberSpecificCertificates:(id *)arg4 error:(id *)arg5;
- (BOOL)_installIdentity:(id)arg1 error:(id *)arg2;
- (id)createAndInstallCertificateWithSession:(id)arg1 team:(id)arg2 type:(id)arg3 error:(id *)arg4;
- (id)initWithSigningCertificateManager:(id)arg1 provisioningProfileManager:(id)arg2;
- (id)init;

@end

