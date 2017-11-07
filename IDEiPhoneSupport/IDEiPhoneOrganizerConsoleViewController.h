//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DTDeviceKit/DTDKDetailViewController.h>

#import <IDEiPhoneSupport/DTDKRemoteDeviceConsoleControllerDelegate-Protocol.h>
#import <IDEiPhoneSupport/DVTDevicesWindowConsoleViewController-Protocol.h>
#import <IDEiPhoneSupport/DVTFindBarFindable-Protocol.h>
#import <IDEiPhoneSupport/DVTFindBarHostable-Protocol.h>
#import <IDEiPhoneSupport/DVTScopeBarHost-Protocol.h>
#import <IDEiPhoneSupport/DVTWindowActivationStateObserver-Protocol.h>

@class DVTDelayedInvocation, DVTDispatchLock, DVTIncrementalFindBar, DVTScopeBarController, DVTScopeBarsManager, DVTStackBacktrace, DVTSystemActivityToken, DVTiOSDevice, IDEiPhoneConsoleTextView, NSMutableString, NSScrollView, NSString, NSView;
@protocol DVTCancellable;

@interface IDEiPhoneOrganizerConsoleViewController : DTDKDetailViewController <DVTWindowActivationStateObserver, DTDKRemoteDeviceConsoleControllerDelegate, DVTDevicesWindowConsoleViewController, DVTScopeBarHost, DVTFindBarHostable, DVTFindBarFindable>
{
    NSView *consoleView;
    IDEiPhoneConsoleTextView *consoleTextView;
    DVTiOSDevice *_device;
    unsigned int shouldWrapLines:1;
    unsigned int reserved:31;
    DVTSystemActivityToken *_activityToken;
    id <DVTCancellable> _windowActivationStateObserverCancellable;
    id <DVTCancellable> _themeChangeToken;
    DVTScopeBarsManager *_scopeBarsManager;
    DVTScopeBarController *_findBarScopeBarController;
    DVTIncrementalFindBar *_findBar;
    NSMutableString *_textBuffer;
    DVTDelayedInvocation *_textBufferDrainInvocation;
    DVTDispatchLock *_textBufferLock;
    BOOL _currentlyUpdatingConsoleText;
}

+ (id)defaultViewNibName;
+ (id)nibName;
@property BOOL currentlyUpdatingConsoleText; // @synthesize currentlyUpdatingConsoleText=_currentlyUpdatingConsoleText;
@property(retain, nonatomic) DVTiOSDevice *device; // @synthesize device=_device;
@property _Bool shouldWrapLines; // @synthesize shouldWrapLines;
- (void).cxx_destruct;
- (void)_drainTextBuffer;
- (void)_clearTextBuffer;
- (void)_appendToTextBuffer:(id)arg1;
- (void)find:(id)arg1;
- (void)dismissFindBar:(id)arg1 andRestoreSelection:(BOOL)arg2;
- (BOOL)isFindBarInstalled;
- (id)findBar;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (id)findStringMatchingDescriptor:(id)arg1 backwards:(BOOL)arg2 from:(id)arg3 to:(id)arg4;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
@property(readonly) NSView *scopeBarsBaseView;
- (void)consoleControllerDidClear:(id)arg1;
- (void)consoleController:(id)arg1 didReceiveConsoleText:(id)arg2;
- (void)save:(id)arg1;
- (void)clear:(id)arg1;
- (void)reload;
- (void)detailViewDidDisappear;
- (void)detailViewDidAppear;
- (void)saveConsole;
@property(readonly) NSString *saveConsoleButtonTitle;
- (void)clearConsole;
- (void)_themeFontsAndColorsUpdated;
- (void)primitiveInvalidate;
- (void)stopUpdatingConsoleText;
- (void)startUpdatingConsoleText;
- (void)window:(id)arg1 didChangeActivationState:(long long)arg2;
- (id)consoleController;
- (void)stopSuppressingAppNap;
- (void)suppressAppNapIfNeeded;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) NSScrollView *scopeBarsAdjustableScrollView;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

