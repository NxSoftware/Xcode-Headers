//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBGSnapshot, DBGSnapshotNode, NSArray, NSPointerArray, NSString;

@interface DBGSnapshotGroup : NSObject
{
    NSString *_groupingIdentifier;
    NSString *_defaultDisplayName;
    DBGSnapshot *_snapshot;
    DBGSnapshotNode *_parentNode;
    NSPointerArray *_objects;
}

+ (id)weakObjectsGroupWithIdentifier:(id)arg1;
+ (id)strongObjectsGroupWithIdentifier:(id)arg1;
@property(readonly) NSPointerArray *objects; // @synthesize objects=_objects;
@property __weak DBGSnapshotNode *parentNode; // @synthesize parentNode=_parentNode;
@property __weak DBGSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain) NSString *defaultDisplayName; // @synthesize defaultDisplayName=_defaultDisplayName;
@property(readonly) NSString *groupingIdentifier; // @synthesize groupingIdentifier=_groupingIdentifier;
- (void).cxx_destruct;
- (id)rootLevelGroup;
- (id)debugDescription;
- (id)displayName;
@property(readonly) NSArray *allObjects;
- (void)addObject:(id)arg1;
- (id)initWithIdentifier:(id)arg1 usingStrongChildNodeReferences:(BOOL)arg2;

@end

