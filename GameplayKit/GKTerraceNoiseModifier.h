//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameplayKit/GKNoiseModifier.h>

@interface GKTerraceNoiseModifier : GKNoiseModifier
{
    double *_controlPoints;
    int _count;
    BOOL _inverted;
}

- (id)cloneModule;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (int)requiredInputModuleCount;
- (void)dealloc;
- (id)initWithPeakInputValues:(id)arg1 terracesInverted:(BOOL)arg2;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (id)init;

@end

