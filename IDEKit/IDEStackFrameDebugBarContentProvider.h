//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEDebugBarContentProvider.h>

#import <IDEKit/IDEPathCellDelegate-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, IDENavigableItem, IDENavigableItemCoordinator, IDEPathControl, NSArray, NSString;

@interface IDEStackFrameDebugBarContentProvider : IDEDebugBarContentProvider <IDEPathCellDelegate>
{
    IDEPathControl *_pathControl;
    IDENavigableItemCoordinator *_navigableItemCoordinator;
    IDENavigableItem *_rootNavigableItem;
    IDENavigableItem *_selectedItem;
    DVTObservingToken *_rootNavigableChildItemsObservingToken;
    DVTObservingToken *_currentStackFrameObserverToken;
    DVTObservingToken *_selectedNavigableItemFrameObserverToken;
    DVTObservingToken *_debugSessionStateObserverToken;
    DVTObservingToken *_launchSessionStateObserverToken;
    DVTObservingToken *_executionEnvironmentObserverToken;
    DVTNotificationToken *_forgetNavigableItemsObserverToken;
    BOOL _handlingSetSelectedItem;
}

+ (id)keyPathsForValuesAffectingNavigableDebugItems;
+ (BOOL)automaticallyNotifiesObserversOfSelectedItem;
+ (Class)debugSessionControllerClass;
@property(retain, nonatomic) IDENavigableItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) IDENavigableItem *rootNavigableItem; // @synthesize rootNavigableItem=_rootNavigableItem;
@property(readonly) IDENavigableItemCoordinator *navigableItemCoordinator; // @synthesize navigableItemCoordinator=_navigableItemCoordinator;
@property(retain) IDEPathControl *pathControl; // @synthesize pathControl=_pathControl;
- (void).cxx_destruct;
- (double)xOffsetForSharedLibrariesPopUpAnchoredOnDebugBar:(id)arg1;
- (struct CGRect)additionalGrabRectOfDebugBar:(id)arg1 inTermsOfView:(id)arg2;
- (void)willBeDetachedFromDebugBar:(id)arg1;
- (void)_selectItemBasedOnDebugSessionState;
- (void)_handleDebugBarSelectedModelItemChanged;
- (void)wasAttachedToDebugBar:(id)arg1;
- (id)pathCell:(id)arg1 menuItemForNavigableItem:(id)arg2 defaultMenuItem:(id)arg3;
- (id)pathCell:(id)arg1 childItemsForItem:(id)arg2;
- (void)_forgetNavigableItems:(id)arg1;
- (void)currentStackFrameDidChange:(id)arg1;
@property(readonly) BOOL hasRealDebugSession;
- (void)currentDebugSessionStateDidChange;
- (void)currentDebugSessionDidChange;
- (BOOL)_userIsCurrentlyCPUDebugging;
@property(readonly) NSArray *navigableDebugItems;
- (void)_retrySetSelectedItem;
- (void)_simpleSetSelectedItemWithKVO:(id)arg1;
- (void)removeRootNavigableItemFromCoordinator;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

