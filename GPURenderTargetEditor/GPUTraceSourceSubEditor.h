//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GPURenderTargetEditor/GPUTraceSubEditor.h>

#import <GPURenderTargetEditor/DVTFindBarFindable-Protocol.h>
#import <GPURenderTargetEditor/DVTSourceTextViewDelegate-Protocol.h>

@class GPUInferiorSession, GPUSimpleSourceView, GPUSourceStorage, GPUTraceSession, GPUTraceShaderItem, NSString, NSTabView, NSView;
@protocol GPUTraceSourceSubEditorDelegate;

__attribute__((visibility("hidden")))
@interface GPUTraceSourceSubEditor : GPUTraceSubEditor <DVTSourceTextViewDelegate, DVTFindBarFindable>
{
    NSView *mainView;
    NSTabView *tabView;
    GPUSimpleSourceView *sourceView;
    GPUSourceStorage *_sourceStorage;
    id <GPUTraceSourceSubEditorDelegate> _delegate;
}

+ (void)setSourceStorage:(id)arg1 forShaderItem:(id)arg2 forSession:(id)arg3;
+ (id)sourceStorageForShaderItem:(id)arg1 forSession:(id)arg2;
+ (id)_shaderSourceKey:(id)arg1;
+ (void)initialize;
@property(nonatomic) __weak id <GPUTraceSourceSubEditorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) GPUSourceStorage *sourceStorage; // @synthesize sourceStorage=_sourceStorage;
- (void).cxx_destruct;
- (void)updateProgram:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)annotationContextForTextView:(id)arg1;
- (struct _NSRange)selectedRangeForFindBar:(id)arg1;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateCurrentResult:(id)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
- (BOOL)findBarSupported;
- (void)_onSourceStorageEdited:(id)arg1;
- (void)_tearDownTextEditingObservers;
- (void)_setUpTextEditingObservers;
- (void)_tearDownTextPreferencesObservers;
- (void)_setUpTextPreferencesObservers;
- (void)_teardownShaderSource;
- (BOOL)_setupSourceStorage;
- (id)_createSourceStorage:(id)arg1;
- (BOOL)_editorIsActive;
- (void)resetFontSize:(id)arg1;
- (void)decreaseFontSize:(id)arg1;
- (void)increaseFontSize:(id)arg1;
- (void)_endEditor;
- (void)_beginEditor;
- (void)handleNotification:(id)arg1;
- (void)setRepresentedObject:(id)arg1 userInfo:(id)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;
@property(readonly) GPUTraceSession *traceSession;
@property(readonly) GPUInferiorSession *inferiorSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain) GPUTraceShaderItem *representedObject; // @dynamic representedObject;
@property(readonly) Class superclass;

@end

