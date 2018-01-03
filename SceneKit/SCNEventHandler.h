//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SCNNode, SCNView;

@interface SCNEventHandler : NSObject
{
    SCNView *_view;
    struct __IOHIDManager *_hidManager;
    NSMutableArray *_controllers;
    BOOL _enableFreeCamera;
    BOOL _autoSwitchToFreeCamera;
}

- (void)activateFreeCamera;
@property BOOL autoSwitchToFreeCamera;
@property BOOL enableFreeCamera;
@property(readonly) SCNNode *freeCamera;
- (BOOL)wantsRedraw;
- (void)viewDidDrawAtTime:(double)arg1;
- (void)viewWillDrawAtTime:(double)arg1;
- (void)cameraDidChange;
- (void)sceneDidChange;
- (void)cameraWillChange;
- (void)sceneWillChange;
- (BOOL)magnifyWithEvent:(id)arg1;
- (BOOL)rotateWithEvent:(id)arg1;
- (BOOL)mouseUp:(id)arg1;
- (BOOL)mouseDragged:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
- (BOOL)scrollWheel:(id)arg1;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)setView:(id)arg1;
@property(readonly) SCNView *view;
- (void)dealloc;
- (id)init;

@end

