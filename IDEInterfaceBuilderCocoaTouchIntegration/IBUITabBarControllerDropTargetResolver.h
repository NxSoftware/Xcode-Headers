//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUIViewControllerDropTargetResolver.h>

@interface IBUITabBarControllerDropTargetResolver : IBUIViewControllerDropTargetResolver
{
}

- (id)chooseDestinationForDragInfo:(id)arg1;
- (BOOL)canAcceptDragInfo:(id)arg1;
- (BOOL)isDragInfoInTabBar:(id)arg1;
- (BOOL)isDragInfoForTabBar:(id)arg1;
- (struct CGRect)dragAlignmentRectForRelatedObject:(id)arg1;
- (struct CGRect)insertionPolicy:(id)arg1 confinementRectForRepresentedObject:(id)arg2;
- (void)populatePolicies:(id)arg1;

@end

