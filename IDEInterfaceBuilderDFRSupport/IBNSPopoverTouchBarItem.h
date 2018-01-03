//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IBNSTouchBarItem.h"

#import "IBDocumentArchiving-Protocol.h"

@class IBNSTouchBar, NSImage, NSPopoverTouchBarItem, NSString, NSView;

@interface IBNSPopoverTouchBarItem : IBNSTouchBarItem <IBDocumentArchiving>
{
    NSPopoverTouchBarItem *_runtimePopoverTouchBarItem;
    BOOL _supportsPressAndHold;
    BOOL _showsCloseButton;
    IBNSTouchBar *_popoverTouchBar;
    NSView *_collapsedRepresentation;
    NSImage *_collapsedRepresentationImage;
    NSString *_collapsedRepresentationLabel;
}

+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
@property BOOL showsCloseButton; // @synthesize showsCloseButton=_showsCloseButton;
@property BOOL supportsPressAndHold; // @synthesize supportsPressAndHold=_supportsPressAndHold;
@property(retain) NSString *collapsedRepresentationLabel; // @synthesize collapsedRepresentationLabel=_collapsedRepresentationLabel;
@property(retain) NSImage *collapsedRepresentationImage; // @synthesize collapsedRepresentationImage=_collapsedRepresentationImage;
@property(retain) NSView *collapsedRepresentation; // @synthesize collapsedRepresentation=_collapsedRepresentation;
@property(retain) IBNSTouchBar *popoverTouchBar; // @synthesize popoverTouchBar=_popoverTouchBar;
- (void).cxx_destruct;
- (id)childTouchBar;
- (id)runtimeTouchBarItem;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForDocumentArchiver:(id)arg1;
- (Class)classForCoder;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)ibTypeNameForParentTouchBarItem;
- (id)ibTypeNameForDefaultLabel;
- (Class)ibEditorClass;
- (void)ibPrepareCocoaDocumentForCompiling:(id)arg1 withContext:(id)arg2;
- (BOOL)ibCanRemoveChildren:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToOneRelationshipsKeyPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

