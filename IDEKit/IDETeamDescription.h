//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTPortalTeam, NSString;

@interface IDETeamDescription : NSObject
{
    NSString *_name;
    NSString *_role;
    DVTPortalTeam *_team;
}

@property(retain, nonatomic) DVTPortalTeam *team; // @synthesize team=_team;
@property(copy, nonatomic) NSString *role; // @synthesize role=_role;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;

@end

