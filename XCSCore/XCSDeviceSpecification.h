//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <XCSCore/XCSObject.h>

#import "NSCopying.h"

@class NSArray, NSPredicate;

@interface XCSDeviceSpecification : XCSObject <NSCopying>
{
}

@property(readonly) NSPredicate *predicate;
- (id)saveRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithContents:(id)arg1 service:(id)arg2 validationErrors:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)_validateFilters:(id)arg1 deviceIdentifiers:(id)arg2 validationErrors:(id *)arg3;
- (id)initWithFilters:(id)arg1 deviceIdentifiers:(id)arg2 validationErrors:(id *)arg3;

// Remaining properties
@property NSArray *deviceIdentifiers; // @dynamic deviceIdentifiers;
@property NSArray *filters; // @dynamic filters;

@end

