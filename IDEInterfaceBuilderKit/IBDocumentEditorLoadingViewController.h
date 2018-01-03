//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSBox, NSProgressIndicator, NSTextField;
@protocol IBDocumentEditorLoadingViewControllerDelegate;

@interface IBDocumentEditorLoadingViewController : NSViewController
{
    BOOL _showingLoadingUI;
    id <IBDocumentEditorLoadingViewControllerDelegate> _delegate;
    NSProgressIndicator *_progressIndicator;
    NSTextField *_loadingLabel;
    NSBox *_backgroundBox;
}

@property(retain, nonatomic) NSBox *backgroundBox; // @synthesize backgroundBox=_backgroundBox;
@property(retain, nonatomic) NSTextField *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) __weak id <IBDocumentEditorLoadingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)moreInfoRequestedForBlockingEventView:(id)arg1;
- (void)escapeHatchRequestedForBlockingEventView:(id)arg1;
- (void)viewDidLoad;
- (id)initUsingDefaultNib;

@end

