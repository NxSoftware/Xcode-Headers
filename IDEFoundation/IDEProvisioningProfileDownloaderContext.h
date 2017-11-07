//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDeveloperAccountManager, DVTPlatform, DVTPortalCertificateType, DVTProvisioningProfileManager, IDEProvisionableStatusEvaluation, IDEProvisioningSessionManager, IDEProvisioningTeamAccountPairManager, IDEProvisioningTeamManager, NSString;
@protocol IDEProvisioningBasicTeam, IDEProvisioningProfileDownloaderPortal;

@interface IDEProvisioningProfileDownloaderContext : NSObject
{
    DVTPlatform *_platform;
    NSString *_bundleIdentifier;
    id <IDEProvisioningBasicTeam> _team;
    NSString *_provisionableName;
    IDEProvisionableStatusEvaluation *_evaluation;
    DVTProvisioningProfileManager *_profileManager;
    DVTDeveloperAccountManager *_accountManager;
    IDEProvisioningTeamManager *_teamManager;
    IDEProvisioningTeamAccountPairManager *_teamAccountPairManager;
    IDEProvisioningSessionManager *_sessionManager;
    DVTPortalCertificateType *_certificateType;
}

@property(retain, nonatomic) DVTPortalCertificateType *certificateType; // @synthesize certificateType=_certificateType;
@property(retain, nonatomic) IDEProvisioningSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(retain, nonatomic) IDEProvisioningTeamAccountPairManager *teamAccountPairManager; // @synthesize teamAccountPairManager=_teamAccountPairManager;
@property(retain, nonatomic) IDEProvisioningTeamManager *teamManager; // @synthesize teamManager=_teamManager;
@property(retain, nonatomic) DVTDeveloperAccountManager *accountManager; // @synthesize accountManager=_accountManager;
@property(retain, nonatomic) DVTProvisioningProfileManager *profileManager; // @synthesize profileManager=_profileManager;
@property(readonly, nonatomic) IDEProvisionableStatusEvaluation *evaluation; // @synthesize evaluation=_evaluation;
@property(readonly, nonatomic) NSString *provisionableName; // @synthesize provisionableName=_provisionableName;
@property(retain, nonatomic) id <IDEProvisioningBasicTeam> team; // @synthesize team=_team;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) DVTPlatform *platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <IDEProvisioningProfileDownloaderPortal> portal;
- (id)initWithPlatform:(id)arg1 bundleIdentifier:(id)arg2 team:(id)arg3 provisionableName:(id)arg4 evaluation:(id)arg5 profileManager:(id)arg6 accountManager:(id)arg7 teamManager:(id)arg8 teamAccountPairManager:(id)arg9 sessionManager:(id)arg10;

@end

