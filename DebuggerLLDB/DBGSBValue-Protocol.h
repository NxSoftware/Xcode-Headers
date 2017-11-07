//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBData, DBGSBError, DBGSBStream, DBGSBType, DBGSBTypeSummaryOptions, DBGSBValue;

@protocol DBGSBValue <NSObject>
- (id <DBGSBValue>)AddressOf;
- (id <DBGSBData>)GetData;
- (_Bool)GetDescription:(id <DBGSBStream>)arg1;
- (id <DBGSBValue>)GetChildAtIndex:(unsigned int)arg1 use_dynamic:(int)arg2 can_create_synthetic:(_Bool)arg3;
- (id <DBGSBValue>)GetChildMemberWithName:(const char *)arg1 use_dynamic:(int)arg2;
- (unsigned long long)GetValueAsUnsigned:(unsigned long long)arg1;
- (long long)GetValueAsSigned:(long long)arg1;
- (_Bool)SetValueFromCString:(const char *)arg1 error:(id <DBGSBError>)arg2;
- (id <DBGSBType>)GetType;
- (_Bool)GetExpressionPath:(id <DBGSBStream>)arg1;
- (id <DBGSBValue>)GetStaticValue;
- (unsigned int)GetNumChildren;
- (_Bool)MightHaveChildren;
- (_Bool)IsInScope;
- (const char *)GetObjectDescription;
- (const char *)GetSummary:(id <DBGSBStream>)arg1 options:(id <DBGSBTypeSummaryOptions>)arg2;
- (const char *)GetSummary;
- (_Bool)GetValueDidChange;
- (int)GetValueType;
- (const char *)GetValue;
- (void)SetFormat:(int)arg1;
- (int)GetFormat;
- (const char *)GetTypeName;
- (const char *)GetName;
- (id <DBGSBError>)GetError;
- (void)Clear;
- (_Bool)IsValid;
@end

