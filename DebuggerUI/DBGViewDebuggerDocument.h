//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@class DBGViewDebugger, DBGViewDebuggerDocumentIssueGenerator, DVTObservingToken;

@interface DBGViewDebuggerDocument : IDEEditorDocument
{
    DVTObservingToken *_controlStateObserver;
    DVTObservingToken *_coalescedStateObserver;
    DBGViewDebugger *_viewDebugger;
    DBGViewDebuggerDocumentIssueGenerator *_issueGenerator;
}

+ (id)documentForViewDebugger:(id)arg1;
@property(retain) DBGViewDebuggerDocumentIssueGenerator *issueGenerator; // @synthesize issueGenerator=_issueGenerator;
@property(retain) DBGViewDebugger *viewDebugger; // @synthesize viewDebugger=_viewDebugger;
- (void).cxx_destruct;
- (id)_viewDebuggerForURL:(id)arg1 inWorkspace:(id)arg2;
- (id)_viewDebuggerForURL:(id)arg1;
- (id)viewObjectForLocation:(id)arg1;
- (id)displayName;
- (int)readOnlyStatus;
- (void)editorDocumentDidClose;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)_closeDocumentIfNecessary;
- (id)initForURL:(id)arg1 withContentsOfURL:(id)arg2 ofType:(id)arg3 error:(id *)arg4;

@end

