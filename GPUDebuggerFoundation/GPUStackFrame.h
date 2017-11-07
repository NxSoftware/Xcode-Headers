//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GPUDebuggerFoundation/IDEDebugNavigableModel-Protocol.h>
#import <GPUDebuggerFoundation/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTSymbol, DYStackFrame, IDEFileReference, IDELaunchSession, NSArray, NSImage, NSNull, NSString, NSURL;

@interface GPUStackFrame : NSObject <IDEDebugNavigableModel, IDEKeyDrivenNavigableItemRepresentedObject>
{
    IDELaunchSession *_launchSession;
    NSString *_associatedProcessUUID;
    DYStackFrame *_stackFrame;
}

- (void).cxx_destruct;
- (id)contentDelegateUIExtensionIdentifier;
@property(readonly, nonatomic) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(readonly, nonatomic) DVTFileDataType *navigableItem_documentType;
@property(readonly, nonatomic) NSString *navigableItem_name;
@property(readonly, nonatomic) NSImage *navigableItem_image;
- (id)gpudebugger_createImageFromFilePath:(id)arg1 withRed:(float)arg2 green:(float)arg3 blue:(float)arg4 alpha:(float)arg5;
- (id)gpudebugger_uti;
- (id)gpudebugger_sourceURL;
@property(readonly, copy) NSString *associatedProcessUUID;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, nonatomic) DYStackFrame *stackFrame;
- (id)initWithStackFrame:(id)arg1 parent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *navigableItem_accessibleImageDescription;
@property(readonly, nonatomic) NSArray *navigableItem_additionalFilterMatchingText;
@property(readonly, nonatomic) NSArray *navigableItem_childRepresentedObjects;
@property(readonly, nonatomic) IDEFileReference *navigableItem_fileReference;
@property(readonly, nonatomic) NSNull *navigableItem_filtered;
@property(readonly, nonatomic) NSString *navigableItem_groupIdentifier;
@property(readonly, nonatomic) BOOL navigableItem_isEnabled;
@property(readonly, nonatomic) BOOL navigableItem_isLeaf;
@property(readonly, nonatomic) BOOL navigableItem_isMajorGroup;
@property(readonly, nonatomic) BOOL navigableItem_isVisible;
@property(readonly, nonatomic) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly, nonatomic) id navigableItem_parentRepresentedObject;
@property(readonly, nonatomic) BOOL navigableItem_referencedContentExists;
@property(readonly, nonatomic) DVTSymbol *navigableItem_representedSymbol;
@property(readonly, nonatomic) NSURL *navigableItem_representedURL;
@property(readonly, nonatomic) NSString *navigableItem_subtitle;
@property(readonly, nonatomic) NSString *navigableItem_toolTip;
@property(readonly) Class superclass;

@end

