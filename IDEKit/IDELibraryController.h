//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTLibraryController.h>

@class DVTObservingToken;

@interface IDELibraryController : DVTLibraryController
{
    DVTObservingToken *_activeEditorDocumentKVOToken;
}

- (void).cxx_destruct;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)workspaceWindowController;
- (void)activeEditorDocumentDidChange:(id)arg1;

@end

