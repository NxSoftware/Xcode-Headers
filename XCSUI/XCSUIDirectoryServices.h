//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBIdentityQuery, NSArray, NSTimer;

@interface XCSUIDirectoryServices : NSObject
{
    CBIdentityQuery *_usersQuery;
    NSArray *_usersQueryResults;
    CBIdentityQuery *_groupsQuery;
    NSArray *_groupsQueryResults;
    CDUnknownBlockType _queryCallback;
    NSTimer *_resultsCallbackTimer;
}

+ (BOOL)isUserNameUnique:(id)arg1 shortName:(id)arg2;
+ (id)localUsers;
+ (id)userFrom:(id)arg1 isGroup:(BOOL)arg2;
- (void).cxx_destruct;
- (void)identityQueryDidNotSearch:(id)arg1;
- (void)identityQueryDidStopSearch:(id)arg1;
- (void)identityQueryDidFindResults:(id)arg1 moreComing:(BOOL)arg2;
- (void)identityQueryWillSearch:(id)arg1;
- (void)fireResultsCallback:(id)arg1;
- (id)sortedCandidates;
- (id)groupCandidates;
- (id)userCandidates;
- (id)candiatesFromResults:(id)arg1 isGroup:(BOOL)arg2;
- (void)stopQueries;
- (void)usersAndGroupsMatching:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)usersAndGroupsMatching:(id)arg1 includeHidden:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;

@end

