//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTDaemonControlMobileDevice/XCTConfigurableDebugLogger-Protocol.h>

@class NSString, XCTMobileDeviceFramework;
@protocol XCTDebugLogDelegate;

@interface XCTMobileDevice : NSObject <XCTConfigurableDebugLogger>
{
    id <XCTDebugLogDelegate> _logDelegate;
    struct _AMDevice *_deviceRef;
    XCTMobileDeviceFramework *_mobileDeviceFramework;
}

+ (id)deviceWithIdentifier:(id)arg1 mobileDeviceFramework:(id)arg2;
@property(retain) XCTMobileDeviceFramework *mobileDeviceFramework; // @synthesize mobileDeviceFramework=_mobileDeviceFramework;
@property struct _AMDevice *deviceRef; // @synthesize deviceRef=_deviceRef;
@property __weak id <XCTDebugLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
- (void).cxx_destruct;
- (id)errorWithMobileDeviceFrameworkError:(id)arg1;
- (void)invalidate;
- (BOOL)startSessionAndReturnError:(id *)arg1;
- (id)performWithSession:(CDUnknownBlockType)arg1;
- (id)transportForServiceWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithAMDeviceRef:(struct _AMDevice *)arg1 mobileDeviceFramework:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

