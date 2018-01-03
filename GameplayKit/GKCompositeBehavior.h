//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameplayKit/GKBehavior.h>

@class NSMutableArray;

@interface GKCompositeBehavior : GKBehavior
{
    NSMutableArray *_subBehaviors;
    NSMutableArray *_subBehaviorWeights;
}

+ (id)behaviorWithBehaviors:(id)arg1 andWeights:(id)arg2;
+ (id)behaviorWithBehaviors:(id)arg1;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)removeAllBehaviors;
- (void)removeBehavior:(id)arg1;
- (float)weightForBehavior:(id)arg1;
- (void)setWeight:(float)arg1 forBehavior:(id)arg2;
- (id)initWithBehaviors:(id)arg1 andWeights:(id)arg2;
- (id)initWithBehaviors:(id)arg1;
- (id)init;
@property(readonly) long long behaviorCount;
-     // Error parsing type: 32@0:8d16@24, name: getTotalForce:agent:

@end

