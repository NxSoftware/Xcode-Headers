//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPURenderTargetEditor/GPUTraceSubEditor.h>

@class DVTDeviceManager, DVTObservingToken, IDEWorkspaceTabController, NSArray, NSBox, NSButton, NSImageView, NSObject, NSPopUpButton, NSProgressIndicator, NSString, NSTextField, NSWindow;
@protocol OS_dispatch_queue;

@interface GPUQuicklooksEditor : GPUTraceSubEditor
{
    NSObject<OS_dispatch_queue> *_queue;
    NSPopUpButton *_devicePopup;
    NSButton *_activateButton;
    NSButton *_chooseButton;
    NSImageView *_imageView;
    NSTextField *_filenameTextField;
    NSTextField *_descriptionTextField;
    NSImageView *_incompatibleImageView;
    NSTextField *_incompatibleTextField;
    NSTextField *_incompatibleDescTextField;
    NSWindow *_deviceSelectionSheet;
    NSBox *_boxView;
    NSProgressIndicator *_progressIndicator;
    BOOL _traceSessionActivated;
    NSString *_appname;
    NSArray *_usableDevices;
    IDEWorkspaceTabController *_tabController;
    DVTDeviceManager *_deviceManager;
    DVTObservingToken *_debuggingAdditionsObservation;
    DVTObservingToken *_usableDevicesObservation;
    BOOL _isKojakFile;
    BOOL _disableDeviceCompabilityCheck;
}

+ (id)assetBundle;
@property(retain, nonatomic) NSArray *usableDevices; // @synthesize usableDevices=_usableDevices;
- (void).cxx_destruct;
- (void)GPUDebugger_replayCapture:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)toolsDeviceFromDVTDevice:(id)arg1 error:(id *)arg2;
- (void)_updateUsableDeviceList;
- (void)_updateUsableDeviceListNotification:(id)arg1;
- (void)_onUsableDevicesUpdated;
- (void)onDeviceSelectionCancelled:(id)arg1;
- (void)onDeviceSelected:(id)arg1;
- (void)onTraceSessionActivated:(id)arg1;
- (void)_handleTraceSessionActivation:(id)arg1;
- (BOOL)_shouldRunOnIncompatibleDevice:(id)arg1;
- (void)_buildDevicesMenu;
- (void)_refreshDevices;
- (id)_documentDescription;
- (BOOL)takeFocus;
- (void)loadView;
- (void)dealloc;

@end

