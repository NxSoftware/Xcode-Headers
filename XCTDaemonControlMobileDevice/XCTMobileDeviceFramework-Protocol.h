//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCTDaemonControlMobileDevice/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSError, NSString;

@protocol XCTMobileDeviceFramework <NSObject>
- (NSError *)errorWithAMDError:(int)arg1;
- (BOOL)disconnectFromDevice:(struct _AMDevice *)arg1 error:(id *)arg2;
- (BOOL)stopSessionWithDevice:(struct _AMDevice *)arg1 error:(id *)arg2;
- (void)invalidateServiceConnection:(struct _AMDServiceConnection *)arg1;
- (int)socketFromServiceConnection:(struct _AMDServiceConnection *)arg1;
- (struct _AMDServiceConnection *)startServiceOnDevice:(struct _AMDevice *)arg1 identifier:(NSString *)arg2 options:(NSDictionary *)arg3 error:(id *)arg4;
- (BOOL)startSessionWithDevice:(struct _AMDevice *)arg1 error:(id *)arg2;
- (BOOL)validatePairingWithDevice:(struct _AMDevice *)arg1 error:(id *)arg2;
- (BOOL)pairWithDevice:(struct _AMDevice *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (BOOL)connectToDevice:(struct _AMDevice *)arg1 error:(id *)arg2;
- (NSString *)identifierForDevice:(struct _AMDevice *)arg1;
- (NSArray *)devices;
@end

