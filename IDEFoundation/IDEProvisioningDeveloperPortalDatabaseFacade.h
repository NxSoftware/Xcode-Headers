//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface IDEProvisioningDeveloperPortalDatabaseFacade : NSObject
{
}

+ (id)_operationQueue;
+ (id)_portalPlatforms;
+ (BOOL)downloadEnhancedProvisioningProfiles:(id)arg1 token:(struct DVTPortalOperationToken *)arg2 error:(id *)arg3;
+ (struct DVTPortalOperationToken *)singleTeamTokenForAccount:(id)arg1 team:(id)arg2 error:(id *)arg3;
+ (id)_runCertOperations:(id)arg1 token:(struct DVTPortalOperationToken *)arg2;
+ (id)_distributionSigningIdentitiesWithToken:(struct DVTPortalOperationToken *)arg1;
+ (id)_developmentSigningIdentitiesWithToken:(struct DVTPortalOperationToken *)arg1;
+ (id)listSigningIdentitiesForToken:(struct DVTPortalOperationToken *)arg1 error:(id *)arg2;
+ (id)listProfilesForToken:(id)arg1 error:(id *)arg2;

@end

