//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DTGraphKit/DTTimelinePlane.h>

@class DTTimelineDecorator, DTTimelineGraphInfoSummaryLabelLayer, NSAttributedString, NSColor, NSFont, NSImage, NSMapTable, NSString;

@interface DTTimelineDecoratedPlane : DTTimelinePlane
{
    NSMapTable *_tilesByIdx;
    double _oldTileWidth;
    DTTimelineGraphInfoSummaryLabelLayer *_infoSummaryLabelLayer;
    BOOL _dynamicRangeWasSet;
    BOOL _skipFaultingInTiles;
    DTTimelineDecorator *_decorator;
    NSString *_dynamicRangePeerGroup;
    NSAttributedString *_summary;
    NSImage *_extendedSummary;
    struct DTTimelineGraphDynamicRange _minimalDynamicRange;
    struct DTTimelineGraphDynamicRange _maximumDynamicRange;
}

+ (id)planeWithHeight:(double)arg1 decorator:(id)arg2;
+ (id)planeWithDecorator:(id)arg1;
@property(retain, nonatomic) NSImage *extendedSummary; // @synthesize extendedSummary=_extendedSummary;
@property(retain, nonatomic) NSAttributedString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *dynamicRangePeerGroup; // @synthesize dynamicRangePeerGroup=_dynamicRangePeerGroup;
@property(nonatomic) struct DTTimelineGraphDynamicRange maximumDynamicRange; // @synthesize maximumDynamicRange=_maximumDynamicRange;
@property(nonatomic) struct DTTimelineGraphDynamicRange minimalDynamicRange; // @synthesize minimalDynamicRange=_minimalDynamicRange;
@property(readonly, nonatomic) DTTimelineDecorator *decorator; // @synthesize decorator=_decorator;
- (void).cxx_destruct;
- (void)_didMoveOutOfView;
- (void)_willMoveIntoView;
- (id)_decorationSummaryLayer;
- (void)_enumeratesPlanesHavingKey:(id)arg1 stopPtr:(char *)arg2 block:(CDUnknownBlockType)arg3;
- (void)ignoreTimeBoundsCheck;
- (id)_unselectedTextColor;
- (id)_selectedTextColor;
- (void)makeOpaqueWithBackgroundColor:(id)arg1;
- (void)setContentIsOptional;
- (id)visibleStringSummaries;
- (BOOL)_setHeight:(double)arg1;
@property(nonatomic) BOOL decoratesMajorMinorTicks;
@property(nonatomic) unsigned long long intervalBarWidth;
@property(nonatomic) double intervalRoundedRectRadius;
@property(nonatomic) double intervalVisualSpacing;
@property(nonatomic) unsigned long long intervalDisplayType;
@property(nonatomic) unsigned long long intervalLabelConflictResolutionType;
@property(nonatomic) unsigned long long intervalConflictResolutionType;
@property(nonatomic) unsigned long long pointDisplayType;
@property(nonatomic) unsigned long long pointLabelConflictResolutionType;
@property(nonatomic) unsigned long long pointConflictResolutionType;
- (BOOL)dynamicRangeWasSet;
- (void)setDynamicRange:(struct DynamicRange)arg1;
- (struct DynamicRange)currentDynamicRange;
@property(readonly, nonatomic) struct DTTimelineGraphDynamicRange dynamicRange;
- (struct DynamicRange)visibleDynamicRange;
- (void)_enumerateVisibleTiles:(CDUnknownBlockType)arg1;
- (id)_decoratedPlanes;
- (void)_contextChanged;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain, nonatomic) NSFont *defaultDrawableFont;
@property(nonatomic) struct CGSize defaultDrawableIconSize;
@property(retain, nonatomic) NSImage *defaultDrawableIcon;
@property(copy, nonatomic) NSColor *defaultDrawableTextColor;
@property(copy, nonatomic) NSColor *defaultDrawableColor;
- (void)setTimelineGraph:(id)arg1;
- (id)init;
- (id)initWithHeight:(double)arg1;
- (id)initWithHeight:(double)arg1 decorator:(id)arg2;
- (id)initWithDecorator:(id)arg1;
- (void)_invalidateTimeRange:(struct XRTimeRange)arg1;
- (void)_redecorateTiles;
- (void)_setPosition:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (void)_layoutTiles;
- (void)_removeFromContext;
- (void)_setContext:(struct TimelineViewContext *)arg1 layer:(id)arg2 anchorPoint:(struct CGPoint)arg3;

@end

