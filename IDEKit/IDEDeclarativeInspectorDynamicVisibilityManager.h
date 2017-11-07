//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTDelayedInvocation, DVTStackBacktrace, IDEInspectorLayoutGroup, NSMutableArray, NSMutableOrderedSet, NSString;
@protocol IDEBindableDeclarativeInspectorController;

@interface IDEDeclarativeInspectorDynamicVisibilityManager : NSObject <DVTInvalidation>
{
    NSObject<IDEBindableDeclarativeInspectorController> *_owner;
    DVTDelayedInvocation *_refreshInvocation;
    NSMutableArray *_orderedGroups;
    NSMutableOrderedSet *_pendingRefreshBlocks;
    IDEInspectorLayoutGroup *_layoutGroup;
    NSMutableArray *_observations;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)registerSubgroup:(id)arg1 forKeyPaths:(id)arg2;
- (void)uninstallSubgroup:(id)arg1;
- (void)installSubgroup:(id)arg1;
- (void)triggerRefresh;
- (void)refreshIfNeeded;
- (void)refresh;
- (BOOL)shouldSubgroupWithKeyPathsBeVisible:(id)arg1;
- (BOOL)shouldSubgroupWithKeyPathBeVisible:(id)arg1;
- (BOOL)isSubgroupVisible:(id)arg1;
- (id)initWithInspectorLayoutGroup:(id)arg1 owner:(id)arg2;
- (void)primitiveInvalidate;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

