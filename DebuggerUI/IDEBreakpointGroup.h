//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DVTInvalidation.h"
#import "IDEKeyDrivenNavigableItemSparseChildrenRepresentedObject.h"

@class DVTDocumentLocation, DVTFileDataType, DVTStackBacktrace, IDEBreakpointBucket, IDEFileReference, NSArray, NSImage, NSMapTable, NSMutableArray, NSNull, NSString;

@interface IDEBreakpointGroup : NSObject <IDEKeyDrivenNavigableItemSparseChildrenRepresentedObject, DVTInvalidation>
{
    NSMutableArray *_subGroups;
    NSMapTable *_breakpointToObserverTokenMap;
    IDEBreakpointBucket *_bucket;
    unsigned long long _breakpointCount;
    unsigned long long _disabledBreakpointCount;
}

+ (void)initialize;
+ (id)keyPathsForValuesAffectingNavigableItem_childRepresentedObjects;
+ (id)keyPathsForValuesAffectingNavigableItem_image;
+ (id)keyPathsForValuesAffectingNavigableItem_subtitle;
+ (id)keyPathsForValuesAffectingNavigableItem_name;
@property unsigned long long disabledBreakpointCount; // @synthesize disabledBreakpointCount=_disabledBreakpointCount;
@property unsigned long long breakpointCount; // @synthesize breakpointCount=_breakpointCount;
@property(copy) IDEBreakpointBucket *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)ideModelObjectTypeIdentifier;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)_addFileGroupInSortedOrder:(id)arg1;
- (id)_createAndAddFileBreakpointGroupForFilePathIfNecessary:(id)arg1;
- (id)_getFileBreakpointGroupForFilePath:(id)arg1;
- (id)_findFileBreakpointGroupForFilePath:(id)arg1;
- (BOOL)_removeFileBreakpoint:(id)arg1;
- (BOOL)_addFileBreakpoint:(id)arg1;
- (void)_updateDisabledBreakpointCount:(id)arg1;
- (void)removeBreakpoint:(id)arg1;
- (void)addBreakpoint:(id)arg1;
- (id)initWithBucket:(id)arg1;
- (id)navigableItem_childRepresentedObjectIndexesForFilter:(id)arg1;
- (id)navigableItem_childRepresentedObjectsObjectsAtIndexes:(id)arg1;
- (id)objectInNavigableItem_childRepresentedObjectsAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfNavigableItem_childRepresentedObjects;
@property(readonly) NSImage *navigableItem_image;
@property(readonly) NSString *navigableItem_subtitle;
@property(readonly) NSString *navigableItem_name;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(retain) NSMutableArray *mutableSubGroups; // @dynamic mutableSubGroups;
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
@property(readonly) NSString *navigableItem_toolTip;
@property(copy) NSArray *subGroups; // @dynamic subGroups;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

