//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class DVTColorSwatchView, NSColor, NSTextField;

@interface DVTColorSwatchLabel : NSView
{
    NSColor *_color;
    DVTColorSwatchView *_colorSwatch;
    NSTextField *_labelTextField;
    NSTextField *_valueTextField;
}

@property(readonly) NSTextField *valueTextField; // @synthesize valueTextField=_valueTextField;
@property(readonly) NSTextField *labelTextField; // @synthesize labelTextField=_labelTextField;
@property(readonly) DVTColorSwatchView *colorSwatch; // @synthesize colorSwatch=_colorSwatch;
- (void).cxx_destruct;
- (id)_createColorSwatchImageView;
- (id)_createLabel:(id)arg1;
- (id)_createValueTextField;
- (id)_createLabelTextField;
- (void)_buildViewWithoutValueTextField;
- (void)_buildViewWithValueTextField;
- (id)initWithColor:(id)arg1 label:(id)arg2 value:(id)arg3 valueFormatter:(id)arg4;
- (id)initWithColor:(id)arg1 label:(id)arg2 value:(id)arg3;
- (id)initWithColor:(id)arg1 label:(id)arg2;

@end
