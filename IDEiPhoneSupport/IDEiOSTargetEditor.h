//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEiPhoneSupport/DVTInfoPlistValueCellDelegate-Protocol.h>
#import <IDEiPhoneSupport/IDECapsuleListViewDataSource-Protocol.h>

@class DVTChoice, DVTObservingToken, DVTStackView_ML, IDECapsuleListView, IDEProvisioningSettingsTargetEditorViewControllersManager, IDEiOSIconsAndLaunchImagesViewController, NSArray, NSBox, NSButton, NSColor, NSComboBox, NSDictionary, NSMutableArray, NSPopUpButton, NSString, NSTextField, NSView, Xcode3TargetEditor;
@protocol IDECapsuleViewController;

@interface IDEiOSTargetEditor : IDEViewController <DVTInfoPlistValueCellDelegate, IDECapsuleListViewDataSource>
{
    DVTChoice *_selectedDeviceTab;
    NSArray *_imageSections;
    IDECapsuleListView *_capsuleList;
    NSView *_identityFields;
    NSTextField *_displayNameField;
    NSTextField *_displayNameLabel;
    NSPopUpButton *_targetDevicePopup;
    NSPopUpButton *_userInterfaceStylePopup;
    NSComboBox *_deploymentOSCombo;
    NSTextField *_targetIdentifierField;
    IDEViewController<IDECapsuleViewController> *_identityViewController;
    IDEViewController<IDECapsuleViewController> *_standardDeploymentInfoViewController;
    IDEViewController<IDECapsuleViewController> *_imageViewController;
    IDEViewController *_complicationsConfigurationViewController;
    DVTStackView_ML *_deploymentInfoStackView;
    NSBox *_universalSeparatorLine1;
    NSBox *_universalSeparatorLine2;
    NSView *_deploymentInfoDeviceFamilyView;
    NSView *_deploymentInfoDevicePickerView;
    NSView *_deploymentInfoUniversalEndcap;
    NSView *_deploymentInfoiPhoneView;
    NSView *_deploymentInfoiPadView;
    NSView *_deploymentInfoAppExtensionView;
    NSView *_deploymentInfoUserInterfaceStyleView;
    DVTStackView_ML *_identityStack;
    DVTStackView_ML *_deploymentTargetDeviceFamilyStack;
    NSView *_deploymentTargetDeviceFamilyStack_deploymentTarget;
    NSView *_deploymentTargetDeviceFamilyStack_deviceFamily;
    DVTStackView_ML *_iPhoneDeploymentInfoStack;
    NSView *_iPhoneDeploymentInfoStack_mainInterface;
    NSView *_iPhoneDeploymentInfoStack_deviceOrientation;
    NSView *_iPhoneDeploymentInfoStack_statusBarStyle;
    NSView *_iPhoneDeploymentInfoStack_statusBarHiding;
    NSView *_iPhoneDeploymentInfoStack_requireFullScreen;
    NSView *_iPhoneDeploymentInfoStack_spacer;
    IDEViewController<IDECapsuleViewController> *_frameworksViewController;
    IDEViewController<IDECapsuleViewController> *_embeddedBinariesViewController;
    IDEViewController<IDECapsuleViewController> *_packagesViewController;
    NSView *_chooseInfoPListView;
    NSButton *_chooseInfoPlistButton;
    NSTextField *_chooseInfoPlistLabel;
    NSView *_originalIdentityContentView;
    NSMutableArray *_subviewControllers;
    IDEiOSIconsAndLaunchImagesViewController *_iconsViewController;
    IDEiOSIconsAndLaunchImagesViewController *_launchImagesViewController;
    BOOL _iPhoneStatusBarTintingAvailable;
    BOOL _iPhoneStatusBarTintingCustom;
    BOOL _iPhoneStatusBarTintingShowImage;
    BOOL _extensionWantsAppIcons;
    BOOL _extensionWantsLaunchImages;
    BOOL _subviewControllersNeedsRefresh;
    Xcode3TargetEditor *_targetViewController;
    NSDictionary *_iconFilePathSetsByIconBaseName;
    NSArray *_targetIconFiles;
    NSString *_iPhoneStatusBarTintingStyle;
    NSColor *_iPhoneStatusBarTintingColor;
    NSString *_iPhoneStatusBarTintingImage;
    unsigned long long _selectedDeploymentInfoDeviceFamily;
    DVTStackView_ML *_imageStack;
    NSButton *_iPhoneDeploymentInfoButton;
    NSButton *_iPadDeploymentInfoButton;
    NSView *_appExtensionAPISlice;
    NSBox *_appExtensionAPISliceSeparator;
    NSBox *_appExtensionSliceSeparator;
    NSView *_targetLaunchScreenFileSlice;
    IDEProvisioningSettingsTargetEditorViewControllersManager *_provisioningSettingsTargetEditorViewControllersManager;
    DVTObservingToken *_provisioningSettingsTargetEditorViewControllersObserver;
}

