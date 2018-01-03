//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class DVTBindingToken, IDESourceControlRepository, NSButton, NSImageView, NSProgressIndicator, NSString, NSTextField;

@interface IDESourceControlOperationWindow : NSWindow
{
    NSImageView *_statusImageView;
    NSTextField *_statusTextView;
    NSProgressIndicator *_progressView;
    long long _state;
    BOOL _showDeterminateProgress;
    double _progress;
    DVTBindingToken *_progressBindingToken;
    DVTBindingToken *_statusTextBindingToken;
    DVTBindingToken *_statusToolTipBindingToken;
    BOOL _setupWindow;
    NSString *_statusText;
    IDESourceControlRepository *_repository;
    NSButton *_leftMostButton;
}

@property __weak NSButton *leftMostButton; // @synthesize leftMostButton=_leftMostButton;
@property(retain) IDESourceControlRepository *repository; // @synthesize repository=_repository;
@property(retain) NSString *statusText; // @synthesize statusText=_statusText;
- (void).cxx_destruct;
- (void)close;
@property double progress;
@property BOOL showDeterminateProgress;
@property long long statusState;
- (id)_stringForAuthenticationState:(id)arg1;
- (void)orderWindow:(long long)arg1 relativeTo:(long long)arg2;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4 screen:(id)arg5;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)initWithCoder:(id)arg1;
- (void)_setupStatusComponents;

@end

