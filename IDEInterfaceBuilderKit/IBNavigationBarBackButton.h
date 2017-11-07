//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage, NSImageView, NSString, NSTextField;

@interface IBNavigationBarBackButton : NSView
{
    NSImageView *_imageView;
    NSTextField *_label;
    BOOL _isPressed;
    CDUnknownBlockType _clickHandler;
    NSImage *_backImage;
    NSImage *_pressedBackImage;
}

@property(readonly, nonatomic) NSImage *pressedBackImage; // @synthesize pressedBackImage=_pressedBackImage;
@property(readonly, nonatomic) NSImage *backImage; // @synthesize backImage=_backImage;
@property(copy, nonatomic) CDUnknownBlockType clickHandler; // @synthesize clickHandler=_clickHandler;
- (void).cxx_destruct;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_updateImageViewAndLabelForPressedState;
- (BOOL)wantsUpdateLayer;
- (id)pressedArrowImage;
- (id)backArrowImage;
- (id)_makeBackArrowImageWithFillColor:(id)arg1;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;

@end

