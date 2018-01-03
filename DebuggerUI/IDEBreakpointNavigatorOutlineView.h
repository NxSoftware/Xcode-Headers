//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDENavigatorOutlineView.h>

@class IDEBreakpointNavigator, IDENavigableItem;

@interface IDEBreakpointNavigatorOutlineView : IDENavigatorOutlineView
{
    IDEBreakpointNavigator *_breakpointNavigator;
    IDENavigableItem *_itemRequestedToBeCollapsed;
    BOOL _isCollapsingAllChildren;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)mouseDown:(id)arg1;
- (BOOL)_didUserRequestItemBeCollapsed:(id)arg1;
- (void)collapseItem:(id)arg1 collapseChildren:(BOOL)arg2;
- (BOOL)_wantsUserCancelledOperation;
- (BOOL)_mouseOverNavigator;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 movedTo:(struct CGPoint)arg2;
- (void)dragImage:(id)arg1 at:(struct CGPoint)arg2 offset:(struct CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(BOOL)arg7;
- (void)_setBreakpointNavigator:(id)arg1;
- (BOOL)canDragRowsWithIndexes:(id)arg1 atPoint:(struct CGPoint)arg2;

@end

