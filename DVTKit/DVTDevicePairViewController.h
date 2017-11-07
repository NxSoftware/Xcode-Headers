//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <DVTKit/AKPinFieldViewDelegate-Protocol.h>
#import <DVTKit/DVTDevicesWindowDetailViewController-Protocol.h>

@class AKPinFieldView, DVTDevice, DVTStackBacktrace, NSButton, NSImageView, NSLayoutConstraint, NSProgressIndicator, NSString, NSTextField, NSView;
@protocol DVTDeviceAction;

@interface DVTDevicePairViewController : DVTViewController <AKPinFieldViewDelegate, DVTDevicesWindowDetailViewController>
{
    BOOL _pinEntryComplete;
    BOOL _hasSetupConstraints;
    DVTDevice *_device;
    NSView *_waitToStartCenteringView;
    NSImageView *_waitingToStartDeviceImageView;
    NSButton *_startPairingButton;
    NSView *_pinCenteringView;
    NSImageView *_deviceImageView;
    NSTextField *_enterPINLabel;
    NSView *_pinContainerView;
    NSLayoutConstraint *_widthOfPinViewConstraint;
    NSButton *_connectButton;
    NSView *_busyCenteringView;
    NSTextField *_settingUpLabel;
    NSProgressIndicator *_busyProgressIndicator;
    NSView *_errorCenteringView;
    NSTextField *_errorLabel;
    NSButton *_retryButton;
    AKPinFieldView *_pinView;
    long long _state;
    id <DVTDeviceAction> _pairAction;
    CDUnknownBlockType _infoRequestCallback;
}

@property BOOL hasSetupConstraints; // @synthesize hasSetupConstraints=_hasSetupConstraints;
@property(copy) CDUnknownBlockType infoRequestCallback; // @synthesize infoRequestCallback=_infoRequestCallback;
@property(retain) id <DVTDeviceAction> pairAction; // @synthesize pairAction=_pairAction;
@property(nonatomic) long long state; // @synthesize state=_state;
@property BOOL pinEntryComplete; // @synthesize pinEntryComplete=_pinEntryComplete;
@property(retain) AKPinFieldView *pinView; // @synthesize pinView=_pinView;
@property(retain) NSButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain) NSTextField *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain) NSView *errorCenteringView; // @synthesize errorCenteringView=_errorCenteringView;
@property(retain) NSProgressIndicator *busyProgressIndicator; // @synthesize busyProgressIndicator=_busyProgressIndicator;
@property(retain) NSTextField *settingUpLabel; // @synthesize settingUpLabel=_settingUpLabel;
@property(retain) NSView *busyCenteringView; // @synthesize busyCenteringView=_busyCenteringView;
@property(retain) NSButton *connectButton; // @synthesize connectButton=_connectButton;
@property(retain) NSLayoutConstraint *widthOfPinViewConstraint; // @synthesize widthOfPinViewConstraint=_widthOfPinViewConstraint;
@property(retain) NSView *pinContainerView; // @synthesize pinContainerView=_pinContainerView;
@property(retain) NSTextField *enterPINLabel; // @synthesize enterPINLabel=_enterPINLabel;
@property(retain) NSImageView *deviceImageView; // @synthesize deviceImageView=_deviceImageView;
@property(retain) NSView *pinCenteringView; // @synthesize pinCenteringView=_pinCenteringView;
@property(retain) NSButton *startPairingButton; // @synthesize startPairingButton=_startPairingButton;
@property(retain) NSImageView *waitingToStartDeviceImageView; // @synthesize waitingToStartDeviceImageView=_waitingToStartDeviceImageView;
@property(retain) NSView *waitToStartCenteringView; // @synthesize waitToStartCenteringView=_waitToStartCenteringView;
@property(retain, nonatomic) DVTDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)_transitionToState:(long long)arg1;
- (void)_resetPinView;
- (void)_beginPairing;
- (void)pinFieldViewTextDidComplete:(id)arg1;
- (void)pinFieldViewTextDidChange:(id)arg1;
- (void)retry:(id)arg1;
- (void)connect:(id)arg1;
- (void)startPairing:(id)arg1;
- (void)viewWillDisappear;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)awakeFromNib;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

