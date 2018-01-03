//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBGSnapshotManager, NSArray, NSDate, NSMapTable, NSMutableArray, NSString;

@interface DBGSnapshot : NSObject
{
    NSString *_identifier;
    NSDate *_lastUpdated;
    NSMapTable *_identifierToNodeMap;
    NSMutableArray *_rootLevelGroups;
    DBGSnapshotManager *_snapshotManager;
    NSArray *_rootLevelSnapshotProperties;
}

@property(readonly) NSArray *rootLevelSnapshotProperties; // @synthesize rootLevelSnapshotProperties=_rootLevelSnapshotProperties;
@property __weak DBGSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
@property(retain) NSMutableArray *rootLevelGroups; // @synthesize rootLevelGroups=_rootLevelGroups;
@property(readonly) NSMapTable *identifierToNodeMap; // @synthesize identifierToNodeMap=_identifierToNodeMap;
@property(readonly) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_recursivelyDescribeNode:(id)arg1 withIndentation:(unsigned long long)arg2 includeProperties:(BOOL)arg3;
- (id)_recursivelyDescribeGroup:(id)arg1 withIndentation:(unsigned long long)arg2 isAdditonalGroup:(BOOL)arg3 includeProperties:(BOOL)arg4;
- (id)recursiveDescriptionIncludingProperties:(BOOL)arg1;
- (id)debugDescription;
- (id)rootLevelSnapshotGroupWithIdentifier:(id)arg1;
- (void)mergeInSnapshot:(id)arg1;
@property(readonly) NSArray *rootLevelSnapshotGroups;
- (id)nodesKindOfRuntimeClass:(id)arg1;
- (id)nodesMatchingPredicate:(id)arg1;
- (void)clearData;
- (void)addRootLevelGroup:(id)arg1;
- (id)init;

@end

