//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/DVTToggleSwitchAuthorizatonDelegate-Protocol.h>

@class DVTBorderedView, DVTReplacementView, DVTTabChooserView, DVTToggleSwitch, NSArray, NSImage, NSImageView, NSProgressIndicator, NSString, NSTextField, NSView, XCSUIAuthorizationViewHelper, XCSXPCACLPayload, XCSXPCSettingsPayload, _TtC17XCSAdministration21AdministrationSession, _TtC5XCSUI23XCSUIInitializeProgress, _TtC5XCSUI27XCSUISelectBuildServiceUser, _TtC5XCSUI9XPCClient;

__attribute__((visibility("hidden")))
@interface _TtC5XCSUI8PrefPane : IDEViewController <DVTToggleSwitchAuthorizatonDelegate>
{
    // Error parsing type: , name: toggleSwitchView
    // Error parsing type: , name: statusField
    // Error parsing type: , name: statusImageView
    // Error parsing type: , name: progressHostView
    // Error parsing type: , name: progressSpinner
    // Error parsing type: , name: borderedView
    // Error parsing type: , name: tabChooserView
    // Error parsing type: , name: replacement
    // Error parsing type: , name: saveProgress
    // Error parsing type: , name: savingLabel
    // Error parsing type: , name: authViewHelper
    // Error parsing type: , name: buildServiceUserController
    // Error parsing type: , name: progressController
    // Error parsing type: , name: fetchedSettings
    // Error parsing type: , name: fetchedPermissions
    // Error parsing type: , name: buildServiceUser
    // Error parsing type: , name: serviceDataLocation
    // Error parsing type: , name: compatibility
    // Error parsing type: , name: adminSession
    // Error parsing type: , name: toggleSwitch
    // Error parsing type: , name: requestManager
    // Error parsing type: , name: workspaceSessionBecameActive
    // Error parsing type: , name: workspaceSessionResignedActive
    // Error parsing type: , name: isAttemptingUpgrade
    // Error parsing type: , name: choices.storage
    // Error parsing type: , name: emptyChoices.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)hideProgressView;
- (void)presentWithError:(id)arg1;
- (void)showLogInBuildServiceUserAlertWithBuildServiceUser:(id)arg1;
- (void)updateStatusUIWithServiceEnabled:(BOOL)arg1;
@property(nonatomic, readonly) NSImage *statusPartiallyAvailableImage;
@property(nonatomic, readonly) NSImage *statusUnavailableImage;
@property(nonatomic, readonly) NSImage *statusAvailableImage;
@property(nonatomic, readonly) NSString *statusUnavailable;
@property(nonatomic, readonly) NSString *statusOnlineLoggedOut;
@property(nonatomic, readonly) NSString *statusAvailable;
- (void)refreshActivePane;
- (void)installViewForSelectedTabAndRefresh;
- (void)touchServiceAndRefreshWithFinished:(CDUnknownBlockType)arg1;
- (void)handleBuildServiceChooserWithResponse:(long long)arg1;
- (void)changeBuildServiceUser;
- (void)startService;
- (void)showBuildServiceChooserAndStartService;
- (void)authGuardedControlsWithEnable:(BOOL)arg1;
@property(nonatomic, readonly) BOOL isAuthorized;
- (void)setUpAuthView;
- (void)viewDidLoad;
@property(nonatomic, copy) NSArray *emptyChoices;
@property(nonatomic, copy) NSArray *choices;
- (void)attemptUpgrade;
@property(nonatomic) BOOL isAttemptingUpgrade; // @synthesize isAttemptingUpgrade;
- (void)listenForNewWorkspaceSessions;
@property(nonatomic, copy) id workspaceSessionResignedActive; // @synthesize workspaceSessionResignedActive;
@property(nonatomic, copy) id workspaceSessionBecameActive; // @synthesize workspaceSessionBecameActive;
@property(nonatomic, readonly) NSArray *statusControls;
- (void)enableControlsAfterSaveOperation;
- (void)disableControlsForSaveOperation;
- (void)primitiveInvalidate;
- (void)attemptAuthorizationViaToggleSwitch:(CDUnknownBlockType)arg1;
- (void)loadView;
@property(nonatomic, readonly) _TtC5XCSUI9XPCClient *requestManager; // @synthesize requestManager;
@property(nonatomic, readonly) DVTToggleSwitch *toggleSwitch; // @synthesize toggleSwitch;
@property(nonatomic, readonly) _TtC17XCSAdministration21AdministrationSession *adminSession; // @synthesize adminSession;
@property(nonatomic, copy) NSString *serviceDataLocation; // @synthesize serviceDataLocation;
@property(nonatomic, copy) NSString *buildServiceUser; // @synthesize buildServiceUser;
@property(nonatomic, retain) XCSXPCACLPayload *fetchedPermissions; // @synthesize fetchedPermissions;
@property(nonatomic, retain) XCSXPCSettingsPayload *fetchedSettings; // @synthesize fetchedSettings;
@property(nonatomic, retain) _TtC5XCSUI23XCSUIInitializeProgress *progressController; // @synthesize progressController;
@property(nonatomic, retain) _TtC5XCSUI27XCSUISelectBuildServiceUser *buildServiceUserController; // @synthesize buildServiceUserController;
@property(nonatomic, retain) XCSUIAuthorizationViewHelper *authViewHelper; // @synthesize authViewHelper;
@property(nonatomic) __weak NSTextField *savingLabel; // @synthesize savingLabel;
@property(nonatomic) __weak NSProgressIndicator *saveProgress; // @synthesize saveProgress;
@property(nonatomic) __weak DVTReplacementView *replacement; // @synthesize replacement;
@property(nonatomic) __weak DVTTabChooserView *tabChooserView; // @synthesize tabChooserView;
@property(nonatomic) __weak DVTBorderedView *borderedView; // @synthesize borderedView;
@property(nonatomic) __weak NSProgressIndicator *progressSpinner; // @synthesize progressSpinner;
@property(nonatomic) __weak DVTBorderedView *progressHostView; // @synthesize progressHostView;
@property(nonatomic) __weak NSImageView *statusImageView; // @synthesize statusImageView;
@property(nonatomic) __weak NSTextField *statusField; // @synthesize statusField;
@property(nonatomic) __weak NSView *toggleSwitchView; // @synthesize toggleSwitchView;
- (void)showFirstLaunch;
- (void)showUpgrade;
- (void)showNewer;
- (void)showConfigurationView;
- (void)showXPCError;
@property(nonatomic, readonly) BOOL isShowingConfigurationView;
- (void)checkCompatibility;
- (void)configureTabChooserView;
- (void)resetBotViewerACLWithCallback:(CDUnknownBlockType)arg1;
- (void)removeUserFromBotViewerACLWith:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addUserToBotViewerACLWith:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateBotViewerACLWith:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)removeUserFromBotCreatorACLWith:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)addUserToBotCreatorACLWith:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateBotCreatorACLWith:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateFromNameWith:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateFromAddressWith:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateReplyToNameWith:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateReplyToAddressWith:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateSMTPRelayWith:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateTimeoutWith:(double)arg1 callback:(CDUnknownBlockType)arg2;
- (void)updateSettingsWith:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)fetchServiceDataLocation;
- (void)fetchBuildServiceUserWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchPermissionsWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchSettingsWithHandler:(CDUnknownBlockType)arg1;
- (void)shutdownService;
- (void)showInitializatonWithStatus:(id)arg1 progress:(id)arg2 cancellationHandler:(CDUnknownBlockType)arg3;
- (void)reinitializeService;
- (void)finishReinitializeWith:(id)arg1;
- (void)initializeServiceWithUserName:(id)arg1;
- (void)finishInitializeWith:(id)arg1;
- (void)switchToBuildServiceUser;
- (void)isServiceEnabledWithClosure:(CDUnknownBlockType)arg1;

@end
