//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class DVTControllerContentView, DVTScopeBarView, NSSegmentedControl;
@protocol DVTScopeBarContentController;

@interface DVTScopeBarController : DVTViewController
{
    NSSegmentedControl *_dismissButton;
    DVTScopeBarView *_scopeBarView;
    DVTControllerContentView *_contentView;
    DVTViewController<DVTScopeBarContentController> *_contentViewController;
    BOOL _showsDismissButton;
}

@property(nonatomic) BOOL showsDismissButton; // @synthesize showsDismissButton=_showsDismissButton;
@property(retain) DVTViewController<DVTScopeBarContentController> *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (void)_adjustSubviews;
- (void)dismissButtonAction:(id)arg1;
@property(readonly) double preferredScopeBarHeight;
@property int borderSides;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)initWithContentViewController:(id)arg1;
- (id)initUsingDefaultNib;

@end

