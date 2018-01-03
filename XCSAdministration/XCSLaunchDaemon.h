//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _TtP17XCSAdministration14LaunchdService_;

@interface XCSLaunchDaemon : NSObject
{
    NSString *_label;
    NSString *_sourceDirectory;
    NSString *_destinationDirectory;
    id <_TtP17XCSAdministration14LaunchdService_> _launchdService;
}

@property(retain, nonatomic) id <_TtP17XCSAdministration14LaunchdService_> launchdService; // @synthesize launchdService=_launchdService;
@property(copy, nonatomic) NSString *destinationDirectory; // @synthesize destinationDirectory=_destinationDirectory;
@property(copy, nonatomic) NSString *sourceDirectory; // @synthesize sourceDirectory=_sourceDirectory;
@property(readonly) NSString *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (BOOL)removeItemAtPathAndCheckIfDeleted:(id)arg1 error:(id *)arg2;
- (BOOL)restartWithError:(id *)arg1;
- (BOOL)stopWithError:(id *)arg1;
- (BOOL)startWithError:(id *)arg1;
@property(readonly, getter=isRunning) BOOL running;
@property(readonly, getter=isExecutableInstalled) BOOL executableInstalled;
@property(readonly) NSString *executablePath;
- (BOOL)installWithAttributes:(id)arg1 error:(id *)arg2;
- (BOOL)uninstallWithError:(id *)arg1;
@property(readonly) NSString *installedPath;
@property(readonly) NSString *sourcePath;
- (id)filename;
- (id)initWithLabel:(id)arg1 sourceDirectory:(id)arg2 destinationDirectory:(id)arg3 launchdService:(id)arg4;

@end

