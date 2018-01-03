//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SCNDisplayLink : NSObject
{
    unsigned int _displayID;
    struct __CVDisplayLink *_cvDisplayLink;
    struct _CGLContextObject *_cglContext;
    CDUnknownBlockType _block;
    CDUnknownBlockType _adaptativeFrameDuration;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _paused;
    BOOL _invalidated;
    double _lastFrameTime;
    float _preferredFrameRate;
    // Error parsing type: Ai, name: _queuedFrameCount
}

- (void)displayIDDidChange:(unsigned int)arg1;
- (BOOL)_isInvalidated;
- (void)setNeedsDisplay;
- (void)invalidate;
- (void)_cleanup;
- (void)setCGLContextObj:(struct _CGLContextObject *)arg1;
- (void)_callbackWithTime:(double)arg1;
- (int)queuedFrameCount;
@property(nonatomic) float preferredFrameRate;
@property(copy, nonatomic) CDUnknownBlockType adaptativeFrameRate;
- (BOOL)setPaused:(BOOL)arg1 nextFrameTimeHint:(double)arg2 lastUpdate:(double)arg3;
@property(nonatomic, getter=isPaused) BOOL paused;
- (void)dealloc;
- (id)initWithDisplayID:(unsigned int)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)init;

@end

