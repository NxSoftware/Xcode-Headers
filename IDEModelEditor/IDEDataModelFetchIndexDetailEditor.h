//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelEditor/IDEDMEditorController.h>

#import <IDEModelEditor/IDECapsuleViewController-Protocol.h>
#import <IDEModelEditor/IDECapsuleViewDelegate-Protocol.h>
#import <IDEModelEditor/IDEDataModelEditorController-Protocol.h>
#import <IDEModelEditor/NSTableViewDataSource-Protocol.h>
#import <IDEModelEditor/NSTableViewDelegate-Protocol.h>

@class CDMFetchIndex, DVTStackBacktrace, IDEDataModelEditor, IDEDataModelFetchIndexEditor, NSArrayController, NSImage, NSIndexSet, NSString, NSTableColumn, XDTableView;

@interface IDEDataModelFetchIndexDetailEditor : IDEDMEditorController <NSTableViewDataSource, NSTableViewDelegate, IDEDataModelEditorController, IDECapsuleViewController, IDECapsuleViewDelegate>
{
    CDMFetchIndex *_selectedFetchIndex;
    IDEDataModelFetchIndexEditor *_parentEditor;
    NSArrayController *_elementsArrayController;
    XDTableView *_elementsTable;
    NSTableColumn *_elementsPropertyColumn;
    NSTableColumn *_elementsExpressionTypeColumn;
    NSTableColumn *_elementsExpressionColumn;
    NSTableColumn *_elementsOrderColumn;
    NSIndexSet *_selectedElementIndexes;
}

+ (id)keyPathsForValuesAffectingCanRemoveItems;
+ (id)keyPathsForValuesAffectingSelection;
@property(copy) NSIndexSet *selectedElementIndexes; // @synthesize selectedElementIndexes=_selectedElementIndexes;
@property(retain) NSTableColumn *elementsOrderColumn; // @synthesize elementsOrderColumn=_elementsOrderColumn;
@property(retain) NSTableColumn *elementsExpressionColumn; // @synthesize elementsExpressionColumn=_elementsExpressionColumn;
@property(retain) NSTableColumn *elementsExpressionTypeColumn; // @synthesize elementsExpressionTypeColumn=_elementsExpressionTypeColumn;
@property(retain) NSTableColumn *elementsPropertyColumn; // @synthesize elementsPropertyColumn=_elementsPropertyColumn;
@property(retain) XDTableView *elementsTable; // @synthesize elementsTable=_elementsTable;
@property(retain) NSArrayController *elementsArrayController; // @synthesize elementsArrayController=_elementsArrayController;
@property(retain) IDEDataModelFetchIndexEditor *parentEditor; // @synthesize parentEditor=_parentEditor;
@property(retain) CDMFetchIndex *selectedFetchIndex; // @synthesize selectedFetchIndex=_selectedFetchIndex;
- (void).cxx_destruct;
- (double)contentOriginXOffsetForCapsuleView:(id)arg1;
- (double)capsuleView:(id)arg1 preferredContentViewWidthForCapsuleWidth:(double)arg2;
- (BOOL)shouldDrawBorderBelowHeaderForCapsuleView:(id)arg1;
- (void)removeItems:(id)arg1;
- (void)addItems:(id)arg1;
@property(readonly, copy) NSString *titleForDisplay;
@property(readonly) BOOL canDrag;
@property(readonly) BOOL canUndisclose;
@property BOOL canRemoveItems;
@property BOOL canAddItems;
@property(readonly) BOOL canRename;
@property(readonly) BOOL canRemove;
@property(readonly) BOOL canSelect;
- (void)delete:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)selection;
- (void)takeFocus;
@property(readonly) IDEDataModelEditor *rootEditor;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)editNameForModelObject:(id)arg1;
- (void)selectModelObjects:(id)arg1;
- (void)resizeElementsTable;
- (void)elementsArrayControllerArrangedObjectsDidChange;
- (void)primitiveInvalidate;
- (void)loadView;
- (id)identifier;
- (id)nibBundle;
- (id)nibName;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL disclosedByDefault;
@property(readonly, copy) NSString *footerLabel;
@property(readonly) unsigned long long hash;
@property(readonly) NSImage *icon;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

