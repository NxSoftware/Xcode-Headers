//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBBroadcaster, DBGSBCommandReturnObject, DBGSBStringList;

@protocol DBGSBCommandInterpreter <NSObject>
- (int)HandleCommand:(const char *)arg1 result:(id <DBGSBCommandReturnObject>)arg2 add_to_history:(_Bool)arg3;
- (int)HandleCompletion:(const char *)arg1 cursor_pos:(unsigned int)arg2 match_start_point:(int)arg3 max_return_elements:(int)arg4 matches:(id <DBGSBStringList>)arg5;
- (id <DBGSBBroadcaster>)GetBroadcaster;
- (_Bool)SetCommandOverrideCallback:(const char *)arg1 callback:(CDUnknownFunctionPointerType)arg2 baton:(void *)arg3;
- (_Bool)IsActive;
@end

