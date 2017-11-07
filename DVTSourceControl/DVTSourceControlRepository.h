//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTSourceControl/DVTSourceControlDisplayable-Protocol.h>
#import <DVTSourceControl/DVTSourceControlIdentifiable-Protocol.h>
#import <DVTSourceControl/NSCopying-Protocol.h>
#import <DVTSourceControl/NSSecureCoding-Protocol.h>

@class DVTSourceControlRemoteRepository, DVTSourceControlSystem, NSArray, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface DVTSourceControlRepository : NSObject <DVTSourceControlIdentifiable, NSSecureCoding, NSCopying, DVTSourceControlDisplayable>
{
    NSMutableDictionary *_cachedLastDownloadedFromRemoteRepositoriess;
    NSString *__id;
    NSURL *_URL;
    NSString *_identifier;
    NSString *_secondaryIdentifier;
    DVTSourceControlSystem *_sourceControlSystem;
    NSDictionary *_cachedRemoteRepositories;
    DVTSourceControlRemoteRepository *_primaryRemoteRepository;
    NSArray *_cachedTags;
    NSArray *_cachedBranches;
    NSArray *_cachedStashes;
    NSDictionary *_cachedRemoteBranches;
}

+ (id)createRepositoryAtFileURL:(id)arg1 withSystem:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)scanForRepositoryInFolderPath:(id)arg1 usingSourceControlSystems:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSDictionary *cachedRemoteBranches; // @synthesize cachedRemoteBranches=_cachedRemoteBranches;
@property(retain, nonatomic) NSArray *cachedStashes; // @synthesize cachedStashes=_cachedStashes;
@property(retain, nonatomic) NSArray *cachedBranches; // @synthesize cachedBranches=_cachedBranches;
@property(retain, nonatomic) NSArray *cachedTags; // @synthesize cachedTags=_cachedTags;
@property(retain) DVTSourceControlRemoteRepository *primaryRemoteRepository; // @synthesize primaryRemoteRepository=_primaryRemoteRepository;
@property(copy, nonatomic) NSDictionary *cachedRemoteRepositories; // @synthesize cachedRemoteRepositories=_cachedRemoteRepositories;
@property(retain) DVTSourceControlSystem *sourceControlSystem; // @synthesize sourceControlSystem=_sourceControlSystem;
@property(copy) NSString *secondaryIdentifier; // @synthesize secondaryIdentifier=_secondaryIdentifier;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSURL *URL; // @synthesize URL=_URL;
@property(copy) NSString *_id; // @synthesize _id=__id;
@property(readonly) NSDictionary *cachedLastDownloadedFromRemoteRepositoriess; // @synthesize cachedLastDownloadedFromRemoteRepositoriess=_cachedLastDownloadedFromRemoteRepositoriess;
- (void).cxx_destruct;
- (id)uploadCommitsToRemoteRepository:(id)arg1 remoteBranch:(id)arg2 pushTags:(BOOL)arg3 progressBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)downloadUpdatesFromRemoteRepository:(id)arg1 removeDeletedLocations:(BOOL)arg2 progressBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)removeRemoteRepositoryNamed:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)addRemoteRepository:(id)arg1 withName:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)remoteBranchForBranch:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)listRemoteRepositoriesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)diffLocation:(id)arg1 againstLocation:(id)arg2 branchAndTagLocations:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)removeTag:(id)arg1 forBranchAndTagLocations:(id)arg2 remoteRepository:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)addTag:(id)arg1 forBranchAndTagLocations:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)removeBranch:(id)arg1 forBranchAndTagLocations:(id)arg2 remoteRepository:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)addBranch:(id)arg1 from:(id)arg2 forBranchAndTagLocations:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)ancestorRevisionOfBranch:(id)arg1 otherBranch:(id)arg2 branchAndTagLocations:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)parentBranchesOfBranch:(id)arg1 branchAndTagLocations:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)listRemoteBranchesForBranchAndTagLocations:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)listBranchesForBranchAndTagLocations:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)listBranchesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)listSubpathsAtPath:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)automaticallyDetectBranchAndTagLocationsFromPath:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)revisionOfLocation:(id)arg1 branchAndTagLocations:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)headRevisionWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly) NSString *displayName;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1 identifier:(id)arg2 sourceControlSystem:(id)arg3;
- (id)initWithURL:(id)arg1 sourceControlSystem:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)__id;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

