//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/GKNoiseModule-Protocol.h>

@class NSMutableArray, NSString;

@interface GKNoiseModifier : NSObject <GKNoiseModule>
{
    NSMutableArray *_inputModules;
}

- (void).cxx_destruct;
- (id)cloneModule;
- (void)setInputModule:(id)arg1 atIndex:(int)arg2;
- (id)inputModuleAtIndex:(int)arg1;
- (double)valueAt: /* Error: Ran out of types for this method. */;
- (int)requiredInputModuleCount;
- (id)initWithInputModuleCount:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

