//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class DVTDeveloperRecord, DVTTeamRecord, NSString;

@interface DVTRoleRecord : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingLevel;
@property(readonly, nonatomic) long long level;

// Remaining properties
@property(retain, nonatomic) DVTDeveloperRecord *developer; // @dynamic developer;
@property(retain, nonatomic) NSString *role; // @dynamic role;
@property(retain, nonatomic) DVTTeamRecord *team; // @dynamic team;

@end

