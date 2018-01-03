//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEProvisioningErrorProvider-Protocol.h>

@interface _IDEProvisioningErrorProvider : NSObject <IDEProvisioningErrorProvider>
{
    long long _environment;
    long long _task;
    long long _repairMode;
}

@property(nonatomic) long long repairMode; // @synthesize repairMode=_repairMode;
@property(nonatomic) long long task; // @synthesize task=_task;
@property(nonatomic) long long environment; // @synthesize environment=_environment;
- (id)noAccountsError;
- (id)provisionableUnableToRepairEntitlementsError:(id)arg1 entitlements:(id)arg2;
- (id)provisionablePlatformMismatchForAssetError:(id)arg1 assetType:(id)arg2 platformName:(id)arg3;
- (id)provisionableEntitlementsRequireProfileError:(id)arg1 configuration:(id)arg2;
- (id)provisionableEntitlementsRequireSigningError:(id)arg1 configuration:(id)arg2;
- (id)provisionableHasConflictingAutomaticSigningSettingsError:(id)arg1 conflictingFeatures:(id)arg2;
- (id)provisionableEntitlementsFileNotFoundError:(id)arg1 configuratino:(id)arg2 entitlementsFilePath:(id)arg3;
- (id)provisionableUnknownPlatformError:(id)arg1;
- (id)provisionableProfileSpecifiedButUnsupportedError:(id)arg1 profileName:(id)arg2;
- (id)provisionableNoProfileSpecifiedError:(id)arg1 configuration:(id)arg2 requiredFeatureNames:(id)arg3;
- (id)provisionableProfileTypeDoesntMatchIdentitySelectorError:(id)arg1 signingIdentity:(id)arg2 automaticSelector:(id)arg3;
- (id)provisionableHasExplicitSigningIdentitySpecifiedInAutomaticError:(id)arg1 signingIdentity:(id)arg2 automaticSelector:(id)arg3;
- (id)provisionableHasProfileSpecifiedInAutomaticError:(id)arg1 profileName:(id)arg2;
- (id)noProfileTypeErrorForPlatform:(id)arg1 purpose:(id)arg2;
- (id)provisionableMissingTeamOrProfileSelectionError:(id)arg1;
- (id)provisionableMissingTeamSelectionForProfileSpecifierError:(id)arg1 profileSpecifier:(id)arg2;
- (id)provisionableMissingTeamSelectionError:(id)arg1;
- (id)provisionableMissingBundleIdentifierError:(id)arg1 configuration:(id)arg2;
- (id)provisionableUnknownProvisioningFailureError:(id)arg1;
- (id)accountLogInFailureError:(id)arg1;
- (id)userActionError:(id)arg1;

@end

