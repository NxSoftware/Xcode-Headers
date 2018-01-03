//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEModelFoundation/CDMIdentification-Protocol.h>
#import <IDEModelFoundation/CDMXMLCoding-Protocol.h>
#import <IDEModelFoundation/DVTInvalidation-Protocol.h>
#import <IDEModelFoundation/IDEInspectorAccessibilitySupport-Protocol.h>
#import <IDEModelFoundation/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class CDMModel, DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, IDEFileReference, NSArray, NSImage, NSNull, NSNumber, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface CDMConfiguration : NSObject <IDEInspectorAccessibilitySupport, CDMIdentification, CDMXMLCoding, DVTInvalidation, IDEKeyDrivenNavigableItemRepresentedObject>
{
    BOOL _defaultConfiguration;
    NSNumber *_uniqueID;
    NSString *_name;
    NSArray *_entities;
    CDMModel *_model;
}

+ (id)configurationFromPasteboradPlist:(id)arg1 model:(id)arg2;
+ (void)initialize;
@property(readonly, getter=isDefaultConfiguration) BOOL defaultConfiguration; // @synthesize defaultConfiguration=_defaultConfiguration;
@property(retain) CDMModel *model; // @synthesize model=_model;
@property(copy) NSArray *entities; // @synthesize entities=_entities;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy) NSNumber *uniqueID; // @synthesize uniqueID=_uniqueID;
- (void).cxx_destruct;
- (id)stringRepresentation;
- (id)encodeXMLElement;
- (id)xmlElementAttributes;
- (void)awakeAfterXMLDecoding;
- (id)initWithXMLElement:(id)arg1 owner:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *navigableItem_name;
- (id)pasteboardPlist;
- (void)cascadeChangesToLegacyConfiguration:(id)arg1 givenModernToLegacyEntityMapping:(id)arg2;
- (id)initWithLegacyConfiguration:(id)arg1 andEntityMapping:(id)arg2 belongingToModel:(id)arg3;
- (id)initDefaultConfigurationWithEntities:(id)arg1 inModel:(id)arg2;
- (id)initWithEntities:(id)arg1 andName:(id)arg2 inModel:(id)arg3;
- (id)init;
- (id)initInModel:(id)arg1;
- (void)primitiveInvalidate;
- (void)updateConfigurationWithEntities:(id)arg1;
- (void)addEntities:(id)arg1;
- (void)removeEntities:(id)arg1;
- (void)removeEntity:(id)arg1;
- (void)addEntity:(id)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)_registerUndoBlockForConfiguration:(CDUnknownBlockType)arg1;
- (BOOL)validateName:(id *)arg1 error:(id *)arg2;
- (id)humanReadableNameForInspectorKeyPath:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) NSImage *navigableItem_image;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) _TtC13DVTFoundation9DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

