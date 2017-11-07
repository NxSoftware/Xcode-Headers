//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTConfinementServiceConnection, NSString;

@interface DVTConfinementService : NSObject
{
    DVTConfinementServiceConnection *_debugserverServiceConnection;
    NSString *_controlPath;
}

+ (void)initialize;
@property(readonly, copy) NSString *controlPath; // @synthesize controlPath=_controlPath;
- (void).cxx_destruct;
- (BOOL)acceptConnection:(int *)arg1 onListeningSocket:(int)arg2 error:(id *)arg3;
- (BOOL)listenOnRandomPort:(unsigned short *)arg1 socket:(int *)arg2 error:(id *)arg3;
- (BOOL)startDebuggerService:(id)arg1 withPseudoTerminalMaster:(int)arg2 andSlavePath:(id)arg3 connectedSocket:(int *)arg4 error:(id *)arg5;
- (BOOL)synchronizeItemsFromLocalPaths:(id)arg1 toRemotePaths:(id)arg2 error:(id *)arg3;
- (id)initWithControlPath:(id)arg1;

@end

