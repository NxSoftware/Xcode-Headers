//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBGDebugHierarchyViewObjectAdaptor : NSObject
{
}

+ (BOOL)_shouldIncludeWindowWithNodeForExternalUsersDespiteBeingInternal:(id)arg1;
+ (BOOL)_shouldSkipWindowWithNode:(id)arg1;
+ (void)_addChildWindowsOfWindowNode:(id)arg1 toArray:(id)arg2;
+ (id)updateViewObjectHierarchyWithApplication:(id)arg1 withDebugHierarchySnapshot:(id)arg2 viewDescriber:(id)arg3 forRequest:(id)arg4;

@end

