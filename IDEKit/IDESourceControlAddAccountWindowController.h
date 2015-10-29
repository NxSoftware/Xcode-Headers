//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "IDESourceControlCredentialViewDelegate.h"

@class DVTReplacementView, DVTSourceControlRemoteRepository, NSButton, NSPopUpButton, NSString, NSTextField, NSWindow;

@interface IDESourceControlAddAccountWindowController : NSWindowController <IDESourceControlCredentialViewDelegate>
{
    DVTSourceControlRemoteRepository *_repository;
    NSWindow *_parentWindow;
    unsigned long long _disableCount;
    NSButton *_addButton;
    NSButton *_cancelButton;
    NSTextField *_addressField;
    NSPopUpButton *_typeButton;
    DVTReplacementView *_replacementView;
}

@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property __weak NSPopUpButton *typeButton; // @synthesize typeButton=_typeButton;
@property __weak NSTextField *addressField; // @synthesize addressField=_addressField;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSButton *addButton; // @synthesize addButton=_addButton;
- (void).cxx_destruct;
- (void)cancel:(id)arg1;
- (void)add:(id)arg1;
- (void)_validateAuthentication;
- (void)beginSheetModalForWindow:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)windowDidLoad;
- (void)_enableView;
- (void)_disableView;
- (void)viewNeedsHeight:(double)arg1;
- (void)clearWarningAndProgressText;
- (void)showProgressText:(id)arg1;
- (void)showWarningText:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (id)credentialViewController;
- (id)windowNibName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
