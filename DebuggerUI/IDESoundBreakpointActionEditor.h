//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class IDESoundBreakpointAction, NSPopUpButton;

@interface IDESoundBreakpointActionEditor : NSViewController
{
    IDESoundBreakpointAction *_action;
    NSPopUpButton *_soundsPopup;
}

- (void).cxx_destruct;
- (id)_soundImage;
- (void)soundSelected:(id)arg1;
- (void)loadView;
- (id)initWithAction:(id)arg1;
- (id)initWithAction:(id)arg1 breakpointLocation:(id)arg2;

@end

