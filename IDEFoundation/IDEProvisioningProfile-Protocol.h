//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@protocol IDEProvisioningProfile <NSObject>
@property(readonly, nonatomic) NSDate *expirationDate;
@property(readonly, nonatomic) NSString *portalSubPlatformIdentifier;
@property(readonly, nonatomic) NSString *portalPlatformIdentifier;
@property(readonly, nonatomic) id <IDEProvisioningTeam> team;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *identifier;
- (BOOL)isTeamProfile;
@end

