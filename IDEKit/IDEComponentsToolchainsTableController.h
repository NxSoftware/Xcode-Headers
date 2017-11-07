//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/NSMenuDelegate-Protocol.h>
#import <IDEKit/NSTableViewDelegate-Protocol.h>

@class DVTBorderedView, DVTTableView, DVTToolchainOverrideOptionProvider, DVTToolchainRegistry, IDEComponentsToolchainsTableRowItem, NSArray, NSScrollView, NSString;

@interface IDEComponentsToolchainsTableController : IDEViewController <NSTableViewDelegate, NSMenuDelegate>
{
    IDEComponentsToolchainsTableRowItem *_contextItem;
    DVTToolchainRegistry *_toolchainRegistry;
    DVTToolchainOverrideOptionProvider *_optionProvider;
    NSArray *_items;
    DVTTableView *_tableView;
    NSScrollView *_tableScrollView;
    DVTBorderedView *_tableBorderedView;
}

+ (BOOL)shouldShow;
@property(retain) DVTBorderedView *tableBorderedView; // @synthesize tableBorderedView=_tableBorderedView;
@property(retain) NSScrollView *tableScrollView; // @synthesize tableScrollView=_tableScrollView;
@property(retain) DVTTableView *tableView; // @synthesize tableView=_tableView;
@property(retain) NSArray *items; // @synthesize items=_items;
@property(retain) DVTToolchainOverrideOptionProvider *optionProvider; // @synthesize optionProvider=_optionProvider;
@property(retain) DVTToolchainRegistry *toolchainRegistry; // @synthesize toolchainRegistry=_toolchainRegistry;
- (void).cxx_destruct;
- (void)showValidationError:(id)arg1;
- (void)showContext:(id)arg1;
- (void)_verifyCodeSignature:(id)arg1;
- (void)_moveToTrash:(id)arg1;
- (void)_showInFinder:(id)arg1;
- (void)switchToToolchain:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)toolchainItemForContextAction;
- (id)itemAtIndex:(long long)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

