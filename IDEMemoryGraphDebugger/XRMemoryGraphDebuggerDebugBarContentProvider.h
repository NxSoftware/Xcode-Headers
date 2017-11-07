//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEDebugBarContentProvider.h>

@class NSButton, XRMemoryGraphDebuggerAdditionUIController;
@protocol DVTCancellable;

@interface XRMemoryGraphDebuggerDebugBarContentProvider : IDEDebugBarContentProvider
{
    XRMemoryGraphDebuggerAdditionUIController *_currentUIController;
    id <DVTCancellable> _currentUIControllerObserver;
    id <DVTCancellable> _currentUIControllerIsValidObserver;
    NSButton *_memoryGraphDebuggingButton;
}

- (void).cxx_destruct;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (void)_updateCurrentUIController;
- (void)_enableDebuggerButtonBasedOnDebugSession:(id)arg1;
- (void)wasAttachedToDebugBar:(id)arg1;
- (void)currentDebugSessionDidChange;
- (void)currentDebugSessionStateDidChange;
- (void)_memoryGraphDebuggingButtonPressed:(id)arg1;
- (id)init;

@end

