//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DYAnalyzerSubfinding : NSObject
{
    BOOL _unsorted;
    int _funcIndex;
    NSString *_text;
}

@property(readonly, nonatomic) BOOL unsorted; // @synthesize unsorted=_unsorted;
@property(readonly, nonatomic) int funcIndex; // @synthesize funcIndex=_funcIndex;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithText:(id)arg1 andFunctionIndex:(int)arg2;
- (id)initWithText:(id)arg1 andFunctionIndex:(int)arg2 unsorted:(BOOL)arg3;

@end

