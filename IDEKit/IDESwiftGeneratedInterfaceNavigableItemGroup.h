//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSArray, NSImage, NSMapTable, NSMutableArray, NSNull, NSString, NSURL, _TtC13DVTFoundation9DVTSymbol;

@interface IDESwiftGeneratedInterfaceNavigableItemGroup : NSObject <IDEKeyDrivenNavigableItemRepresentedObject>
{
    NSMutableArray *_generatedInterfaceItems;
    NSMapTable *_workspacesToWorkspaceInfos;
}

+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
+ (id)sharedNavigableItemGroup;
+ (id)fileDataType;
+ (id)URLScheme;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *navigableItem_name;
- (id)itemForSourceFileURL:(id)arg1 inWorkspace:(id)arg2;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(copy) NSArray *generatedInterfaceItems; // @dynamic generatedInterfaceItems;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSMutableArray *mutableGeneratedInterfaceItems; // @dynamic mutableGeneratedInterfaceItems;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
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

@end

