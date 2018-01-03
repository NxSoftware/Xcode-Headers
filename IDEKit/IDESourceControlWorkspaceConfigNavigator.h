//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/NSTableViewDataSource-Protocol.h>
#import <IDEKit/NSTableViewDelegate-Protocol.h>

@class DVTSourceControlWorkingCopy, DVTSourceControlWorkspace, DVTTableView, NSString;

@interface IDESourceControlWorkspaceConfigNavigator : IDEViewController <NSTableViewDelegate, NSTableViewDataSource>
{
    DVTSourceControlWorkspace *_sourceControlWorkspace;
    DVTTableView *_tableView;
    DVTSourceControlWorkingCopy *_selectedWorkingCopy;
}

@property(retain) DVTSourceControlWorkingCopy *selectedWorkingCopy; // @synthesize selectedWorkingCopy=_selectedWorkingCopy;
@property(retain) DVTTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)tableView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)doubleClickAction:(id)arg1;
@property(retain, nonatomic) DVTSourceControlWorkspace *sourceControlWorkspace; // @synthesize sourceControlWorkspace=_sourceControlWorkspace;
- (void)viewDidInstall;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

