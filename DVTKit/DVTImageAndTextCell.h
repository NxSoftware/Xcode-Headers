//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTextFieldCell.h>

@class DVTBindingHelper, NSArray, NSColor, NSDictionary, NSFont, NSImage, NSProgressIndicator, NSString;

@interface DVTImageAndTextCell : NSTextFieldCell
{
    DVTBindingHelper *_bindingHelper;
    NSArray *_statusCategoryNames;
    NSDictionary *_statusCellsByCategoryName;
    NSFont *_subtitleFont;
    NSImage *_image;
    NSProgressIndicator *_progressIndicator;
    unsigned long long _progressIndicatorStyle;
    NSString *_subtitle;
    id _attributedStringValue;
    long long _leftEdgeSpacing;
    long long _subtitleSpacing;
    struct CGSize _baseImageSize;
    double _layoutHeight;
    long long _titleAndSubTitleLeftEdgeSpacing;
    long long _progressValue;
    int _emphasizeMarkerStyle;
    unsigned long long _imageScaling;
    int _subtitleLayout;
    BOOL _drawsEmphasizeMarker;
    BOOL _showsStatusItems;
    BOOL _alwaysReserveSpaceForStatusItems;
    NSString *_accessibilityDescription;
    NSColor *_inactiveTitleTextColor;
    double _statusItemEdgeMargin;
}

+ (void)initialize;
@property double statusItemEdgeMargin; // @synthesize statusItemEdgeMargin=_statusItemEdgeMargin;
@property(copy, nonatomic) NSColor *inactiveTitleTextColor; // @synthesize inactiveTitleTextColor=_inactiveTitleTextColor;
@property(copy, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
@property BOOL alwaysReserveSpaceForStatusItems; // @synthesize alwaysReserveSpaceForStatusItems=_alwaysReserveSpaceForStatusItems;
@property long long titleAndSubTitleLeftEdgeSpacing; // @synthesize titleAndSubTitleLeftEdgeSpacing=_titleAndSubTitleLeftEdgeSpacing;
@property int subtitleLayout; // @synthesize subtitleLayout=_subtitleLayout;
@property int emphasizeMarkerStyle; // @synthesize emphasizeMarkerStyle=_emphasizeMarkerStyle;
@property BOOL drawsEmphasizeMarker; // @synthesize drawsEmphasizeMarker=_drawsEmphasizeMarker;
@property long long subtitleSpacing; // @synthesize subtitleSpacing=_subtitleSpacing;
@property(copy, nonatomic) NSFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(copy) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy) NSArray *statusCategoryNames; // @synthesize statusCategoryNames=_statusCategoryNames;
@property BOOL showsStatusItems; // @synthesize showsStatusItems=_showsStatusItems;
@property long long progressValue; // @synthesize progressValue=_progressValue;
@property unsigned long long progressIndicatorStyle; // @synthesize progressIndicatorStyle=_progressIndicatorStyle;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property double layoutHeight; // @synthesize layoutHeight=_layoutHeight;
@property long long leftEdgeSpacing; // @synthesize leftEdgeSpacing=_leftEdgeSpacing;
@property unsigned long long imageScaling; // @synthesize imageScaling=_imageScaling;
@property struct CGSize baseImageSize; // @synthesize baseImageSize=_baseImageSize;
@property(retain) NSImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawSubtitleWithCellFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawEmphasizeMarkerWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawStatusWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawProgressIndicatorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_setupProgressIndicatorInView:(id)arg1;
- (void)drawWithExpansionFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)subtitleAttributedStringValue;
- (void)invalidateAttributedStringValue;
- (void)setAttributedStringValue:(id)arg1;
- (id)attributedStringValue;
- (id)_attributedStringWithString:(id)arg1 font:(id)arg2 foregroundColor:(id)arg3;
- (struct CGSize)cellSize;
- (struct CGRect)statusRectForBounds:(struct CGRect)arg1;
- (id)statusCellsRectsForBounds:(struct CGRect)arg1;
- (struct CGRect)_statusCellsRectsForBounds:(struct CGRect)arg1 rects:(id)arg2;
- (struct CGRect)progressIndicatorRectForBounds:(struct CGRect)arg1;
- (struct CGRect)subtitleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)subtitleBoundingRectWithSize:(struct CGSize)arg1 options:(long long)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGRect)fullLineTitleRectForBounds:(struct CGRect)arg1;
- (struct CGSize)_attributedStringValueSize;
- (struct CGRect)imageRectForBounds:(struct CGRect)arg1;
- (struct CGSize)_imageSizeForLayoutFrame:(struct CGRect)arg1;
- (struct CGSize)_scaledImageSize:(struct CGSize)arg1 forTargetHeight:(double)arg2;
- (struct CGRect)expansionFrameWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)_textFrameForSelectingOrEditingWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)_layoutFrameForCellFrame:(struct CGRect)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (BOOL)_checkStatusCellHitForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 withAction:(CDUnknownBlockType)arg4;
- (void)selectWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 start:(long long)arg5 length:(long long)arg6;
- (void)editWithFrame:(struct CGRect)arg1 inView:(id)arg2 editor:(id)arg3 delegate:(id)arg4 event:(id)arg5;
- (void)setBackgroundStyle:(long long)arg1;
- (id)statusItemCellsForCategory:(id)arg1;
- (void)setStatusItemCells:(id)arg1 forCategory:(id)arg2;
- (id)_statusCellsByCategoryName;
- (id)titleDropShadow;
- (void)setProgress:(id)arg1;
- (void)updateBoundTitle;
@property(copy) NSString *title; // @dynamic title;
- (void)setHighlighted:(BOOL)arg1;
@property(readonly, copy, nonatomic) NSColor *subtitleTextColor;
@property(readonly, copy) NSColor *titleTextColor;
- (BOOL)_controlViewHasFocusOrIsSourceList;
- (id)ancestorTableView;
- (void)setFont:(id)arg1;
- (id)dvtExtraBindings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initImageCell:(id)arg1;
- (id)initTextCell:(id)arg1;
- (id)init;
- (void)_dvt_commonInit;

@end

