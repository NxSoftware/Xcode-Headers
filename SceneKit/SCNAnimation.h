//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimation-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, SCNTimingFunction;

@interface SCNAnimation : NSObject <SCNAnimation, NSCopying, NSSecureCoding>
{
    struct __C3DAnimation *_animationRef;
    NSString *_keyPath;
    double _duration;
    double _repeatCount;
    double _timeOffset;
    double _beginTime;
    BOOL _autoreverses;
    BOOL _removedOnCompletion;
    BOOL _applyOnCompletion;
    BOOL _additive;
    BOOL _cumulative;
    BOOL _usesSceneTimeBase;
    BOOL _fillForward;
    BOOL _fillBackward;
    SCNTimingFunction *_timingFunction;
    NSArray *_animationEvents;
    double _fadeInDuration;
    double _fadeOutDuration;
    CDUnknownBlockType _animationDidStart;
    CDUnknownBlockType _animationDidStop;
    NSMutableDictionary *_userInfo;
    id _caAnimationCache;
    id _userAnimation;
    BOOL _didMutate;
}

+ (id)animationWithCAAnimation:(id)arg1;
+ (id)animationWithContentsOfURL:(id)arg1;
+ (id)animationFromScene:(id)arg1;
+ (id)animationNamed:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)animationWithC3DAnimation:(struct __C3DAnimation *)arg1;
@property(readonly, copy) NSString *description;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
@property(nonatomic, getter=isCumulative) BOOL cumulative;
@property(nonatomic, getter=isAdditive) BOOL additive;
@property(nonatomic) double blendOutDuration;
- (void)setFadeOutDuration:(double)arg1;
- (double)fadeOutDuration;
@property(nonatomic) double blendInDuration;
- (double)fadeInDuration;
- (void)setFadeInDuration:(double)arg1;
@property(copy, nonatomic) NSArray *animationEvents;
@property(copy, nonatomic) CDUnknownBlockType animationDidStop;
@property(copy, nonatomic) CDUnknownBlockType animationDidStart;
@property(nonatomic, getter=isAppliedOnCompletion) BOOL appliedOnCompletion;
@property(nonatomic, getter=isRemovedOnCompletion) BOOL removedOnCompletion;
@property(retain, nonatomic) SCNTimingFunction *timingFunction;
@property(nonatomic) BOOL fillsBackward;
@property(nonatomic) BOOL fillsForward;
@property(nonatomic) BOOL usesSceneTimeBase;
@property(nonatomic) BOOL autoreverses;
@property(nonatomic) double startDelay;
@property(nonatomic) double timeOffset;
- (void)setRepeatDuration:(double)arg1;
- (double)repeatDuration;
@property(nonatomic) double repeatCount;
@property(nonatomic) double duration;
- (void)_didMutate;
@property(copy, nonatomic) NSString *keyPath;
- (const void *)__CFObject;
- (id)caAnimation;
- (id)userAnimation;
- (void)prepareWithTarget:(id)arg1 implicitDuration:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_syncObjCModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct __C3DAnimation *)animationRef;
- (void)_setAnimationRef:(struct __C3DAnimation *)arg1;
- (id)initWithCAAnimation:(id)arg1;
- (id)initWithC3DAnimation:(struct __C3DAnimation *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

