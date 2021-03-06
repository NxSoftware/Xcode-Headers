//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTiPhoneSimulatorRemoteClient/NSCopying-Protocol.h>

@class DTiPhoneSimulatorApplicationSpecifier, DVTSimulatorApplication, NSArray, NSDictionary, NSFileHandle, NSNumber, NSString, SimDevice, SimRuntime;

@interface DTiPhoneSimulatorSessionConfig : NSObject <NSCopying>
{
    BOOL _shouldInstallApplicationToSimulate;
    BOOL _simulatedApplicationShouldWaitForDebugger;
    BOOL _launchForBackgroundFetch;
    SimDevice *_device;
    SimRuntime *_runtime;
    NSString *_simulatedArchitecture;
    DTiPhoneSimulatorApplicationSpecifier *_applicationToSimulateOnStart;
    NSNumber *_pid;
    NSArray *_simulatedApplicationLaunchArgs;
    NSDictionary *_simulatedApplicationLaunchEnvironment;
    NSString *_simulatedApplicationStdOutPath;
    NSString *_simulatedApplicationStdErrPath;
    NSFileHandle *_stdinFileHandle;
    NSFileHandle *_stdoutFileHandle;
    NSFileHandle *_stderrFileHandle;
}

+ (id)displayNameForDeviceFamily:(id)arg1;
@property BOOL launchForBackgroundFetch; // @synthesize launchForBackgroundFetch=_launchForBackgroundFetch;
@property(retain) NSFileHandle *stderrFileHandle; // @synthesize stderrFileHandle=_stderrFileHandle;
@property(retain) NSFileHandle *stdoutFileHandle; // @synthesize stdoutFileHandle=_stdoutFileHandle;
@property(retain) NSFileHandle *stdinFileHandle; // @synthesize stdinFileHandle=_stdinFileHandle;
@property(copy) NSString *simulatedApplicationStdErrPath; // @synthesize simulatedApplicationStdErrPath=_simulatedApplicationStdErrPath;
@property(copy) NSString *simulatedApplicationStdOutPath; // @synthesize simulatedApplicationStdOutPath=_simulatedApplicationStdOutPath;
@property BOOL simulatedApplicationShouldWaitForDebugger; // @synthesize simulatedApplicationShouldWaitForDebugger=_simulatedApplicationShouldWaitForDebugger;
@property(copy) NSDictionary *simulatedApplicationLaunchEnvironment; // @synthesize simulatedApplicationLaunchEnvironment=_simulatedApplicationLaunchEnvironment;
@property(copy) NSArray *simulatedApplicationLaunchArgs; // @synthesize simulatedApplicationLaunchArgs=_simulatedApplicationLaunchArgs;
@property(copy) NSNumber *pid; // @synthesize pid=_pid;
@property BOOL shouldInstallApplicationToSimulate; // @synthesize shouldInstallApplicationToSimulate=_shouldInstallApplicationToSimulate;
@property(copy) DTiPhoneSimulatorApplicationSpecifier *applicationToSimulateOnStart; // @synthesize applicationToSimulateOnStart=_applicationToSimulateOnStart;
@property(copy) NSString *simulatedArchitecture; // @synthesize simulatedArchitecture=_simulatedArchitecture;
@property(retain, nonatomic) SimRuntime *runtime; // @synthesize runtime=_runtime;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) DVTSimulatorApplication *simulatorApplication;
@property(retain, nonatomic) SimDevice *device; // @synthesize device=_device;
@property(readonly, copy) NSDictionary *toolSpawnOptions;
@property(readonly, copy) NSDictionary *appLaunchOptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

