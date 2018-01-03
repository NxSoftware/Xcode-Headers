//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBBreakpoint-Protocol.h>

@class NSString;

@interface LLDBBreakpoint : NSObject <DBGSBBreakpoint>
{
    struct SBBreakpoint {
        struct shared_ptr<lldb_private::Breakpoint> m_opaque_sp;
    } _breakpoint;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)SetCallbackToNull;
- (unsigned long long)GetNumLocations;
- (_Bool)IsEnabled;
- (void)SetEnabled:(_Bool)arg1;
- (void)SetCondition:(const char *)arg1;
- (void)SetIgnoreCount:(unsigned int)arg1;
- (unsigned int)GetHitCount;
- (int)GetID;
- (_Bool)IsValid;
- (id)initWithSBBreakpoint:(const struct SBBreakpoint *)arg1;
- (void)SetCallbackWithBaton:(void *)arg1;
- (id)GetLocationAtIndex:(unsigned int)arg1;
- (id)FindLocationByID:(int)arg1;
- (_Bool)GetDescription:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

