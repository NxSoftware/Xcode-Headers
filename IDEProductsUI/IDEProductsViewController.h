//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEProductsUI/DVTProductManagerDelegate-Protocol.h>
#import <IDEProductsUI/DVTReplacementViewDelegate-Protocol.h>
#import <IDEProductsUI/DVTSplitViewDelegate-Protocol.h>
#import <IDEProductsUI/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTDelayedInvocation, DVTGradientImageButton, DVTNotificationToken, DVTObservingToken, DVTProduct, DVTProductManager, DVTReplacementView, DVTSplitView, DVTTableView, IDEProductSectionViewController, IDEProductsUtilityViewController, NSArray, NSArrayController, NSIndexSet, NSMutableDictionary, NSString, NSView;

@interface IDEProductsViewController : IDEViewController <NSTableViewDelegate, DVTSplitViewDelegate, DVTProductManagerDelegate, DVTReplacementViewDelegate>
{
    BOOL _programmaticallyManipulatingProductsSourceListSplitPosition;
    BOOL _restoringSelectedSegmentIndex;
    BOOL _restoringSelectedProductIndex;
    BOOL _displayedLogInErrors;
    BOOL _hasCompletedInitialLoading;
    NSArray *_productSectionSegments;
    long long _selectedSegmentIndex;
    DVTSplitView *_splitView;
    NSView *_sourceListView;
    DVTReplacementView *_replacementView;
    NSArrayController *_productsArrayController;
    DVTTableView *_productsTable;
    DVTGradientImageButton *_refreshButton;
    NSView *_sourceListContainer;
    DVTBorderedView *_borderedContentView;
    NSIndexSet *_productsTableSelectionIndexes;
    NSArray *_productsForDisplay;
    DVTProduct *_selectedProduct;
    NSArray *_sortedProductSectionExtensions;
    NSArray *_products;
    IDEProductsUtilityViewController *_utilityViewController;
    IDEProductSectionViewController *_currentSectionViewController;
    NSMutableDictionary *_sourcesToErrorsMap;
    CDUnknownBlockType _showProductAfterInitialLoading;
    DVTObservingToken *_productsObserver;
    DVTObservingToken *_productsForDisplayObserver;
    DVTObservingToken *_inspectableObserver;
    DVTObservingToken *_busyObserver;
    DVTObservingToken *_currentSectionEmptyObserver;
    DVTObservingToken *_appStoreProductSourceHasCompletedInitialLoading;
    DVTObservingToken *_archiveProductSourceHasCompletedInitialLoading;
    DVTNotificationToken *_splitViewResizeObserver;
    DVTDelayedInvocation *_updateProductsDelayedInvocation;
}

