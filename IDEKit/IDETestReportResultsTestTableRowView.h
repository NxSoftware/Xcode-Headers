//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableRowView.h>

@class NSColor, NSTrackingArea;

@interface IDETestReportResultsTestTableRowView : NSTableRowView
{
    BOOL _mouseInside;
    NSTrackingArea *_trackingArea;
    BOOL _isFirstRowAfterTestRunPickerRow;
    id _item;
    long long _row;
    NSColor *_separatorColor;
}

@property(retain) NSColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property long long row; // @synthesize row=_row;
@property(retain) id item; // @synthesize item=_item;
@property BOOL isFirstRowAfterTestRunPickerRow; // @synthesize isFirstRowAfterTestRunPickerRow=_isFirstRowAfterTestRunPickerRow;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (id)tableCellView;
- (id)testAttachmentTableCellView;
- (id)testTargetTableCellView;
- (id)testTableCellView;
- (void)updateTrackingAreas;
- (void)ensureTrackingArea;
- (BOOL)mouseInside;
- (void)setMouseInside:(BOOL)arg1;
- (void)drawSeparatorInRect:(struct CGRect)arg1;

@end

