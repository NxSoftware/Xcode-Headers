//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEFoundation/IDEBatchFindAbstractQuery.h>

@interface IDEBatchFindAbstractSymbolicQuery : IDEBatchFindAbstractQuery
{
}

+ (id)queryTermPlaceholderText;
+ (BOOL)supportsCaseMatching;
+ (BOOL)supportsAnchorning;
- (void)execute;
- (BOOL)requiresEditorDocumentsToSaveBeforeSearching;
- (id)occurenceCollectionsForSymbol:(id)arg1;
- (id)makeRootResult;

@end

