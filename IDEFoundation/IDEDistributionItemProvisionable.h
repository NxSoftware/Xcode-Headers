//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEDistributionProvisionable.h>

@class DVTAppIDFeatures, NSDictionary;

@interface IDEDistributionItemProvisionable : IDEDistributionProvisionable
{
    DVTAppIDFeatures *_appIDFeatures;
    NSDictionary *_baseEntitlements;
}

- (void).cxx_destruct;
- (id)appIDFeaturesForConfigurationNamed:(id)arg1;
- (id)baseEntitlementsForConfigurationNamed:(id)arg1;
- (id)signingCertificateIdentifierForConfigurationNamed:(id)arg1;
- (id)bundleIdentifierForConfigurationNamed:(id)arg1;
- (long long)profileSupportForConfigurationNamed:(id)arg1;

@end

