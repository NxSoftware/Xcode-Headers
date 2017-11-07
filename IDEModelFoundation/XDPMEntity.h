//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEModelFoundation/XDUMLClassImp.h>

@protocol XDUMLGeneralization;

@interface XDPMEntity : XDUMLClassImp
{
    id <XDUMLGeneralization> _deletedInheritanceGeneralization;
}

+ (id)dictionaryOfPropertyPLists:(id)arg1;
+ (id)keyPathsForValuesAffectingSortedEntityRelationships;
+ (id)keyPathsForValuesAffectingSortedEntityFetchedProperties;
+ (id)keyPathsForValuesAffectingSortedEntityAttributes;
+ (id)sharedGenericRecordClass;
- (void).cxx_destruct;
- (id)propertyDifferencesRelativeToEntity:(id)arg1 versionHashDiffsOnly:(BOOL)arg2;
- (id)undoManager;
- (id)code_uniquedRelationshipDependencyNames;
- (id)code_relationshipDependencies;
- (id)code_hasAToManyRelationship;
- (id)code_hasParent;
- (id)code_entitySuperClass;
- (id)code_entityFileName;
- (void)generateErrorsAndWarningsWithCallback:(id)arg1 forDocumentAtURL:(id)arg2;
- (void)didChangeValueForKey:(id)arg1;
- (id)plistForDraggingtoIB;
- (void)removeFromOwningConfigurations;
- (id)owningConfigurations;
- (void)setFetchRequests:(id)arg1;
- (void)removeObjectFromFetchRequests:(id)arg1;
- (void)addObjectToFetchRequests:(id)arg1;
- (void)_didChangeFetchRequests;
- (void)_willChangeFetchRequests;
- (id)fetchRequests;
- (id)newFetchRequestWithName:(id)arg1;
- (id)_mutableFetchRequests;
- (id)pastePropertiesWithDictionary:(id)arg1 entityNameMapTable:(id)arg2;
- (id)pasteFetchRequestsFromPlistArray:(id)arg1 entityNameMapTable:(id)arg2;
- (id)pasteRelationshipsFromPlistArray:(id)arg1 entityNameMapTable:(id)arg2;
- (id)newRelationshipWithName:(id)arg1 toDestination:(id)arg2 isToMany:(BOOL)arg3;
- (id)pasteFetchedPropertiesFromPlistArray:(id)arg1 entityNameMapTable:(id)arg2;
- (id)newFetchedPropertyWithName:(id)arg1;
- (id)newAttributeWithName:(id)arg1;
- (id)pasteAttributesFromPlistArray:(id)arg1 entityNameMapTable:(id)arg2;
- (id)allEntityRelationships;
- (id)allEntityFetchedProperties;
- (id)allEntityAttributes;
- (id)sortedEntityRelationships;
- (id)entityRelationships;
- (id)entityRelationshipsByName;
- (id)sortedEntityFetchedProperties;
- (id)entityFetchedPropertiesByName;
- (id)entityAttributesByName;
- (id)entityFetchedProperties;
- (id)sortedEntityAttributes;
- (id)sortedEntityProperties;
- (id)entityAttributes;
- (id)entityAliases;
- (id)entityPropertiesOfClassType:(Class)arg1;
- (void)removeEntityProperty:(id)arg1;
- (void)addEntityProperty:(id)arg1;
- (id)inheritedPropertyForName:(id)arg1;
- (id)entityPropertyForName:(id)arg1;
- (void)setEntityProperties:(id)arg1;
- (void)removeObjectFromEntityPropertiesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inEntityPropertiesAtIndex:(unsigned long long)arg2;
- (void)_didChangeProperties;
- (void)_willChangeProperties;
- (void)addObjectToEntityProperties:(id)arg1;
- (id)allEntityProperties;
- (id)entityProperties;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (void)setElementID:(id)arg1;
- (id)elementID;
- (void)setVersionHashModifier:(id)arg1;
- (id)versionHashModifier;
- (void)setEntityClassName:(id)arg1;
- (id)entityClassName;
- (id)deletedInheritanceGeneralization;
- (id)singleInheritanceGeneralization;
- (BOOL)isTreeLeaf;
- (id)inheritingEntities;
- (void)setInheritingEntities:(id)arg1;
- (BOOL)isChildOfEntity:(id)arg1;
- (id)possibleParentEntities;
- (void)setParentEntityName:(id)arg1;
- (void)setParentEntity:(id)arg1;
- (id)parentEntityName;
- (id)parentEntity;
- (id)uniquenessConstraints;
- (void)setUniquenessConstraints:(id)arg1;
- (id)compoundIndexes;
- (void)setCompoundIndexes:(id)arg1;
- (void)setIsAbstract:(BOOL)arg1;
- (BOOL)isAbstract;
- (void)setUMLClassMapping:(id)arg1;
- (id)umlClassMapping;
- (id)model;
- (void)setName:(id)arg1;
- (void)fillInStateWithDictionary:(id)arg1 entityNameMapTable:(id)arg2;
- (id)addKeysToDictionary:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setParentRelationshipName:(id)arg1;
- (id)parentRelationshipName;
- (void)setDataClassName:(id)arg1;
- (id)dataClassName;
- (id)displayedSyncName;
- (void)setSyncName:(id)arg1;
- (id)syncName;
- (id)defaultSyncName;
- (BOOL)syncable;

@end

