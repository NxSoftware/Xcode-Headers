//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBDocumentArchivingSchema, IBDocumentUnarchiverRecursionState, IBMutableIdentityDictionary, NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSXMLDocument, NSXMLElement;
@protocol IBUnarchivableDocument;

@interface IBDocumentUnarchiver : NSObject
{
    IBDocumentUnarchiverRecursionState *_recursionState;
    NSXMLDocument *_xmlDocument;
    NSXMLElement *_documentElement;
    NSMutableDictionary *_referenceUnarchivingBlocksByType;
    long long _unarchivedObjects;
    NSMutableSet *_referenceTypesEnabledForUnarchiving;
    NSSet *_allowedReferenceTypes;
    NSMutableArray *_allUnarchivedObjects;
    NSMutableArray *_softErrorMessages;
    IBMutableIdentityDictionary *_postUnarchiveBlocksByObjectThenPriority;
    NSMutableArray *_classesBeingDecoded;
    NSMutableDictionary *_context;
    id <IBUnarchivableDocument> _unarchivedDocument;
    IBDocumentArchivingSchema *_schema;
}

@property(readonly) NSArray *classesBeingDecoded; // @synthesize classesBeingDecoded=_classesBeingDecoded;
@property(readonly) IBDocumentArchivingSchema *schema; // @synthesize schema=_schema;
@property(readonly) id <IBUnarchivableDocument> unarchivedDocument; // @synthesize unarchivedDocument=_unarchivedDocument;
@property(readonly) NSMutableDictionary *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)duplicateValuesForAttributeName:(id)arg1;
- (id)description;
- (id)unarchiveTextWithBase64EncodingIndicatorAttributeName:(id)arg1;
- (id)unarchiveWrappedEdgeInsetsForKey:(id)arg1;
- (id)unarchiveWrappedInsetForKey:(id)arg1;
- (id)unarchiveWrappedSizeForKey:(id)arg1;
- (id)unarchiveWrappedBitmaskFromBitmask:(id)arg1 forKey:(id)arg2;
- (id)unarchiveWrappedEnumeratedValueFromEnumeration:(id)arg1 forKey:(id)arg2;
- (id)unarchiveWrappedDoubleForKey:(id)arg1;
- (id)unarchiveWrappedIntegerForKey:(id)arg1;
- (id)unarchiveWrappedBoolForKey:(id)arg1;
- (unsigned long long)unarchiveBitmaskFromBitmask:(id)arg1 forKey:(id)arg2 defaultValue:(unsigned long long)arg3;
- (int)unarchiveEnumeratedIntValueFromEnumeration:(id)arg1 forKey:(id)arg2 defaultValue:(int)arg3;
- (long long)unarchiveEnumeratedValueFromEnumeration:(id)arg1 forKey:(id)arg2 defaultValue:(long long)arg3;
- (BOOL)unarchiveBoolForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (CDStruct_e454a20b)unarchiveUnitLengthForKey:(id)arg1 defaultValue:(CDStruct_e454a20b)arg2;
- (double)unarchiveDoubleForKey:(id)arg1 defaultValue:(double)arg2;
- (float)unarchiveFloatForKey:(id)arg1 defaultValue:(float)arg2;
- (long long)unarchiveInt64ForKey:(id)arg1 defaultValue:(long long)arg2;
- (long long)unarchiveIntegerForKey:(id)arg1 defaultValue:(long long)arg2;
- (struct _NSRange)unarchiveRangeForKey:(id)arg1 defaultValue:(struct _NSRange)arg2;
- (CDStruct_34734122)unarchiveOffsetForKey:(id)arg1 defaultValue:(CDStruct_34734122)arg2;
- (struct NSDirectionalEdgeInsets)unarchiveIBDirectionalEdgeInsetsForKey:(id)arg1 defaultValue:(struct NSDirectionalEdgeInsets)arg2;
- (struct NSEdgeInsets)unarchiveIBEdgeInsetsForKey:(id)arg1 defaultValue:(struct NSEdgeInsets)arg2;
- (struct NSEdgeInsets)unarchiveEdgeInsetsForKey:(id)arg1 defaultValue:(struct NSEdgeInsets)arg2;
- (CDStruct_c519178c)unarchiveInsetForKey:(id)arg1 defaultValue:(CDStruct_c519178c)arg2;
- (struct CGRect)unarchiveRectForKey:(id)arg1 defaultValue:(struct CGRect)arg2;
- (struct CGSize)unarchiveSizeForKey:(id)arg1 defaultValue:(struct CGSize)arg2;
- (struct CGPoint)unarchivePointForKey:(id)arg1 defaultValue:(struct CGPoint)arg2;
- (id)unarchiveStringForKey:(id)arg1 defaultValue:(id)arg2;
- (id)unarchiveDictionaryWithName:(id)arg1 forOptionalKey:(id)arg2 defaultValue:(id)arg3;
- (id)unarchiveObjectReferenceDictionaryWithName:(id)arg1 referenceType:(id)arg2 forOptionalKey:(id)arg3 defaultValue:(id)arg4;
- (unsigned long long)numberOfElementsInArrayToUnarchiveWithName:(id)arg1 forOptionalKey:(id)arg2;
- (id)unarchiveArrayWithName:(id)arg1 forOptionalKey:(id)arg2 defaultValue:(id)arg3;
- (id)unarchiveObjectReferenceWithType:(id)arg1 forKey:(id)arg2 defaultValue:(id)arg3;
- (id)unarchiveObjectForKey:(id)arg1 defaultValue:(id)arg2;
- (BOOL)containsValueForKey:(id)arg1;
- (id)softErrorMessages;
- (void)addSoftErrorMessage:(id)arg1;
- (void)enumerateObjectMembers:(CDUnknownBlockType)arg1;
- (void)enumerateGroupMembers:(CDUnknownBlockType)arg1;
- (void)unarchiveContentsOfGroupsWithName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)enterGroupWithName:(id)arg1 optionalKey:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)unarchiveObjectReferenceAssumingAlreadyUnarchivedWithType:(id)arg1 forKey:(id)arg2;
- (id)unarchiveObjectReferenceWithType:(id)arg1 forKey:(id)arg2;
- (id)unarchiveObjectReferenceDictionaryWithName:(id)arg1 referenceType:(id)arg2 forOptionalKey:(id)arg3;
- (id)unarchiveDictionaryWithName:(id)arg1 forOptionalKey:(id)arg2;
- (id)unarchiveArrayWithName:(id)arg1 forOptionalKey:(id)arg2;
- (id)unarchiveObjectReferenceArrayWithName:(id)arg1 referenceType:(id)arg2 forOptionalKey:(id)arg3;
- (id)unarchiveObjectForKey:(id)arg1;
- (id)unarchiveObjectForElementName:(id)arg1 optionalKey:(id)arg2;
- (id)unarchiveArrayDictionaryOrObjectFromElement:(id)arg1;
- (void)raiseForUnexpectedChildElement:(id)arg1 expected:(id)arg2 key:(id)arg3;
- (void)raiseForUnknownElement:(id)arg1;
- (id)unarchiveDictionaryFromElement:(id)arg1;
- (id)unarchiveDictionaryFromElement:(id)arg1 elementUnarchiver:(CDUnknownBlockType)arg2;
- (id)unarchiveArrayFromElement:(id)arg1;
- (id)unarchiveReferenceFromElement:(id)arg1 referenceType:(id)arg2;
- (id)unarchiveObjectFromElement:(id)arg1;
- (void)runPostUnarchiveBlocksForObject:(id)arg1;
- (void)registerPostUnarchiveBlockForPriority:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)registerDelayedReferenceUnarchivingOfType:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enableUnarchivingReferencesOfType:(id)arg1;
- (BOOL)isUnarchivingReferencesOfTypeEnabled:(id)arg1;
- (id)objectElementWithName:(id)arg1 optionalKey:(id)arg2;
- (id)elementWithName:(id)arg1 optionalKey:(id)arg2;
- (id)elementWithKey:(id)arg1 expectElementName:(id)arg2;
- (id)keyForCurrentlyUnarchivedObject;
- (BOOL)unarchiveDocument:(id)arg1 error:(id *)arg2;
- (void)recurseWithElement:(id)arg1 kind:(long long)arg2 invokingBlock:(CDUnknownBlockType)arg3;
- (id)initWithSchema:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)unarchiveImageForKey:(id)arg1;
- (id)unarchiveFormattedClassSymbolForClassKey:(id)arg1 moduleKey:(id)arg2 moduleProviderKey:(id)arg3;
- (id)unarchiveCustomFormattedClassSymbol;
- (id)unarchivedIBDocument;

@end

