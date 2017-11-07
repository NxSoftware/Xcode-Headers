//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DBGViewDebuggerDocument, NSArray, NSMutableArray;

@interface DBGViewDebuggerDocumentIssueGenerator : NSObject
{
    NSMutableArray *_allIssues;
    DBGViewDebuggerDocument *_document;
}

@property(readonly) NSArray *allIssues; // @synthesize allIssues=_allIssues;
@property(readonly) __weak DBGViewDebuggerDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (void)_issuesChangedForContainer:(id)arg1;
- (void)_addIssueForAmbiguousView:(id)arg1;
- (BOOL)_viewRepresentsAWindow:(id)arg1;
- (BOOL)_shouldIgnoreViewObject:(id)arg1 options:(id)arg2;
- (void)_recursivelyGenerateAmbiguousConstraintsIssuesForView:(id)arg1 options:(id)arg2;
- (void)generateAmbiguousConstraintsIssuesForAllWindowsWithOptions:(id)arg1 issueContainer:(id)arg2;
- (void)generateIssuesForAllWindowsWithOptions:(id)arg1 issueContainer:(id)arg2;
- (void)clearAllIssues;
- (id)issuesAffectingViewObject:(id)arg1 ofType:(unsigned long long)arg2;
- (id)initWithDocument:(id)arg1;

@end

