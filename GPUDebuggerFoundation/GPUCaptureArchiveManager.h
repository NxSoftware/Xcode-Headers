//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerFoundation/NSFileManagerDelegate-Protocol.h>

@class NSFileManager, NSMapTable, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface GPUCaptureArchiveManager : NSObject <NSFileManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSFileManager *_fileManager;
    NSMapTable *_urlToCaptureArchiveTable;
    NSObject<OS_dispatch_queue> *_backgroundSerialQueue;
    NSMapTable *_hashToURLTable;
    NSMutableSet *_reportURLSet;
}

+ (id)sharedArchiveManager;
- (void).cxx_destruct;
- (BOOL)isValidReportURL:(id)arg1;
- (void)unregisterReportURL:(id)arg1;
- (void)registerReportURL:(id)arg1;
- (id)URLForHashkeyString:(id)arg1;
- (unsigned long long)hashKeyForURL:(id)arg1;
- (BOOL)copyWriteArchiveAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (id)copyAdjunctDataForFilename:(id)arg1 fromArchiveAtURL:(id)arg2 error:(id *)arg3;
- (BOOL)storeAdjunctData:(id)arg1 filename:(id)arg2 toArchiveAtURL:(id)arg3 error:(id *)arg4;
- (id)retrieveArchivedDataForKey:(id)arg1 fromArchiveAtURL:(id)arg2 error:(id *)arg3;
- (BOOL)archiveData:(id)arg1 withKey:(id)arg2 toArchiveAtURL:(id)arg3 replaceData:(BOOL)arg4 error:(id *)arg5;
- (BOOL)invalidateArchiveWithURL:(id)arg1 eraseFromDisk:(BOOL)arg2 error:(id *)arg3;
- (id)invalidateArchiveAsynchronouslyWithURL:(id)arg1 eraseFromDisk:(BOOL)arg2;
- (void)closeArchiveAtURL:(id)arg1;
- (id)createNewArchiveWithInferiorName:(id)arg1 error:(id *)arg2;
- (id)openCaptureArchiveAtURL:(id)arg1 error:(id *)arg2;
- (id)bufferedWriteURLForURL:(id)arg1;
- (BOOL)commitArchiveChangesForArchiveAtURL:(id)arg1 forExport:(BOOL)arg2 error:(id *)arg3;
- (BOOL)swapBufferedArchiveAtURL:(id)arg1 error:(id *)arg2;
- (id)_writeCaptureArchiveForURL:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)_copyAndOpenArchiveAtURL:(id)arg1;
- (id)_copyArchiveToTemporaryDirectoryAtURL:(id)arg1 error:(id *)arg2;
- (id)captureArchiveForURL:(id)arg1;
- (id)_readCaptureArchiveForURL:(id)arg1;
- (id)_addCaptureArchive:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

