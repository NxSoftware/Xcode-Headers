//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XCSCore/XCSCommit.h>

@class DVTSourceControlAuthor, DVTSourceControlRevision, NSArray;

@interface XCSCommit (DVTSourceControl)
@property(readonly, copy, nonatomic) NSArray *fileStatuses;
@property(readonly, copy, nonatomic) DVTSourceControlRevision *revision;
@property(readonly, copy, nonatomic) DVTSourceControlAuthor *author;
- (id)logItemWithWorkspace:(id)arg1;
@end

