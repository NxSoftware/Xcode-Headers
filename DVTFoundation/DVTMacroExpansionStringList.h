//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <DVTFoundation/DVTMacroExpansion-Protocol.h>

@class NSString;
@protocol DVTMacroExpansion;

@interface DVTMacroExpansionStringList : NSArray <DVTMacroExpansion>
{
    NSString<DVTMacroExpansion> *_stringForm;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (id)dvt_debugDescription;
- (void)dvt_assertInternalConsistency;
- (id)dvt_evaluateAsStringListInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
- (id)dvt_evaluateAsStringInScope:(id)arg1 withState:(const struct DVTNestedMacroExpansionState *)arg2;
@property(readonly, copy) NSString *description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)dvt_stringForm;
- (BOOL)dvt_isLiteral;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

