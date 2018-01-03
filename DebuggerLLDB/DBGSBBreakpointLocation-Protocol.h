//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBAddress, DBGSBBreakpoint;

@protocol DBGSBBreakpointLocation <NSObject>
- (id <DBGSBAddress>)GetAddress;
- (_Bool)IsEnabled;
- (void)SetEnabled:(_Bool)arg1;
- (void)SetIgnoreCount:(unsigned int)arg1;
- (unsigned int)GetIgnoreCount;
- (const char *)GetCondition;
- (void)SetCondition:(const char *)arg1;
- (id <DBGSBBreakpoint>)GetBreakpoint;
- (int)GetID;
@end

