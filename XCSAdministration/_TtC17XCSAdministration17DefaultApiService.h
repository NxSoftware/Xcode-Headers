//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCSAdministration/_TtP17XCSAdministration10ApiService_-Protocol.h>

@class XCSService;

@interface _TtC17XCSAdministration17DefaultApiService : NSObject <_TtP17XCSAdministration10ApiService_>
{
    // Error parsing type: , name: serviceProxy
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)fetchBuildAgentsAndReturnError:(id *)arg1;
- (BOOL)updatePermissionsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)fetchPermissionsAndReturnError:(id *)arg1;
- (BOOL)updateSettingsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)fetchSettingsAndReturnError:(id *)arg1;
- (BOOL)updateVersionInfoWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)ensureServiceIsRespondingWithRetry:(BOOL)arg1 error:(id *)arg2;
- (void)reauthenticate;
- (id)initWithServiceProxy:(id)arg1;
@property(nonatomic, readonly) XCSService *service;

@end

