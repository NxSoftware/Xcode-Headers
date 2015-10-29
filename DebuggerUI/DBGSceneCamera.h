//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCNNode.h"

@class SCNView;

@interface DBGSceneCamera : SCNNode
{
    SCNView *_sceneView;
    double _zoomFactor;
    id <DBGSceneCameraDelegate> _cameraDelegate;
    struct SCNVector3 _pivotPoint;
}

@property __weak id <DBGSceneCameraDelegate> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
@property struct SCNVector3 pivotPoint; // @synthesize pivotPoint=_pivotPoint;
- (void).cxx_destruct;
- (void)cameraDidZoom;
- (void)sceneViewDidChangeFrameSize;
- (void)zoomToFitRootViewFrame:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)zoomTo100Percent;
- (void)zoomOut;
- (void)zoomIn;
- (void)zoomWithValue:(double)arg1;
- (double)zoomDeltaForZoomValue:(double)arg1;
@property double zoomFactor; // @synthesize zoomFactor=_zoomFactor;
- (id)initInsideSceneView:(id)arg1;

@end

