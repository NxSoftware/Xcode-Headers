//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDESceneKitEditor/NSObject-Protocol.h>

@class NSArray, NSEvent, SCNNode, SKEPasteboardItem, SKESceneView;

@protocol SKESceneViewDelegate <NSObject>
- (void)sceneViewDidRequestFocusOnSelectedNodes:(SKESceneView *)arg1;
- (void)sceneView:(SKESceneView *)arg1 didRequestDeletionOfNodes:(NSArray *)arg2;
- (void)sceneViewDidRequestDeselectionOfAllNodes:(SKESceneView *)arg1;
- (void)sceneViewDidBeginFreeBrowsing:(SKESceneView *)arg1;
- (void)sceneViewDidStopInteraction:(SKESceneView *)arg1;
- (void)sceneViewWillStartInteraction:(SKESceneView *)arg1 atPoint:(struct CGPoint)arg2;
- (BOOL)sceneView:(SKESceneView *)arg1 shouldAcceptDroppedExternalDocumentURLs:(NSArray *)arg2;
- (BOOL)sceneView:(SKESceneView *)arg1 shouldAcceptContentsOfDroppedPasteboardItem:(SKEPasteboardItem *)arg2;
- (BOOL)sceneView:(SKESceneView *)arg1 didDropPasteboardItem:(SKEPasteboardItem *)arg2 onNode:(SCNNode *)arg3 dropLocation:(struct SCNVector3)arg4;
- (BOOL)sceneView:(SKESceneView *)arg1 didDropSceneURLs:(NSArray *)arg2 onNode:(SCNNode *)arg3 dropLocation:(struct SCNVector3)arg4 wantsReferences:(BOOL)arg5;
- (BOOL)sceneView:(SKESceneView *)arg1 didDropContent:(id)arg2 onNode:(SCNNode *)arg3 geometryIndex:(long long)arg4;
- (void)sceneView:(SKESceneView *)arg1 didSelectNode:(SCNNode *)arg2 geometryIndex:(long long)arg3 event:(NSEvent *)arg4;
@end

