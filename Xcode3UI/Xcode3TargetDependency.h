//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTModelTreeNode.h"

#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DVTDocumentLocation, DVTFileDataType, IDEFileReference, NSArray, NSImage, NSNull, NSString, Xcode3BuildFileGroup, Xcode3BuildPhase;

@interface Xcode3TargetDependency : DVTModelTreeNode <IDEKeyDrivenNavigableItemRepresentedObject>
{
    id <IDEBlueprint> _blueprint;
}

+ (void)initialize;
@property(readonly) id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
- (void).cxx_destruct;
@property(readonly) id representedObject;
- (id)initWithBlueprint:(id)arg1;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_name;

// Remaining properties
@property(readonly) Xcode3BuildPhase *buildPhase; // @dynamic buildPhase;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *navigableItem_accessibleImageDescription;
@property(readonly) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly) NSArray *navigableItem_childRepresentedObjects;
@property(readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly) DVTFileDataType *navigableItem_documentType;
@property(readonly) IDEFileReference *navigableItem_fileReference;
@property(readonly) NSNull *navigableItem_filtered;
@property(readonly) NSString *navigableItem_groupIdentifier;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) Xcode3BuildFileGroup *parentGroup; // @dynamic parentGroup;
@property(readonly) Class superclass;

@end

