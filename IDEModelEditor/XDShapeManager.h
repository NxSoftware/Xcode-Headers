//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEModelEditor/XDComponentManager.h>

@interface XDShapeManager : XDComponentManager
{
}

+ (BOOL)sharedShapeManagerExists;
+ (id)sharedShapeManager;
+ (Class)_sharedShapeManagerClass;
+ (void)unregisterShape:(id)arg1;
+ (void)registerShape:(id)arg1;
+ (id)registeredShapes;
+ (void)initialize;
- (id)componentWithIdentifier:(id)arg1;

@end

