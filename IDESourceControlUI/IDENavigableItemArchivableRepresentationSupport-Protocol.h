//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDESourceControlUI/NSObject-Protocol.h>

@class NSString;
@protocol NSCoding;

@protocol IDENavigableItemArchivableRepresentationSupport <NSObject>

@optional
- (NSString *)navigableItem_archivingIdentifer;
- (unsigned long long)navigableItem_indexOfRepresentedObjectForIdentifier:(id <NSCoding>)arg1 inRelationshipKeyPath:(NSString *)arg2;
- (id <NSCoding>)navigableItem_identifierForRepresentedObjectAtIndex:(unsigned long long)arg1 inRelationshipKeyPath:(NSString *)arg2;
@end

