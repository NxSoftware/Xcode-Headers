//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBGSBSymbolContext.h"

@class NSString;

@interface LLDBSymbolContext : NSObject <DBGSBSymbolContext>
{
    struct SBSymbolContext {
        struct unique_ptr<lldb_private::SymbolContext, std::__1::default_delete<lldb_private::SymbolContext>> m_opaque_ap;
    } _symbolContext;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSBSymbolContext:(const struct SBSymbolContext *)arg1;
- (id)GetSymbol;
- (id)GetLineEntry;
- (id)GetModule;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