+ (id)keyPathsForValuesAffectingTargetIdentifier;
+ (BOOL)isPrimaFacieValidVersionString:(id)arg1;
+ (id)keyPathsForValuesAffectingIPadStatusBarHidden;
+ (id)keyPathsForValuesAffectingIPhoneStatusBarHidden;
+ (id)keyPathsForValuesAffectingRequiresFullScreen;
+ (id)keyPathsForValuesAffectingTargetUserInterfaceStyle;
+ (id)keyPathsForValuesAffectingIPhoneStatusBarStyle;
+ (id)duplicateTarget:(id)arg1 withTargetController:(Class)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)keyPathsForValuesAffectingSelectedDeviceTabs;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property(retain, nonatomic) DVTObservingToken *provisioningSettingsTargetEditorViewControllersObserver; // @synthesize provisioningSettingsTargetEditorViewControllersObserver=_provisioningSettingsTargetEditorViewControllersObserver;
@property(retain, nonatomic) IDEProvisioningSettingsTargetEditorViewControllersManager *provisioningSettingsTargetEditorViewControllersManager; // @synthesize provisioningSettingsTargetEditorViewControllersManager=_provisioningSettingsTargetEditorViewControllersManager;
@property BOOL subviewControllersNeedsRefresh; // @synthesize subviewControllersNeedsRefresh=_subviewControllersNeedsRefresh;
@property(nonatomic) BOOL extensionWantsLaunchImages; // @synthesize extensionWantsLaunchImages=_extensionWantsLaunchImages;
@property(nonatomic) BOOL extensionWantsAppIcons; // @synthesize extensionWantsAppIcons=_extensionWantsAppIcons;
@property(retain) NSView *targetLaunchScreenFileSlice; // @synthesize targetLaunchScreenFileSlice=_targetLaunchScreenFileSlice;
@property(retain) NSBox *appExtensionSliceSeparator; // @synthesize appExtensionSliceSeparator=_appExtensionSliceSeparator;
@property(retain) NSBox *appExtensionAPISliceSeparator; // @synthesize appExtensionAPISliceSeparator=_appExtensionAPISliceSeparator;
@property(retain) NSView *appExtensionAPISlice; // @synthesize appExtensionAPISlice=_appExtensionAPISlice;
@property(retain, nonatomic) NSButton *iPadDeploymentInfoButton; // @synthesize iPadDeploymentInfoButton=_iPadDeploymentInfoButton;
@property(retain, nonatomic) NSButton *iPhoneDeploymentInfoButton; // @synthesize iPhoneDeploymentInfoButton=_iPhoneDeploymentInfoButton;
@property(retain) DVTStackView_ML *imageStack; // @synthesize imageStack=_imageStack;
@property(nonatomic) unsigned long long selectedDeploymentInfoDeviceFamily; // @synthesize selectedDeploymentInfoDeviceFamily=_selectedDeploymentInfoDeviceFamily;
@property(copy) NSString *iPhoneStatusBarTintingImage; // @synthesize iPhoneStatusBarTintingImage=_iPhoneStatusBarTintingImage;
@property(copy) NSColor *iPhoneStatusBarTintingColor; // @synthesize iPhoneStatusBarTintingColor=_iPhoneStatusBarTintingColor;
@property(copy) NSString *iPhoneStatusBarTintingStyle; // @synthesize iPhoneStatusBarTintingStyle=_iPhoneStatusBarTintingStyle;
@property(nonatomic) BOOL iPhoneStatusBarTintingShowImage; // @synthesize iPhoneStatusBarTintingShowImage=_iPhoneStatusBarTintingShowImage;
@property(nonatomic) BOOL iPhoneStatusBarTintingCustom; // @synthesize iPhoneStatusBarTintingCustom=_iPhoneStatusBarTintingCustom;
@property(readonly) BOOL iPhoneStatusBarTintingAvailable; // @synthesize iPhoneStatusBarTintingAvailable=_iPhoneStatusBarTintingAvailable;
@property(copy) NSArray *targetIconFiles; // @synthesize targetIconFiles=_targetIconFiles;
@property(retain, nonatomic) NSDictionary *iconFilePathSetsByIconBaseName; // @synthesize iconFilePathSetsByIconBaseName=_iconFilePathSetsByIconBaseName;
@property(retain, nonatomic) Xcode3TargetEditor *targetViewController; // @synthesize targetViewController=_targetViewController;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)capsuleListView:(id)arg1 viewControllerForRow:(long long)arg2;
- (long long)numberOfObjectsInCapsuleListView:(id)arg1;
- (id)infoPlistValueCell:(id)arg1 expandedValueForString:(id)arg2;
- (void)startObservations;
- (void)refreshAppIconsAndLaunchImages;
- (BOOL)_shouldShowLaunchImages;
- (BOOL)_shouldShowAppIcons;
- (void)convertToAssetCatalogFromIconsAndLaunchImagesViewController:(id)arg1;
- (void)showLaunchImageAlertForImageName:(id)arg1;
- (void)deploymentOSChanged:(id)arg1;
@property(readonly) id headerFont;
@property(copy) NSArray *targetIPadOrientations;
@property(copy) NSArray *targetIPhoneOrientations;
@property(readonly) BOOL supportsDeviceOrientations;
@property(copy) NSString *targetLaunchScreenFile;
@property(copy) NSString *targetAppExtensionInterface;
@property(copy) NSString *targetiPadInterface;
@property(copy) NSString *targetiPhoneInterface;
- (void)_setInterfaceFileName:(id)arg1 forInterfaceKeysWithDeviceExtension:(id)arg2;
- (id)_targetIPadNib;
- (id)_targetIPadStoryboard;
- (id)_targetIPhoneNib;
- (id)_targetIPhoneStoryboard;
- (void)setTargetBuildVersion:(id)arg1;
- (id)targetBuildVersion;
@property(copy) NSString *targetVersion;
@property(copy) NSString *targetIdentifier;
@property BOOL allowAppExtensionAPIOnly;
- (void)setTargetDisplayName:(id)arg1;
@property(copy) NSString *targetDeploymentOS;
- (id)targetDisplayName;
@property(copy) NSString *targetDevice;
@property BOOL iPadStatusBarHidden;
@property BOOL iPhoneStatusBarHidden;
@property(nonatomic) BOOL requiresFullScreen;
- (BOOL)supportsRequireFullScreen;
@property(copy) NSString *targetUserInterfaceStyle;
@property(readonly) BOOL supportsUIUserInterfaceStyle;
@property(readonly) BOOL supportsUIStatusBarHidden;
@property(copy) NSString *iPhoneStatusBarStyle;
@property(readonly) BOOL supportsUIStatusBarStyle;
- (void)pickInfoPlistFile:(id)arg1;
- (id)deploymentOSVersions;
@property BOOL iPadLandscape2;
@property BOOL iPadPortrait2;
@property BOOL iPadLandscape;
@property BOOL iPadPortrait;
@property BOOL iPhoneLandscape2;
@property BOOL iPhonePortrait2;
@property BOOL iPhoneLandscape;
@property BOOL iPhonePortrait;
- (void)_updateDeploymentInfoStackView;
- (void)userInterfaceStyleChanged:(id)arg1;
- (void)targetDeviceChanged:(id)arg1;
- (void)removeOrientation:(id)arg1 forDevice:(id)arg2;
- (void)setOrientation:(id)arg1 forDevice:(id)arg2;
- (void)_didChangeValuesForKeysFromTargetViewControllerChange;
- (void)_willChangeValuesForKeysFromTargetViewControllerChange;
- (id)xcode3Target;
- (id)subviewControllers;
- (_Bool)appleTVTargeted;
@property(readonly) BOOL iPadTargeted;
@property(readonly) BOOL iPhoneTargeted;
- (BOOL)_targetsDeviceWithID:(id)arg1;
@property(readonly) int appIconImageType;
@property(readonly) BOOL supportsTargetDeviceFamily;
- (void)selectiPadDeploymentInfo:(id)arg1;
- (void)selectiPhoneDeploymentInfo:(id)arg1;
- (void)refreshExtensionBasedProperties;
- (void)setIPadDisclosed:(BOOL)arg1;
- (void)setIPhoneDisclosed:(BOOL)arg1;
- (void)viewWillUninstall;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

