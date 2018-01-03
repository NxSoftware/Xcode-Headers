//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEKit/DTGraphDelegate-Protocol.h>
#import <IDEKit/IDEGraphModelChartsModificationDelegate-Protocol.h>

@class DTBarGraph, NSCache, NSMutableDictionary, NSString;
@protocol IDEGraphDelegate;

@interface IDEGraph : NSView <DTGraphDelegate, IDEGraphModelChartsModificationDelegate>
{
    NSCache *_gradientTable;
    NSView *_keyView;
    BOOL _haveEverSetInsets;
    NSMutableDictionary *_attributesForGraph;
    struct {
        unsigned int implementsLineFilledForGraphEntry:1;
        unsigned int implementsLineWidthForGraphChart:1;
        unsigned int implementsTranslateValueKeypath:1;
        unsigned int implementsSetPathStyleForGraphEntry:1;
        unsigned int implementsUseFlatColorForGraphChart:1;
    } _modelDelegateFlags;
    BOOL _showsKey;
    BOOL _showsLabels;
    BOOL _showsOnlyStartAndEndLabels;
    BOOL _useFlatColor;
    double _keyViewOffset;
    unsigned long long _visibleAxisMask;
    Class _yValueFormatter;
    double _preferredHeight;
    double _xLabelSpacing;
    double _yLabelSpacing;
    DTBarGraph *_graphView;
    struct NSEdgeInsets _insets;
}

+ (void)initialize;
@property(retain) DTBarGraph *graphView; // @synthesize graphView=_graphView;
@property(nonatomic) BOOL useFlatColor; // @synthesize useFlatColor=_useFlatColor;
@property(nonatomic) double yLabelSpacing; // @synthesize yLabelSpacing=_yLabelSpacing;
@property(nonatomic) double xLabelSpacing; // @synthesize xLabelSpacing=_xLabelSpacing;
@property(nonatomic) struct NSEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(retain, nonatomic) Class yValueFormatter; // @synthesize yValueFormatter=_yValueFormatter;
@property(nonatomic) unsigned long long visibleAxisMask; // @synthesize visibleAxisMask=_visibleAxisMask;
@property(nonatomic) BOOL showsOnlyStartAndEndLabels; // @synthesize showsOnlyStartAndEndLabels=_showsOnlyStartAndEndLabels;
@property(nonatomic) BOOL showsLabels; // @synthesize showsLabels=_showsLabels;
@property(nonatomic) double keyViewOffset; // @synthesize keyViewOffset=_keyViewOffset;
@property(nonatomic) BOOL showsKey; // @synthesize showsKey=_showsKey;
- (void).cxx_destruct;
- (BOOL)useFlatColorForGraphChart:(id)arg1;
- (void)setPathStyleForGraph:(id)arg1 entry:(id)arg2 path:(id)arg3;
- (id)translateValue:(id)arg1 keypath:(id)arg2;
- (double)lineWidthForGraphChart:(id)arg1;
- (BOOL)lineFilledForGraph:(id)arg1 entry:(id)arg2;
- (void)drawGraph:(id)arg1 entry:(id)arg2 inRect:(struct CGRect)arg3;
- (void)drawGraph:(id)arg1 entrySeries:(id)arg2 inPath:(id)arg3;
- (void)graphChartWasAdded:(id)arg1;
- (void)dealloc;
- (id)_convertAxisMaskToBorder;
- (void)updateAttributes;
- (struct CGRect)_rectForNewValue:(id)arg1 atIndex:(id)arg2;
- (void)_cullEntriesOnChart:(id)arg1;
- (void)_rebuildKeyView;
- (void)updateConstraints;
@property __weak id <IDEGraphDelegate> modelDelegate;
- (void)clearChartNamed:(id)arg1;
- (void)addEntries:(id)arg1 onChartNamed:(id)arg2;
- (void)addEntry:(id)arg1 onChartNamed:(id)arg2;
- (void)addEntry:(id)arg1 forDate:(id)arg2 onChartNamed:(id)arg3;
- (void)addEntry:(id)arg1 forIndexedValue:(id)arg2 onChartNamed:(id)arg3 userInfo:(id)arg4;
- (id)graphChartNamed:(id)arg1;
- (id)gradientForColor:(id)arg1;
- (id)attributesForGraph;
- (Class)graphClass;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

