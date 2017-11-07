//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBThreadCollection-Protocol.h>

@class NSString;

@interface LLDBRPCThreadCollection : NSObject <DBGSBThreadCollection>
{
    struct SBThreadCollection {
        struct shared_ptr<rpc::ObjectRef> m_object_ref_sp;
    } _threadCollection;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)GetSize;
- (id)initWithSBThreadCollection:(const struct SBThreadCollection *)arg1;
- (id)GetThreadAtIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

