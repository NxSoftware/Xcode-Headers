//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBGSBFileSpecList.h"

@class NSString;

@interface LLDBFileSpecList : NSObject <DBGSBFileSpecList>
{
    struct SBFileSpecList {
        struct unique_ptr<lldb_private::FileSpecList, std::__1::default_delete<lldb_private::FileSpecList>> m_opaque_ap;
    } _fileSpecList;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSBFileSpecList:(const struct SBFileSpecList *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

