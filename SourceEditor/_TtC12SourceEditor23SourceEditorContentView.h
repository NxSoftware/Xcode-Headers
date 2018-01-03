//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <SourceEditor/CALayerDelegate-Protocol.h>

@class CALayer, NSResponder, NSString, _TtC12SourceEditor21SourceEditorLineLayer;

@interface _TtC12SourceEditor23SourceEditorContentView : NSView <CALayerDelegate>
{
    // Error parsing type: , name: contentLayer
    // Error parsing type: , name: underlayLayer
    // Error parsing type: , name: overlayLayer
    // Error parsing type: , name: visibleLineRange
    // Error parsing type: , name: layoutManager
    // Error parsing type: , name: fullBleedFrame
    // Error parsing type: , name: accessoryMargins
    // Error parsing type: , name: contentMargins
    // Error parsing type: , name: responderProxy
}

+ (BOOL)isCompatibleWithResponsiveScrolling;
+ (double)caretInsetBottom;
+ (double)caretInsetTop;
+ (double)caretWidth;
- (CDUnknownBlockType).cxx_destruct;
- (BOOL)becomeFirstResponder;
@property(nonatomic, readonly) BOOL acceptsFirstResponder;
@property(nonatomic) __weak NSResponder *responderProxy; // @synthesize responderProxy;
- (void)setNeedsLayout;
- (void)layoutIfNeeded;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)viewDidChangeBackingProperties;
- (BOOL)isFlipped;
- (void)prepareContentInRect:(struct CGRect)arg1;
@property(nonatomic, readonly) double layoutScale;
@property(nonatomic, readonly) struct NSEdgeInsets layoutMargins;
@property(nonatomic) struct NSEdgeInsets contentMargins; // @synthesize contentMargins;
@property(nonatomic) struct NSEdgeInsets accessoryMargins; // @synthesize accessoryMargins;
@property(nonatomic, readonly) struct CGRect documentRect;
@property(nonatomic, readonly) CALayer *overlayLayer; // @synthesize overlayLayer;
@property(nonatomic, readonly) CALayer *underlayLayer; // @synthesize underlayLayer;
@property(nonatomic, readonly) CALayer *contentLayer; // @synthesize contentLayer;
- (struct CGRect)accessibilityFrameForRange:(struct _NSRange)arg1;
- (id)accessibilityStringForRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityRangeForLine:(long long)arg1;
- (long long)accessibilityLineForIndex:(long long)arg1;
- (long long)accessibilityInsertionPointLineNumber;
- (void)setAccessibilityVisibleCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityVisibleCharacterRange;
- (long long)accessibilityNumberOfCharacters;
- (struct _NSRange)accessibilitySharedCharacterRange;
- (id)accessibilitySharedTextUIElements;
- (id)accessibilityAttributedStringForRange:(struct _NSRange)arg1;
- (void)setAccessibilitySelectedText:(id)arg1;
- (id)accessibilitySelectedText;
- (id)accessibilitySelectedTextRanges;
- (void)setAccessibilitySelectedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilitySelectedTextRange;
- (void)setAccessibilityValue:(id)arg1;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (BOOL)isAccessibilityElement;
- (struct CGRect)contentViewRectForLineLayer:(id)arg1;
- (double)distanceFromNearestVisibleLineToLineAtIndex:(long long)arg1;
@property(nonatomic, readonly) NSString *debugDescription;
@property(nonatomic, readonly) NSString *description;
- (id)lineLayerForVisibleLine:(long long)arg1;
- (id)closestLineLayerToPoint:(struct CGPoint)arg1;
- (id)lineLayersInRect:(struct CGRect)arg1;
- (id)lineLayerAtPoint:(struct CGPoint)arg1;
- (double)ensureLineVisible:(long long)arg1 maxHeight:(double)arg2;
- (double)adjustFirstVisibleLineForBounds:(struct CGRect)arg1;
- (void)updateAuxView:(id)arg1 with:(struct CGRect)arg2 floating:(BOOL)arg3;
- (void)addAuxView:(id)arg1 floating:(BOOL)arg2;
@property(nonatomic, readonly) _TtC12SourceEditor21SourceEditorLineLayer *lastVisibleLineLayer;
@property(nonatomic, readonly) _TtC12SourceEditor21SourceEditorLineLayer *firstVisibleLineLayer;
@property(nonatomic, readonly) struct NSEdgeInsets layoutBoundsVisibleInsets;
@property(nonatomic, readonly) struct CGRect fullBleedLayoutBounds;
@property(nonatomic, readonly) struct CGRect layoutBounds;

// Remaining properties
@property(nonatomic, readonly) BOOL flipped;

@end

