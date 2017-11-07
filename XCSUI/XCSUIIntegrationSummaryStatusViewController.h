//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

@class NSButton, NSTextField, NSView, XCSIntegration, XCSIntegrationIssues, XCSUIStatusBadge, XCSUIStatusBadgesView;

@interface XCSUIIntegrationSummaryStatusViewController : DVTViewController
{
    XCSUIStatusBadge *_errorsBadge;
    XCSUIStatusBadge *_warningsBadge;
    XCSUIStatusBadge *_issuesBadge;
    XCSUIStatusBadge *_testsBadge;
    id _frameChangeToken;
    XCSIntegration *_integration;
    XCSIntegrationIssues *_integrationIssues;
    XCSUIStatusBadgesView *_badgesView;
    NSView *_integrationDetailsView;
    NSButton *_integrationDetailsButton;
    NSTextField *_integrationDetailsStatusText;
    NSTextField *_integrationDetailsSchemeText;
    NSTextField *_integrationDetailsBranchText;
    NSTextField *_integrationDetailsStartTime;
    NSTextField *_integrationDetailsDurationText;
    NSTextField *_integrationDetailsConfigurationText;
    NSTextField *_integrationDetailsToolchainText;
}

@property __weak NSTextField *integrationDetailsToolchainText; // @synthesize integrationDetailsToolchainText=_integrationDetailsToolchainText;
@property __weak NSTextField *integrationDetailsConfigurationText; // @synthesize integrationDetailsConfigurationText=_integrationDetailsConfigurationText;
@property __weak NSTextField *integrationDetailsDurationText; // @synthesize integrationDetailsDurationText=_integrationDetailsDurationText;
@property __weak NSTextField *integrationDetailsStartTime; // @synthesize integrationDetailsStartTime=_integrationDetailsStartTime;
@property __weak NSTextField *integrationDetailsBranchText; // @synthesize integrationDetailsBranchText=_integrationDetailsBranchText;
@property __weak NSTextField *integrationDetailsSchemeText; // @synthesize integrationDetailsSchemeText=_integrationDetailsSchemeText;
@property __weak NSTextField *integrationDetailsStatusText; // @synthesize integrationDetailsStatusText=_integrationDetailsStatusText;
@property __weak NSButton *integrationDetailsButton; // @synthesize integrationDetailsButton=_integrationDetailsButton;
@property __weak NSView *integrationDetailsView; // @synthesize integrationDetailsView=_integrationDetailsView;
@property __weak XCSUIStatusBadgesView *badgesView; // @synthesize badgesView=_badgesView;
@property(retain, nonatomic) XCSIntegrationIssues *integrationIssues; // @synthesize integrationIssues=_integrationIssues;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (void)copyIntegrationID:(id)arg1;
- (void)toggleIntegrationID:(id)arg1;
- (id)integrationTitleString;
- (void)refreshUI;
- (void)refreshWithIntegrationIssues;
- (void)createBadges;
- (void)loadView;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

@end

