//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceCodeComparisonEditor/NSObject-Protocol.h>

@class DVTComparisonSplitView, NSEvent, NSIndexSet;

@protocol DVTComparisonSplitViewDelegate <NSObject>

@optional
- (void)comparisonSplitView:(DVTComparisonSplitView *)arg1 didDragDiffDescriptorIndexes:(NSIndexSet *)arg2 withEvent:(NSEvent *)arg3;
- (BOOL)comparisonSplitView:(DVTComparisonSplitView *)arg1 shouldDragDiffDescriptorIndexes:(NSIndexSet *)arg2 withEvent:(NSEvent *)arg3;
@end

