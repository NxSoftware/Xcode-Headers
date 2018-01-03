//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESceneKitEditor/SKEDocumentMember-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, IDEEditorDocument, IDEFileReference, IDETypeIdentifier, NSArray, NSImage, NSNull, NSString, NSURL, SKEDocumentLocation, SKESceneDocument, _TtC13DVTFoundation9DVTSymbol;
@protocol SKEDocumentMember, SKEDocumentProtocol;

@interface SKEDocumentGroup : NSObject <SKEDocumentMember>
{
    NSString *_name;
    NSImage *_image;
    SKESceneDocument *_document;
    CDUnknownBlockType _chilMembersEnumerator;
}

+ (unsigned long long)ske_availability;
+ (id)ske_memberClassDescriptionWithPlurality:(BOOL)arg1;
@property(readonly) SKESceneDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
@property(readonly) IDETypeIdentifier *ideModelObjectTypeIdentifier;
- (id)humanReadableNameForInspectorKeyPath:(id)arg1;
@property(readonly) NSArray *ske_overridesMembers;
@property(readonly) id <SKEDocumentMember> ske_shadableMember;
@property(readonly) id <SKEDocumentMember> ske_particleSystemMember;
@property(readonly) id <SKEDocumentMember> ske_materialMember;
@property(readonly) id <SKEDocumentMember> ske_lightMember;
@property(readonly) id <SKEDocumentMember> ske_geometryMember;
@property(readonly) id <SKEDocumentMember> ske_physicsFieldMember;
@property(readonly) id <SKEDocumentMember> ske_physicsBodyMember;
@property(readonly) id <SKEDocumentMember> ske_morpherMember;
@property(readonly) id <SKEDocumentMember> ske_skinnerMember;
@property(readonly) id <SKEDocumentMember> ske_cameraMember;
@property(readonly) id <SKEDocumentMember> ske_animationMember;
@property(readonly) id <SKEDocumentMember> ske_nodeMember;
@property(readonly) BOOL ske_isEditable;
@property(readonly) BOOL ske_isShadable;
@property(readonly) BOOL ske_isAction;
@property(readonly) BOOL ske_isAnimation;
@property(readonly) BOOL ske_isNodeAttribute;
@property(readonly) BOOL ske_isParticleSystem;
@property(readonly) BOOL ske_isPhysicsField;
@property(readonly) BOOL ske_isPhysicsBody;
@property(readonly) BOOL ske_isMaterial;
@property(readonly) BOOL ske_isGeometry;
@property(readonly) BOOL ske_isMorpher;
@property(readonly) BOOL ske_isSkinner;
@property(readonly) BOOL ske_isCamera;
@property(readonly) BOOL ske_isLight;
@property(readonly) BOOL ske_isNode;
- (void)document:(id)arg1 didReplaceChildMember:(id)arg2 ofMember:(id)arg3 byChildMember:(id)arg4;
- (void)document:(id)arg1 willReplaceChildMember:(id)arg2 ofMember:(id)arg3 byChildMember:(id)arg4;
- (void)document:(id)arg1 didRemoveChildMember:(id)arg2 fromMember:(id)arg3;
- (void)document:(id)arg1 willRemoveChildMember:(id)arg2 fromMember:(id)arg3;
- (void)document:(id)arg1 didAddChildMember:(id)arg2 toMember:(id)arg3;
- (void)document:(id)arg1 willAddChildMember:(id)arg2 toMember:(id)arg3;
- (void)ske_setAttribute:(id)arg1 ofClass:(Class)arg2;
- (id)ske_attributeOfClass:(Class)arg1;
- (id)ske_attributeClassesOfInterestInEditorWithAvailability:(unsigned long long)arg1;
@property(readonly) NSArray *ske_attributesMembers;
@property(readonly) NSArray *ske_childMembers;
@property(readonly, nonatomic) NSString *navigableItem_name;
- (id)applicableInspectorsForCategory:(id)arg1 suggestion:(id)arg2;
@property(readonly) SKEDocumentLocation *ske_navigableDocumentLocation;
@property(retain) NSString *ske_entityIdentifier;
@property(readonly) NSImage *ske_image;
@property(readonly) NSString *ske_extendedName;
@property(readonly) NSString *ske_name;
@property(readonly) NSString *ske_modelPath;
@property(readonly) id ske_identifier;
@property(retain) IDEEditorDocument<SKEDocumentProtocol> *ske_document;
@property(readonly, copy) NSString *description;
- (id)initWithDocument:(id)arg1 name:(id)arg2 image:(id)arg3 chilMembersEnumerator:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
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

@end

