//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class IDEProvisioningManager, IDEProvisioningUserAction;
@protocol IDERepairable;

@protocol IDEProvisioningManagerDelegate
- (void)provisioningManager:(IDEProvisioningManager *)arg1 repairable:(id <IDERepairable>)arg2 shouldAuthorizeUserAction:(IDEProvisioningUserAction *)arg3 authorizationCallback:(void (^)(BOOL))arg4;
@end

