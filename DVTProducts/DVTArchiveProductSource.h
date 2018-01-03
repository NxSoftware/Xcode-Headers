//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTProducts/DVTProductSource.h>

@class DVTDelayedInvocation, DVTObservingToken, IDEArchiveManager;

@interface DVTArchiveProductSource : DVTProductSource
{
    BOOL _hasCompletedInitialLoading;
    IDEArchiveManager *_archiveManager;
    DVTObservingToken *_archivedProductsObservingToken;
    DVTDelayedInvocation *_updateArchivesDelayedInvocation;
}

@property(retain, nonatomic) DVTDelayedInvocation *updateArchivesDelayedInvocation; // @synthesize updateArchivesDelayedInvocation=_updateArchivesDelayedInvocation;
@property(retain) DVTObservingToken *archivedProductsObservingToken; // @synthesize archivedProductsObservingToken=_archivedProductsObservingToken;
@property(retain, nonatomic) IDEArchiveManager *archiveManager; // @synthesize archiveManager=_archiveManager;
@property BOOL hasCompletedInitialLoading; // @synthesize hasCompletedInitialLoading=_hasCompletedInitialLoading;
- (void).cxx_destruct;
- (void)dealloc;
- (id)productsFromArchives:(id)arg1 coordinator:(id)arg2;
- (id)mostRecentArchive:(id)arg1;
- (void)addArchive:(id)arg1 toMalformedProductsDict:(id)arg2;
- (void)_addArchive:(id)arg1 productVersionIdentifierToArchives:(id)arg2;
- (void)prioritizeDeliveryOfResultsForProductIdentifier:(id)arg1;
- (void)refreshProductsWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshProducts;
- (void)startLocating;
- (void)updateArchivesWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithArchiveManager:(id)arg1 productManager:(id)arg2;
- (id)initWithProductManager:(id)arg1;

@end

