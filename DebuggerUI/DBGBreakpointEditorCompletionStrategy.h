//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTTextCompletionStrategy.h>

@class DVTTextDocumentLocation, IDEEditorDocument, NSDictionary;
@protocol DVTSourceLanguagePrimaryCompletionStrategy;

@interface DBGBreakpointEditorCompletionStrategy : DVTTextCompletionStrategy
{
    NSDictionary *_indexCompletionsRequestDictionary;
    DVTTextDocumentLocation *_locationInAdjustedText;
    id <DVTSourceLanguagePrimaryCompletionStrategy> _completionStrategy;
    IDEEditorDocument *_document;
}

- (void).cxx_destruct;
- (id)completionItemsForDocumentLocation:(id)arg1 context:(id)arg2 highlyLikelyCompletionItems:(id *)arg3 areDefinitive:(char *)arg4;
- (void)prepareForDocumentLocation:(id)arg1 context:(id)arg2;

@end

