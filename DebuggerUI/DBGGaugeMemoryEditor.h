//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DebuggerUI/DBGGaugeEditor.h>

#import "IDEDebugGaugeReportTopSectionContentDelegate.h"
#import "IDEGraphDelegate.h"

@class DVTCapacitySegment, DVTMeterView, IDEPlotGraph, NSButton, NSByteCountFormatter, NSString, NSTextField, NSView;

@interface DBGGaugeMemoryEditor : DBGGaugeEditor <IDEDebugGaugeReportTopSectionContentDelegate, IDEGraphDelegate>
{
    NSView *_topSectionUtilizationView;
    DVTCapacitySegment *_remainderCapacitySegment;
    DVTCapacitySegment *_processCapacitySegment;
    BOOL _useLogScaleInSpeedometer;
    BOOL _breakpointsWasActivated;
    NSString *_topChartName;
    NSString *_bottomChartName;
    NSByteCountFormatter *_byteFormatter;
    NSView *_topSectionSpeedometerView;
    DVTMeterView *_topSectionSpeedometer;
    NSTextField *_topSectionSpeedTopNumberLabel;
    NSTextField *_topSectionSpeedTopUnitLabel;
    NSTextField *_topSectionSpeedBottomNumberLabel;
    NSTextField *_topSectionSpeedBottomUnitLabel;
    NSButton *_profileButton;
    NSView *_topGraphContainer;
    IDEPlotGraph *_topGraph;
    NSTextField *_topGraphDescription1;
    NSTextField *_topGraphDuration;
    NSTextField *_topGraphHigh;
    NSTextField *_topGraphLow;
    NSView *_bottomGraphContainer;
    IDEPlotGraph *_bottomGraph;
    NSTextField *_bottomGraphDescription1;
    NSTextField *_bottomGraphDuration;
    NSTextField *_bottomGraphHigh;
    NSTextField *_bottomGraphLow;
    NSView *_disabledMessageContainer;
    NSTextField *_disabledMessageText;
}

@property __weak NSTextField *disabledMessageText; // @synthesize disabledMessageText=_disabledMessageText;
@property __weak NSView *disabledMessageContainer; // @synthesize disabledMessageContainer=_disabledMessageContainer;
@property __weak NSTextField *bottomGraphLow; // @synthesize bottomGraphLow=_bottomGraphLow;
@property __weak NSTextField *bottomGraphHigh; // @synthesize bottomGraphHigh=_bottomGraphHigh;
@property __weak NSTextField *bottomGraphDuration; // @synthesize bottomGraphDuration=_bottomGraphDuration;
@property __weak NSTextField *bottomGraphDescription1; // @synthesize bottomGraphDescription1=_bottomGraphDescription1;
@property __weak IDEPlotGraph *bottomGraph; // @synthesize bottomGraph=_bottomGraph;
@property __weak NSView *bottomGraphContainer; // @synthesize bottomGraphContainer=_bottomGraphContainer;
@property __weak NSTextField *topGraphLow; // @synthesize topGraphLow=_topGraphLow;
@property __weak NSTextField *topGraphHigh; // @synthesize topGraphHigh=_topGraphHigh;
@property __weak NSTextField *topGraphDuration; // @synthesize topGraphDuration=_topGraphDuration;
@property __weak NSTextField *topGraphDescription1; // @synthesize topGraphDescription1=_topGraphDescription1;
@property __weak IDEPlotGraph *topGraph; // @synthesize topGraph=_topGraph;
@property __weak NSView *topGraphContainer; // @synthesize topGraphContainer=_topGraphContainer;
@property __weak NSButton *profileButton; // @synthesize profileButton=_profileButton;
@property __weak NSTextField *topSectionSpeedBottomUnitLabel; // @synthesize topSectionSpeedBottomUnitLabel=_topSectionSpeedBottomUnitLabel;
@property __weak NSTextField *topSectionSpeedBottomNumberLabel; // @synthesize topSectionSpeedBottomNumberLabel=_topSectionSpeedBottomNumberLabel;
@property __weak NSTextField *topSectionSpeedTopUnitLabel; // @synthesize topSectionSpeedTopUnitLabel=_topSectionSpeedTopUnitLabel;
@property __weak NSTextField *topSectionSpeedTopNumberLabel; // @synthesize topSectionSpeedTopNumberLabel=_topSectionSpeedTopNumberLabel;
@property __weak DVTMeterView *topSectionSpeedometer; // @synthesize topSectionSpeedometer=_topSectionSpeedometer;
@property __weak NSView *topSectionSpeedometerView; // @synthesize topSectionSpeedometerView=_topSectionSpeedometerView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)translateValue:(id)arg1 keypath:(id)arg2;
- (id)colorForChartNamed:(id)arg1;
- (id)topSectionTitleAccessoryView;
- (id)topSectionComponentEntries;
- (id)topSectionTitle;
- (void)_addGraphViews:(id)arg1;
- (void)_addDisabledMessage:(id)arg1 toStackView:(id)arg2;
- (void)addSectionsToView:(id)arg1;
- (void)_configureBottomGraphLabels;
- (void)_configureTopGraphLabels;
- (void)_setupMemoryGraph:(id)arg1;
- (BOOL)hasDefaultTopSection;
- (id)instrumentsToolIdentifierForAnalysis;
- (void)_setupTopSectionComponentViews;
- (void)_setupSpeedometer;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

