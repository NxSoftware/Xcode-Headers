//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBInspectorReferencingConstraintView, NSEvent, NSView;

@protocol IBInspectorReferencingConstraintViewDelegate <NSObject>
- (void)constraintView:(IBInspectorReferencingConstraintView *)arg1 didInitiateEditWithSender:(NSView *)arg2;
- (void)constraintViewDidInitiateDelete:(IBInspectorReferencingConstraintView *)arg1;
- (void)constraintView:(IBInspectorReferencingConstraintView *)arg1 didHandleDoubleMouseUpWithEvent:(NSEvent *)arg2;
- (void)constraintView:(IBInspectorReferencingConstraintView *)arg1 didHandleSingleMouseUpWithEvent:(NSEvent *)arg2;
- (void)constraintViewWillChangeHighlighted:(IBInspectorReferencingConstraintView *)arg1;
@end

