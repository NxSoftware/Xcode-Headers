//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTLayoutView_ML.h"

@class IBAbstractStructureAreaDockLabelPopUp, IBStructureAreaDockLabelContainer, NSImage, NSString;

@interface IBStructureAreaDockItemView : DVTLayoutView_ML
{
    IBAbstractStructureAreaDockLabelPopUp *_labelPopUp;
    NSImage *_cachedPressedImageMask;
    BOOL _drawsWithActiveLook;
    BOOL _drawsSelected;
    BOOL _drawsHighlighted;
    BOOL _showingOpenIndicator;
    BOOL _shouldShowLabelPopUp;
    BOOL _drawsWithFlatStyle;
    BOOL _pressed;
    id _representedObject;
    NSString *_title;
    NSImage *_image;
    IBStructureAreaDockLabelContainer *_labelPopUpContainer;
    unsigned long long _labelArrowEdge;
    id <IBStructureAreaDockItemViewDelegate> _delegate;
    struct CGSize _imageSize;
}

+ (id)openIndicatorImageDrawnAsSelected:(BOOL)arg1;
+ (id)openIndicatorImage;
@property(nonatomic, getter=isPressed) BOOL pressed; // @synthesize pressed=_pressed;
@property(nonatomic) BOOL drawsWithFlatStyle; // @synthesize drawsWithFlatStyle=_drawsWithFlatStyle;
@property(nonatomic) __weak id <IBStructureAreaDockItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL shouldShowLabelPopUp; // @synthesize shouldShowLabelPopUp=_shouldShowLabelPopUp;
@property(nonatomic) unsigned long long labelArrowEdge; // @synthesize labelArrowEdge=_labelArrowEdge;
@property(nonatomic, getter=isShowingOpenIndicator) BOOL showingOpenIndicator; // @synthesize showingOpenIndicator=_showingOpenIndicator;
@property(nonatomic) BOOL drawsHighlighted; // @synthesize drawsHighlighted=_drawsHighlighted;
@property(nonatomic) BOOL drawsSelected; // @synthesize drawsSelected=_drawsSelected;
@property(retain) IBStructureAreaDockLabelContainer *labelPopUpContainer; // @synthesize labelPopUpContainer=_labelPopUpContainer;
@property(nonatomic) BOOL drawsWithActiveLook; // @synthesize drawsWithActiveLook=_drawsWithActiveLook;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain) id representedObject; // @synthesize representedObject=_representedObject;
- (void).cxx_destruct;
- (id)accessibilityRoleDescription;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRole;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (void)drawRect:(struct CGRect)arg1;
- (id)highlightPath;
- (struct CGPoint)startOfCurveCommingFromCorner:(struct CGPoint)arg1 goingAroundCorner:(struct CGPoint)arg2 withRadius:(double)arg3;
- (double)valueApproachingValue:(double)arg1 from:(double)arg2 distance:(double)arg3;
- (id)cachedPressedImageMask;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)trackMouse:(id)arg1;
- (id)labelPopUp;
- (void)layoutBottomUp;
- (struct CGPoint)labelPopOutPoint;
- (struct CGRect)openIndicatorRect;
- (struct CGSize)idealSize;
- (struct CGRect)selectionRect;
- (struct CGRect)imageRect;
- (double)imageHorizontalInset;
- (double)imageVerticalInset;
- (CDStruct_c519178c)imageInset;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;

@end

