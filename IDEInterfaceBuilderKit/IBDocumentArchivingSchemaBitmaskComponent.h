//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEInterfaceBuilderKit/IBDocumentArchivingSchemaElementComponent.h>

@class NSSet, NSString;

@interface IBDocumentArchivingSchemaBitmaskComponent : IBDocumentArchivingSchemaElementComponent
{
    CDStruct_6db0658e *_map;
    long long _mapCount;
    NSString *_elementName;
    NSSet *_allBitNames;
    NSString *_typeName;
}

+ (id)sharedInstance;
@property(readonly) NSString *typeName; // @synthesize typeName=_typeName;
@property(readonly) NSSet *allBitNames; // @synthesize allBitNames=_allBitNames;
- (void).cxx_destruct;
- (id)descriptionWithIndentationLevel:(long long)arg1;
- (void)insertIntoSchema:(id)arg1;
- (id)bitNamesForBitmask:(long long)arg1;
- (BOOL)decodeBitmask:(unsigned long long *)arg1 fromBits:(id)arg2;
- (id)elementName;
- (id)initWithTypeName:(id)arg1 elementName:(id)arg2 bitmaskMap:(CDStruct_6db0658e *)arg3 count:(long long)arg4 copy:(BOOL)arg5;

@end

