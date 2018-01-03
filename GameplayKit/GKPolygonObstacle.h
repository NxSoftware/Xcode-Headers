//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameplayKit/GKObstacle.h>

#import <GameplayKit/NSCoding-Protocol.h>

@interface GKPolygonObstacle : GKObstacle <NSCoding>
{
    struct GKCPolygonObstacle *_cPolygonObstacle;
}

+     // Error parsing type: @32@0:8^16Q24, name: obstacleWithPoints:count:
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct Obstacle *)obstacle;
@property(readonly, nonatomic) unsigned long long vertexCount;
-     // Error parsing type: 24@0:8Q16, name: vertexAtIndex:
- (void)dealloc;
-     // Error parsing type: @32@0:8^16Q24, name: initWithPoints:count:
- (id)init;
- (struct GKCPolygonObstacle *)cPolygonObstacle;
- (void)setCPolygonObstacle:(struct GKCPolygonObstacle *)arg1;

@end

