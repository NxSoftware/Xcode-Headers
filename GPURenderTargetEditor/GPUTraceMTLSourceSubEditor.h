//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GPURenderTargetEditor/GPUTraceSourceSubEditor.h>

#import <GPURenderTargetEditor/GPUTraceSourceSubEditorDelegate-Protocol.h>

@class DVTAnnotationContext, DVTSourceCodeLanguage, GPUShaderSourceDocument, NSString;

__attribute__((visibility("hidden")))
@interface GPUTraceMTLSourceSubEditor : GPUTraceSourceSubEditor <GPUTraceSourceSubEditorDelegate>
{
    DVTAnnotationContext *_annotationContext;
    GPUShaderSourceDocument *_sourceDocument;
}

- (void).cxx_destruct;
- (void)_gpu_selectDocumentLocations:(id)arg1 highlightSelection:(BOOL)arg2;
- (id)annotationContextForTextView:(id)arg1;
- (void)_refreshView;
- (void)_tearDownObservers;
- (void)_setUpObservers;
- (void)editorSourceCodeDidChange;
- (void)editorDidEnd;
- (void)editorDidBegin;
@property(readonly) BOOL sourceCodeIsEditable;
@property(readonly) DVTSourceCodeLanguage *sourceCodeLanguage;
@property(readonly) NSString *sourceCode;
- (void)loadView;
- (id)annotationContext;
- (id)sourceDocument;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
