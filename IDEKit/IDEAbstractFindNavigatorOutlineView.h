//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@class NSEvent;

@interface IDEAbstractFindNavigatorOutlineView : NSOutlineView
{
    NSEvent *_currentKeyDownEvent;
}

- (void).cxx_destruct;
- (void)doCommandBySelector:(SEL)arg1;
- (void)keyDown:(id)arg1;
- (id)makeViewWithIdentifier:(id)arg1 owner:(id)arg2;

@end

