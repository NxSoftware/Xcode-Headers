//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Xcode3UI/Xcode3EditingGroup.h>

@interface Xcode3TargetEditingGroup : Xcode3EditingGroup
{
}

+ (id)keyPathsForValuesAffectingChildItems;
+ (id)keyPathsForValuesAffectingValue_project;
- (BOOL)acceptDrop:(id)arg1 atIndex:(long long)arg2;
- (BOOL)allowsDrop:(id)arg1 atIndex:(long long)arg2;
- (id)_projectForTargets:(id)arg1;
- (id)_draggedTargetsForDraggingInfo:(id)arg1;
- (id)childItems;
- (id)_project;
- (id)initWithName:(id)arg1 project:(id)arg2;
- (id)initWithName:(id)arg1 representedObject:(id)arg2;

@end

