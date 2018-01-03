//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSAttributedString, NSButton, NSFileManager;

@interface _IDETestReportActivities_AttachmentView : NSView
{
    NSFileManager *_fm;
    NSAttributedString *_attachmentAttString;
    NSButton *_attachmentButton;
    NSButton *_indicatorButton;
    BOOL _showIndicator;
    unsigned long long _attachmentsCount;
    long long _backgroundStyle;
}

@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(nonatomic) BOOL showIndicator; // @synthesize showIndicator=_showIndicator;
@property(nonatomic) unsigned long long attachmentsCount; // @synthesize attachmentsCount=_attachmentsCount;
- (void).cxx_destruct;
- (void)quickLookFirstActivityInAttachment:(id)arg1;
- (void)quickLookAllActivitiesInAttachment:(id)arg1;
- (void)saveItem:(id)arg1;
- (void)_saveItemAtPath:(id)arg1;
- (id)activitesCellView;
- (void)saveAll:(id)arg1;
- (id)attachmentsMenu;
- (id)attachments;
- (void)mouseDown:(id)arg1;
- (void)layoutViews;
- (void)awakeFromNib;
- (id)formatter;

@end

