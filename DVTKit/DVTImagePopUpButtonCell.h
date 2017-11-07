//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPopUpButtonCell.h>

@class NSButtonCell, NSCell, NSImage, NSTimer;

@interface DVTImagePopUpButtonCell : NSPopUpButtonCell
{
    NSButtonCell *_buttonCell;
    NSImage *_iconImage;
    NSImage *_alternateIconImage;
    NSImage *_disabledIconImage;
    struct CGSize _iconSize;
    double _widthRatio;
    NSImage *_arrowImage;
    struct CGSize _originalArrowSize;
    NSTimer *_menuTimer;
    SEL _buttonCellAction;
    BOOL _showsMenuOnlyForMultipleItems;
    BOOL _immediatelyShowsMenu;
    BOOL _usedInToolbar;
    BOOL _timerFired;
    BOOL _buttonWantsMenuHidden;
}

@property(nonatomic) BOOL buttonWantsMenuHidden; // @synthesize buttonWantsMenuHidden=_buttonWantsMenuHidden;
@property(retain) NSCell *internalCell; // @synthesize internalCell=_buttonCell;
@property(copy, nonatomic) NSImage *arrowImage; // @synthesize arrowImage=_arrowImage;
@property struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) BOOL usedInToolbar; // @synthesize usedInToolbar=_usedInToolbar;
@property BOOL immediatelyShowsMenu; // @synthesize immediatelyShowsMenu=_immediatelyShowsMenu;
@property BOOL showsMenuOnlyForMultipleItems; // @synthesize showsMenuOnlyForMultipleItems=_showsMenuOnlyForMultipleItems;
- (void).cxx_destruct;
- (void)_showMenuTimerFired:(id)arg1;
- (BOOL)_showMenu:(id)arg1 fromTimer:(BOOL)arg2 inRect:(struct CGRect)arg3 ofView:(id)arg4 untilMouseUp:(BOOL)arg5;
- (BOOL)_shouldShowMenuImmediately:(id)arg1;
- (BOOL)_shouldShowMenu;
- (void)setControlSize:(unsigned long long)arg1;
@property(copy) NSImage *disabledIconImage;
@property(copy) NSImage *alternateIconImage;
@property(copy) NSImage *iconImage; // @synthesize iconImage=_iconImage;
- (void)highlight:(BOOL)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)setEnabled:(BOOL)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)performClick:(id)arg1;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (BOOL)_shouldDoRegularTracking;
- (unsigned long long)_numberItemsThreshold;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

