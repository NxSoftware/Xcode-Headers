//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBBroadcaster <NSObject>
- (void)BroadcastEventByType:(unsigned int)arg1 unique:(_Bool)arg2;
- (id)initWithConnection:(id)arg1 name:(const char *)arg2;
- (_Bool)IsValid;
@end

