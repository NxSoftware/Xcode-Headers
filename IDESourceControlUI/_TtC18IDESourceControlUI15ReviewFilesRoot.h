//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceControlUI/IDENavigableItemArchivableRepresentationSupport-Protocol.h>

@class NSArray, NSString;

@interface _TtC18IDESourceControlUI15ReviewFilesRoot : NSObject <IDENavigableItemArchivableRepresentationSupport>
{
    // Error parsing type: , name: revisions
}

+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSArray *revisions; // @synthesize revisions;
@property(nonatomic, readonly) NSArray *navigableItem_childRepresentedObjects;
- (unsigned long long)navigableItem_indexOfRepresentedObjectForIdentifier:(id)arg1 inRelationshipKeyPath:(id)arg2;
@property(nonatomic, readonly) NSString *navigableItem_name;

@end

