//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTSourceCodeLanguage, IDEWorkspaceDocument;

@interface IDESourceCodeGenerator : NSObject
{
    IDEWorkspaceDocument *_workspaceDocument;
}

+ (id)alloc;
@property(readonly) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument=_workspaceDocument;
- (void).cxx_destruct;
- (id)commitInsertionOfSourceCodeForCompositeResult:(id)arg1 error:(id *)arg2;
- (id)prepareToAddSourceCodeForCounterparts:(id)arg1 documentLocationForCounterpartBlock:(CDUnknownBlockType)arg2 addSourceCodeForCounterpartBlock:(CDUnknownBlockType)arg3 options:(id)arg4 error:(id *)arg5;
- (id)effectiveInsertionOptionsFromBaseOptions:(id)arg1 forCounterpart:(id)arg2 lineHintingCounterpart:(id)arg3 insertBeforeHint:(id)arg4 insertAfterHint:(id)arg5;
- (void)releaseEditorDocumentsFromEditorDocumentComponents:(id)arg1;
- (id)editorDocumentComponentsForCounterparts:(id)arg1 documentLocationForCounterpartBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
@property(readonly) DVTSourceCodeLanguage *generatedLanguage;
- (id)classSymbolForClassNamed:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithWorkspaceDocument:(id)arg1;

@end

