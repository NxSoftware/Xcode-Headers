//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceCodeComparisonEditor/NSObject-Protocol.h>

@class DVTDiffSession;

@protocol DVTDiffSessionDelegate <NSObject>

@optional
- (void)diffSessionDidScrapeDiffResults:(DVTDiffSession *)arg1;
- (void)diffSessionWillScrapeDiffResults:(DVTDiffSession *)arg1;
@end

