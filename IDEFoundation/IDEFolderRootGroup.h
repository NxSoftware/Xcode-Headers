//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEFoundation/IDEGroup.h>

@interface IDEFolderRootGroup : IDEGroup
{
}

- (BOOL)_structureEditRemoveSubitemsShouldCloseDocumentsUnderPathWithoutSaving;
- (BOOL)allowRemovingContainerGroup;
- (BOOL)structureEditSetName:(id)arg1 inContext:(id)arg2;
- (BOOL)canStructureEditName;
- (BOOL)structureEditRemoveSubitemsAtIndexes:(id)arg1 error:(id *)arg2;
- (BOOL)canStructureEditRemoveSubitemsAtIndexes:(id)arg1;
- (BOOL)structureEditSortSubitemsAtIndexes:(id)arg1 byNameOrByType:(BOOL)arg2;
- (BOOL)canStructureEditSortSubitemsAtIndexes:(id)arg1 byNameOrByType:(BOOL)arg2;
- (BOOL)canStructureEditInsertFileURLs:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)canStructureEditInsertSubitems:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)allowUserModificationOfSubitems;
- (BOOL)createNewSubgroupAtIndex:(unsigned long long)arg1;
- (BOOL)structureEditingCanAddNewSubgroup;
- (BOOL)subitemsAreEditable;

@end

