//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/NSTokenFieldDelegate-Protocol.h>
#import <XCSUI/XCSUICreateBotTriggerChildViewController-Protocol.h>
#import <XCSUI/XCSUIScheduleViewControllerDelegate-Protocol.h>

@class NSButton, NSString, NSTextField, NSTokenField, NSView, NSWindow, XCSTrigger, XCSUIBotDefinitionContext, XCSUICreateBotTriggerConditionsViewController, XCSUIScheduleViewController, XCSUITriggerCommitterOptionsViewController;

@interface XCSUICreateBotEmailNotificationsViewController : IDEViewController <XCSUIScheduleViewControllerDelegate, NSTokenFieldDelegate, XCSUICreateBotTriggerChildViewController>
{
    XCSTrigger *_trigger;
    NSString *_defaultFromAddress;
    NSWindow *_emailOptionsSheet;
    XCSUITriggerCommitterOptionsViewController *_committerOptionsViewController;
    XCSUIScheduleViewController *_scheduleViewController;
    XCSUICreateBotTriggerConditionsViewController *_conditionsViewController;
    XCSUIBotDefinitionContext *_botDefinitionContext;
    NSButton *_sendToCommittersCheckbox;
    NSTokenField *_emailTokenField;
    NSButton *_includeIssueBreakdownsCheckbox;
    NSButton *_includeCommitMessagesCheckbox;
    NSTextField *_fromAddressTextField;
    NSTokenField *_ccAddressTokenField;
    NSTextField *_replyToAddressTextField;
    NSButton *_includeBotConfigurationCheckbox;
    NSButton *_includeIssueFoundBotConfigurationCheckbox;
    NSButton *_includeLogsCheckbox;
    NSButton *_includeIntegrationLogsCheckbox;
    NSButton *_includeResolvedIssuesCheckbox;
    NSView *_scheduleContainerView;
    NSView *_scheduleSectionView;
    NSView *_toFieldForNewIssues;
    NSView *_sendToView;
    NSView *_sendFromView;
    NSView *_includeInEmailsView;
    NSView *_includeInReportsView;
    NSView *_conditionsContainerView;
    NSView *_optionsView;
}

@property __weak NSView *optionsView; // @synthesize optionsView=_optionsView;
@property __weak NSView *conditionsContainerView; // @synthesize conditionsContainerView=_conditionsContainerView;
@property __weak NSView *includeInReportsView; // @synthesize includeInReportsView=_includeInReportsView;
@property __weak NSView *includeInEmailsView; // @synthesize includeInEmailsView=_includeInEmailsView;
@property __weak NSView *sendFromView; // @synthesize sendFromView=_sendFromView;
@property __weak NSView *sendToView; // @synthesize sendToView=_sendToView;
@property __weak NSView *toFieldForNewIssues; // @synthesize toFieldForNewIssues=_toFieldForNewIssues;
@property __weak NSView *scheduleSectionView; // @synthesize scheduleSectionView=_scheduleSectionView;
@property __weak NSView *scheduleContainerView; // @synthesize scheduleContainerView=_scheduleContainerView;
@property __weak NSButton *includeResolvedIssuesCheckbox; // @synthesize includeResolvedIssuesCheckbox=_includeResolvedIssuesCheckbox;
@property __weak NSButton *includeIntegrationLogsCheckbox; // @synthesize includeIntegrationLogsCheckbox=_includeIntegrationLogsCheckbox;
@property __weak NSButton *includeLogsCheckbox; // @synthesize includeLogsCheckbox=_includeLogsCheckbox;
@property __weak NSButton *includeIssueFoundBotConfigurationCheckbox; // @synthesize includeIssueFoundBotConfigurationCheckbox=_includeIssueFoundBotConfigurationCheckbox;
@property __weak NSButton *includeBotConfigurationCheckbox; // @synthesize includeBotConfigurationCheckbox=_includeBotConfigurationCheckbox;
@property __weak NSTextField *replyToAddressTextField; // @synthesize replyToAddressTextField=_replyToAddressTextField;
@property __weak NSTokenField *ccAddressTokenField; // @synthesize ccAddressTokenField=_ccAddressTokenField;
@property __weak NSTextField *fromAddressTextField; // @synthesize fromAddressTextField=_fromAddressTextField;
@property(nonatomic) __weak NSButton *includeCommitMessagesCheckbox; // @synthesize includeCommitMessagesCheckbox=_includeCommitMessagesCheckbox;
@property(nonatomic) __weak NSButton *includeIssueBreakdownsCheckbox; // @synthesize includeIssueBreakdownsCheckbox=_includeIssueBreakdownsCheckbox;
@property(nonatomic) __weak NSTokenField *emailTokenField; // @synthesize emailTokenField=_emailTokenField;
@property(nonatomic) __weak NSButton *sendToCommittersCheckbox; // @synthesize sendToCommittersCheckbox=_sendToCommittersCheckbox;
@property(retain, nonatomic) XCSUIBotDefinitionContext *botDefinitionContext; // @synthesize botDefinitionContext=_botDefinitionContext;
@property(readonly) XCSUICreateBotTriggerConditionsViewController *conditionsViewController; // @synthesize conditionsViewController=_conditionsViewController;
@property(readonly) XCSUIScheduleViewController *scheduleViewController; // @synthesize scheduleViewController=_scheduleViewController;
- (void).cxx_destruct;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (void)_showEmailContactCard:(id)arg1;
- (BOOL)tokenField:(id)arg1 writeRepresentedObjects:(id)arg2 toPasteboard:(id)arg3;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(long long)arg3 indexOfSelectedItem:(long long *)arg4;
- (id)_quoteDisplayNameIfNeeded:(id)arg1;
- (id)_displayNameFromProperties:(id)arg1;
- (id)_personForEmailString:(id)arg1;
- (id)_personForEmailAddress:(id)arg1;
- (id)_emailAddressFromString:(id)arg1;
- (void)scheduleHasChanged;
- (void)listenForServerChanges;
- (BOOL)validateEmail:(id)arg1;
- (id)validateDomainEmails:(id)arg1;
- (void)updateDefaultFromAddress;
- (void)showCommitterOptionsSheet:(id)arg1;
- (void)commitChanges:(id)arg1;
- (void)saveTrigger;
@property(retain) XCSTrigger *trigger;
- (void)updateReplyToAddressField;
- (void)updateFromAddressField;
- (void)updateViewsForNewIssueFound;
- (void)updateViewsForDigestReport;
- (id)titleForDisplay;
- (void)updateLayoutBasedOnServerVersion;
- (void)updateLayout:(unsigned long long)arg1;
- (void)viewWillUninstall;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
