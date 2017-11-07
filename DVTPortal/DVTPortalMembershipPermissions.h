//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPortalTeam;

@interface DVTPortalMembershipPermissions : NSObject
{
    DVTPortalTeam *_team;
    long long _role;
}

+ (id)_errorNoRolesFoundInRoles:(id)arg1;
+ (id)_permissionsWithRoles:(id)arg1 team:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) long long role; // @synthesize role=_role;
@property(nonatomic) DVTPortalTeam *team; // @synthesize team=_team;
- (id)_roleDescription;
- (BOOL)_canUseInAppPurchaseFeatureForProgram:(id)arg1;
- (BOOL)_canUseServerPortalServices;
- (BOOL)canUseFeatures:(id)arg1 forProgram:(id)arg2 unsupportedFeatures:(id *)arg3;
- (BOOL)canAssociateContainersOfType:(id)arg1;
- (BOOL)canViewContainersOfType:(id)arg1;
- (BOOL)canModifyContainersOfType:(id)arg1;
- (BOOL)canRevokeCertificatesOfType:(id)arg1;
- (BOOL)canCreateCertificatesOfType:(id)arg1 requiredRole:(long long *)arg2;
- (BOOL)_canUseCertificatesOfType:(id)arg1 requiredRole:(long long *)arg2;
- (BOOL)_roleCanCreateProfilesOfType:(id)arg1;
- (BOOL)canCreateProfilesOfType:(id)arg1;
- (BOOL)canCreateWildcardAppIDsForProgram:(id)arg1;
- (BOOL)canCreateOrModifyAppIDsForProgram:(id)arg1;
- (BOOL)canRegisterDevicesOfPlatform:(id)arg1;
- (id)initWithTeam:(id)arg1 role:(long long)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

