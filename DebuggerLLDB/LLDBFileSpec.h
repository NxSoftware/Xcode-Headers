//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBFileSpec-Protocol.h>

@class NSString;

@interface LLDBFileSpec : NSObject <DBGSBFileSpec>
{
    struct SBFileSpec {
        struct unique_ptr<lldb_private::FileSpec, std::__1::default_delete<lldb_private::FileSpec>> m_opaque_ap;
    } _fileSpec;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (const char *)GetDirectory;
- (const char *)GetFilename;
- (unsigned int)GetPath:(char *)arg1 dst_len:(unsigned long long)arg2;
- (_Bool)Exists;
- (id)initWithSBFileSpec:(const struct SBFileSpec *)arg1;
- (id)initWithConnection:(id)arg1 path:(const char *)arg2 resolve:(_Bool)arg3;
- (id)initWithConnection:(id)arg1 path:(const char *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

