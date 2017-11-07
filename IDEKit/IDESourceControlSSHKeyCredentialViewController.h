//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class DVTCopyTextField, DVTFilePathField, DVTSourceControlSSHKeysAuthenticationStrategy, NSButton, NSError, NSImageView, NSStackView, NSString, NSTextField, NSView, _TtC6IDEKit38IDESourceControlSSHKeyWindowController;
@protocol IDESourceControlSSHKeyCredentialViewDelegate;

@interface IDESourceControlSSHKeyCredentialViewController : NSViewController
{
    DVTSourceControlSSHKeysAuthenticationStrategy *_sshKeysAuthStrategy;
    _TtC6IDEKit38IDESourceControlSSHKeyWindowController *_sshKeyValidationWindowController;
    NSError *_currentError;
    NSString *_URLDerivedUsername;
    id <IDESourceControlSSHKeyCredentialViewDelegate> _delegate;
    DVTCopyTextField *_sshFilePublicKeyField;
    DVTFilePathField *_sshFilePrivateKeyPathField;
    NSView *_fingerprintView;
    DVTCopyTextField *_fingerprintField;
    NSView *_generateOrNewView;
    NSView *_publicKeyView;
    NSView *_privateKeyView;
    NSView *_errorView;
    NSView *_enterPassphraseView;
    NSButton *_enterPassphraseButton;
    NSImageView *_errorIconImageView;
    NSTextField *_errorTextField;
    NSStackView *_stackView;
    NSStackView *_keysContainerView;
}

@property __weak NSStackView *keysContainerView; // @synthesize keysContainerView=_keysContainerView;
@property(retain) NSStackView *stackView; // @synthesize stackView=_stackView;
@property __weak NSTextField *errorTextField; // @synthesize errorTextField=_errorTextField;
@property __weak NSImageView *errorIconImageView; // @synthesize errorIconImageView=_errorIconImageView;
@property __weak NSButton *enterPassphraseButton; // @synthesize enterPassphraseButton=_enterPassphraseButton;
@property __weak NSView *enterPassphraseView; // @synthesize enterPassphraseView=_enterPassphraseView;
@property __weak NSView *errorView; // @synthesize errorView=_errorView;
@property __weak NSView *privateKeyView; // @synthesize privateKeyView=_privateKeyView;
@property __weak NSView *publicKeyView; // @synthesize publicKeyView=_publicKeyView;
@property __weak NSView *generateOrNewView; // @synthesize generateOrNewView=_generateOrNewView;
@property __weak DVTCopyTextField *fingerprintField; // @synthesize fingerprintField=_fingerprintField;
@property __weak NSView *fingerprintView; // @synthesize fingerprintView=_fingerprintView;
@property __weak DVTFilePathField *sshFilePrivateKeyPathField; // @synthesize sshFilePrivateKeyPathField=_sshFilePrivateKeyPathField;
@property __weak DVTCopyTextField *sshFilePublicKeyField; // @synthesize sshFilePublicKeyField=_sshFilePublicKeyField;
@property(nonatomic) __weak id <IDESourceControlSSHKeyCredentialViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *URLDerivedUsername; // @synthesize URLDerivedUsername=_URLDerivedUsername;
- (void).cxx_destruct;
- (void)viewDidLoad;
@property(retain, nonatomic) DVTSourceControlSSHKeysAuthenticationStrategy *sshKeysAuthStrategy;
- (void)DVTFilePathFieldCell:(id)arg1 chooserSelectedPath:(id)arg2;
- (void)setEnableFields:(BOOL)arg1;
- (void)_openSSHKeyPassphraseValidationSheet:(id)arg1;
- (void)existingSSHKeyClick:(id)arg1;
- (void)newSSHKeyClick:(id)arg1;
- (void)enterPassphraseClick:(id)arg1;
- (void)_didSetSSHKeyAuthenticationStrategy:(id)arg1 validationError:(id)arg2;
- (void)_displayErrorWithText:(id)arg1;
- (void)_validateSSHKey;
- (id)hashedPublicKey:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)updateFingerprintFieldForPublicKey:(id)arg1;
- (void)_updateViewHeight;
@property(readonly, nonatomic) double viewHeight;
- (void)_reloadSSHKeyFields;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

