//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTFoundation/DVTDeveloperAccount.h>

@interface DVTDeveloperAccount (KitAdditions)
+ (id)_reauthLock;
- (void)_reauthenticateWithAuthKitUsingHostWindow:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (BOOL)reauthenticateUsingHostWindow:(id)arg1 error:(id *)arg2;
- (void)reauthenticateUsingHostWindow:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (BOOL)shouldTryToReauthenticateForLogInError:(id)arg1;
- (id)sessionByLoggingInIfNeededWithHostWindow:(id)arg1 outError:(id *)arg2;
- (void)executeInSessionWithHostWindow:(id)arg1 executionBlock:(CDUnknownBlockType)arg2;
@end

