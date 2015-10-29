//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IDEPlaygroundSimDeviceFramebufferService, IDEPlaygroundSimDeviceHIDService, IDESimulatorPlaygroundDeviceDebugWindowController, NSObject<OS_dispatch_queue>, SimDevice;

@interface IDESimulatorPlaygroundDeviceCommunicationService : NSObject
{
    NSObject<OS_dispatch_queue> *_deviceManagementQueue;
    NSObject<OS_dispatch_queue> *_deviceFramebufferServiceQueue;
    SimDevice *_simDevice;
    IDEPlaygroundSimDeviceHIDService *_deviceHIDService;
    IDESimulatorPlaygroundDeviceDebugWindowController *_simDebugWindowController;
    IDEPlaygroundSimDeviceFramebufferService *_mainFramebufferService;
    IDEPlaygroundSimDeviceFramebufferService *_tvOutFramebufferService;
}

@property(retain) IDEPlaygroundSimDeviceFramebufferService *tvOutFramebufferService; // @synthesize tvOutFramebufferService=_tvOutFramebufferService;
@property(retain) IDEPlaygroundSimDeviceFramebufferService *mainFramebufferService; // @synthesize mainFramebufferService=_mainFramebufferService;
@property(retain) IDESimulatorPlaygroundDeviceDebugWindowController *simDebugWindowController; // @synthesize simDebugWindowController=_simDebugWindowController;
@property(retain) IDEPlaygroundSimDeviceHIDService *deviceHIDService; // @synthesize deviceHIDService=_deviceHIDService;
@property __weak SimDevice *simDevice; // @synthesize simDevice=_simDevice;
- (void).cxx_destruct;
- (void)_closeSimDebugWindow;
- (void)_presentSimDebugWindow;
- (void)sendHomeButtonPressedEvent;
- (void)sendHIDEvent:(id)arg1 deviceRelativeLocation:(struct CGPoint)arg2 screen:(long long)arg3 screenSize:(struct CGSize)arg4;
- (void)deviceScreen:(long long)arg1 sizeChanged:(struct CGSize)arg2;
- (void)closeFramebufferServiceChannel:(id)arg1;
- (id)openFramebufferServiceChannelForDeviceScreen:(long long)arg1;
- (id)framebufferServiceForDeviceScreen:(long long)arg1;
- (void)_dispatchToDeviceManagementQueue:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithSimDevice:(id)arg1 error:(out id *)arg2;

@end

