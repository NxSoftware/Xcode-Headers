//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSView, SCNView;

__attribute__((visibility("hidden")))
@interface SCNMonitor : NSWindowController
{
    BOOL _nibLoaded;
    NSView *_modelViewContainer;
    NSView *_modelInspectors[10];
    SCNView *_scnView;
}

- (void).cxx_destruct;
- (void)launchMonitor:(id)arg1;
- (void)setSCNView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)sceneDidChange;
- (void)_updateResourceManager;
- (struct __C3DScene *)scene;
- (void)modelTypeChanged:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (void)showModelInspector:(int)arg1;

@end

