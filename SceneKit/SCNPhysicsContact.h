//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNNode;

@interface SCNPhysicsContact : NSObject
{
    SCNNode *_nodeA;
    SCNNode *_nodeB;
    struct SCNVector3 _contactPoint;
    struct SCNVector3 _contactNormal;
    double _collisionImpulse;
    double _distance;
    double _fraction;
    long long _updateCount;
}

+ (id)_contactWithManifold:(const struct btPersistentManifold *)arg1 index:(long long)arg2;
- (BOOL)_shouldPostUpdate;
- (void)_prepareUpdate;
@property(readonly, nonatomic) double sweepTestFraction;
@property(readonly, nonatomic) double penetrationDistance;
@property(readonly, nonatomic) double collisionImpulse;
@property(readonly, nonatomic) struct SCNVector3 contactNormal;
@property(readonly, nonatomic) struct SCNVector3 contactPoint;
@property(readonly, nonatomic) SCNNode *nodeB;
@property(readonly, nonatomic) SCNNode *nodeA;
- (void)_setupWithManifold:(const struct btPersistentManifold *)arg1 index:(long long)arg2 point:(const struct btManifoldPoint *)arg3;
- (void)_fillNodeA:(id)arg1 nodeB:(id)arg2;
- (void)_fillNodeA:(id)arg1 nodeB:(id)arg2 contactPoint:(struct SCNVector3)arg3 collisionImpulse:(struct SCNVector3)arg4 distance:(double)arg5 hitFraction:(double)arg6;
- (id)description;
- (void)dealloc;

@end

