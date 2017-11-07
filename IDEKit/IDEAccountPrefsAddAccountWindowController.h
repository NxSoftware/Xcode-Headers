//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import <IDEKit/NSTableViewDataSource-Protocol.h>
#import <IDEKit/NSTableViewDelegate-Protocol.h>

@class NSArray, NSButton, NSString, NSTableView, NSWindow;

@interface IDEAccountPrefsAddAccountWindowController : NSWindowController <NSTableViewDelegate, NSTableViewDataSource>
{
    CDUnknownBlockType _completion;
    IDEAccountPrefsAddAccountWindowController *_currentWindowController;
    NSWindow *_hostWindow;
    long long _accountType;
    NSTableView *_table;
    NSButton *_continueButton;
    NSArray *_accountTypesSnapshot;
}

@property(retain, nonatomic) NSArray *accountTypesSnapshot; // @synthesize accountTypesSnapshot=_accountTypesSnapshot;
@property __weak NSButton *continueButton; // @synthesize continueButton=_continueButton;
@property __weak NSTableView *table; // @synthesize table=_table;
@property(nonatomic) long long accountType; // @synthesize accountType=_accountType;
@property(nonatomic) __weak NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
- (void).cxx_destruct;
- (void)cancelClick:(id)arg1;
- (void)_endSheet:(long long)arg1;
- (void)continueClick:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)accountTypes;
- (void)beginSheetModalForWindow:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)windowNibName;
- (void)close;
- (void)windowDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

