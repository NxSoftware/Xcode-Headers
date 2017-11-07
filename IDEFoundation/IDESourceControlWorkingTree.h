//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDESourceControlTree.h>

@class DVTFilePath, IDESourceControlBranch, IDESourceControlRepository, IDESourceControlWorkingCopyConfiguration, NSArray, NSDate, NSMutableArray, NSObject, NSOperationQueue, NSString;
@protocol DVTSourceControlCancellable, OS_dispatch_queue;

@interface IDESourceControlWorkingTree : IDESourceControlTree
{
    IDESourceControlWorkingCopyConfiguration *_wcc;
    IDESourceControlBranch *_currentBranch;
    long long _fileReferenceStatusProcessingQueueLockCount;
    NSOperationQueue *_fileReferenceStatusProcessingQueue;
    NSObject<OS_dispatch_queue> *_fileStatusScheduleQueue;
    unsigned long long _filesAndStatusOperationCount;
    id <DVTSourceControlCancellable> _filesAndStatusOperation;
    NSMutableArray *_itemsWithStatus;
    NSOperationQueue *_status_processing_queue;
    DVTFilePath *_filePath;
    NSString *_origin;
    BOOL _representsGitSVNBridge;
    BOOL _initialLocalStatusUpdateIsComplete;
    BOOL _initialServerStatusUpdateIsComplete;
    BOOL _needsUpgrade;
    BOOL _checkedForUpgrade;
    NSDate *_lastStatusUpdateDate;
}

@property(retain, nonatomic) NSDate *lastStatusUpdateDate; // @synthesize lastStatusUpdateDate=_lastStatusUpdateDate;
@property BOOL checkedForUpgrade; // @synthesize checkedForUpgrade=_checkedForUpgrade;
@property BOOL needsUpgrade; // @synthesize needsUpgrade=_needsUpgrade;
@property BOOL representsGitSVNBridge; // @synthesize representsGitSVNBridge=_representsGitSVNBridge;
@property(readonly) BOOL initialServerStatusUpdateIsComplete; // @synthesize initialServerStatusUpdateIsComplete=_initialServerStatusUpdateIsComplete;
@property(readonly) BOOL initialLocalStatusUpdateIsComplete; // @synthesize initialLocalStatusUpdateIsComplete=_initialLocalStatusUpdateIsComplete;
@property(retain) IDESourceControlWorkingCopyConfiguration *wcc; // @synthesize wcc=_wcc;
@property(readonly) NSString *origin; // @synthesize origin=_origin;
@property(copy) DVTFilePath *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)invalidateServerStatus;
- (void)clearServerStatus;
- (void)invalidateLocalStatus;
- (void)clearLocalAndServerStatus;
- (void)clearStatusForItem:(id)arg1;
- (void)addItemWithStatus:(id)arg1;
- (void)mergeStatusOperationResults:(id)arg1 pathsWithRemoteStatus:(id)arg2 forLocalStatusOnly:(BOOL)arg3;
- (void)addNewItemsWithStatusWithResults:(id)arg1;
- (id)mutableItemsWithStatus;
@property(readonly) NSArray *itemsWithStatus; // @synthesize itemsWithStatus=_itemsWithStatus;
- (void)addUpdateFileReferenceStatueseBlock:(CDUnknownBlockType)arg1;
- (void)updateFileReferenceStatusesAndWaitForFinish:(BOOL)arg1;
- (void)blockUpdatingFileReferenceStatuses;
- (void)_updateStatus:(BOOL)arg1 forceAuthentication:(BOOL)arg2 workspace:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)unauthenticatedRemoteStatusUpdateForWorkspace:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateStatus:(BOOL)arg1 workspace:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)fileReferenceStatusProcessingQueue;
- (void)invalidateCurrentBranch;
- (id)switchToBranch:(id)arg1 inWorkspace:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)currentBranchWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)currentBranchWithToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_preprocessBranchProcessing:(id)arg1 error:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_processBranches:(id)arg1 error:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)automaticallyConfigureSVNLocationsWithToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly) BOOL isConfiguredForBranching;
- (id)itemForFilePath:(id)arg1;
- (BOOL)containsItemAtFilePath:(id)arg1;
- (id)subclass_createRootNode;
@property(readonly) NSDate *dataModificationDate;
@property(readonly) DVTFilePath *dataDirectory;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)description;
- (id)ideModelObjectTypeIdentifier;
@property(readonly) IDESourceControlBranch *currentBranch; // @synthesize currentBranch=_currentBranch;
@property(readonly) IDESourceControlRepository *repository;
- (void)setLocation:(id)arg1;
- (void)primitiveInvalidate;
- (void)_setOrigin:(id)arg1;
- (void)_updateWorkingTreeOrigin;
- (id)initWithDictionary:(id)arg1 repository:(id)arg2 sourceControlExtension:(id)arg3 sourceControlManager:(id)arg4;
- (id)initWithLocation:(id)arg1 sourceControlManager:(id)arg2;
- (id)_initWithLocation:(id)arg1 sourceControlManager:(id)arg2;

@end

