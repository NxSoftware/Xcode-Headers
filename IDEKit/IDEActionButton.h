//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTGradientImageButton.h>

@class NSPopUpButtonCell;

@interface IDEActionButton : DVTGradientImageButton
{
    NSPopUpButtonCell *_popUpCell;
    CDUnknownBlockType _menuProvider;
    struct CGSize _menuOffset;
}

@property struct CGSize menuOffset; // @synthesize menuOffset=_menuOffset;
- (void).cxx_destruct;
- (id)accessibilityRole;
- (BOOL)accessibilityPerformPress;
- (void)mouseDown:(id)arg1;
- (void)_showIssuesMenu:(id)arg1;
- (void)setCurrentMenuProvider:(CDUnknownBlockType)arg1;

@end

