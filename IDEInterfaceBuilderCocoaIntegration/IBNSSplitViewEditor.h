//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaIntegration/IBNSViewEditor.h>

@interface IBNSSplitViewEditor : IBNSViewEditor
{
}

+ (struct CGRect)rectForDefaultCursorForChildView:(id)arg1 ofEditedObject:(id)arg2 inFrameController:(id)arg3;
+ (Class)ibDropTargetResolverClass;
- (BOOL)interceptEvent:(id)arg1;
- (void)tryToDragSubviewsWithLeftMouseDown:(id)arg1 andLeftMouseDragged:(id)arg2;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (id)editedSplitView;

@end

