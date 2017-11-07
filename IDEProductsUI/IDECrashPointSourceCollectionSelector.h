//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEProductsUI/IDEPathCellDelegate-Protocol.h>
#import <IDEProductsUI/NSPathControlDelegate-Protocol.h>

@class DVTCrashPointSourceCollection, DVTObservingToken, DVTProduct, DVTUserDefaultsLeastRecentlyUsedCache, IDENavigableItem, IDENavigableItemCoordinator, IDEPathControl, NSArray, NSButton, NSError, NSLayoutConstraint, NSString;

@interface IDECrashPointSourceCollectionSelector : IDEViewController <NSPathControlDelegate, IDEPathCellDelegate>
{
    BOOL _busy;
    BOOL _restoringSelectedNavigableItem;
    DVTProduct *_product;
    NSError *_currentError;
    IDEPathControl *_pathControl;
    NSButton *_errorButton;
    NSLayoutConstraint *_pathControlLeadingConstraintWithError;
    NSArray *_rootNavigables;
    IDENavigableItem *_selectedNavigable;
    IDENavigableItemCoordinator *_navItemCoordinator;
    NSLayoutConstraint *_pathControlLeadingConstraint;
    DVTObservingToken *_errorObserver;
    DVTUserDefaultsLeastRecentlyUsedCache *_selectedCrashPointSourceCache;
}

+ (id)keyPathsForValuesAffectingSelectedCrashPointSourceCollection;
@property(nonatomic, getter=isRestoringSelectedNavigableItem) BOOL restoringSelectedNavigableItem; // @synthesize restoringSelectedNavigableItem=_restoringSelectedNavigableItem;
@property(retain, nonatomic) DVTUserDefaultsLeastRecentlyUsedCache *selectedCrashPointSourceCache; // @synthesize selectedCrashPointSourceCache=_selectedCrashPointSourceCache;
@property(retain) DVTObservingToken *errorObserver; // @synthesize errorObserver=_errorObserver;
@property(retain) NSLayoutConstraint *pathControlLeadingConstraint; // @synthesize pathControlLeadingConstraint=_pathControlLeadingConstraint;
@property(retain, nonatomic) IDENavigableItemCoordinator *navItemCoordinator; // @synthesize navItemCoordinator=_navItemCoordinator;
@property(retain, nonatomic) IDENavigableItem *selectedNavigable; // @synthesize selectedNavigable=_selectedNavigable;
@property(retain, nonatomic) NSArray *rootNavigables; // @synthesize rootNavigables=_rootNavigables;
@property(retain) NSLayoutConstraint *pathControlLeadingConstraintWithError; // @synthesize pathControlLeadingConstraintWithError=_pathControlLeadingConstraintWithError;
@property __weak NSButton *errorButton; // @synthesize errorButton=_errorButton;
@property __weak IDEPathControl *pathControl; // @synthesize pathControl=_pathControl;
@property(nonatomic) BOOL busy; // @synthesize busy=_busy;
@property(retain) NSError *currentError; // @synthesize currentError=_currentError;
@property(retain, nonatomic) DVTProduct *product; // @synthesize product=_product;
- (void).cxx_destruct;
- (void)_saveCrashPointSourceCollectionSelectionState;
- (void)_restoreCrashPointSourceCollectionSelectionState;
- (id)_navigableItemForCrashPointSourceDict:(id)arg1 navigable:(id)arg2;
- (id)pathCell:(id)arg1 accessibilityDescriptionForPathComponentCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (BOOL)pathCell:(id)arg1 shouldSeparateDisplayOfChildItemsForItem:(id)arg2;
- (struct CGPoint)pathCell:(id)arg1 adjustPopupMenuLocation:(struct CGPoint)arg2;
- (unsigned long long)pathCell:(id)arg1 textAlignmentOfTitleForPathComponentCell:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)pathCellNoSelectionTitle;
- (void)primitiveInvalidate;
- (void)viewError:(id)arg1;
- (void)_showErrorButton:(BOOL)arg1;
- (void)_hideErrorButton;
- (void)_updateErrorPresentation;
- (void)_updateNavigables;
- (void)_invalidateRepresentedObjectsForNavigables:(id)arg1;
@property(readonly) DVTCrashPointSourceCollection *selectedCrashPointSourceCollection;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

