//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEProvisionable-Protocol.h>

@class NSString;
@protocol IDEProvisioningBasicProfile, IDEProvisioningBasicTeam;

@protocol IDEMutableProvisionable <IDEProvisionable>
- (void)setSigningCertificateIdentifier:(NSString *)arg1 forConfigurationNamed:(NSString *)arg2;
- (void)setProvisioningProfile:(id <IDEProvisioningBasicProfile>)arg1 forConfigurationNamed:(NSString *)arg2;
- (void)setTeam:(id <IDEProvisioningBasicTeam>)arg1 forConfigurationNamed:(NSString *)arg2;
- (void)setProvisioningStyle:(long long)arg1 forConfigurationNamed:(NSString *)arg2;
@end

