//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_group, XRFrameActivityManager;

@interface XRFrameActivity : NSObject
{
    id <XRFrameActivityManager> _manager;
    BOOL _yielded;
    NSString *_activityName;
    // Error parsing type: ^Ac, name: _shouldYield
    NSObject<OS_dispatch_group> *_group;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property(readonly, nonatomic, getter=didYield) BOOL yielded; // @synthesize yielded=_yielded;
// Error parsing type for property shouldYield:
// Property attributes: T^Ac,R,N,V_shouldYield

@property(retain, nonatomic) NSString *activityName; // @synthesize activityName=_activityName;
- (void).cxx_destruct;
- (void)yield;
- (id)init;
- (id)initWithManager:(id)arg1;

@end

