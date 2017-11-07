//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSAdministration/XCSInitializationOperation.h>

#import <XCSAdministration/XCSServicesSessionProvider-Protocol.h>

@class DVTDeveloperAccount, DVTServicesSession, NSString;

@interface XCSLoginToPortalOperation : XCSInitializationOperation <XCSServicesSessionProvider>
{
    NSString *_appleID;
    NSString *_password;
    DVTDeveloperAccount *_account;
    DVTServicesSession *_session;
}

@property(retain, nonatomic) DVTServicesSession *session; // @synthesize session=_session;
@property(retain, nonatomic) DVTDeveloperAccount *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (void).cxx_destruct;
- (void)run;
- (id)statusDescription;

@end
