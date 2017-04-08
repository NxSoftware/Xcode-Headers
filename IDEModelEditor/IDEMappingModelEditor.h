//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEModelEditor/IDEDMEditor.h>

#import "DVTOutlineViewDelegate.h"
#import "IDECapsuleListViewDataSource.h"
#import "NSOpenSavePanelDelegate.h"
#import "NSPathControlDelegate.h"
#import "NSSplitViewDelegate.h"

@class DVTControllerContentView, DVTDelayedMenuButton, DVTStackView_ML, IDECapsuleListView, IDEMappingModelAttributeMappingsController, IDEMappingModelRelationshipMappingsController, NSArray, NSMenu, NSPathControl, NSString, NSView;

@interface IDEMappingModelEditor : IDEDMEditor <NSSplitViewDelegate, DVTOutlineViewDelegate, IDECapsuleListViewDataSource, NSPathControlDelegate, NSOpenSavePanelDelegate>
{
    IDECapsuleListView *capsuleView;
    NSPathControl *sourcePathControl;
    NSPathControl *destinationPathControl;
    DVTDelayedMenuButton *addEntityMappingButton;
    NSMenu *addEntityMappingButtonMenu;
    DVTStackView_ML *stackView;
    DVTControllerContentView *entityMappingEditorView;
    IDEMappingModelAttributeMappingsController *attributeMappingsController;
    IDEMappingModelRelationshipMappingsController *relationshipMappingsController;
    NSArray *_shownSourceListSections;
    NSArray *_selectedSourceListIndexPaths;
    NSView *_currentActiveView;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingSelectedEntityMappings;
+ (id)keyPathsForValuesAffectingModelRoot;
+ (id)keyPathsForValuesAffectingMappingModel;
@property(retain) NSView *currentActiveView; // @synthesize currentActiveView=_currentActiveView;
@property(retain) NSArray *selectedSourceListIndexPaths; // @synthesize selectedSourceListIndexPaths=_selectedSourceListIndexPaths;
@property(retain) NSArray *shownSourceListSections; // @synthesize shownSourceListSections=_shownSourceListSections;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)selectedDocumentLocationsChanged;
- (BOOL)panel:(id)arg1 validateURL:(id)arg2 error:(id *)arg3;
- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (BOOL)validateMenuItem:(id)arg1;
- (void)addRelationshipMapping:(id)arg1;
- (void)addAttributeMapping:(id)arg1;
- (void)_createAndEditPropertyMappingsOfClass:(Class)arg1;
- (void)addEntityMapping:(id)arg1;
- (id)mappingModelManager;
- (BOOL)isEntityMappingTableviewSortedByOrder;
- (void)_editNameForModelObject:(id)arg1;
- (void)selectModelObjects:(id)arg1 focus:(BOOL)arg2;
- (void)selectModelObjects:(id)arg1;
- (void)_selectEntityMappings:(id)arg1;
- (id)selectedEntityMappings;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (id)allSubViewControllers;
- (id)capsuleViewControllers;
- (void)primitiveInvalidate;
- (void)_gatherModelMetrics;
- (void)loadView;
- (void)reloadDataModels;
- (void)updateMappings;
- (id)identifier;
- (Class)documentLocationClass;
- (id)modelRoot;
- (id)mappingModel;
- (void)pathControl:(id)arg1 willDisplayOpenPanel:(id)arg2;
- (void)_configurePathControlOpenPanel:(id)arg1;
- (void)_setupButtons;
- (void)_setupPathControls;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

