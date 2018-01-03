//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEMigrationContext.h>

@class NSMapTable;

@interface IDESwiftMigrationContext : IDEMigrationContext
{
    NSMapTable *_convertedFilePathForOriginalFilePathMapTable;
}

+ (Class)migrationTargetSublass;
- (void).cxx_destruct;
- (id)migrateFolderForMigrationTarget:(id)arg1 andScheme:(id)arg2;
- (id)migrationBuildFolderForScheme:(id)arg1;
- (id)convertedFilePathForOriginalFilePath:(id)arg1;
- (unsigned long long)numberOfConvertedFilePaths;
- (id)_convertedFilePathForOriginalFilePathMapTable;
- (void)_collectRemapFilesFromDir:(id)arg1 remapFiles:(id)arg2;
- (void)_convertRemapFiles:(id)arg1;
- (CDUnknownBlockType)setupBuild:(char *)arg1 forScheme:(id)arg2 minimizeInference:(BOOL)arg3 migrationBuildOptions:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (void)selectDefaultTargets;

@end

