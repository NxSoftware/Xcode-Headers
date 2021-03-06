//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTAnnotationProvider.h>

#import <IDEPlaygroundEditor/DVTTextAnnotationDelegate-Protocol.h>

@class DVTObservingToken, IDEEditor, IDESourceCodePlaygroundSection, IDEWorkspaceTabController, NSMapTable, NSMutableOrderedSet, NSString;
@protocol IDEPlaygroundHostingEditor;

@interface IDESourceCodePlaygroundSectionAnnotationProvider : DVTAnnotationProvider <DVTTextAnnotationDelegate>
{
    IDESourceCodePlaygroundSection *_playgroundSection;
    NSMapTable *_accessoryViewAnnotationByLoggerResult;
    NSMutableOrderedSet *_oldLoggerResults;
    DVTObservingToken *_loggerResultsObservingToken;
    DVTObservingToken *_executionStateObservingToken;
    DVTObservingToken *_toysSelectedInRegisteredToyboxesObservingToken;
    IDEEditor<IDEPlaygroundHostingEditor> *_playgroundEditor;
    IDEWorkspaceTabController *_workspaceTabController;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
@property(retain) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(retain, nonatomic) IDEEditor<IDEPlaygroundHostingEditor> *playgroundEditor; // @synthesize playgroundEditor=_playgroundEditor;
- (void).cxx_destruct;
- (void)didDeleteOrReplaceParagraphForAnnotation:(id)arg1;
- (void)providerWillUninstall;
@property(retain) IDESourceCodePlaygroundSection *playgroundSection;
- (void)_updateQuickLookForAnnotation:(id)arg1;
- (void)_removeAccessoryViewAnnotationsForLoggerResults:(id)arg1;
- (void)_removeAllAccessoryViewAnnotations;
- (void)resetEditor:(id)arg1;
- (void)_insertAccessoryViewAnnotationForExecutionResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

