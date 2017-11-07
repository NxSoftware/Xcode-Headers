//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/IBICCatalogFileManager-Protocol.h>

@class IDEVersionedFileManager, NSString;

@interface IBIDEImageCatalogFileManager : NSObject <IBICCatalogFileManager>
{
    IDEVersionedFileManager *_fileManager;
}

+ (id)ib_defaultManager;
+ (void)initialize;
- (void).cxx_destruct;
- (void)ib_endBatchEdits;
- (void)ib_startBatchEdits;
- (BOOL)ib_moveItemsAtPaths:(id)arg1 toPaths:(id)arg2 error:(id *)arg3;
- (BOOL)ib_copyItemsAtPaths:(id)arg1 toPaths:(id)arg2 error:(id *)arg3;
- (BOOL)ib_addItemsAtPaths:(id)arg1 force:(BOOL)arg2 error:(id *)arg3;
- (BOOL)ib_removeItemsAtPaths:(id)arg1 moveToTrash:(BOOL)arg2 error:(id *)arg3;
- (BOOL)ib_createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(BOOL)arg2 attributes:(id)arg3 error:(id *)arg4;
- (id)filePathsForPaths:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

