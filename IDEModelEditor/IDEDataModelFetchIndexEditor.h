//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEModelEditor/IDEDMEditorController.h>

#import <IDEModelEditor/IDECapsuleListViewDataSource-Protocol.h>
#import <IDEModelEditor/IDEDataModelEditorController-Protocol.h>

@class CDMModel, DVTStackBacktrace, IDECapsuleListView, IDEDataModelEditor, IDEDataModelFetchIndexDetailEditor, NSArray, NSString;

@interface IDEDataModelFetchIndexEditor : IDEDMEditorController <IDEDataModelEditorController, IDECapsuleListViewDataSource>
{
    IDEDataModelEditor *_parentEditor;
    IDECapsuleListView *_capsuleListView;
    IDEDataModelFetchIndexDetailEditor *_fetchIndexDetailEditor;
}

+ (id)keyPathsForValuesAffectingSelection;
+ (id)keyPathsForValuesAffectingSelectedFetchIndexes;
@property(retain) IDEDataModelFetchIndexDetailEditor *fetchIndexDetailEditor; // @synthesize fetchIndexDetailEditor=_fetchIndexDetailEditor;
@property(retain) IDECapsuleListView *capsuleListView; // @synthesize capsuleListView=_capsuleListView;
@property(retain) IDEDataModelEditor *parentEditor; // @synthesize parentEditor=_parentEditor;
- (void).cxx_destruct;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (id)selection;
- (void)takeFocus;
@property(readonly) IDEDataModelEditor *rootEditor;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)editNameForModelObject:(id)arg1;
- (void)selectModelObjects:(id)arg1;
- (id)allSubViewControllers;
- (id)capsuleViewControllers;
@property(readonly, copy) NSArray *selectedFetchIndexes;
@property(readonly) CDMModel *model;
- (BOOL)allowsViewType:(unsigned long long)arg1;
- (void)loadView;
- (id)identifier;
- (id)nibBundle;
- (id)nibName;
- (void)primitiveInvalidate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

