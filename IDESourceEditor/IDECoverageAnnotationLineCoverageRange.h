//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexSet;

@interface IDECoverageAnnotationLineCoverageRange : NSObject
{
    long long _executionCount;
    NSIndexSet *_lineIndexes;
    unsigned long long _lineCoverageType;
}

@property unsigned long long lineCoverageType; // @synthesize lineCoverageType=_lineCoverageType;
@property(retain) NSIndexSet *lineIndexes; // @synthesize lineIndexes=_lineIndexes;
@property long long executionCount; // @synthesize executionCount=_executionCount;
- (void).cxx_destruct;
- (id)description;

@end

