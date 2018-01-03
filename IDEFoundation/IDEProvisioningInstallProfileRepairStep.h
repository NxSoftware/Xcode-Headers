//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEProvisioningRepairStep.h>

@protocol DVTProvisioningProfile;

@interface IDEProvisioningInstallProfileRepairStep : IDEProvisioningRepairStep
{
    id <DVTProvisioningProfile> _profile;
}

+ (id)stepWithProfile:(id)arg1;
@property(readonly) id <DVTProvisioningProfile> profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (BOOL)handleExecutionWithContext:(id)arg1 ledgerEntry:(id)arg2 error:(id *)arg3;
- (BOOL)preflightWithContext:(id)arg1 error:(id *)arg2;
- (id)activityDescription;
- (id)stepDescription;
- (id)initWithProfile:(id)arg1;

@end

