//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameplayKit/GKObstacle.h>

@interface GKCircleObstacle : GKObstacle
{
    struct SphericalObstacle _obstacle;
}

+ (id)obstacleWithRadius:(float)arg1;
- (id).cxx_construct;
- (struct Obstacle *)obstacle;
// Error parsing type for property position:
// Property attributes: T,N

@property(nonatomic) float radius;
- (id)initWithRadius:(float)arg1;
- (id)init;

@end

