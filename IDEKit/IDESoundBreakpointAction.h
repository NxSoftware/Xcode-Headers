//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEBreakpointAction.h>

#import <IDEKit/NSSoundDelegate-Protocol.h>

@class NSSound, NSString;

@interface IDESoundBreakpointAction : IDEBreakpointAction <NSSoundDelegate>
{
    NSString *_soundName;
    NSSound *_currentSound;
}

+ (id)propertiesAffectingPersistenceState;
+ (void)signalSoundSemaphore;
+ (void)waitForSoundSemaphore;
+ (id)soundNames;
+ (void)initialize;
- (void).cxx_destruct;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (void)sound:(id)arg1 didFinishPlaying:(BOOL)arg2;
- (void)performActionUsingContext:(id)arg1 andBreakpoint:(id)arg2;
@property(copy) NSString *soundName; // @synthesize soundName=_soundName;
- (void)_soundActionCommonInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

