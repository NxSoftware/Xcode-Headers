//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface IDETestReportRemoteAssetDownloader : NSObject
{
    NSOperationQueue *_queue;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)cancelDownloads;
- (void)downloadAttachments:(id)arg1 forTest:(id)arg2 inActivity:(id)arg3 destinationDirectory:(id)arg4;

@end