+ (id)keyPathsForValuesAffectingBusyReason;
+ (id)keyPathsForValuesAffectingBusy;
+ (void)initialize;
@property(retain, nonatomic) DVTDelayedInvocation *updateProductsDelayedInvocation; // @synthesize updateProductsDelayedInvocation=_updateProductsDelayedInvocation;
@property(retain) DVTNotificationToken *splitViewResizeObserver; // @synthesize splitViewResizeObserver=_splitViewResizeObserver;
@property(retain) DVTObservingToken *archiveProductSourceHasCompletedInitialLoading; // @synthesize archiveProductSourceHasCompletedInitialLoading=_archiveProductSourceHasCompletedInitialLoading;
@property(retain) DVTObservingToken *appStoreProductSourceHasCompletedInitialLoading; // @synthesize appStoreProductSourceHasCompletedInitialLoading=_appStoreProductSourceHasCompletedInitialLoading;
@property(retain) DVTObservingToken *currentSectionEmptyObserver; // @synthesize currentSectionEmptyObserver=_currentSectionEmptyObserver;
@property(retain) DVTObservingToken *busyObserver; // @synthesize busyObserver=_busyObserver;
@property(retain) DVTObservingToken *inspectableObserver; // @synthesize inspectableObserver=_inspectableObserver;
@property(retain) DVTObservingToken *productsForDisplayObserver; // @synthesize productsForDisplayObserver=_productsForDisplayObserver;
@property(retain) DVTObservingToken *productsObserver; // @synthesize productsObserver=_productsObserver;
@property(copy, nonatomic) CDUnknownBlockType showProductAfterInitialLoading; // @synthesize showProductAfterInitialLoading=_showProductAfterInitialLoading;
@property(nonatomic) BOOL hasCompletedInitialLoading; // @synthesize hasCompletedInitialLoading=_hasCompletedInitialLoading;
@property(nonatomic, getter=hasDisplayedLogInErrors) BOOL displayedLogInErrors; // @synthesize displayedLogInErrors=_displayedLogInErrors;
@property(nonatomic, getter=isRestoringSelectedProductIndex) BOOL restoringSelectedProductIndex; // @synthesize restoringSelectedProductIndex=_restoringSelectedProductIndex;
@property(nonatomic, getter=isRestoringSelectedSegmentIndex) BOOL restoringSelectedSegmentIndex; // @synthesize restoringSelectedSegmentIndex=_restoringSelectedSegmentIndex;
@property(nonatomic, getter=isProgrammaticallyManipulatingProductsSourceListSplitPosition) BOOL programmaticallyManipulatingProductsSourceListSplitPosition; // @synthesize programmaticallyManipulatingProductsSourceListSplitPosition=_programmaticallyManipulatingProductsSourceListSplitPosition;
@property(retain) NSMutableDictionary *sourcesToErrorsMap; // @synthesize sourcesToErrorsMap=_sourcesToErrorsMap;
@property(retain) IDEProductSectionViewController *currentSectionViewController; // @synthesize currentSectionViewController=_currentSectionViewController;
@property(retain) IDEProductsUtilityViewController *utilityViewController; // @synthesize utilityViewController=_utilityViewController;
@property(retain) NSArray *products; // @synthesize products=_products;
@property(retain, nonatomic) NSArray *sortedProductSectionExtensions; // @synthesize sortedProductSectionExtensions=_sortedProductSectionExtensions;
@property(retain) DVTProduct *selectedProduct; // @synthesize selectedProduct=_selectedProduct;
@property(retain) NSArray *productsForDisplay; // @synthesize productsForDisplay=_productsForDisplay;
@property(retain, nonatomic) NSIndexSet *productsTableSelectionIndexes; // @synthesize productsTableSelectionIndexes=_productsTableSelectionIndexes;
@property __weak DVTBorderedView *borderedContentView; // @synthesize borderedContentView=_borderedContentView;
@property __weak NSView *sourceListContainer; // @synthesize sourceListContainer=_sourceListContainer;
@property __weak DVTGradientImageButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property __weak DVTTableView *productsTable; // @synthesize productsTable=_productsTable;
@property __weak NSArrayController *productsArrayController; // @synthesize productsArrayController=_productsArrayController;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property __weak NSView *sourceListView; // @synthesize sourceListView=_sourceListView;
@property __weak DVTSplitView *splitView; // @synthesize splitView=_splitView;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
- (void).cxx_destruct;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)productManager:(id)arg1 receivedErrors:(id)arg2 fromSource:(id)arg3;
- (void)splitViewDidResizeSubviewsNotification:(id)arg1;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)primitiveInvalidate;
- (void)setSelectedSegmentIndex:(long long)arg1 immediately:(BOOL)arg2;
@property(readonly) NSArray *productSectionSegments; // @synthesize productSectionSegments=_productSectionSegments;
- (id)sortedExtensionsWithDefinitionIdentifier:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)_tableView:(id)arg1 isGroupRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)_saveSelectedProductState;
- (void)_restoreSelectedProductState;
- (void)_saveSelectedSegmentIndexState;
- (void)_restoreSelectedSegmentIndexState;
- (unsigned long long)_defaultSelectedSegment;
- (void)_saveSourceListSplitPosition;
- (void)_restoreSourceListSplitPosition;
- (void)_restoreSourceListScrollPosition;
- (void)showProductError:(id)arg1;
- (void)_showLogInErrorsOnce;
- (void)refresh:(id)arg1;
@property(readonly, nonatomic) NSString *busyReason;
@property(readonly, nonatomic) BOOL busy;
- (void)_resumeSplitPositions;
- (void)_resetDefaultUtilitiesSplitPosition;
- (id)errorsFromProductSource:(id)arg1;
- (void)_toggleUtiltitiesVisibility;
- (BOOL)shouldShowUtilities;
- (void)_toggleSourceListVisibility;
- (BOOL)shouldShowSourceList;
- (void)_updateProductsTableIssueDisplay;
- (void)showProductsSectionWithIdentifier:(id)arg1 forProductIdentifier:(id)arg2 didShowProduct:(CDUnknownBlockType)arg3;
- (unsigned long long)indexForProductSectionDefinitionIdentifier:(id)arg1;
- (id)firstProduct;
- (id)indexSetForProductIdentifier:(id)arg1;
- (id)selectedProductFromSelectedIndex:(id)arg1;
@property(readonly) DVTProductManager *productManager;
- (void)_updateDetailView;
- (void)updateProductsDisplay;
- (void)updateProducts;
- (void)_startObservations;
- (void)viewWillAppear;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

