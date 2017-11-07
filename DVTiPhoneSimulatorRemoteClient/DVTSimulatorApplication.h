//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, NSString;

@interface DVTSimulatorApplication : NSObject
{
    NSString *_readyNotificationName;
    NSString *_startSessionNotificationName;
    NSString *_sendApplicationEventNotificationName;
    NSString *_simulateLocationNotificationName;
    DVTFilePath *_path;
    NSString *_bundleIdentifier;
    NSString *_notificationDomain;
}

+ (id)simulatorApplicationForDevice:(id)arg1;
+ (id)simulatorApplicationForPlatform:(id)arg1;
+ (id)_simulatorApplicationForWatches;
+ (id)_defaultSimulator;
+ (id)simulatorApplicationWithBundleIdentifier:(id)arg1 notificationDomain:(id)arg2;
+ (id)allSimulatorApplications;
+ (id)logAspect;
@property(readonly) NSString *notificationDomain; // @synthesize notificationDomain=_notificationDomain;
@property(readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) DVTFilePath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (void)sendStopSimulateLocationNotification;
- (void)sendSimulateLocationNotificationWithLatitude:(id)arg1 longitude:(id)arg2;
- (void)sendApplicationEventNotificationWithUserInfo:(id)arg1;
- (void)sendStartSessionNotificationWithUserInfo:(id)arg1;
- (void)_sendNotificationWithName:(id)arg1 andUserInfo:(id)arg2;
- (id)addObserverForReadyNotification:(CDUnknownBlockType)arg1;
- (int)launchWithError:(id *)arg1;
- (int)launchWithError:(id *)arg1 andReadyCallback:(CDUnknownBlockType)arg2;
- (id)initWithPath:(id)arg1 notificationDomain:(id)arg2;

@end

