//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEDebugNavigableModel.h"
#import "IDEKeyDrivenNavigableItemRepresentedObject.h"

@class DBGViewDebuggerAdditionUIController, DVTDocumentLocation, DVTFileDataType, IDEFileReference, IDELaunchSession, NSArray, NSImage, NSNull, NSString;

@interface DBGFocusedRoot : NSObject <IDEKeyDrivenNavigableItemRepresentedObject, IDEDebugNavigableModel>
{
    id <IDEKeyDrivenNavigableItemRepresentedObject> _focusedRoot;
    CDUnknownBlockType _unfocusHandler;
    DBGViewDebuggerAdditionUIController *_viewDebuggingUIController;
}

+ (id)focusedRootWithObject:(id)arg1 uiController:(id)arg2 unfocusHandler:(CDUnknownBlockType)arg3;
@property __weak DBGViewDebuggerAdditionUIController *viewDebuggingUIController; // @synthesize viewDebuggingUIController=_viewDebuggingUIController;
@property(copy) CDUnknownBlockType unfocusHandler; // @synthesize unfocusHandler=_unfocusHandler;
@property __weak id <IDEKeyDrivenNavigableItemRepresentedObject> focusedRoot; // @synthesize focusedRoot=_focusedRoot;
- (void).cxx_destruct;
- (void)dealloc;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly, copy) NSString *associatedProcessUUID;
@property(readonly) NSString *navigableItem_toolTip;
@property(readonly) NSString *navigableItem_name;
- (id)focusedChildren;

// Remaining properties
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
@property(readonly) NSImage *navigableItem_image;
@property(readonly) BOOL navigableItem_isLeaf;
@property(readonly) BOOL navigableItem_isMajorGroup;
@property(readonly) BOOL navigableItem_missingReferencedContentIsImportant;
@property(readonly) BOOL navigableItem_referencedContentExists;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) Class superclass;

@end

