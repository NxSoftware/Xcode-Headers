//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTFileDataType, IDENavigableItemArchivableRepresentation, NSDictionary, NSImage, NSString, NSURL;

@interface IDEEditorHistoryItem : NSObject
{
    NSString *_navigableItemName;
    NSString *_documentNavigableItemName;
    IDENavigableItemArchivableRepresentation *_archivableRepresentation;
    NSURL *_documentURL;
    NSURL *_documentContentsURL;
    DVTFileDataType *_fileDataType;
    NSString *_documentExtensionIdentifier;
    NSDictionary *_stateDictionary;
}

+ (id)_imageCache;
+ (id)_fixupDocumentExtensionIdentifier:(id)arg1;
+ (id)editorHistoryItemForStateSavingDictionary:(id)arg1 forNavigableItemCoordinator:(id)arg2 forWorkspace:(id)arg3 error:(id *)arg4;
+ (void)initialize;
@property(copy) NSURL *documentContentsURL; // @synthesize documentContentsURL=_documentContentsURL;
@property(readonly) NSString *documentNavigableItemName; // @synthesize documentNavigableItemName=_documentNavigableItemName;
@property(readonly) NSString *navigableItemName; // @synthesize navigableItemName=_navigableItemName;
@property(readonly) NSDictionary *stateDictionary; // @synthesize stateDictionary=_stateDictionary;
@property(readonly) IDENavigableItemArchivableRepresentation *navigableItemRepresentation; // @synthesize navigableItemRepresentation=_archivableRepresentation;
@property(readonly) DVTFileDataType *fileDataType; // @synthesize fileDataType=_fileDataType;
@property(readonly) NSURL *documentURL; // @synthesize documentURL=_documentURL;
@property(readonly) NSString *documentExtensionIdentifier; // @synthesize documentExtensionIdentifier=_documentExtensionIdentifier;
- (void).cxx_destruct;
@property(retain) NSImage *cachedImage;
- (id)stateSavingStateDictionary;
- (id)description;
@property(readonly) NSString *historyMenuItemTitle;
- (id)initWithNavigableItem:(id)arg1 archivableRepresentation:(id)arg2 documentExtensionIdentifier:(id)arg3 stateDictionary:(id)arg4 documentNavigableItemName:(id)arg5 navigableItemName:(id)arg6;
- (id)initWithNavigableItem:(id)arg1;
- (id)_initWithNavigableItem:(id)arg1 archivableRepresentation:(id)arg2 fileDataType:(id)arg3 documentExtensionIdentifier:(id)arg4 stateDictionary:(id)arg5 documentNavigableItemName:(id)arg6 navigableItemName:(id)arg7;
- (id)init;

@end

