//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEOutlineBasedNavigator.h>

#import <IDESourceControlUI/IDENavigatorOutlineViewDelegate-Protocol.h>
#import <IDESourceControlUI/NSMenuDelegate-Protocol.h>

@class NSArray, NSMenu, NSSet, NSString;

@interface IDESourceControlUI.SourceControlNavigator : IDEOutlineBasedNavigator <IDENavigatorOutlineViewDelegate, NSMenuDelegate>
{
    // Error parsing type: , name: expandedItems
    // Error parsing type: , name: workingCopyTableCellViewKey
    // Error parsing type: , name: placeholderTableCellViewKey
    // Error parsing type: , name: expandedItemsBeforeFiltering
    // Error parsing type: , name: restoringState
    // Error parsing type: , name: didScanToken
    // Error parsing type: , name: scmEnabledToken
    // Error parsing type: , name: scmEnabled
    // Error parsing type: , name: scanningComplete
    // Error parsing type: , name: bundle
    // Error parsing type: , name: stateChangedObserverTokens
    // Error parsing type: , name: workspaceSetToken
    // Error parsing type: , name: workingCopyTreesBuilt
    // Error parsing type: , name: _previouslyRestoredStateDictionary
    // Error parsing type: , name: filterString
    // Error parsing type: , name: rootItemChildItemsToken
    // Error parsing type: , name: cachedRemnantsOfRestoration
    // Error parsing type: , name: objectsToken
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
- (CDUnknownBlockType).cxx_destruct;
@property(nonatomic, readonly) NSMenu *filterButtonMenu;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (void)primitiveInvalidate;
@property(nonatomic, copy) NSArray *selectedObjects;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (void)viewWillUninstall;
- (void)loadView;
- (void)viewDidInstall;
@property(nonatomic, copy) NSString *visibleRectString;
- (void)revertStateWithDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
@property(nonatomic, copy) NSString *filterString; // @synthesize filterString;
@property(nonatomic, copy) NSSet *expandedItems; // @synthesize expandedItems;
@property(nonatomic, readonly) NSString *filterDefinitionIdentifier;
@property(nonatomic, readonly) NSString *domainIdentifier;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

