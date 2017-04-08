//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBGSBProcess.h"

@class NSString;

@interface LLDBRPCProcess : NSObject <DBGSBProcess>
{
    struct SBProcess {
        struct shared_ptr<rpc::ObjectRef> m_object_ref_sp;
    } _process;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)StateIsStoppedState;
- (const char *)GetExitDescription;
- (int)GetExitStatus;
- (unsigned long long)GetAsyncProfileData:(char *)arg1 dst_len:(unsigned long long)arg2;
- (unsigned long long)GetSTDERR:(char *)arg1 dst_len:(unsigned long long)arg2;
- (unsigned long long)GetSTDOUT:(char *)arg1 dst_len:(unsigned long long)arg2;
- (_Bool)SetSelectedThreadByIndexID:(unsigned int)arg1;
- (void)SendAsyncInterrupt;
- (unsigned int)GetAddressByteSize;
- (_Bool)IsInstrumentationRuntimePresent:(int)arg1;
- (unsigned int)GetNumQueues;
- (unsigned int)GetNumThreads;
- (int)GetState;
- (unsigned long long)GetProcessID;
- (_Bool)IsValid;
- (id)initWithSBProcess:(const struct SBProcess *)arg1;
- (const char *)GetPluginName;
- (id)GetBroadcaster;
- (id)GetHistoryThreads:(unsigned long long)arg1;
- (id)GetQueueAtIndex:(unsigned long long)arg1;
- (_Bool)SetSelectedThread:(id)arg1;
- (id)GetSelectedThread;
- (id)GetThreadAtIndex:(unsigned long long)arg1;
- (id)Kill;
- (id)Detach;
- (unsigned int)LoadImage:(id)arg1 error:(id)arg2;
- (id)SendEventData:(const char *)arg1;
- (id)Stop;
- (id)Continue;
- (unsigned long long)ReadMemory:(unsigned long long)arg1 buf:(void *)arg2 size:(unsigned long long)arg3 error:(id)arg4;
- (id)GetTarget;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

