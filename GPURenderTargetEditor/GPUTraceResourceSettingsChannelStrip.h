//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class DYRangeSlider, NSButton, NSLayoutConstraint, NSTextField;
@protocol GPUTraceResourceSettingsChannelStripDelegate;

__attribute__((visibility("hidden")))
@interface GPUTraceResourceSettingsChannelStrip : NSViewController
{
    DYRangeSlider *_rangeSlider;
    NSTextField *_rangeMinTextField;
    NSTextField *_rangeMaxTextField;
    NSButton *_autoRangeCheckBox;
    double _toneMapDefaultMin;
    double _toneMapDefaultMax;
    double _toneMapLimitMin;
    double _toneMapLimitMax;
    unsigned char _tag;
    NSTextField *_channelLabel;
    NSButton *_enableButton;
    NSLayoutConstraint *_linkViewSpacerConstraint;
    id <GPUTraceResourceSettingsChannelStripDelegate> _delegate;
    double _toneMapValueMin;
    double _toneMapValueMax;
}

@property(nonatomic) double toneMapValueMax; // @synthesize toneMapValueMax=_toneMapValueMax;
@property(nonatomic) double toneMapValueMin; // @synthesize toneMapValueMin=_toneMapValueMin;
@property(nonatomic) __weak id <GPUTraceResourceSettingsChannelStripDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned char tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSLayoutConstraint *linkViewSpacerConstraint; // @synthesize linkViewSpacerConstraint=_linkViewSpacerConstraint;
@property(retain, nonatomic) NSButton *enableButton; // @synthesize enableButton=_enableButton;
@property(retain, nonatomic) NSTextField *channelLabel; // @synthesize channelLabel=_channelLabel;
- (void).cxx_destruct;
- (void)_toggleAutoRangeCheckBox:(id)arg1;
- (void)_updateMaxTextField:(id)arg1;
- (void)_updateMinTextField:(id)arg1;
- (void)_updateToneMapSlider:(id)arg1;
- (void)_toggleEnableState:(id)arg1;
- (void)_updateSliderAndTextfields;
@property(nonatomic) long long autoRangeCheckBoxState;
@property(nonatomic) long long enableButtonState;
@property(readonly, nonatomic) double uiWidth;
- (void)viewDidLoad;
- (void)setRenderingAttributes:(id)arg1 channelIndex:(unsigned char)arg2 stripType:(unsigned char)arg3;

@end

