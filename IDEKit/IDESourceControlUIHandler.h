//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTSourceControlAuthenticationFailureHandler-Protocol.h>

@class IDESourceControlCertificateAuthenticator, NSDate, NSString;
@protocol OS_dispatch_queue;

@interface IDESourceControlUIHandler : NSObject <DVTSourceControlAuthenticationFailureHandler>
{
    IDESourceControlCertificateAuthenticator *_authenticator;
    NSObject<OS_dispatch_queue> *_status_queue;
    NSDate *_timeDeactivated;
    NSString *_showingHostIdentityConfirmationIP;
}

+ (void)showAuthenticationAlertOnWindow:(id)arg1 account:(id)arg2 URL:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (BOOL)haveAuthenticationCompletionBlockForURL:(id)arg1;
+ (void)addAuthenticationCompletionBlock:(CDUnknownBlockType)arg1 forURL:(id)arg2;
+ (id)authenticationCompletionBlocksForURL:(id)arg1;
+ (void)clearAuthenticationCompletionBlocksForURL:(id)arg1;
+ (id)authenticationCompletionBlocks;
+ (void)showFingerprintAlertOnWindow:(id)arg1 withForce:(BOOL)arg2 host:(id)arg3 fingerprint:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
+ (BOOL)haveFingerprintCompletionBlockForHost:(id)arg1;
+ (void)addFingerprintCompletionBlock:(CDUnknownBlockType)arg1 forHost:(id)arg2;
+ (id)fingerprintCompletionBlocksForHost:(id)arg1;
+ (void)clearFingerprintCompletionBlocksForHost:(id)arg1;
+ (id)fingerprintCompletionBlocks;
+ (void)rejectFingerprintFromHost:(id)arg1;
+ (BOOL)didRejectFingerprintFromHost:(id)arg1;
+ (id)rejectedFingerprintHosts;
+ (void)showCertificateAlertOnWindow:(id)arg1 withForce:(BOOL)arg2 URL:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
+ (void)certificateSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
+ (BOOL)haveCertificateCompletionBlockForURL:(id)arg1;
+ (void)addCertificateCompletionBlock:(CDUnknownBlockType)arg1 forURL:(id)arg2;
+ (id)certificateCompletionBlocksForURL:(id)arg1;
+ (void)clearCertificateCompletionBlocksForURL:(id)arg1;
+ (id)certificateCompletionBlocks;
+ (void)rejectCertificateFromURL:(id)arg1;
+ (BOOL)didRejectCertificateFromURL:(id)arg1;
+ (id)rejectedCertificateURLs;
- (void).cxx_destruct;
- (void)showHostIdentityConfirmationNotification:(id)arg1;
- (void)showCertificatePanelNotification:(id)arg1;
- (void)sourceControlEnabled:(id)arg1;
- (void)applicationDidDeactivate:(id)arg1;
- (void)applicationDidActivate:(id)arg1;
- (void)authenticationNeededNotification:(id)arg1;
- (void)handleAuthenticationFailure:(id)arg1 forRepository:(id)arg2 withForce:(BOOL)arg3 context:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

