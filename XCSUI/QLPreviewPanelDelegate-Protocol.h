//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <XCSUI/NSWindowDelegate-Protocol.h>

@class NSEvent, QLPreviewPanel;
@protocol QLPreviewItem;

@protocol QLPreviewPanelDelegate <NSWindowDelegate>

@optional
- (id)previewPanel:(QLPreviewPanel *)arg1 transitionImageForPreviewItem:(id <QLPreviewItem>)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewPanel:(QLPreviewPanel *)arg1 sourceFrameOnScreenForPreviewItem:(id <QLPreviewItem>)arg2;
- (BOOL)previewPanel:(QLPreviewPanel *)arg1 handleEvent:(NSEvent *)arg2;
@end

