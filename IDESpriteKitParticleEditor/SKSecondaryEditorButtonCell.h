//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSGradient;

@interface SKSecondaryEditorButtonCell : NSButtonCell
{
    int _buttonStyle;
    NSGradient *_normalGradient;
    NSGradient *_pressedGradient;
    NSGradient *_selectedGradient;
    NSGradient *_disabledGradient;
}

@property(retain, nonatomic) NSGradient *disabledGradient; // @synthesize disabledGradient=_disabledGradient;
@property(retain, nonatomic) NSGradient *selectedGradient; // @synthesize selectedGradient=_selectedGradient;
@property(retain, nonatomic) NSGradient *pressedGradient; // @synthesize pressedGradient=_pressedGradient;
@property(retain, nonatomic) NSGradient *normalGradient; // @synthesize normalGradient=_normalGradient;
@property(nonatomic) int buttonStyle; // @synthesize buttonStyle=_buttonStyle;
- (void).cxx_destruct;
- (void)_drawRect:(struct CGRect)arg1;
- (struct CGRect)drawTitle:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawImage:(id)arg1 withFrame:(struct CGRect)arg2 inView:(id)arg3;
- (void)drawBezelWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawImages:(struct CGRect)arg1;
- (void)_drawTitle:(struct CGRect)arg1;
- (void)_drawBackground:(struct CGRect)arg1;
- (id)initTextCell:(id)arg1;

@end

