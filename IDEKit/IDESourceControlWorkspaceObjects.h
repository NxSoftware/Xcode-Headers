//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IDESourceControlWorkspaceObjects : NSObject
{
    NSArray *_childItems;
    NSString *_name;
}

@property(readonly, copy) NSArray *childItems; // @synthesize childItems=_childItems;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)navigableItem_name;
- (id)initWithName:(id)arg1 childItems:(id)arg2;

@end

