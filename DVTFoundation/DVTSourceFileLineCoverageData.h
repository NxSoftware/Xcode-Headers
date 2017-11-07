//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DVTFoundation/NSCoding-Protocol.h>

@class NSArray;

@interface DVTSourceFileLineCoverageData : NSObject <NSCoding>
{
    BOOL _executable;
    int _executionCount;
    NSArray *_subRanges;
}

@property(readonly, nonatomic) NSArray *subRanges; // @synthesize subRanges=_subRanges;
@property(readonly, nonatomic, getter=isExecutable) BOOL executable; // @synthesize executable=_executable;
@property(readonly, nonatomic) int executionCount; // @synthesize executionCount=_executionCount;
- (void).cxx_destruct;
- (id)description;
- (void)updateWithExecutionCount:(int)arg1 executable:(BOOL)arg2 subRanges:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExecutionCount:(int)arg1 executable:(BOOL)arg2 subRanges:(id)arg3;

@end

