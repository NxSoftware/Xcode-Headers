//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <DVTKit/DVTWindowActivationStateObserver-Protocol.h>
#import <DVTKit/NSDraggingSource-Protocol.h>
#import <DVTKit/NSMenuDelegate-Protocol.h>

@class DVTMutableOrderedDictionary, DVTObservingToken, NSColor, NSMenu, NSString;
@protocol DVTCancellable;

@interface DVTAbstractColorPicker : NSView <DVTWindowActivationStateObserver, NSMenuDelegate, NSDraggingSource>
{
    NSMenu *_colorsMenu;
    id _colorValueBindingController;
    NSString *_colorValueBindingKeyPath;
    DVTObservingToken *_colorListBindingObservation;
    DVTObservingToken *_colorValueBindingObservation;
    DVTObservingToken *_supportsNilColorBindingObservation;
    id <DVTCancellable> _windowActivationObservation;
    BOOL _supportsNilColor;
    BOOL _showingMultipleValues;
    BOOL _enabled;
    BOOL _active;
    BOOL _highlighted;
    int _defaultColorMode;
    NSColor *_color;
    NSColor *_defaultColor;
    id _target;
    SEL _action;
    unsigned long long _controlSize;
    DVTMutableOrderedDictionary *_colorGroups;
}

@property(retain) DVTMutableOrderedDictionary *colorGroups; // @synthesize colorGroups=_colorGroups;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned long long controlSize; // @synthesize controlSize=_controlSize;
@property SEL action; // @synthesize action=_action;
@property __weak id target; // @synthesize target=_target;
@property(getter=isShowingMultipleValues) BOOL showingMultipleValues; // @synthesize showingMultipleValues=_showingMultipleValues;
@property BOOL supportsNilColor; // @synthesize supportsNilColor=_supportsNilColor;
@property(nonatomic) int defaultColorMode; // @synthesize defaultColorMode=_defaultColorMode;
@property(retain, nonatomic) NSColor *defaultColor; // @synthesize defaultColor=_defaultColor;
@property(retain, nonatomic) NSColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)unbind:(id)arg1;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)observedColorValueDidChangeToValue:(id)arg1;
- (void)displayColorPanel:(id)arg1;
- (void)takeDrawnColorFrom:(id)arg1;
- (void)takeDrawnColorFromPopUpMenu:(id)arg1;
- (void)sendAction;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)beginColorDragForEvent:(id)arg1;
- (id)imageForDraggedColor:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)colorPanelColorChanged:(id)arg1;
- (void)colorPanelWillClose:(id)arg1;
- (void)window:(id)arg1 didChangeActivationState:(long long)arg2;
- (void)colorPickerDidBecomeActive:(id)arg1;
- (void)colorChosenFromColorChooser:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)performClick:(id)arg1;
- (void)displayColorPanel;
- (BOOL)canBecomeKeyView;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)showColorsMenu;
- (double)minimumPopUpMenuWidth;
- (struct CGPoint)popUpMenuLocation;
- (id)effectiveSwatchFillColor;
- (void)putIntoMultipleValuesState;
- (void)populateColorsMenu;
- (double)swatchHeight;
- (id)swatchImageForColor:(id)arg1 withSize:(struct CGSize)arg2;
- (id)effectiveSwatchBorderColor;
- (id)effectiveTextColor;
- (BOOL)isShowingTitle;
- (BOOL)isShowingDefaultColor;
- (id)nameForPossiblyMissingColor;
@property(readonly, nonatomic, getter=isShowingMissingColor) BOOL showingMissingColor;
- (BOOL)isShowingNamedColor;
- (BOOL)supportsDefaultColor;
- (double)noColorStrokeWidth;
- (id)titleFont;
- (void)addColorGroupUsingColorList:(id)arg1;
- (void)addColorGroup:(id)arg1 forName:(id)arg2;
- (void)clearColorGroups;
- (id)nameForColor:(id)arg1;
- (BOOL)containsColor:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 colorGroup:(id)arg2 colorGroupName:(id)arg3 defaultColor:(id)arg4 defaultColorMode:(int)arg5;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

