//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBMutableOrderedSet, IBNBitIntegerArray, NSArray, NSMutableDictionary;

@interface IBHitDetectionMap : NSObject
{
    NSMutableDictionary *_layeredRepresentedObjectRects;
    IBMutableOrderedSet *_representedObjects;
    NSArray *_indexedRepresentedObjects;
    long long _height;
    long long _width;
    IBNBitIntegerArray *_map;
    NSArray *_indexedRepresentedObjectRects;
    long long _count;
}

+ (id)alwaysOnTopKey;
+ (id)alwaysOnBottomKey;
+ (id)notARepresentedObjectKey;
- (void).cxx_destruct;
- (id)representedObjectAtPoint:(struct CGPoint)arg1;
- (void)indexObjects:(id)arg1 inRect:(struct CGRect)arg2;
- (void)overlayRepresentedObjectIndex:(long long)arg1 inRect:(struct CGRect)arg2;
- (void)addRepresentedObjectRect:(struct CGRect)arg1 representedObject:(id)arg2 forOrderingKey:(id)arg3 onLayer:(unsigned long long)arg4;
- (id)representedObjectRectsForLayer:(unsigned long long)arg1;
- (id)init;

@end

