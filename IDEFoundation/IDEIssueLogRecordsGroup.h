//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface IDEIssueLogRecordsGroup : NSObject
{
    NSMutableArray *_logRecords;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)removeLogsForIssues:(id)arg1;
- (void)addLogsForIssues:(id)arg1;
- (id)init;

// Remaining properties
@property(copy) NSArray *logRecords; // @dynamic logRecords;
@property(readonly, copy) NSMutableArray *mutableLogRecords; // @dynamic mutableLogRecords;

@end

