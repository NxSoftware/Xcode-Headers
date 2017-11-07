//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSCoder.h>

@class DVTMutableOrderedDictionary, IBMutableIdentityDictionary, IBSelfCompressingDataWrapper, NSDictionary, NSHashTable, NSMapTable, NSMutableData, NSPointerArray, NSXMLElement;
@protocol IBXMLCoderDelegate;

@interface IBXMLCoder : NSCoder
{
    NSHashTable *_encodedObjects;
    NSMapTable *_pointersToOids;
    NSMapTable *_oidsToPointers;
    IBMutableIdentityDictionary *_replacements;
    IBMutableIdentityDictionary *_referencableObjectsToXMLElements;
    IBMutableIdentityDictionary *_classNamesForClasses;
    NSHashTable *_referenceNodes;
    NSHashTable *_encodedClasses;
    NSMutableData *_data;
    IBSelfCompressingDataWrapper *_previousXML;
    NSXMLElement *_rootXMLNode;
    NSXMLElement *_archiveXMLNode;
    NSPointerArray *_overflowObjects;
    struct {
        char classNameForClass;
    } _delegateRespondsTo;
    BOOL _finished;
    id <IBXMLCoderDelegate> _delegate;
    long long _depth;
    double _minimumReadableVersion;
    NSXMLElement *_objectState_currentXMLNode;
    long long _objectState_nextGenericKey;
    id _objectState_encodedParent;
    NSDictionary *_objectState_encodingSpecialCaseContext;
    BOOL _objectState_processingDelayedEncoding;
    DVTMutableOrderedDictionary *_objectState_delayedObjects;
    BOOL _prettyPrintOutput;
}

+ (id)archivedDataWithRootObject:(id)arg1;
+ (void)initialize;
@property BOOL prettyPrintOutput; // @synthesize prettyPrintOutput=_prettyPrintOutput;
@property(retain, nonatomic) id <IBXMLCoderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeRect:(struct CGRect)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (BOOL)canEncodeObjectConditionally:(id)arg1;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (id)nextGenericKey;
- (void)encodeReferenceToObject:(id)arg1 forKey:(id)arg2;
- (void)serializeObject:(id)arg1;
- (BOOL)objectShouldUseCustomCoding:(id)arg1 comparatorForUnorderedCollection:(CDUnknownBlockType *)arg2;
- (id)serializeString:(id)arg1;
- (id)serializeNumber:(id)arg1;
- (void)encodeDictionary:(id)arg1 withComparator:(CDUnknownBlockType)arg2;
- (BOOL)shouldUseCompressedEncodingForDictionary:(id)arg1;
- (void)encodeSet:(id)arg1 withComparator:(CDUnknownBlockType)arg2;
- (void)encodeArray:(id)arg1;
- (BOOL)shouldEncodeCollectionsWithSpecialElements;
- (BOOL)object:(id)arg1 encodesAsMemberAndWithCoderOfClass:(Class)arg2;
- (BOOL)object:(id)arg1 encodesWithCoderFromClass:(Class)arg2;
- (BOOL)doElementsOfCollection:(id)arg1 allConformToType:(Class)arg2;
- (id)classNameForObject:(id)arg1;
- (id)classNameForClass:(Class)arg1;
- (Class)classForObject:(id)arg1;
- (void)takeHintsFromPreviousXMLCoder:(id)arg1;
- (void)hintIDsForVeryCommonObjects;
- (id)objectIDForObject:(id)arg1;
- (id)objectIDForObject:(id)arg1 preferredID:(id)arg2;
- (id)replacementForObject:(id)arg1;
- (void)finishEncoding;
- (id)prettyXMLFromXMLData:(id)arg1;
- (BOOL)allowsKeyedCoding;
- (id)encodedObjectForObjectID:(id)arg1;
- (id)initForWritingWithMutableData:(id)arg1 forType:(id)arg2 minimumReadableVersion:(double)arg3;
- (long long)versionForClassName:(id)arg1;
- (unsigned int)systemVersion;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)encodeArrayOfObjCType:(const char *)arg1 count:(unsigned long long)arg2 at:(const void *)arg3;
- (void)encodeValuesOfObjCTypes:(const char *)arg1;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeRootObject:(id)arg1;
- (void)encodePropertyList:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeDataObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (void)encodeNXObject:(id)arg1;

@end

