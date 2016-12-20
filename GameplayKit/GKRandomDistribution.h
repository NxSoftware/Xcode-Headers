//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKRandom.h"

@interface GKRandomDistribution : NSObject <GKRandom>
{
    id <GKRandom> _source;
    long long _lowest;
    long long _highest;
}

+ (id)d20;
+ (id)d6;
+ (id)distributionForDieWithSideCount:(long long)arg1;
+ (id)distributionWithLowestValue:(long long)arg1 highestValue:(long long)arg2;
@property(readonly, nonatomic) long long highestValue; // @synthesize highestValue=_highest;
@property(readonly, nonatomic) long long lowestValue; // @synthesize lowestValue=_lowest;
- (void).cxx_destruct;
- (BOOL)nextBool;
- (float)nextUniform;
- (unsigned long long)nextIntWithUpperBound:(unsigned long long)arg1;
- (long long)nextInt;
@property(readonly, nonatomic) unsigned long long numberOfPossibleOutcomes;
- (id)initWithRandomSource:(id)arg1 lowestValue:(long long)arg2 highestValue:(long long)arg3;
- (id)init;

@end
