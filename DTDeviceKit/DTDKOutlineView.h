//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@interface DTDKOutlineView : NSOutlineView
{
    unsigned int _delegateImplements_deleteItems:1;
    unsigned int _delegateImplements_contextMenu:1;
    unsigned int _reserved2:28;
}

- (void)keyDown:(id)arg1;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint)arg2;
- (id)menuForEvent:(id)arg1;
- (void)setDelegate:(id)arg1;

@end

