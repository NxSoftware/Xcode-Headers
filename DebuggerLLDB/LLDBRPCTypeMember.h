//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBGSBTypeMember.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface LLDBRPCTypeMember : NSObject <DBGSBTypeMember>
{
    struct SBTypeMember {
        unsigned int m_connection_id;
        unsigned int m_class_id;
        unsigned long long m_object_id;
    } _typeMember;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSBTypeMember:(const struct SBTypeMember *)arg1;
- (id)GetType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
