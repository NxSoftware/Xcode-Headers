//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEAbstractOpenQuicklyWindowController.h>

#import <IDEKit/IDEOpenQuicklyResultConsumer-Protocol.h>
#import <IDEKit/IDEOpenQuicklyTableCellViewDelegate-Protocol.h>
#import <IDEKit/NSOutlineViewDataSource-Protocol.h>
#import <IDEKit/NSOutlineViewDelegate-Protocol.h>

@class DVTBorderedView, DVTDelayedInvocation, IDEOpenQuicklyOutlineView, IDEOpenQuicklyQueryContext, IDEOpenQuicklyResultGenerator, NSArray, NSButton, NSDate, NSString;
@protocol DVTCancellable;

@interface IDEOpenQuicklyWindowController : IDEAbstractOpenQuicklyWindowController <IDEOpenQuicklyResultConsumer, IDEOpenQuicklyTableCellViewDelegate, NSOutlineViewDelegate, NSOutlineViewDataSource>
{
    IDEOpenQuicklyOutlineView *_outlineView;
    DVTBorderedView *_separatorView;
    NSButton *_preferGeneratedInterfaceToggle;
    NSDate *_issuedGenerationDate;
    long long _issuedGeneration;
    long long _completedGeneration;
    BOOL _initiatedGenerator;
    BOOL _finishedStartingGenerator;
    BOOL _preferGeneratedInterface;
    BOOL _resutlsAreGeneratedInterface;
    BOOL _generatedInterfaceIsApplicable;
    NSArray *_pendingResults;
    NSArray *_originalShowResults;
    DVTDelayedInvocation *_refreshInvocation;
    IDEOpenQuicklyQueryContext *_context;
    NSArray *_topLevelResultDisplayRecords;
    long long _maximumNumberOfVisibleRows;
    IDEOpenQuicklyResultGenerator *_resultGenerator;
    struct __CFDictionary *_previousResultsToRecords;
    id <DVTCancellable> _workspaceFinishedLoadingObserver;
    NSDate *_perfStart;
    NSString *_perfTarget;
    long long _perfIternation;
    long long _perfIternationCount;
    long long _perfPosition;
    double _originalGeneratedInterfaceButtonDistanceOfMinYFromTop;
    double _originalSearchFieldWidth;
}

+ (id)sharedInstance;
+ (void)initialize;
- (void).cxx_destruct;
- (void)updateSearchWithText:(id)arg1;
- (void)updateGeneratorPattern;
- (id)locationToOpen;
- (id)selectedDisplayRecord;
- (long long)minimumInstantQueryLength;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)showWindowWithQueryString:(id)arg1;
- (void)sizeWindowToMatchContentAndDisplay:(BOOL)arg1;
- (double)heightForDisclosedRowCount:(CDStruct_912cb5d2)arg1 limitToMaxSuggestedHeight:(BOOL)arg2;
- (CDStruct_912cb5d2)disclosedRowCount;
- (void)tableCellViewToggleAlternatesVisibility:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (id)displayModeQualifiedViewIdentifierForViewIdentifier:(id)arg1;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)childrenOfItem:(id)arg1;
- (void)tableDoubleClickAction:(id)arg1;
- (void)togglePreferGeneratedInterfaceAction:(id)arg1;
- (void)continuePerfTest;
- (void)initiatePerfTestIfNeeded;
- (void)prepareToShowWindow;
- (void)showWindow;
- (id)registerWorkspaceDidFinshLoadingObserver;
- (void)workspaceDidFinishLoading;
- (void)refreshUserInterface:(id)arg1;
- (void)resultGenerator:(id)arg1 didGenerateOrderedResults:(id)arg2 generation:(long long)arg3;
- (void)resultGeneratorFinishedStarting:(id)arg1;
- (id)resultConsumptionQueue;
- (void)resizeToSearchFieldOnlySize;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (void)prepareToDisplaySearchField;
- (id)initWithWindow:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

