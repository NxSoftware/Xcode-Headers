//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface XCSUILogBundleDownloader : NSObject
{
    NSMutableDictionary *_tokensToDownloads;
}

+ (id)sharedDownloader;
- (void).cxx_destruct;
- (void)cancelDownloadForToken:(id)arg1;
- (id)downloadAllLogsForIntegration:(id)arg1 toDirectory:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)fileNameForIntegration:(id)arg1;
- (id)downloadAllLogsForIntegration:(id)arg1 windowForSheets:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

