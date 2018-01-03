//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNView.h>

#import <IDESceneKitEditor/SCNCameraNavigationControllerDelegate-Protocol.h>
#import <IDESceneKitEditor/SCNSceneRendererDelegate-Protocol.h>

@class NSString, SCNNode;
@protocol SKESceneViewDelegate;

@interface SKESceneView : SCNView <SCNSceneRendererDelegate, SCNCameraNavigationControllerDelegate>
{
    BOOL _mouseDragged;
    BOOL _editable;
    long long _mouseClickCount;
    struct CGPoint _mouseClickLocation;
    struct CATransform3D _originalTransform;
    id <SKESceneViewDelegate> _selectionDelegate;
}

@property __weak id <SKESceneViewDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
- (void).cxx_destruct;
- (void)switchToNextCamera;
- (void)didChangePointOfView;
- (void)willChangePointOfView;
@property(nonatomic, getter=isMultisamplingEnabled) BOOL multisamplingEnabled;
- (id)menuForEvent:(id)arg1;
- (void)focusNodes:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (void)deselectSelection;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)deleteSelection;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)keyDown:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
@property __weak SCNNode *cameraNode;
@property(nonatomic, getter=isEditable) BOOL editable;
- (BOOL)_isEditor;
- (id)makeBackingLayer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

