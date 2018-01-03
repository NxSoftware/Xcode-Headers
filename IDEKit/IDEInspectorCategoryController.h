//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTExtension, NSArray;

@interface IDEInspectorCategoryController : NSObject
{
    DVTExtension *_category;
    NSArray *_inspectorExtensions;
}

@property(readonly) DVTExtension *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (void)validateUtilitySlices:(id)arg1;
- (void)validateUsageOfSupportsDocumentInspection:(id)arg1;
@property(readonly) BOOL supportsDocumentUndo;
- (id)placeholderStringForInputNavigableItems:(id)arg1 derivedItems:(id)arg2;
- (BOOL)inspectsEditorContent;
- (id)navigableItemsForInputNavigableItems:(id)arg1;
- (id)utilitySlicesForInspectedNavigables:(id)arg1 withWorkspaceDocument:(id)arg2;
- (id)presentationOrderForInspectors:(id)arg1;
- (id)representedObjectMatchedInspectors:(id)arg1 navigables:(id)arg2;
- (id)extensionMatchedInspectorsForInspectedNavigables:(id)arg1 withWorkspaceDocument:(id)arg2;
- (id)_typeMatchedInspectorsForTypeIdentifier:(id)arg1;
- (id)_inspectorExtensions;
- (id)initWithCategoryExtension:(id)arg1;

@end

