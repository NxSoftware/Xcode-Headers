//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <DVTKit/DVTFindPatternManager-Protocol.h>
#import <DVTKit/DVTScopeBarContentController-Protocol.h>

@class DVTBorderedView, DVTFindBarOptionsCtrl, DVTFindPatternTextField, DVTLogAspect, DVTObservingToken, DVTSearchField, DVTSharedFindState, DVTStackView_AppKitAutolayout, NSAttributedString, NSLayoutConstraint, NSMutableArray, NSObject, NSPopUpButton, NSSegmentedControl, NSString, NSTextField, NSTimer, NSView;
@protocol DVTFindBarHostable, DVTFindPatternField;

@interface DVTFindBar : DVTViewController <DVTFindPatternManager, DVTScopeBarContentController>
{
    NSPopUpButton *_finderModePopUpButton;
    DVTSearchField<DVTFindPatternField> *_findStringField;
    DVTFindPatternTextField<DVTFindPatternField> *_replaceStringField;
    NSSegmentedControl *_segmentedControl;
    DVTStackView_AppKitAutolayout *_stackView;
    DVTBorderedView *_replaceModeView;
    NSTextField *_replaceTextField;
    NSTimer *_editedTimer;
    DVTFindBarOptionsCtrl *_optionsCtrl;
    DVTSharedFindState *_findState;
    NSMutableArray *_recents;
    NSObject<DVTFindBarHostable> *_delegate;
    id _findObject;
    double _preferredViewHeight;
    NSAttributedString *_findAttributedString;
    NSAttributedString *_replaceAttributedString;
    unsigned long long _finderMode;
    struct _DVTFindBarFlags _fbflags;
    BOOL _canReplace;
    BOOL _hasResults;
    BOOL _recentsNeedUpdate;
    DVTObservingToken *_findTypeObserver;
    DVTObservingToken *_findStateFindStringObsT;
    DVTObservingToken *_findStateReplaceStringObsT;
    NSView *_findBarView;
    NSSegmentedControl *_replaceSegmentedControl;
    NSSegmentedControl *_doneSegmentedButtom;
    NSLayoutConstraint *_findSearchFieldLeadingConstraint;
    NSLayoutConstraint *_replaceSegmentControlWidth;
    NSLayoutConstraint *_findSearchFieldHeightConstraint;
    NSLayoutConstraint *_replaceSearchFieldHeightConstraint;
    long long _numberOfMatches;
}

