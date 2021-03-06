//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DebuggerUI/DBGDebugNavigableItem.h>

@class DBGViewDebuggerAdditionUIController, NSArray, NSImage, NSString;

@interface DBGViewSurfaceNavigableItem : DBGDebugNavigableItem
{
    NSArray *_cachedChildRepresentedObjects;
    DBGViewDebuggerAdditionUIController *_cachedViewDebuggingUIController;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)viewDebuggingUIController;
- (id)childRepresentedObjects;
- (void)recursivelyInvalidateChildItems;
- (void)invalidateChildItems;
- (BOOL)isLeaf;
@property(readonly, nonatomic) NSString *statusToolTip;
@property(readonly, nonatomic) NSImage *statusIcon;
- (void)setExpanded:(BOOL)arg1;
- (id)viewObject;
- (id)initWithRepresentedObject:(id)arg1;

@end

