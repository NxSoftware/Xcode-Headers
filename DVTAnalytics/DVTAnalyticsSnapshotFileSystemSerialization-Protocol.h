//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class DVTAnalyticsSnapshot, DVTFilePath;

@protocol DVTAnalyticsSnapshotFileSystemSerialization
+ (id)objectFromFilePath:(DVTFilePath *)arg1 error:(id *)arg2;
- (DVTAnalyticsSnapshot *)snapshotWithError:(id *)arg1;

@optional
- (DVTAnalyticsSnapshot *)deletionSnapshotWithError:(id *)arg1;
@end

