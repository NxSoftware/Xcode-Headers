//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class DVTTeamRecord, NSString;

@interface DVTOMCRecord : NSManagedObject
{
}

+ (id)coreDataEntityName;

// Remaining properties
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *omcId; // @dynamic omcId;
@property(retain, nonatomic) DVTTeamRecord *team; // @dynamic team;

@end

