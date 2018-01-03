//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTAppIDFeatures, DVTPlatform, DVTPortalCertificateType, DVTPortalProfilePurpose, DVTPortalProfileType, IDEProfileSpecifier, IDEProvisionableSnapshot, NSDictionary, NSSet, NSString;
@protocol IDEProvisioningBasicTeam, IDEProvisioningErrorProvider;

@interface IDEProvisioningInputs : NSObject
{
    BOOL _validateCrossConfigurationIssues;
    DVTPortalProfilePurpose *_provisioningPurpose;
    DVTPlatform *_platform;
    NSSet *_codesignableDeviceSnapshots;
    NSDictionary *_entitlements;
    NSSet *_signingCertificates;
    NSSet *_provisioningProfiles;
    id <IDEProvisioningErrorProvider> _errorProvider;
    IDEProfileSpecifier *_profileSpecifier;
    IDEProvisionableSnapshot *_provisionableSnapshot;
    NSString *_configuration;
}

+ (id)_codesignableDevicesFromSnapshots:(id)arg1 forPlatform:(id)arg2 provisioningPurpose:(id)arg3;
+ (id)_platformForProvisionableSnapshot:(id)arg1 configuration:(id)arg2;
+ (id)inputsFromProvisionableSnapshot:(id)arg1 configuration:(id)arg2 codesignableDeviceSnapshots:(id)arg3 signingCertificates:(id)arg4 provisioningProfiles:(id)arg5 entitlements:(id)arg6 errorProvider:(id)arg7 validateAcrossConfigurations:(BOOL)arg8 error:(id *)arg9;
+ (id)inputsFromProvisionableSnapshot:(id)arg1 configuration:(id)arg2 codesignableDeviceSnapshots:(id)arg3 signingCertificates:(id)arg4 provisioningProfiles:(id)arg5 entitlements:(id)arg6 errorProvider:(id)arg7 error:(id *)arg8;
@property(readonly, nonatomic) BOOL validateCrossConfigurationIssues; // @synthesize validateCrossConfigurationIssues=_validateCrossConfigurationIssues;
@property(retain, nonatomic) NSString *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) IDEProvisionableSnapshot *provisionableSnapshot; // @synthesize provisionableSnapshot=_provisionableSnapshot;
@property(readonly, nonatomic) IDEProfileSpecifier *profileSpecifier; // @synthesize profileSpecifier=_profileSpecifier;
@property(retain, nonatomic) id <IDEProvisioningErrorProvider> errorProvider; // @synthesize errorProvider=_errorProvider;
@property(readonly, nonatomic) NSSet *provisioningProfiles; // @synthesize provisioningProfiles=_provisioningProfiles;
@property(readonly, nonatomic) NSSet *signingCertificates; // @synthesize signingCertificates=_signingCertificates;
@property(readonly, nonatomic) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(readonly, nonatomic) NSSet *codesignableDeviceSnapshots; // @synthesize codesignableDeviceSnapshots=_codesignableDeviceSnapshots;
@property(readonly, nonatomic) DVTPlatform *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *certificateIdentifier;
@property(readonly, nonatomic) DVTPortalCertificateType *certificateType;
- (id)certificateTypeBasedOnAutomaticSelectors;
@property(readonly, nonatomic) DVTPortalProfileType *profileType;
- (BOOL)needsBundleIdentifier;
- (BOOL)supportsProfile;
@property(readonly, nonatomic) BOOL needsProfile;
- (BOOL)signingEnabled;
@property(readonly, nonatomic) DVTPortalProfilePurpose *provisioningPurpose; // @synthesize provisioningPurpose=_provisioningPurpose;
@property(readonly, nonatomic) long long provisioningStyle;
@property(readonly, nonatomic) DVTAppIDFeatures *appIDFeatures;
@property(readonly, nonatomic) id <IDEProvisioningBasicTeam> team;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) NSString *provisionableName;
- (BOOL)_validateForManualProvisioningWithError:(id *)arg1;
- (BOOL)_validateForAutomaticCrossConfigIssues:(id *)arg1;
- (BOOL)_validateForAutomaticProvisioningWithError:(id *)arg1;
- (BOOL)_validateBasicSetupWithError:(id *)arg1;
- (BOOL)validateWithError:(id *)arg1;

@end