+ (id)keyPathsForValuesAffectingReplaceString;
+ (id)keyPathsForValuesAffectingFindRegularExpression;
+ (id)keyPathsForValuesAffectingFindString;
+ (void)initialize;
@property(nonatomic) long long numberOfMatches; // @synthesize numberOfMatches=_numberOfMatches;
@property __weak NSLayoutConstraint *replaceSearchFieldHeightConstraint; // @synthesize replaceSearchFieldHeightConstraint=_replaceSearchFieldHeightConstraint;
@property __weak NSLayoutConstraint *findSearchFieldHeightConstraint; // @synthesize findSearchFieldHeightConstraint=_findSearchFieldHeightConstraint;
@property __weak NSLayoutConstraint *replaceSegmentControlWidth; // @synthesize replaceSegmentControlWidth=_replaceSegmentControlWidth;
@property __weak NSLayoutConstraint *findSearchFieldLeadingConstraint; // @synthesize findSearchFieldLeadingConstraint=_findSearchFieldLeadingConstraint;
@property __weak NSSegmentedControl *doneSegmentedButtom; // @synthesize doneSegmentedButtom=_doneSegmentedButtom;
@property __weak NSSegmentedControl *replaceSegmentedControl; // @synthesize replaceSegmentedControl=_replaceSegmentedControl;
@property __weak NSView *findBarView; // @synthesize findBarView=_findBarView;
@property BOOL recentsNeedUpdate; // @synthesize recentsNeedUpdate=_recentsNeedUpdate;
@property double preferredViewHeight; // @synthesize preferredViewHeight=_preferredViewHeight;
@property(nonatomic) BOOL hasResults; // @synthesize hasResults=_hasResults;
@property BOOL canReplace; // @synthesize canReplace=_canReplace;
@property(nonatomic) unsigned long long finderMode; // @synthesize finderMode=_finderMode;
@property(copy, nonatomic) NSAttributedString *replaceAttributedString; // @synthesize replaceAttributedString=_replaceAttributedString;
@property(copy, nonatomic) NSAttributedString *findAttributedString; // @synthesize findAttributedString=_findAttributedString;
@property(retain, nonatomic) id findObject; // @synthesize findObject=_findObject;
@property(retain) NSObject<DVTFindBarHostable> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)didPressDismissOnScopeBar:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)_endedEditing:(id)arg1;
- (void)findBarLostFocus;
- (void)controlTextDidChange:(id)arg1;
- (void)findPatternField:(id)arg1 findPatternDoubleClicked:(id)arg2;
- (BOOL)hasFindPattern;
- (id)replaceFieldForField:(id)arg1;
- (id)findFieldForField:(id)arg1;
- (id)_replaceField;
- (id)_findField;
- (BOOL)supportsPatterns;
- (id)_recentsMenu;
- (void)_showFindOptionsPopover:(id)arg1;
- (void)_clearRecents;
- (void)_restoreFindHistory:(id)arg1;
- (void)_replaceSegmentedControlClicked:(id)arg1;
- (void)_dismiss:(id)arg1;
- (void)_replaceAllInSelectionButtonAction:(id)arg1;
- (void)_segmentedControlAction:(id)arg1;
- (void)_replaceStringFieldAction:(id)arg1;
- (void)_findStringFieldAction:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_insertFindPattern:(id)arg1;
- (void)_optionsChanged:(id)arg1;
- (BOOL)supportsCaseInsensitiveMatch;
- (BOOL)supportsTextMatchStyle:(unsigned long long)arg1;
- (BOOL)supportsFindBarMode:(unsigned long long)arg1;
- (BOOL)supportsFindBarType:(unsigned long long)arg1;
- (void)performFindHighlightingFirstResult:(BOOL)arg1 informDelegate:(BOOL)arg2;
- (void)clearResults;
- (void)updateStatusInformingDelegate:(BOOL)arg1;
- (void)invalidateResults;
- (void)invalidateResultsAndUpdate:(BOOL)arg1;
- (double)invalidationDelayInterval;
- (void)_updateAfterInvalidate:(id)arg1;
- (void)changeFinderMode:(id)arg1;
- (void)replaceAllInSelection:(id)arg1;
- (void)replaceAll:(id)arg1;
- (void)replaceAndFindPrevious:(id)arg1;
- (void)replaceAndFindNext:(id)arg1;
- (void)replace:(id)arg1;
@property(readonly) BOOL supportsReplace;
- (void)findPrevious:(id)arg1;
- (void)findNext:(id)arg1;
@property(readonly) BOOL replaceFieldHasFocus;
- (void)selectReplaceField:(id)arg1;
@property(readonly) BOOL findFieldHasFocus;
- (void)selectFindField:(id)arg1;
@property(readonly) BOOL viewIsInstalled;
@property(readonly) DVTFindBarOptionsCtrl *optionsCtrl;
@property(readonly) DVTLogAspect *logAspect;
@property BOOL ignoreNextInvalidate;
@property BOOL findResultsValid;
- (BOOL)shouldCloseOnEscape;
- (void)wasAssociatedWithScopeBarController:(id)arg1;
@property(readonly, copy, nonatomic) NSString *replaceExpression;
@property(copy) NSString *replaceString;
@property(readonly, copy, nonatomic) NSString *findRegularExpression;
@property(copy, nonatomic) NSString *findString;
- (void)setFindAttributedStringAndUpdate:(id)arg1;
- (void)setFindAttributedString:(id)arg1 andUpdate:(BOOL)arg2;
- (void)updateRecentsMenu;
- (void)sanitizeStrings;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)_updateSharedFindStateReplaceAttributedString:(id)arg1;
- (void)_updateSharedFindStateFindAttributedString:(id)arg1;
- (void)windowDidUpdate:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

