//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEActionSliceViewController.h"

#import "DVTSourceTextViewDelegate.h"
#import "DVTTextStorageDelegate.h"

@class DVTNotificationToken, DVTScriptSourceTextView, IDEShellScriptExecutionAction, NSDictionary, NSPopUpButton, NSScrollView, NSString, NSTextField;

@interface IDEShellScriptExecutionActionViewController : IDEActionSliceViewController <DVTSourceTextViewDelegate, DVTTextStorageDelegate>
{
    DVTScriptSourceTextView *_sourceView;
    NSScrollView *_sourceScrollView;
    NSTextField *_shellTextField;
    NSPopUpButton *_targetBuildSettingProviderPopUp;
    BOOL _willRebuild;
    DVTNotificationToken *_frameChangeToken;
    id <DVTCancellable> _rebuildToken;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_updateTargetBuildSettingProviderPopUp;
- (id)_iconForBuildable:(id)arg1;
- (void)_targetBuildSettingProviderSelected:(id)arg1;
- (void)_updateTargetBuildSettingProviderPopUpSelection;
- (void)_reallyRebuildLayout;
- (void)_rebuildLayout;
- (void)viewWillUninstall;
- (void)viewFrameChanged:(id)arg1;
- (void)textStorageDidProcessEditing:(id)arg1;
- (void)awakeFromNib;
@property(readonly) IDEShellScriptExecutionAction *scriptAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *sourceLanguageServiceContext;
@property(readonly) Class superclass;

@end

