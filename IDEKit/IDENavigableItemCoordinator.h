//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEKit/DVTInvalidation-Protocol.h>

@class DVTDelayedInvocation, DVTModelGraphTransactionScope, DVTStackBacktrace, NSHashTable, NSMapTable, NSMutableOrderedSet, NSString;
@protocol IDENavigableItemCoordinatorDelegate;

@interface IDENavigableItemCoordinator : NSObject <DVTInvalidation>
{
    NSHashTable *_coordinatedItems;
    NSMapTable *_documentsByNavItem;
    NSMapTable *_domainIdentifiersByNavItem;
    NSMapTable *_rootItemsByRepresentedObject;
    DVTDelayedInvocation *_postPendingChangesInvocation;
    NSMutableOrderedSet *_pendingGraphChangedItems;
    NSMutableOrderedSet *_pendingArrangedGraphChangedItems;
    NSMutableOrderedSet *_pendingPropertyChangedItems;
    DVTModelGraphTransactionScope *_transactionScope;
    NSHashTable *_pendingForgettingItems;
    id <IDENavigableItemCoordinatorDelegate> _delegate;
    struct __nicFlags {
        unsigned int _delegateRespondsToDocumentForNavigableItem:1;
        unsigned int _hasWarnedAboutRootItemsCount:1;
        unsigned int _isInvalidating:1;
    } _nicFlags;
}

+ (BOOL)temporaryStructureItemForDocumentURL:(id)arg1 forWorkspace:(id)arg2 error:(id *)arg3 inScope:(CDUnknownBlockType)arg4;
+ (BOOL)temporaryItemForArchivableRepresentation:(id)arg1 forWorkspace:(id)arg2 error:(id *)arg3 inScope:(CDUnknownBlockType)arg4;
+ (void)temporaryItemInDomain:(id)arg1 forWorkspace:(id)arg2 inScope:(CDUnknownBlockType)arg3;
+ (void)temporaryItemForRepresentedObject:(id)arg1 inScope:(CDUnknownBlockType)arg2;
+ (void)_invalidateTemporaryCoordinator;
+ (void)initialize;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
- (void).cxx_destruct;
- (void)forgetEditorDocument:(id)arg1;
- (id)editorDocumentForNavigableItem:(id)arg1;
- (void)_editorDocumentWillClose:(id)arg1;
- (void)forgetNavigableItem:(id)arg1;
- (void)forgetNavigableItems:(id)arg1;
- (void)_forgetItems:(id)arg1;
- (void)closeDocumentsForItems:(id)arg1;
- (void)_collectDescendants:(id)arg1 toForgetForItem:(id)arg2;
- (void)registerNavigableItem:(id)arg1;
- (int)_filterCurrentGeneration;
- (id)_arrangedChildItemsOfItem:(id)arg1;
- (void)processPendingChanges;
- (void)_noteNavigableItem:(id)arg1 valueWillChangeForProperty:(id)arg2;
- (void)_noteNavigableItemChangedArrangedChildItems:(id)arg1;
- (void)_noteNavigableItemChangedChildItems:(id)arg1;
- (void)_delayedPostGraphAndPropertyChangeNotifications;
- (void)_unhibernate;
- (void)_hibernate;
- (void)_postNotificationNamed:(id)arg1 forChangedItems:(id)arg2;
- (void)_postDidForgetNotificationAndPurgePendingForgottenItems;
- (void)_postWillForgetNotification:(id)arg1;
@property(retain, nonatomic) id <IDENavigableItemCoordinatorDelegate> delegate;
- (id)navigableItemFromArchivableRepresentation:(id)arg1 forWorkspace:(id)arg2 error:(id *)arg3;
- (id)_navigableItemFromArchivableRepresentation:(id)arg1 rootItem:(id)arg2 error:(id *)arg3;
- (id)_documentContentNavigableItemFromArchivableRepresentation:(id)arg1 documentItem:(id)arg2;
- (id)_childNavigableItemWithRepresentationIDs:(id)arg1 parentItem:(id)arg2 acceptPartialMatch:(BOOL)arg3;
- (id)rootNavigableItemInDomain:(id)arg1 forWorkspace:(id)arg2;
- (Class)domainProviderWithIdentifier:(id)arg1;
- (id)domainIdentifierForNavigableItem:(id)arg1;
- (id)_coordinatedItems;
- (id)_rootItemsByRepresentedObject;
- (id)_domainIdentifiersByNavItem;
- (id)_providersByDomain;
- (id)_navigableItemForFilePath:(id)arg1 inWorkspace:(id)arg2 withSeenFileReferences:(id)arg3 allowLeaf:(BOOL)arg4;
- (id)structureNavigableItemForDocumentURL:(id)arg1 inWorkspace:(id)arg2 error:(id *)arg3;
- (id)_structureNavigableItemForNonFileURL:(id)arg1 inWorkspace:(id)arg2 error:(id *)arg3;
- (id)_structureNavigableItemForNonFileURL:(id)arg1 domainExtension:(id)arg2 inWorkspace:(id)arg3 error:(id *)arg4;
- (id)_structureNavigableItemForFileURL:(id)arg1 inWorkspace:(id)arg2 error:(id *)arg3;
- (id)rootNavigableItemWithRepresentedObject:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

