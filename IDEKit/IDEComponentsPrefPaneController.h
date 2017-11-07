//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTDownloadableManager, DVTReplacementView, DVTTabChooserView, DVTToolchainRegistry, NSArray, NSButton, NSProgressIndicator;

@interface IDEComponentsPrefPaneController : IDEViewController
{
    NSArray *_simulatorsDownloadables;
    NSProgressIndicator *_progressIndicator;
    NSButton *_checkAndInstallNowButton;
    DVTDownloadableManager *_downloadableManager;
    DVTToolchainRegistry *_toolchainRegistry;
    DVTBorderedView *_borderedView;
    DVTTabChooserView *_tabChooserView;
    DVTReplacementView *_replacementView;
}

+ (id)showToolchainsAndSwitchToToolchain:(id)arg1;
+ (id)showToolchains;
+ (id)showDownloads;
+ (id)showSimulators;
+ (id)showTabWithTitle:(id)arg1;
+ (void)showPrefPane;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(retain) DVTTabChooserView *tabChooserView; // @synthesize tabChooserView=_tabChooserView;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) DVTToolchainRegistry *toolchainRegistry; // @synthesize toolchainRegistry=_toolchainRegistry;
@property(retain) DVTDownloadableManager *downloadableManager; // @synthesize downloadableManager=_downloadableManager;
@property(retain) NSButton *checkAndInstallNowButton; // @synthesize checkAndInstallNowButton=_checkAndInstallNowButton;
@property(retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain) NSArray *simulatorsDownloadables; // @synthesize simulatorsDownloadables=_simulatorsDownloadables;
- (void).cxx_destruct;
- (void)revertStateWithDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)checkAndInstallUpdates:(id)arg1;
- (void)_stopUpdateActivityUI;
- (void)_showUpdateActivityUI;
- (void)primitiveInvalidate;
- (void)_initTabChooserView:(id)arg1;
- (void)loadView;

@end

