//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTDeviceFoundation/NSObject-Protocol.h>

@class DVTNetworkDeviceServiceBrowser, NSString;

@protocol DVTNetworkDeviceServiceBrowserDelegate <NSObject>
- (void)networkDeviceServiceBrowser:(DVTNetworkDeviceServiceBrowser *)arg1 didRemoveIPAddress:(NSString *)arg2 deviceMACAddress:(NSString *)arg3 serviceName:(NSString *)arg4;
- (void)networkDeviceServiceBrowser:(DVTNetworkDeviceServiceBrowser *)arg1 didResolveIPAddress:(NSString *)arg2 deviceMACAddress:(NSString *)arg3 serviceName:(NSString *)arg4;
- (void)networkDeviceServiceBrowser:(DVTNetworkDeviceServiceBrowser *)arg1 didFindServiceNamed:(NSString *)arg2 shouldResolve:(_Bool *)arg3;
@end

