//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDESourceControlUI/IDEInspectorMatching-Protocol.h>
#import <IDESourceControlUI/IDEKeyDrivenNavigableItemRepresentedObject-Protocol.h>

@class DVTDocumentLocation, DVTFileDataType, DVTSourceControlLogItemFile, DVTSourceControlVisualLogItem, DVTSourceControlWorkingCopy, NSArray, NSImage, NSString;

@interface _TtC18IDESourceControlUI30SourceControlLogItemFileHolder : NSObject <IDEKeyDrivenNavigableItemRepresentedObject, IDEInspectorMatching>
{
    // Error parsing type: , name: logItemFile
    // Error parsing type: , name: logItem
    // Error parsing type: , name: workingCopy
    // Error parsing type: , name: ideTopLevelStructureObjects
    // Error parsing type: , name: documentLocation
}

+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)applicableInspectorsForCategory:(id)arg1 suggestion:(id)arg2;
@property(nonatomic, readonly) DVTDocumentLocation *navigableItem_contentDocumentLocation;
@property(nonatomic, readonly) DVTFileDataType *navigableItem_documentType;
- (id)ideModelObjectTypeIdentifier;
@property(nonatomic, readonly) NSString *navigableItem_toolTip;
@property(nonatomic, readonly) NSString *navigableItem_name;
@property(nonatomic, readonly) NSArray *navigableItem_childRepresentedObjects;
@property(nonatomic, readonly) NSImage *navigableItem_image;
- (id)initWithLogItemFile:(id)arg1 logItem:(id)arg2 workingCopy:(id)arg3;
@property(nonatomic, copy) NSArray *ideTopLevelStructureObjects; // @synthesize ideTopLevelStructureObjects;
@property(nonatomic, retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy;
@property(nonatomic, retain) DVTSourceControlVisualLogItem *logItem; // @synthesize logItem;
@property(nonatomic, retain) DVTSourceControlLogItemFile *logItemFile; // @synthesize logItemFile;

@end
