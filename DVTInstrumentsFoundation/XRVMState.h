//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/NSCoding-Protocol.h>

@class NSMutableArray;

@interface XRVMState : NSObject <NSCoding>
{
    unsigned long long _machAbsolute;
    unsigned long long _traceRelative;
    NSMutableArray *_regions;
    unsigned long long _residentSize;
    unsigned long long _swapSize;
    unsigned long long _dirtySize;
    unsigned long long _totalSize;
    unsigned long long _sharedRegionStart;
    unsigned long long _sharedRegionLength;
    struct __CFDictionary *_pageAnnotationsByRegion;
    unsigned int _task;
}

+ (id)currentStateForTask:(unsigned int)arg1 pid:(int)arg2 previousState:(id)arg3 dehydratedDiffVersion:(BOOL)arg4;
+ (void)initialize;
- (void).cxx_destruct;
- (id)summaryRegionsWithOptions:(int)arg1;
- (id)regionsWithOptions:(int)arg1;
- (void)_annotateRange:(struct _CSRange)arg1 withPath:(id)arg2 type:(id)arg3;
- (id)_annotationForRegion:(id)arg1;
- (void)_addRegion:(id)arg1 annotation:(id)arg2 new:(BOOL)arg3;
- (unsigned long long)traceRelativeTimestamp;
- (unsigned long long)machAbsoluteTimestamp;
- (id)regions;
- (unsigned long long)swappedSize;
- (unsigned long long)dirtySize;
- (unsigned long long)residentSize;
- (unsigned long long)virtualSize;
- (id)regionForAddress:(unsigned long long)arg1;
- (void)hydrateWithPreviousState:(id)arg1;
- (id)detailsForRegion:(id)arg1;
- (void)_recalculateSizes;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

