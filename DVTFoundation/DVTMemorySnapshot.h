//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTDispatchLock, DVTLogAspect, NSCountedSet;

@interface DVTMemorySnapshot : NSObject
{
    DVTLogAspect *_aspect;
    NSCountedSet *_incrementsForSnapshotTypes;
    DVTDispatchLock *_incrementLock;
}

+ (id)_baseOutputFolder;
+ (id)snapshotForLogAspect:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)takeVmmapSnapshotWithLogLevel:(unsigned long long)arg1 logFormat:(id)arg2;
- (void)_takeVmmapSnapshotWithLogLevel:(unsigned long long)arg1 toFilePath:(id)arg2 logString:(id)arg3;
- (unsigned long long)_newIncrementForSnapshotType:(id)arg1;
- (id)initWithAspect:(id)arg1;

@end

