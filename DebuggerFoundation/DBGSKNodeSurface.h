//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerFoundation/DBGViewSurface.h>

@interface DBGSKNodeSurface : DBGViewSurface
{
    long long _depthFirstPositionInSceneGraph;
    double _zRotation;
    double _skZPosition;
    double _skZPositionGlobal;
    double _xScale;
    double _yScale;
    struct CGSize _untransformedSize;
    struct CGPoint _visualRepresentationOffset;
}

@property struct CGPoint visualRepresentationOffset; // @synthesize visualRepresentationOffset=_visualRepresentationOffset;
@property double yScale; // @synthesize yScale=_yScale;
@property double xScale; // @synthesize xScale=_xScale;
@property struct CGSize untransformedSize; // @synthesize untransformedSize=_untransformedSize;
@property double skZPositionGlobal; // @synthesize skZPositionGlobal=_skZPositionGlobal;
@property double skZPosition; // @synthesize skZPosition=_skZPosition;
@property double zRotation; // @synthesize zRotation=_zRotation;
@property long long depthFirstPositionInSceneGraph; // @synthesize depthFirstPositionInSceneGraph=_depthFirstPositionInSceneGraph;
- (long long)recursivelyUpdateDepthFirstPositionWithValue:(long long)arg1;
- (id)formattedDisplayName;
- (void)_updatePropertiesWithSnapshotNode:(id)arg1 forRequest:(id)arg2;

@end

