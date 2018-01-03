//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <DVTKit/QLPreviewViewDelegate-Protocol.h>

@class NSLayoutConstraint, NSString, NSURL, QLPreviewView;
@protocol QLPreviewViewDelegate;

@interface DVTURLPreviewViewController : NSViewController <QLPreviewViewDelegate>
{
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSURL *_url;
    id <QLPreviewViewDelegate> _delegate;
    QLPreviewView *_qlPreviewView;
}

@property(retain) QLPreviewView *qlPreviewView; // @synthesize qlPreviewView=_qlPreviewView;
@property __weak id <QLPreviewViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)previewView:(id)arg1 didLoadPreviewItem:(id)arg2;
- (id)existingURLToOpen;
- (void)dealloc;
- (id)initWithDefaultNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

