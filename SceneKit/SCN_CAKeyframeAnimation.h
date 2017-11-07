//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CAKeyframeAnimation.h>

__attribute__((visibility("hidden")))
@interface SCN_CAKeyframeAnimation : CAKeyframeAnimation
{
    struct __C3DKeyframedAnimation *_c3dAnimation;
    BOOL _caReady;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)cumulative;
- (BOOL)isCumulative;
- (void)setCumulative:(BOOL)arg1;
- (BOOL)additive;
- (BOOL)isAdditive;
- (void)setAdditive:(BOOL)arg1;
- (id)timingFunction;
- (void)setTimingFunction:(id)arg1;
- (id)animationEvents;
- (void)setAnimationEvents:(id)arg1;
- (id)fillMode;
- (void)setFillMode:(id)arg1;
- (BOOL)usesSceneTimeBase;
- (void)setUsesSceneTimeBase:(BOOL)arg1;
- (BOOL)commitsOnCompletion;
- (void)setCommitsOnCompletion:(BOOL)arg1;
- (BOOL)isRemovedOnCompletion;
- (void)setRemovedOnCompletion:(BOOL)arg1;
- (double)fadeOutDuration;
- (void)setFadeOutDuration:(double)arg1;
- (double)fadeInDuration;
- (void)setFadeInDuration:(double)arg1;
- (float)speed;
- (void)setSpeed:(float)arg1;
- (double)timeOffset;
- (void)setTimeOffset:(double)arg1;
- (BOOL)autoreverses;
- (void)setAutoreverses:(BOOL)arg1;
- (double)repeatDuration;
- (void)setRepeatDuration:(double)arg1;
- (float)repeatCount;
- (void)setRepeatCount:(float)arg1;
- (id)keyPath;
- (void)setKeyPath:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (void)setC3dAnimation:(struct __C3DKeyframedAnimation *)arg1;
- (struct __C3DKeyframedAnimation *)c3dAnimation;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setBiasValues:(id)arg1;
- (id)biasValues;
- (void)setContinuityValues:(id)arg1;
- (id)continuityValues;
- (void)setTensionValues:(id)arg1;
- (id)tensionValues;
- (void)setTimingFunctions:(id)arg1;
- (id)timingFunctions;
- (void)setKeyTimes:(id)arg1;
- (id)keyTimes;
- (void)setValues:(id)arg1;
- (id)values;
- (void)_clearC3DCache;
- (void)_convertToCA;
- (void)dealloc;

@end

