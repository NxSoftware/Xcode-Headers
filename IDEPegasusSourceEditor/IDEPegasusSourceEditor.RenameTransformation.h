//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDEPegasusSourceEditor/IDERefactoringTransformation-Protocol.h>

@class IDEIndexSymbol, IDEWorkspaceDocument, NSString;

@interface IDEPegasusSourceEditor.RenameTransformation : NSObject <IDERefactoringTransformation>
{
    // Error parsing type: , name: oldName
    // Error parsing type: , name: selectedSymbol
    // Error parsing type: , name: workspaceDocument
    // Error parsing type: , name: renameNewName
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic, copy) NSString *renameNewName; // @synthesize renameNewName;
@property(nonatomic, readonly) NSString *renameOldName;
- (id)initWithSelectedSymbol:(id)arg1 workspaceDocument:(id)arg2 oldName:(id)arg3 newName:(id)arg4;
@property(nonatomic, retain) IDEWorkspaceDocument *workspaceDocument; // @synthesize workspaceDocument;
@property(nonatomic, retain) IDEIndexSymbol *selectedSymbol; // @synthesize selectedSymbol;
@property(nonatomic, copy) NSString *oldName; // @synthesize oldName;

@end

