//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSAdministration/XCSServiceUser.h>

@class NSString;
@protocol _TtP17XCSAdministration14LaunchdService_, _TtP17XCSAdministration14ProcessService_, _TtP17XCSAdministration14SessionService_;

@interface XCSBuildServiceUser : XCSServiceUser
{
    NSString *_launchDaemonsPath;
    id <_TtP17XCSAdministration14LaunchdService_> _launchdService;
    id <_TtP17XCSAdministration14ProcessService_> _processService;
    id <_TtP17XCSAdministration14SessionService_> _sessionService;
}

@property(retain, nonatomic) id <_TtP17XCSAdministration14SessionService_> sessionService; // @synthesize sessionService=_sessionService;
@property(retain, nonatomic) id <_TtP17XCSAdministration14ProcessService_> processService; // @synthesize processService=_processService;
@property(retain, nonatomic) id <_TtP17XCSAdministration14LaunchdService_> launchdService; // @synthesize launchdService=_launchdService;
@property(retain, nonatomic) NSString *launchDaemonsPath; // @synthesize launchDaemonsPath=_launchDaemonsPath;
- (void).cxx_destruct;
- (id)launchAgentInstallPath;
- (id)launchAgentWithLabel:(id)arg1;
- (id)buildServiceLaunchAgent;
- (id)launchAgents;
- (BOOL)installLaunchAgentsWithError:(id *)arg1;
- (id)additionalGroups;
- (void)enableFastUserSwitching;
- (id)uid;
- (BOOL)stopBuilderIfNeeded:(id *)arg1;
- (BOOL)startBuilderIfNeeded:(id *)arg1;
- (BOOL)performActionWithSession:(CDUnknownBlockType)arg1 withoutSession:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (BOOL)deleteWithError:(id *)arg1;
- (BOOL)createIfNeeded:(char *)arg1 error:(id *)arg2;
- (id)homeDirectoryPath;
- (id)initWithUsername:(id)arg1 installationConfiguration:(id)arg2;

@end

