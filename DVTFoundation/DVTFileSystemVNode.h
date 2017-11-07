//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFilePath, DVTMountedFileSystem, NSMutableDictionary, NSPointerArray;

@interface DVTFileSystemVNode : NSObject
{
    NSMutableDictionary *_derivedInfoDict;
    NSPointerArray *_filePaths;
    DVTFilePath *_filePath;
    struct os_unfair_lock_s _derivedInfoDictLock;
    unsigned long long _inodeNumber;
    long long _fileSize;
    unsigned long long _statFlags;
    long long _posixModificationTime;
    unsigned int _statUid;
    unsigned int _statGid;
    int _deviceNumber;
    unsigned short _statMode;
}

+ (id)lookupVNodeForDeviceNumber:(int)arg1 inodeNumber:(unsigned long long)arg2;
@property(readonly) long long posixModificationTime; // @synthesize posixModificationTime=_posixModificationTime;
@property(readonly) long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly) unsigned long long statFlags; // @synthesize statFlags=_statFlags;
@property(readonly) unsigned int statGid; // @synthesize statGid=_statGid;
@property(readonly) unsigned int statUid; // @synthesize statUid=_statUid;
@property(readonly) unsigned short statMode; // @synthesize statMode=_statMode;
@property(readonly) unsigned long long inodeNumber; // @synthesize inodeNumber=_inodeNumber;
@property(readonly) int deviceNumber; // @synthesize deviceNumber=_deviceNumber;
- (void).cxx_destruct;
- (id)description;
- (void)recordStatInfo:(const struct stat *)arg1;
- (void)discardCaches;
- (void)addCachedEntriesFromDictionary:(id)arg1;
- (id)cachedValueForKey:(id)arg1;
- (void)removeFilePath:(id)arg1;
- (void)addFilePath:(id)arg1;
- (id)filePath;
- (id)filePaths;
@property(readonly) DVTMountedFileSystem *fileSystem;
- (id)initWithStatInfo:(const struct stat *)arg1;

@end

