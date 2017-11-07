//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTOutlineViewDelegate-Protocol.h>
#import <IDEKit/IDEScopeableView-Protocol.h>
#import <IDEKit/NSMenuDelegate-Protocol.h>
#import <IDEKit/NSOutlineViewDataSource-Protocol.h>

@class DVTBorderedView, DVTNotificationToken, DVTObservingToken, DVTOutlineView, DVTScopeBarView, DVTScrollView, DVTSearchField, IDEVariableViewRootNode, IDEVariablesViewQuickLookPopover, IDEVariablesViewStateManager, NSArray, NSButton, NSMapTable, NSPopUpButton, NSPopover, NSProgressIndicator, NSString, NSTableColumn, NSTextField, NSView;
@protocol IDEVariablesViewContentProvider;

@interface IDEVariablesView : IDEViewController <NSOutlineViewDataSource, NSMenuDelegate, DVTOutlineViewDelegate, IDEScopeableView>
{
    IDEVariableViewRootNode *_root;
    NSMapTable *_variableNodesToObservationTokens;
    double _timeLodingIndicatorWasShown;
    NSPopover *_currentPopover;
    IDEVariablesViewQuickLookPopover *_quickLookPopover;
    long long _lastRowQuickLookWasShownFor;
    unsigned long long _lastEdgeQuickLookWasShownOn;
    NSView *_buttonSeparator;
    NSButton *_quickLookButton;
    DVTObservingToken *_showsSummaryObservationToken;
    DVTObservingToken *_showsTypeObservationToken;
    DVTObservingToken *_viewModeObservationToken;
    DVTObservingToken *_themeObserver;
    DVTNotificationToken *_outlineViewHiddenObservationToken;
    DVTObservingToken *_loadingNewVariablesInBackgroundObservationToken;
    DVTObservingToken *_recordedStackFrameSelectedObservationToken;
    DVTNotificationToken *_outlineViewSelectionObserver;
    BOOL _viewWasInstalled;
    BOOL _restoringExpandedState;
    NSArray *_statusCellsCache;
    NSArray *_statusCellCategoriesCache;
    int _formatterSizeStyle;
    BOOL _scopeBarVisible;
    BOOL _showsType;
    BOOL _showsRawValues;
    DVTScopeBarView *_scopeBarView;
    id <IDEVariablesViewContentProvider> _contentProvider;
    IDEVariablesViewStateManager *_stateManager;
    long long _selectedScopeTag;
    DVTOutlineView *_outlineView;
    unsigned long long _textAlignment;
    NSView *_topContentContainerView;
    DVTBorderedView *_containerView;
    DVTScrollView *_scrollView;
    DVTBorderedView *_unavailableForRecordedFrameView;
    NSTextField *_unavailableForRecordedFrameText;
    DVTSearchField *_filterField;
    NSPopUpButton *_scopePopUp;
    NSProgressIndicator *_loadingIndicator;
    NSTableColumn *_compoundColumn;
    NSTableColumn *_rawValueColumn;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (BOOL)automaticallyNotifiesObserversOfSelectedScopeTag;
+ (void)initialize;
@property __weak NSTableColumn *rawValueColumn; // @synthesize rawValueColumn=_rawValueColumn;
@property __weak NSTableColumn *compoundColumn; // @synthesize compoundColumn=_compoundColumn;
@property __weak NSProgressIndicator *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property __weak NSPopUpButton *scopePopUp; // @synthesize scopePopUp=_scopePopUp;
@property __weak DVTSearchField *filterField; // @synthesize filterField=_filterField;
@property __weak NSTextField *unavailableForRecordedFrameText; // @synthesize unavailableForRecordedFrameText=_unavailableForRecordedFrameText;
@property __weak DVTBorderedView *unavailableForRecordedFrameView; // @synthesize unavailableForRecordedFrameView=_unavailableForRecordedFrameView;
@property __weak DVTScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property __weak DVTBorderedView *containerView; // @synthesize containerView=_containerView;
@property __weak NSView *topContentContainerView; // @synthesize topContentContainerView=_topContentContainerView;
@property unsigned long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property BOOL showsRawValues; // @synthesize showsRawValues=_showsRawValues;
@property BOOL showsType; // @synthesize showsType=_showsType;
@property(nonatomic) BOOL scopeBarVisible; // @synthesize scopeBarVisible=_scopeBarVisible;
@property(retain) DVTOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property(nonatomic) long long selectedScopeTag; // @synthesize selectedScopeTag=_selectedScopeTag;
@property(retain) IDEVariablesViewStateManager *stateManager; // @synthesize stateManager=_stateManager;
@property(retain, nonatomic) id <IDEVariablesViewContentProvider> contentProvider; // @synthesize contentProvider=_contentProvider;
@property(retain) DVTScopeBarView *scopeBarView; // @synthesize scopeBarView=_scopeBarView;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)_wasStatusCellItemClickedAtCurrentPoint;
- (BOOL)selectionShouldChangeInOutlineView:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldTrackCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (BOOL)_shouldExpandItemAsResultOfOptionClick:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)_resetRawValuesColumnWidth;
- (void)_setRawValueColumnWidth:(double)arg1;
- (void)_updateRawValueColumnWidthIfNecessary:(double)arg1;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldMouseHoverForTableColumn:(id)arg2 row:(long long)arg3;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 sortDescriptorsDidChange:(id)arg2;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (id)_predicateForMatchString:(id)arg1;
- (void)sortDescending:(id)arg1;
- (void)sortAscending:(id)arg1;
- (void)sortByName:(id)arg1;
- (void)sortByNaturalOrder:(id)arg1;
- (void)toggleShowsRawValues:(id)arg1;
- (void)toggleShowsTypes:(id)arg1;
- (void)filterChanged:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)_quickLookIconForNode:(id)arg1;
- (void)showQuickLookForRow:(long long)arg1 preferredEdge:(unsigned long long)arg2;
- (void)toggleQuickLookForRow:(long long)arg1 preferredEdge:(unsigned long long)arg2;
- (void)_toggleQuickLookForFirstSelectedRow;
- (void)keyDown:(id)arg1;
- (void)_recursivleyReflectNodeExpansionStateInOutlineView:(id)arg1;
- (void)_recursivelyReflectNodeExpansionStateInOutlineViewStartingAtRoot;
- (void)_ensureExpandedChildrenAreLoadedThenReflectExpansionStateInOutlineView;
- (void)_addSortMenuToMenu:(id)arg1;
- (void)_addToggleShowRawValueMenuItemToMenu:(id)arg1;
- (void)_addToggleShowTypesMenuItemToMenu:(id)arg1;
- (void)_contextualMenuNeedsUpdate:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)addScopeChoice:(id)arg1 tag:(long long)arg2;
- (void)hideCurrentPopoverUsingAnimation;
- (void)hideCurrentPopoverImmediately;
- (void)showPopover:(id)arg1 forRow:(long long)arg2 preferredEdge:(unsigned long long)arg3;
- (void)showPopover:(id)arg1 forRow:(long long)arg2;
- (void)removeChildNodeFromRoot:(id)arg1;
- (void)addChildNodeToRoot:(id)arg1;
- (void)_cancelAndClearAllVariableNodeTokens;
- (void)installNewRootFromChildrenOnceExpandedChildrenAreLoaded:(id)arg1;
- (void)_handleDoubleClick:(id)arg1;
- (void)_updateGutterAndScopeFrames;
- (void)_updateScopePopUpTitle;
@property(readonly) NSString *filterString;
- (BOOL)delegateFirstResponder;
- (void)_reloadNode:(id)arg1 reloadChildren:(BOOL)arg2;
- (void)_handleVariableNode:(id)arg1 change:(id)arg2;
- (void)_notifyOutlineViewOfOldChildren:(id)arg1 replacedWithNewChildren:(id)arg2 forNode:(id)arg3;
- (void)_handleVariableNodesFormattedChildrenChanged:(id)arg1 change:(id)arg2;
- (void)_observeModelObject:(id)arg1;
- (void)_hideLoadingIndicatorIfNecessary;
- (void)_showLoadingIndicatorIfNecessary;
- (void)_handleRecordedStackFrameSelectedChanged;
- (void)_handleLoadingNewVariablesInBackgroundChanged;
- (void)_updateRawValuesColumnVisibility;
- (void)_cancelAndNilOutAllObservationTokens;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)_createQuickLookButton;
- (void)loadView;
- (void)_variablesViewCommonInit;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

