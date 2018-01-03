//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface GPUFilterTokenPredicate : NSObject
{
    int _globalOperator;
    NSArray *_tokens;
    NSString *_editingString;
    unsigned long long _predicateType;
    NSArray *_filterableObjectPredicateBlocks;
    NSObject<OS_dispatch_queue> *_filterableObjectPredicateBlocksQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *filterableObjectPredicateBlocksQueue; // @synthesize filterableObjectPredicateBlocksQueue=_filterableObjectPredicateBlocksQueue;
@property(readonly, nonatomic) NSArray *filterableObjectPredicateBlocks; // @synthesize filterableObjectPredicateBlocks=_filterableObjectPredicateBlocks;
@property(nonatomic) unsigned long long predicateType; // @synthesize predicateType=_predicateType;
@property(nonatomic) int globalOperator; // @synthesize globalOperator=_globalOperator;
@property(retain, nonatomic) NSString *editingString; // @synthesize editingString=_editingString;
@property(retain, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
- (void).cxx_destruct;
- (BOOL)isEqualTo:(id)arg1;
- (void)_addComparisonBlock:(CDUnknownBlockType)arg1;
- (BOOL)evaluateWithObject:(id)arg1;
- (BOOL)_evaluateOrCompoundWithObject:(id)arg1;
- (BOOL)_evaluateAndCompoundWithObject:(id)arg1;
- (id)copy;
- (id)_initWithPredicateBlocks:(id)arg1 andPredicateType:(unsigned long long)arg2;

@end

