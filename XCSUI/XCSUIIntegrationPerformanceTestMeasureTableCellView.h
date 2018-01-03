//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSImageView, NSTextField, XCSUIIntegrationTestsDetailPerfMeasureButton;

@interface XCSUIIntegrationPerformanceTestMeasureTableCellView : NSTableCellView
{
    XCSUIIntegrationTestsDetailPerfMeasureButton *_measureTypeButton;
    NSImageView *_measureImageView;
    NSTextField *_minField;
    NSTextField *_maxField;
    NSTextField *_averageField;
    NSTextField *_rsdField;
}

@property(retain) NSTextField *rsdField; // @synthesize rsdField=_rsdField;
@property(retain) NSTextField *averageField; // @synthesize averageField=_averageField;
@property(retain) NSTextField *maxField; // @synthesize maxField=_maxField;
@property(retain) NSTextField *minField; // @synthesize minField=_minField;
@property(retain) NSImageView *measureImageView; // @synthesize measureImageView=_measureImageView;
@property(retain) XCSUIIntegrationTestsDetailPerfMeasureButton *measureTypeButton; // @synthesize measureTypeButton=_measureTypeButton;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

