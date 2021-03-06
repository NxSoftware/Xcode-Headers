//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEInspectorViewController.h>

@class DVTReplacementView, DVTTimeSlicedMainThreadWorkQueue, NSWindow, _TtC12IDEQuickHelp22IDEQuickHelpController, _TtC12IDEQuickHelp32IDEQuickHelpMarkupViewController;
@protocol DVTCancellable;

@interface IDEQuickHelp.IDEQuickHelpMarkupInspectorViewController : IDEInspectorViewController
{
    // Error parsing type: , name: _mainThreadWorkQueue
    // Error parsing type: , name: _quickHelpController
    // Error parsing type: , name: _contentViewController
    // Error parsing type: , name: _replacementView
    // Error parsing type: , name: _sourceExpressionSource
    // Error parsing type: , name: _selectedExpression
    // Error parsing type: , name: _mainViewControllerObservingToken
    // Error parsing type: , name: _selectedExpressionObservingToken
    // Error parsing type: , name: _queryResultObservingToken
}

- (CDUnknownBlockType).cxx_destruct;
- (void)showDefaultHelpMessage;
- (void)_endTrackingSourceExpressionSource;
- (void)_beginTrackingWithSourceExpressionSource:(id)arg1;
- (void)_setupObservations;
@property(nonatomic, readonly) NSWindow *sourceExpressionWindow;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)sourceExpressionSource;
- (void)primitiveInvalidate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, retain) id <DVTCancellable> _queryResultObservingToken; // @synthesize _queryResultObservingToken;
@property(nonatomic, retain) id <DVTCancellable> _selectedExpressionObservingToken; // @synthesize _selectedExpressionObservingToken;
@property(nonatomic, retain) id <DVTCancellable> _mainViewControllerObservingToken; // @synthesize _mainViewControllerObservingToken;
@property(nonatomic, retain) DVTReplacementView *_replacementView; // @synthesize _replacementView;
@property(nonatomic, retain) _TtC12IDEQuickHelp32IDEQuickHelpMarkupViewController *_contentViewController; // @synthesize _contentViewController;
@property(nonatomic, retain) _TtC12IDEQuickHelp22IDEQuickHelpController *_quickHelpController; // @synthesize _quickHelpController;
@property(nonatomic, retain) DVTTimeSlicedMainThreadWorkQueue *_mainThreadWorkQueue; // @synthesize _mainThreadWorkQueue;

@end

