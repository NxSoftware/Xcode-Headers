//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTDocumentLocation, IDEActivityLogSection, NSArray;

@protocol IDEBuildResultsOutlineDelegate <NSObject>
@property(readonly) IDEActivityLogSection *lastFindResultSection;
@property(readonly) struct _NSRange lastFindResultRange;
@property(readonly) BOOL lastFindResult;
- (IDEActivityLogSection *)activityLogSection;
- (void)showAllMessages:(id)arg1;
- (void)doubleClickDocumentLocation:(DVTDocumentLocation *)arg1;
- (void)processNewSelectedIndexPaths:(NSArray *)arg1;
@end

