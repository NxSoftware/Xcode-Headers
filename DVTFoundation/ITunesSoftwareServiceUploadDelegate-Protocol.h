//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/NSObject-Protocol.h>

@class NSNumber, NSString;
@protocol ITunesSoftwareApplicationDescription, ITunesSoftwareService;

@protocol ITunesSoftwareServiceUploadDelegate <NSObject>

@optional
- (void)softwareService:(id <ITunesSoftwareService>)arg1 didCompleteUploadForApplication:(id <ITunesSoftwareApplicationDescription>)arg2;
- (BOOL)softwareService:(id <ITunesSoftwareService>)arg1 shouldContinueUploadForApplication:(id <ITunesSoftwareApplicationDescription>)arg2;
- (void)softwareService:(id <ITunesSoftwareService>)arg1 didUpdatePercentageComplete:(NSNumber *)arg2 forApplication:(id <ITunesSoftwareApplicationDescription>)arg3;
- (void)softwareService:(id <ITunesSoftwareService>)arg1 didUpdateStatusMessage:(NSString *)arg2 forApplication:(id <ITunesSoftwareApplicationDescription>)arg3;
- (void)softwareService:(id <ITunesSoftwareService>)arg1 willBeginUploadForApplication:(id <ITunesSoftwareApplicationDescription>)arg2;
@end

