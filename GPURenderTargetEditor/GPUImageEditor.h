//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GPURenderTargetEditor/GPUTraceSubEditor.h>

#import <GPURenderTargetEditor/GPUColorChannelsViewControllerDelegate-Protocol.h>
#import <GPURenderTargetEditor/GPURenderBufferViewStateCoordinationProtocol-Protocol.h>

@class DVTBorderedView, DVTObservingToken, DYRenderingAttributes, GPURenderBufferBezeledLabel, GPURenderBufferView, GPUTraceResourceItem, NSButton, NSImage, NSLayoutConstraint, NSObject, NSPopUpButton, NSPopover, NSSegmentedControl, NSString, NSTextField;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GPUImageEditor : GPUTraceSubEditor <GPUColorChannelsViewControllerDelegate, GPURenderBufferViewStateCoordinationProtocol>
{
    GPURenderBufferView *_imageView;
    DVTBorderedView *_bottomToolBar;
    NSSegmentedControl *_viewSegmentedControl;
    NSSegmentedControl *_loupeSegmentedControl;
    NSTextField *_loupeXPositionView;
    NSTextField *_loupeYPositionView;
    NSButton *_infoButton;
    NSButton *_settingsButton;
    GPURenderBufferBezeledLabel *_bezeledZoomLabel;
    GPURenderBufferBezeledLabel *_bezeledOrientationLabel;
    NSLayoutConstraint *_toolbarHeightConstraint;
    NSObject<OS_dispatch_queue> *_queue;
    DYRenderingAttributes *_renderingAttributes;
    NSPopover *_infoPopover;
    NSPopover *_settingsPopover;
    NSTextField *_nameView;
    id _controlKeyEventTap;
    NSImage *_zoomToFitIcon;
    NSImage *_zoomToActualIcon;
    NSString *_zoomToFitControlLabel;
    NSString *_freeZoomControlLabelFormat;
    DVTObservingToken *_choosenLayerObservingToken;
    NSPopUpButton *_index0View;
    NSPopUpButton *_index1View;
    NSPopUpButton *_index2View;
    NSPopUpButton *_layerView;
    NSPopUpButton *_faceView;
    NSPopUpButton *_levelView;
    BOOL _loupeVisible;
    struct CGPoint _loupePosition;
    NSTextField *_imageLabel;
}

+ (id)assetBundle;
@property __weak NSTextField *imageLabel; // @synthesize imageLabel=_imageLabel;
- (void).cxx_destruct;
- (void)colorChannelViewController:(id)arg1 didChangeRenderingAttributes:(id)arg2;
- (void)dumpImages:(id)arg1 asRaw:(BOOL)arg2;
- (void)showSettings:(id)arg1;
- (void)showInfo:(id)arg1;
- (void)_showBezeledLabelWithString:(id)arg1;
- (void)_showZoomLabelWithValue:(double)arg1;
- (void)renderBufferViewDidChangeState:(id)arg1;
- (void)GPUDebugger_changeLoupePosition:(id)arg1;
- (void)GPUDebugger_hideLoupe:(id)arg1;
- (void)GPUDebugger_showLoupe:(id)arg1;
- (void)GPUDebugger_toggleLoupe:(id)arg1;
- (void)changeZoom:(id)arg1;
- (void)GPUDebugger_zoomToFit:(id)arg1;
- (void)GPUDebugger_zoomToActual:(id)arg1;
- (void)GPUDebugger_zoomOut:(id)arg1;
- (void)GPUDebugger_zoomIn:(id)arg1;
- (BOOL)_zoomOutEnabled;
- (BOOL)_zoomInEnabled;
- (void)changeOrientation:(id)arg1;
- (void)_updateToolbarState;
- (void)_updateImageView;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_updateResource;
- (void)selectLevel:(id)arg1;
- (void)selectFace:(id)arg1;
- (void)selectLayer:(id)arg1;
- (void)_updateLevelViewWithTexture:(id)arg1;
- (void)_updateFaceViewWithTexture:(id)arg1;
- (void)_updateLayerViewWithTexture:(id)arg1;
- (void)_beginEditor;
- (void)handleNotification:(id)arg1;
@property(retain) GPUTraceResourceItem *representedObject; // @dynamic representedObject;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;
- (void)_makeSegmentedControlImagesTemplates:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

