//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICAbstractCatalogItem.h>

@class IBICManifestArchivist;

@interface IBICFolder : IBICAbstractCatalogItem
{
    IBICManifestArchivist *_manifestArchivist;
    BOOL _providesNamespace;
}

+ (id)contentReferenceTypeName;
+ (id)catalogItemFileExtension;
+ (Class)requiredChildrenClass;
+ (id)keysThatImpactIdentifier;
+ (id)classNameComponents;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
@property(nonatomic) BOOL providesNamespace; // @synthesize providesNamespace=_providesNamespace;
- (void).cxx_destruct;
- (CDStruct_550fdc95)taggingSupport;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (id)imageSetWithName:(id)arg1;
- (id)imageSetWithFileName:(id)arg1;
- (id)folderForFileName:(id)arg1;
- (id)identifier;
- (void)manifestArchivist:(id)arg1 populateManifest:(id)arg2;
- (void)manifestArchivist:(id)arg1 applyPropertiesFromManifest:(id)arg2;
- (BOOL)manifestArchivist:(id)arg1 validateManifest:(id)arg2 results:(id)arg3;
- (id)runtimeNamespaceQualifier;
- (id)manifestContent;
- (id)manifestFileName;
- (BOOL)isolatesAndConsolidatesContainedContent;
- (void)enumerateDescriptionAttributeComponents:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

