//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTSourceControlRepository, NSError;

@protocol DVTSourceControlAuthenticationFailureHandler <NSObject>
- (void)handleAuthenticationFailure:(NSError *)arg1 forRepository:(DVTSourceControlRepository *)arg2 withForce:(BOOL)arg3 context:(id)arg4 completionBlock:(void (^)(BOOL))arg5;
@end

