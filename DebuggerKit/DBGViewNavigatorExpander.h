//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DBGViewNavigatorExpander : NSObject
{
    unsigned long long _maxDepth;
    unsigned long long _minExpandedCount;
    unsigned long long _maxExpandedCount;
    unsigned long long _expandedCount;
    long long _depth;
}

@property long long depth; // @synthesize depth=_depth;
@property unsigned long long expandedCount; // @synthesize expandedCount=_expandedCount;
@property unsigned long long maxExpandedCount; // @synthesize maxExpandedCount=_maxExpandedCount;
@property unsigned long long minExpandedCount; // @synthesize minExpandedCount=_minExpandedCount;
@property unsigned long long maxDepth; // @synthesize maxDepth=_maxDepth;
- (BOOL)shouldRepresentedObject:(id)arg1 expandAtDepth:(long long)arg2;
- (void)decreaseDepth;
- (void)increaseDepth;
- (BOOL)shouldExpandRepresentedObject:(id)arg1;

@end

