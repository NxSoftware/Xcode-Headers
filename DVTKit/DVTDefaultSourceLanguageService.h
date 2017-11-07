//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTSourceLanguageService.h>

#import <DVTKit/DVTSourceLandmarkItemDelegate-Protocol.h>
#import <DVTKit/DVTSourceLanguageSourceModelService-Protocol.h>
#import <DVTKit/DVTSourceLanguageSyntaxTypeService-Protocol.h>

@class DVTSourceModel, NSString, _DVTDefaultSourceLanguageServiceFormatOptions;

@interface DVTDefaultSourceLanguageService : DVTSourceLanguageService <DVTSourceLanguageSyntaxTypeService, DVTSourceLanguageSourceModelService, DVTSourceLandmarkItemDelegate>
{
    DVTSourceModel *_sourceModel;
    _DVTDefaultSourceLanguageServiceFormatOptions *_formatOptions;
}

+ (void)enumerateSupportedContextScopesForLanguage:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)_formatBlockLiteralFromDeclaration:(id)arg1;
- (id)expandPlaceholderInRange:(struct _NSRange)arg1 suggestedText:(id)arg2 effectiveRange:(struct _NSRange *)arg3;
- (struct _NSRange)suggestedExpressionSelectionRangeFromRange:(struct _NSRange)arg1;
- (id)postProcessAutoInsertClosingBraceAtLocation:(unsigned long long)arg1;
- (struct _NSRange)_typeOverCompletionToSkipOverAtLocation:(unsigned long long)arg1 withInsertionText:(id)arg2 typeOverCompletions:(id)arg3;
- (void)contextJumpForTypeOverCompletionAtLocation:(unsigned long long)arg1 withInsertionText:(id)arg2 typeOverCompletions:(id)arg3 pendingTypeOverCompletion:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)stringForItem:(id)arg1;
- (long long)languageIdentifierAtLocation:(unsigned long long)arg1;
- (id)commonSourceModelItemAtRange:(struct _NSRange)arg1;
- (id)sourceModelItemAtCharacterIndex:(unsigned long long)arg1;
- (id)sourceModelItemAtCharacterIndex:(unsigned long long)arg1 affinity:(unsigned long long)arg2;
- (id)sourceModelWithoutParsing;
- (id)sourceModel;
- (long long)commentCoverageInLineRange:(struct _NSRange)arg1;
- (id)indentLineRange:(struct _NSRange)arg1 effectiveLineRange:(struct _NSRange *)arg2;
- (long long)foldableBlockDepthForLineAtLocation:(unsigned long long)arg1;
- (struct _NSRange)foldableBlockInnerRangeForLineAtLocation:(unsigned long long)arg1;
- (struct _NSRange)foldableBlockRangeForLineAtLocation:(unsigned long long)arg1;
- (id)foldableBlockInnerRangesInRange:(struct _NSRange)arg1;
- (id)foldableBlockRangesAtLocation:(unsigned long long)arg1;
- (struct _NSRange)foldableBlockRangeAtLocation:(unsigned long long)arg1;
- (unsigned long long)indentOfBlockAtLocation:(unsigned long long)arg1;
- (unsigned long long)locationOfNextMatchedDelimiterAtLocation:(unsigned long long)arg1;
- (unsigned long long)locationOfPreviousMatchedDelimiterAtLocation:(unsigned long long)arg1;
- (unsigned long long)_indexOfNextSourceModelItemAtLocation:(long long)arg1 isForwards:(BOOL)arg2;
- (void)doingBatchEdit:(BOOL)arg1;
- (struct _NSRange)functionOrMethodBodyRangeAtIndex:(unsigned long long)arg1;
- (struct _NSRange)functionRangeAtIndex:(unsigned long long)arg1 isDefinitionOrCall:(char *)arg2;
- (struct _NSRange)methodDefinitionRangeAtIndex:(unsigned long long)arg1;
- (struct _NSRange)methodCallRangeAtIndex:(unsigned long long)arg1;
- (struct _NSRange)methodOrFunctionRangeAtIndex:(unsigned long long)arg1;
- (id)landmarkItemTypeNameForReference:(void *)arg1;
- (id)landmarkItemNameForReference:(void *)arg1 nameRange:(struct _NSRange *)arg2;
- (void)_addLandmarkItemsFromItem:(id)arg1 toParent:(id)arg2 matchingType:(CDUnknownBlockType)arg3 altParent:(id)arg4 matchingAltType:(CDUnknownBlockType)arg5 visitChildren:(CDUnknownBlockType)arg6;
- (void)generateLandmarkItemsForParent:(id)arg1 matchingType:(CDUnknownBlockType)arg2 altParent:(id)arg3 matchingAltType:(CDUnknownBlockType)arg4;
- (struct _NSRange)textCompletionSession:(id)arg1 replacementRangeForSuggestedRange:(struct _NSRange)arg2;
- (long long)contextScopeAtLocation:(unsigned long long)arg1;
- (id)scopeLanguageSpecificationIdentifiersAtLocation:(unsigned long long)arg1;
- (id)functionAndMethodRanges;
- (id)commentBlockRanges;
- (BOOL)isInTokenizableCodeAtLocation:(unsigned long long)arg1;
- (BOOL)isInPlainCodeAtLocation:(unsigned long long)arg1;
- (BOOL)isInKeywordAtLocation:(unsigned long long)arg1;
- (BOOL)isIncompletionPlaceholderAtLocation:(unsigned long long)arg1;
- (BOOL)isInNumberConstantAtLocation:(unsigned long long)arg1;
- (BOOL)isInCharacterConstantAtLocation:(unsigned long long)arg1;
- (BOOL)isInIdentifierAtLocation:(unsigned long long)arg1;
- (BOOL)isInStringConstantAtLocation:(unsigned long long)arg1;
- (BOOL)isInIncludeStatementAtLocation:(unsigned long long)arg1;
- (BOOL)isInPreprocessorStatementAtLocation:(unsigned long long)arg1;
- (BOOL)isInDocCommentAtLocation:(unsigned long long)arg1;
- (BOOL)isInCommentAtLocation:(unsigned long long)arg1;
- (long long)syntaxTypeAtCharacterIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 context:(id)arg3;
- (struct _NSRange)rangeOfWordAtIndex:(unsigned long long)arg1 allowNonWords:(BOOL)arg2;
- (BOOL)shouldAutoCompleteAtLocation:(unsigned long long)arg1 autoCompleteCharacterSet:(id)arg2 proposedAutoComplete:(BOOL)arg3;
- (id)autoCompleteChars;
- (BOOL)shouldShowTemporaryLinkForCharacterAtIndex:(unsigned long long)arg1 proposedRange:(struct _NSRange)arg2 effectiveRanges:(id *)arg3;
- (id)symbolNameAtCharacterIndex:(unsigned long long)arg1 nameRanges:(id *)arg2;
- (void)contextDidChange:(id)arg1;
- (id)initWithLanguage:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

