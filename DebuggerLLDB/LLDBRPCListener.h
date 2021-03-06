//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBListener-Protocol.h>

@class NSString;

@interface LLDBRPCListener : NSObject <DBGSBListener>
{
    struct SBListener {
        struct shared_ptr<rpc::ObjectRef> m_object_ref_sp;
    } _listener;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSBListener:(const struct SBListener *)arg1;
- (_Bool)GetNextEvent:(id)arg1;
- (_Bool)WaitForEvent:(unsigned int)arg1 event:(id)arg2;
- (unsigned int)StartListeningForEvents:(id)arg1 event_mask:(unsigned int)arg2;
- (unsigned int)StartListeningForEventClass:(id)arg1 broadcaster_class:(const char *)arg2 event_mask:(unsigned int)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

