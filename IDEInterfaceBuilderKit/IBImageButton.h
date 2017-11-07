//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <IDEInterfaceBuilderKit/IBMouseMovedObservingView-Protocol.h>

@class NSArray, NSColor, NSCursor, NSEvent, NSMutableDictionary;
@protocol IBImageButtonDelegate;

@interface IBImageButton : NSView <IBMouseMovedObservingView>
{
    NSMutableDictionary *_images;
    NSMutableDictionary *_backgroundImages;
    NSMutableDictionary *_imageOpacities;
    NSMutableDictionary *_backgroundImageOpacities;
    NSArray *_buttonsToShareRolloverWith;
    BOOL _continuous;
    BOOL _togglesSelectionOnClick;
    long long _tag;
    id <IBImageButtonDelegate> _delegate;
    id _target;
    SEL _action;
    SEL _dragAction;
    unsigned long long _state;
    double _actionRepeatRate;
    id _representedObject;
    NSEvent *_trackedEvent;
    NSCursor *_cursor;
    unsigned long long _imageLayoutMode;
    NSColor *_fillColor;
    CDStruct_c519178c _hitTestInset;
}

+ (id)makeButtonsStartSharingRolloverState:(id)arg1;
+ (id)revealContentButton;
@property(retain, nonatomic) NSColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) CDStruct_c519178c hitTestInset; // @synthesize hitTestInset=_hitTestInset;
@property(nonatomic) unsigned long long imageLayoutMode; // @synthesize imageLayoutMode=_imageLayoutMode;
@property(retain, nonatomic) NSCursor *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSEvent *trackedEvent; // @synthesize trackedEvent=_trackedEvent;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) BOOL togglesSelectionOnClick; // @synthesize togglesSelectionOnClick=_togglesSelectionOnClick;
@property(nonatomic) double actionRepeatRate; // @synthesize actionRepeatRate=_actionRepeatRate;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) BOOL continuous; // @synthesize continuous=_continuous;
@property(nonatomic) SEL dragAction; // @synthesize dragAction=_dragAction;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) __weak id <IBImageButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawImage:(id)arg1 withOpacity:(double)arg2;
- (struct CGSize)intrinsicContentSize;
- (id)accessibilityValue;
- (id)accessibilityRole;
- (BOOL)isAccessibilityEnabled;
- (BOOL)isAccessibilityElement;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)observeMouseMoved:(struct CGPoint)arg1 buttonState:(unsigned long long)arg2;
- (void)mouseDown:(id)arg1;
- (void)beginTrackingClickWithMouseDown:(id)arg1 validMouseUpArea:(struct CGRect)arg2;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)resetCursorRects;
- (id)hitTest:(struct CGPoint)arg1;
- (struct CGRect)hitTestVisibleRect;
- (struct CGRect)hitTestBounds;
@property(nonatomic, getter=isEnabled) BOOL enabled;
- (void)setTarget:(id)arg1 andAction:(SEL)arg2;
- (id)backgroundImageOpacityForState:(unsigned long long)arg1;
- (void)setBackgroundImageOpacity:(id)arg1 forState:(unsigned long long)arg2;
- (id)effectiveBackgroundImageOpacityForState:(unsigned long long)arg1;
- (id)imageOpacityForState:(unsigned long long)arg1;
- (void)setImageOpacity:(id)arg1 forState:(unsigned long long)arg2;
- (id)effectiveImageOpacityForState:(unsigned long long)arg1;
- (id)backgroundImageForState:(unsigned long long)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)effectiveBackgroundImageForState:(unsigned long long)arg1;
- (id)imageForState:(unsigned long long)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (id)effectiveImageForState:(unsigned long long)arg1;
@property(nonatomic, getter=isSelected) BOOL selected;
- (BOOL)isDisabled;
- (void)setDisabled:(BOOL)arg1;
@property(nonatomic, getter=isRolledOver) BOOL rolledOver;
@property(nonatomic, getter=isHighlighted) BOOL highlighted;
- (id)initWithFrame:(struct CGRect)arg1;

@end

