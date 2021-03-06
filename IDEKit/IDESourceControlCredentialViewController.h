//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <IDEKit/IDESourceControlSSHKeyCredentialViewDelegate-Protocol.h>

@class DVTCopyTextField, DVTSourceControlAuthenticationStrategy, DVTSourceControlBasicAuthenticationStrategy, DVTSourceControlSSHKeysAuthenticationStrategy, IDESourceControlSSHKeyCredentialViewController, NSPopUpButton, NSString, NSTextField, NSURL, NSView, _TtC6IDEKit38IDESourceControlSSHKeyWindowController;
@protocol DVTSourceControlAccount, DVTSourceControlCancellable, IDESourceControlCredentialViewDelegate;

@interface IDESourceControlCredentialViewController : DVTViewController <IDESourceControlSSHKeyCredentialViewDelegate>
{
    BOOL _sshAllowed;
    BOOL _showingSSHStrategy;
    BOOL _urlValid;
    BOOL _showingAnonymousStrategy;
    BOOL _enableAnonymousStrategy;
    BOOL _showingNewKeysStrategy;
    BOOL _enableNewKeysStrategy;
    unsigned long long _disableCount;
    id <DVTSourceControlAccount> _account;
    DVTSourceControlBasicAuthenticationStrategy *_basicStrategy;
    DVTSourceControlSSHKeysAuthenticationStrategy *_newKeysStrategy;
    DVTSourceControlSSHKeysAuthenticationStrategy *_existingKeysStrategy;
    NSString *_sshKeyComment;
    IDESourceControlSSHKeyCredentialViewController *_sshFileViewController;
    _TtC6IDEKit38IDESourceControlSSHKeyWindowController *_createSSHKeysWindowController;
    BOOL _liveUpdate;
    BOOL _liveReflight;
    id <IDESourceControlCredentialViewDelegate> _delegate;
    NSURL *_sshKeyFolderURL;
    NSString *_urlUsername;
    NSString *_urlPassword;
    id <DVTSourceControlCancellable> _validateToken;
    NSTextField *_usernameLabel;
    NSTextField *_usernameField;
    NSTextField *_passwordField;
    DVTCopyTextField *_sshGeneratedKeyField;
    NSPopUpButton *_credentialTypeButton;
    NSView *_replacementView;
    NSView *_passwordView;
    NSView *_sshNewView;
}

@property(retain) NSView *sshNewView; // @synthesize sshNewView=_sshNewView;
@property(retain) NSView *passwordView; // @synthesize passwordView=_passwordView;
@property __weak NSView *replacementView; // @synthesize replacementView=_replacementView;
@property __weak NSPopUpButton *credentialTypeButton; // @synthesize credentialTypeButton=_credentialTypeButton;
@property __weak DVTCopyTextField *sshGeneratedKeyField; // @synthesize sshGeneratedKeyField=_sshGeneratedKeyField;
@property __weak NSTextField *passwordField; // @synthesize passwordField=_passwordField;
@property __weak NSTextField *usernameField; // @synthesize usernameField=_usernameField;
@property __weak NSTextField *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(retain) id <DVTSourceControlCancellable> validateToken; // @synthesize validateToken=_validateToken;
@property(retain) NSString *urlPassword; // @synthesize urlPassword=_urlPassword;
@property(retain) NSString *urlUsername; // @synthesize urlUsername=_urlUsername;
@property(retain) NSURL *sshKeyFolderURL; // @synthesize sshKeyFolderURL=_sshKeyFolderURL;
@property BOOL liveReflight; // @synthesize liveReflight=_liveReflight;
@property BOOL liveUpdate; // @synthesize liveUpdate=_liveUpdate;
@property __weak id <IDESourceControlCredentialViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)_currentCredentialType;
@property(readonly) DVTSourceControlAuthenticationStrategy *strategy;
- (void)updateViewHeight:(double)arg1;
- (void)updateSSHKeyViewHeight:(double)arg1;
- (void)changeCredentialType:(id)arg1;
- (void)validateAuthentication;
- (void)controlTextDidEndEditing:(id)arg1;
@property(getter=isEnabled) BOOL enabled;
- (void)focusPasswordField;
- (void)_enableView;
- (void)_disableView;
- (void)generateNewSSHKeys;
- (void)didSetSSHKeyAuthenticationStrategy:(id)arg1 error:(id)arg2;
- (void)viewDidLoad;
- (void)setNewSSHKeyFolder:(id)arg1;
- (void)setSSHKeyComment:(id)arg1;
@property BOOL sshAllowed;
- (void)updateURL:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setURL:(id)arg1 withAccount:(id)arg2;
- (void)_updateWithURL:(id)arg1;
- (BOOL)_usernameFieldEnabled;
@property BOOL enableNewKeysStrategy;
- (void)_updateNewKeysStrategyDisplay;
@property BOOL enableAnonymousStrategy;
- (void)_updateAnonymousStrategyDisplay;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

