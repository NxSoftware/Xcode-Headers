//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEEditorDocument.h>

@class CoreMLCompilerProxy;

@interface _TtC19IDEMLKitModelEditor18MLKitModelDocument : IDEEditorDocument
{
    // Error parsing type: , name: isDependencyavailable
    // Error parsing type: , name: contents
    // Error parsing type: , name: compiler
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) BOOL canSave;
- (BOOL)isDependencySupported;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
@property(nonatomic, readonly) CoreMLCompilerProxy *compiler; // @synthesize compiler;
- (void)didExternallyRelocateFileContent;
@property(nonatomic) BOOL isDependencyavailable; // @synthesize isDependencyavailable;

@end
