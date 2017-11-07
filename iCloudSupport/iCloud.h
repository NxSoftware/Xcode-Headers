//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSRecursiveLock, NSString, iCloudUbiquityService;
@protocol iCloudUIDelegate;

@interface iCloud : NSObject
{
    NSString *_userAgent;
    NSString *_host;
    NSString *_originHost;
    id <iCloudUIDelegate> _delegate;
    NSString *_appleID;
    NSDictionary *_information;
    NSString *_loginSalt;
    NSString *_appleIDHash;
    NSArray *_cookies;
    NSMutableArray *_loginCompletionBlocks;
    NSRecursiveLock *_loginCompletionBlocksLock;
    iCloudUbiquityService *_ubiquityService;
}

+ (id)keyPathsForValuesAffectingAuthenticated;
@property(retain, nonatomic) iCloudUbiquityService *ubiquityService; // @synthesize ubiquityService=_ubiquityService;
@property(retain, nonatomic) NSRecursiveLock *loginCompletionBlocksLock; // @synthesize loginCompletionBlocksLock=_loginCompletionBlocksLock;
@property(retain, nonatomic) NSMutableArray *loginCompletionBlocks; // @synthesize loginCompletionBlocks=_loginCompletionBlocks;
@property(retain, nonatomic) NSArray *cookies; // @synthesize cookies=_cookies;
@property(retain, nonatomic) NSString *appleIDHash; // @synthesize appleIDHash=_appleIDHash;
@property(retain, nonatomic) NSString *loginSalt; // @synthesize loginSalt=_loginSalt;
@property(retain, nonatomic) NSDictionary *information; // @synthesize information=_information;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(nonatomic) __weak id <iCloudUIDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *originHost; // @synthesize originHost=_originHost;
@property(readonly, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
- (void).cxx_destruct;
- (void)logoutUserWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)loginUserWithAppleID:(id)arg1 password:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)validateWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)ubiquityURL;
- (id)streamsURL;
- (id)remindersURL;
- (id)pushURL;
- (id)notesURL;
- (id)mailURL;
- (id)keyValueURL;
- (id)findMeURL;
- (id)contactsURL;
- (id)calendarURL;
- (id)accountURL;
- (id)errorFromResponse:(id)arg1;
- (void)_checkLoginAndPossiblyRunLoginUI:(BOOL)arg1 andThenRunBlock:(CDUnknownBlockType)arg2;
- (void)_reportNoUserError:(id)arg1;
- (void)_callErrorBlocks:(id)arg1 withError:(id)arg2;
- (void)_checkLoginSaltAndThenRunBlock:(CDUnknownBlockType)arg1;
- (void)performRequestWithURLGenerator:(CDUnknownBlockType)arg1 bodyGenerator:(CDUnknownBlockType)arg2 method:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)performRequestWithURLGenerator:(CDUnknownBlockType)arg1 bodyGenerator:(CDUnknownBlockType)arg2 method:(id)arg3 withDataHandler:(CDUnknownBlockType)arg4;
- (id)requestWithURLGenerator:(CDUnknownBlockType)arg1 bodyGenerator:(CDUnknownBlockType)arg2 method:(id)arg3 error:(id *)arg4;
- (id)basicURLForCommand:(id)arg1 parameters:(id)arg2;
- (void)_computeAppleIDHash;
- (id)_computeAppleIDHashForAppleID:(id)arg1;
- (id)directoryServicesID;
@property(readonly, nonatomic, getter=isAuthenticated) BOOL authenticated;
- (id)init;
- (BOOL)setAppleID:(id)arg1 andPassword:(id)arg2 error:(id *)arg3;
- (BOOL)getAppleID:(id *)arg1 andPassword:(id *)arg2 error:(id *)arg3;
- (BOOL)getAppleID:(id *)arg1 andPassword:(id *)arg2 securityItem:(struct OpaqueSecKeychainItemRef **)arg3 error:(id *)arg4;
- (id)appleIDPreferencesKey;

@end

