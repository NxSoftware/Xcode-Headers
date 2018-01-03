//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebugHierarchyKit/DBGDataCoordinator.h>

@class NSMutableDictionary;

@interface DBGDataCoordinatorTargetHub : DBGDataCoordinator
{
    NSMutableDictionary *_pendingChildNodes;
}

@property(retain) NSMutableDictionary *pendingChildNodes; // @synthesize pendingChildNodes=_pendingChildNodes;
- (void).cxx_destruct;
- (void)_writeRequestResponseToDiskIfNecessary:(id)arg1 request:(id)arg2 compressedSize:(unsigned long long)arg3;
- (void)_updateSubpropertiesWithDicts:(id)arg1 onProperty:(id)arg2;
- (void)_updateProperty:(id)arg1 withDict:(id)arg2;
- (void)_updatePropertiesWithDicts:(id)arg1 onNode:(id)arg2;
- (void)_updateNode:(id)arg1 withDict:(id)arg2;
- (void)_updateGroup:(id)arg1 withDict:(id)arg2;
- (id)_createNodeWithDict:(id)arg1;
- (void)_addNodeToMatchingRootLevelGroup:(id)arg1;
- (void)processDebugHierarchyObjectDict:(id)arg1 inGroup:(id)arg2 isDirectChildGroup:(BOOL)arg3;
- (void)processGroupDict:(id)arg1 isDirectChildGroup:(BOOL)arg2 parentNode:(id)arg3;
- (void)_updateSnapshotWithResponse:(id)arg1 forRequest:(id)arg2;
- (void)_processRequestLogs:(id)arg1 forRequest:(id)arg2;
- (void)_processFetchResults:(id)arg1 forRequest:(id)arg2;
- (void)didReceiveData:(id)arg1 forRequest:(id)arg2;

@end

