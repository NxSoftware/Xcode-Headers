//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBSymbol-Protocol.h>

@class NSString;

@interface LLDBSymbol : NSObject <DBGSBSymbol>
{
    struct SBSymbol {
        struct Symbol *m_opaque_ptr;
    } _symbol;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (const char *)GetName;
- (_Bool)IsValid;
- (id)initWithSBSymbol:(const struct SBSymbol *)arg1;
- (id)GetStartAddress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

