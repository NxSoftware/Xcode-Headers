//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBError-Protocol.h>

@class NSString;

@interface LLDBRPCError : NSObject <DBGSBError>
{
    struct SBError {
        unsigned int m_connection_id;
        unsigned int m_class_id;
        unsigned long long m_object_id;
    } _error;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)Success;
- (_Bool)Fail;
- (const char *)GetCString;
- (id)initWithSBError:(const struct SBError *)arg1;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

