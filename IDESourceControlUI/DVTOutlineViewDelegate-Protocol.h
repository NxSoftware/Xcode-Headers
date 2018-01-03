//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDESourceControlUI/NSOutlineViewDelegate-Protocol.h>

@class DVTOutlineView, NSCell, NSFont, NSString, NSTableColumn;
@protocol NSDraggingInfo;

@protocol DVTOutlineViewDelegate <NSOutlineViewDelegate>

@optional
- (Class)outlineView:(DVTOutlineView *)arg1 groupRowCellClassForDataCell:(NSCell *)arg2;
- (NSFont *)outlineViewGroupRowFont:(DVTOutlineView *)arg1;
- (BOOL)outlineView:(DVTOutlineView *)arg1 shouldMouseHoverForTableColumn:(NSTableColumn *)arg2 row:(long long)arg3;
- (void)outlineView:(DVTOutlineView *)arg1 concludeDragOperation:(id <NSDraggingInfo>)arg2;
- (unsigned long long)outlineView:(DVTOutlineView *)arg1 draggingSourceOperationMaskForLocal:(BOOL)arg2;
- (void)outlineView:(DVTOutlineView *)arg1 draggingDidEnd:(id <NSDraggingInfo>)arg2;
- (void)outlineView:(DVTOutlineView *)arg1 draggingDidUpdate:(id <NSDraggingInfo>)arg2;
- (void)outlineView:(DVTOutlineView *)arg1 draggingDidEnter:(id <NSDraggingInfo>)arg2;
- (BOOL)outlineView:(DVTOutlineView *)arg1 insertText:(NSString *)arg2;
- (BOOL)outlineView:(DVTOutlineView *)arg1 doCommandBySelector:(SEL)arg2;
@end

