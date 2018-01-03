//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IBICAbstractCatalogItem, NSString;

@interface IBICManifestArchivist : NSObject
{
    NSString *_manifestFileName;
    NSString *_childrenManifestKey;
    IBICAbstractCatalogItem *_delegate;
}

+ (id)manifestArchivistForSlottedAsset:(id)arg1 childrenManifestKey:(id)arg2;
+ (id)manifestArchivistForSlottedAsset:(id)arg1;
@property __weak IBICAbstractCatalogItem *delegate; // @synthesize delegate=_delegate;
@property(copy) NSString *childrenManifestKey; // @synthesize childrenManifestKey=_childrenManifestKey;
@property(readonly) NSString *manifestFileName; // @synthesize manifestFileName=_manifestFileName;
- (void).cxx_destruct;
- (id)manifestContent;
- (id)infoDictionary;
- (void)replaceChildrenFromFileSystemSnapshot:(id)arg1 results:(id)arg2;
- (id)childrenByMergingLooseFilesContentFromSnapshot:(id)arg1 withJSONReferencedContent:(id)arg2 results:(id)arg3;
- (Class)classForLooseFileSystemChildSnapshot:(id)arg1;
- (id)childrenFromContentsJSONChildrenEntries:(id)arg1 results:(id)arg2;
- (id)childFromChildEntry:(id)arg1 results:(id)arg2;
- (id)validateManifest:(id)arg1 results:(id)arg2;
- (BOOL)validateManifestChildEntries:(id)arg1 results:(id)arg2;
- (BOOL)validateManifestTags:(id)arg1 results:(id)arg2;
- (BOOL)validateManifestVersion:(id)arg1 results:(id)arg2;
- (id)parseManifestFromSnapshot:(id)arg1 results:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)jsonRepresentationOfSize:(struct CGSize)arg1;
- (id)jsonRepresentationOfPoint:(struct CGPoint)arg1;
- (BOOL)validateOptionalResizingBehaviorKey:(id)arg1 result:(id)arg2 inDictionary:(id)arg3;
- (BOOL)validateOptionalAlignmentInsetsKey:(id)arg1 result:(id)arg2 inDictionary:(id)arg3;
- (BOOL)validateOptionalSizeKey:(id)arg1 result:(id)arg2 inDictionary:(id)arg3;
- (BOOL)validateOptionalPointKey:(id)arg1 result:(id)arg2 inDictionary:(id)arg3;
- (BOOL)validateOptionalStringKey:(id)arg1 result:(id)arg2 inDictionary:(id)arg3 valueValidator:(CDUnknownBlockType)arg4;
- (BOOL)validateOptionalKey:(id)arg1 withStrictType:(Class)arg2 strictTypeName:(id)arg3 result:(id)arg4 inDictionary:(id)arg5;

@end

