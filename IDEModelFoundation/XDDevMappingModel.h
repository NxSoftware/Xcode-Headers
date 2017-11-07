//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

#import <IDEModelFoundation/CDMIdentification-Protocol.h>

@class IDEMappingModelDocument, NSArray, NSNumber, NSString;

@interface XDDevMappingModel : NSManagedObject <CDMIdentification>
{
    NSArray *_defaultEntityMappingTypeNames;
    IDEMappingModelDocument *document;
    NSNumber *uniqueID;
    NSString *name;
}

+ (id)keyPathsForValuesAffectingSortedEntityMappings;
@property(copy) NSNumber *uniqueID; // @synthesize uniqueID;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(retain) IDEMappingModelDocument *document; // @synthesize document;
- (void).cxx_destruct;
- (void)moveEntityMappings:(id)arg1 toPosition:(long long)arg2;
- (BOOL)renumberEntityMappings;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1;
- (void)updateDestinationModelWithModel:(id)arg1;
- (void)updateSourceModelWithModel:(id)arg1;
- (void)generateDefaultMappings;
- (id)sortedEntityMappingsByName;
- (id)sortedEntityMappings;
- (id)defaultEntityMappingUIStrings;
- (void)removeEntityMappingsObject:(id)arg1;
- (void)addEntityMappingsObject:(id)arg1;
- (id)errorIcon;
- (void)setDestinationModelPath:(id)arg1;
- (id)destinationModelPath;
- (void)setSourceModelData:(id)arg1;
- (id)sourceModelData;
- (void)setSourceModelPath:(id)arg1;
- (id)sourceModelPath;
- (void)setDestinationModelData:(id)arg1;
- (id)destinationModelData;
- (void)setSourceModel:(id)arg1;
- (id)sourceModel;
- (void)setDestinationModel:(id)arg1;
- (id)destinationModel;
- (id)mappingModelManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

