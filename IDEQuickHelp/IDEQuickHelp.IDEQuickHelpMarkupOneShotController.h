//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEQuickHelp/IDEQuickHelp.IDEQuickHelpController.h>

#import <IDEQuickHelp/NSPopoverDelegate-Protocol.h>

@class DVTSourceExpression, IDEQuickHelpQueryResult, NSPopover, NSString, NSWindow, _TtC12IDEQuickHelp32IDEQuickHelpMarkupViewController;
@protocol DVTCancellable, DVTSourceExpressionSource;

@interface IDEQuickHelp.IDEQuickHelpMarkupOneShotController : IDEQuickHelp.IDEQuickHelpController <NSPopoverDelegate>
{
    // Error parsing type: , name: _renderedContentSizeObservingToken
    // Error parsing type: , name: _contentChangedObserverToken
    // Error parsing type: , name: _popover
    // Error parsing type: , name: _contentViewController
    // Error parsing type: , name: _localizedDefaultMessage
}

+ (id)_mainThreadWorkQueue;
- (CDUnknownBlockType).cxx_destruct;
- (void)primitiveInvalidate;
- (void)popoverDidClose:(id)arg1;
- (void)_showPanelAtPoint:(struct CGPoint)arg1 contentSize:(struct CGSize)arg2;
- (void)_contentDidChange;
@property(nonatomic, copy) NSString *_localizedDefaultMessage; // @synthesize _localizedDefaultMessage;
- (void)_displayWithMessage:(id)arg1 withTitle:(id)arg2;
- (void)showDefaultHelpMessage;
@property(nonatomic, retain) IDEQuickHelpQueryResult *queryResult;
- (void)closeQuickHelp;
- (void)showQuickHelp;
@property(nonatomic, readonly) DVTSourceExpression *sourceExpression;
@property(nonatomic, readonly) id <DVTSourceExpressionSource> sourceExpressionSource;
@property(nonatomic, readonly) NSWindow *sourceExpressionWindow;
- (id)init;
@property(nonatomic, retain) _TtC12IDEQuickHelp32IDEQuickHelpMarkupViewController *_contentViewController; // @synthesize _contentViewController;
@property(nonatomic, retain) NSPopover *_popover; // @synthesize _popover;
@property(nonatomic, retain) id <DVTCancellable> _contentChangedObserverToken; // @synthesize _contentChangedObserverToken;
@property(nonatomic, retain) id <DVTCancellable> _renderedContentSizeObservingToken; // @synthesize _renderedContentSizeObservingToken;

@end

