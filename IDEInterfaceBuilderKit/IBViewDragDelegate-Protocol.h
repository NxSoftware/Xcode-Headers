//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class NSArray, NSView;
@protocol NSDraggingInfo;

@protocol IBViewDragDelegate <NSObject>
- (BOOL)view:(NSView *)arg1 performDragOperation:(id <NSDraggingInfo>)arg2;
- (BOOL)view:(NSView *)arg1 prepareForDragOperation:(id <NSDraggingInfo>)arg2;
- (unsigned long long)view:(NSView *)arg1 draggingEntered:(id <NSDraggingInfo>)arg2;
- (NSArray *)dragTypesForView:(NSView *)arg1;

@optional
- (void)view:(NSView *)arg1 draggingEnded:(id <NSDraggingInfo>)arg2;
- (void)view:(NSView *)arg1 draggingExited:(id <NSDraggingInfo>)arg2;
- (void)view:(NSView *)arg1 concludeDragOperation:(id <NSDraggingInfo>)arg2;
- (unsigned long long)view:(NSView *)arg1 draggingUpdated:(id <NSDraggingInfo>)arg2;
@end

