//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewEditor.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIStackViewDropTargetResolverDelegate-Protocol.h>

@interface IBUIStackViewEditor : IBUIViewEditor <IBUIStackViewDropTargetResolverDelegate>
{
}

+ (Class)ibDropTargetResolverClass;
- (id)acceptDragInfo:(id)arg1 context:(id)arg2;
- (void)dropTargetResolver:(id)arg1 insertionIndexDidChange:(long long)arg2;
- (void)dropTargetResolver:(id)arg1 insertionIndexWillChange:(long long)arg2;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (void)detachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (void)dragSelectedViewsWithMouseDown:(id)arg1 andMouseDragged:(id)arg2;
- (id)guideContextForDraggingInfo:(id)arg1;
- (id)installedChildViewsInRect:(struct CGRect)arg1;
- (id)editedStackView;

@end

