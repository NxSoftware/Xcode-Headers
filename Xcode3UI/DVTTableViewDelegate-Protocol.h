//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Xcode3UI/NSTableViewDelegate-Protocol.h>

@class DVTTableView;
@protocol NSDraggingInfo;

@protocol DVTTableViewDelegate <NSTableViewDelegate>

@optional
- (void)tableView:(DVTTableView *)arg1 concludeDragOperation:(id <NSDraggingInfo>)arg2;
- (void)tableView:(DVTTableView *)arg1 draggingDidEnd:(id <NSDraggingInfo>)arg2;
- (void)tableView:(DVTTableView *)arg1 draggingDidUpdate:(id <NSDraggingInfo>)arg2;
- (void)tableView:(DVTTableView *)arg1 draggingDidEnter:(id <NSDraggingInfo>)arg2;
- (unsigned long long)tableView:(DVTTableView *)arg1 draggingSourceOperationMaskForLocal:(BOOL)arg2;
- (BOOL)tableView:(DVTTableView *)arg1 doCommandBySelector:(SEL)arg2;
@end

