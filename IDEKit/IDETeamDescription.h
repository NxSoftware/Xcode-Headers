//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IDETeamDescription : NSObject
{
    NSString *_name;
    NSString *_teamID;
    NSString *_iOSRole;
    NSString *_macRole;
    id <IDEProvisioningTeam> _team;
}

@property(retain, nonatomic) id <IDEProvisioningTeam> team; // @synthesize team=_team;
@property(copy, nonatomic) NSString *macRole; // @synthesize macRole=_macRole;
@property(copy, nonatomic) NSString *iOSRole; // @synthesize iOSRole=_iOSRole;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;

@end

