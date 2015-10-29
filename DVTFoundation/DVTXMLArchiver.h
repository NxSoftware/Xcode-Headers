//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DVTSimpleXMLWriter, NSArray, NSMapTable;

@interface DVTXMLArchiver : NSObject
{
    DVTSimpleXMLWriter *_writer;
    NSMapTable *_classesToElementNames;
    id _delegate;
    id _context;
    NSArray *_extraAttributes;
    unsigned long long _currentExtraAttributeIdx;
}

+ (id)archivedDataWithRootObject:(id)arg1;
+ (void)setElementNamePrefix:(id)arg1;
+ (id)elementNameForClass:(Class)arg1;
+ (void)setElementName:(id)arg1 forClass:(Class)arg2;
@property(retain) id context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)_encodeExtraRelationshipsForObject:(id)arg1;
- (void)_finishEncodingAttributes;
- (void)_beginEncodingAttributesForObject:(id)arg1;
- (void)_didEncodeAttributeWithName:(id)arg1;
- (void)finishEncoding;
- (void)encodeIntegerAttribute:(id)arg1 withValue:(long long)arg2;
- (void)encodeBoolAttribute:(id)arg1 withValue:(BOOL)arg2;
- (void)encodeStringAttribute:(id)arg1 withValue:(id)arg2;
- (void)encodeObjectArray:(id)arg1 withTagName:(id)arg2;
- (void)encodeRootObjectArray:(id)arg1 withTagName:(id)arg2 archiveVersion:(id)arg3;
- (void)_encodeObjectArray:(id)arg1 withTagName:(id)arg2 archiveVersion:(id)arg3;
- (void)encodeObject:(id)arg1;
- (void)encodeRootObject:(id)arg1 withArchiveVersion:(id)arg2;
- (void)_encodeVersionAttribute:(id)arg1;
- (id)xmlWriter;
- (id)elementNameForClass:(Class)arg1;
- (void)setElementName:(id)arg1 forClass:(Class)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)init;
- (id)initForWritingWithMutableData:(id)arg1;

@end

