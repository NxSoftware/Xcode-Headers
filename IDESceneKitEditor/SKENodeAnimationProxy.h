//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCNNode;

@interface SKENodeAnimationProxy : NSObject
{
    float _originalRepeatCount;
    SCNNode *_node;
    NSString *_key;
}

+ (id)keyPathsForValuesAffectingRepeatNotInfinite;
+ (id)keyPathsForValuesAffectingcumulative_edit;
+ (id)keyPathsForValuesAffectingadditive_edit;
+ (id)keyPathsForValuesAffectingfillModeIndex_edit;
+ (id)keyPathsForValuesAffectingfadeOutDuration_edit;
+ (id)keyPathsForValuesAffectingfadeInDuration_edit;
+ (id)keyPathsForValuesAffectingautoreverses_edit;
+ (id)keyPathsForValuesAffectingspeed_edit;
+ (id)keyPathsForValuesAffectingrepeatCount_edit;
+ (id)keyPathsForValuesAffectingrepeatInfinite_edit;
+ (id)keyPathsForValuesAffectingduration_edit;
+ (id)keyPathsForValuesAffectingusesSceneTimeBase_edit;
@property(retain) NSString *key; // @synthesize key=_key;
@property(retain) SCNNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (id)ske_document;
@property BOOL cumulative;
@property BOOL additive;
@property __weak NSString *fillMode;
@property float fadeOutDuration;
@property float fadeInDuration;
@property BOOL autoreverses;
@property float speed;
@property float repeatCount;
@property(readonly) BOOL repeatNotInfinite;
@property BOOL repeatInfinite;
@property float duration;
@property BOOL usesSceneTimeBase;
- (void)setAnimation:(id)arg1;
- (id)animation;
@property long long fillModeIndex;
@property(readonly) BOOL hasFillMode;
@property(readonly) BOOL hasCumulative;
@property(readonly) BOOL hasAdditive;
- (id)initWithNode:(id)arg1 andKey:(id)arg2;
- (void)setcumulative_edit:(BOOL)arg1;
- (BOOL)cumulative_edit;
- (void)setadditive_edit:(BOOL)arg1;
- (BOOL)additive_edit;
- (void)setfillModeIndex_edit:(long long)arg1;
- (long long)fillModeIndex_edit;
- (void)setfadeOutDuration_edit:(float)arg1;
- (float)fadeOutDuration_edit;
- (void)setfadeInDuration_edit:(float)arg1;
- (float)fadeInDuration_edit;
- (void)setautoreverses_edit:(BOOL)arg1;
- (BOOL)autoreverses_edit;
- (void)setspeed_edit:(float)arg1;
- (float)speed_edit;
- (void)setrepeatCount_edit:(float)arg1;
- (float)repeatCount_edit;
- (void)setrepeatInfinite_edit:(BOOL)arg1;
- (BOOL)repeatInfinite_edit;
- (void)setduration_edit:(float)arg1;
- (float)duration_edit;
- (void)setusesSceneTimeBase_edit:(BOOL)arg1;
- (BOOL)usesSceneTimeBase_edit;

@end

