//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDESpriteKitParticleEditor/NSObject-Protocol.h>

@class GTFFileSystemEventStream, NSString;

@protocol GTFFileSystemEventStreamDelegate <NSObject>
- (void)fileSystemEventStream:(GTFFileSystemEventStream *)arg1 notedChangeAtPath:(NSString *)arg2 scanRecursively:(BOOL)arg3;

@optional
- (void)historyWrappedForFileSystemEventStream:(GTFFileSystemEventStream *)arg1;
- (void)historyCompleteForFileSystemEventStream:(GTFFileSystemEventStream *)arg1;
- (void)fileSystemEventStream:(GTFFileSystemEventStream *)arg1 notedVolumeUnmount:(NSString *)arg2;
- (void)fileSystemEventStream:(GTFFileSystemEventStream *)arg1 notedVolumeMount:(NSString *)arg2;
- (void)fileSystemEventStream:(GTFFileSystemEventStream *)arg1 notedChangeOfRootPath:(NSString *)arg2;
@end

