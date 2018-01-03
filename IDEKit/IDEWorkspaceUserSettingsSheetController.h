//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTFilePathFieldCellDelegate-Protocol.h>
#import <IDEKit/IDEBuildFolderLocationSheetControllerDelegate-Protocol.h>

@class DVTBorderedView, DVTFilePathField, IDEWorkspace, NSButton, NSMenuItem, NSString, NSTextField, NSWindow;

@interface IDEWorkspaceUserSettingsSheetController : IDEViewController <IDEBuildFolderLocationSheetControllerDelegate, DVTFilePathFieldCellDelegate>
{
    NSWindow *_sheetWindow;
    NSButton *_doneButton;
    DVTBorderedView *_sharedBorderedView;
    DVTBorderedView *_borderedView;
    NSWindow *_hostWindow;
    CDUnknownBlockType _completionBlock;
    BOOL _didSheetEnd;
    NSString *_derivedDataCustomLocation;
    int _derivedDataLocationStyle;
    int _buildLocationStyle;
    NSString *_sharedBuildFolderName;
    int _customBuildLocationType;
    NSString *_customBuildProductsPath;
    NSString *_customBuildIntermediatesPath;
    BOOL _liveSourceIssuesEnabled;
    int _issueFilterStyle;
    IDEWorkspace *_workspace;
    NSMenuItem *_workspaceRelativePathTypePopUpMenuItem;
    DVTFilePathField *_derivedDataFilePathField;
    NSTextField *_derivedDataRelativePathField;
    DVTFilePathField *_derivedDataPathLabel;
    NSTextField *_sheetSharedTitleLabel;
    NSTextField *_sheetTitleLabel;
    BOOL _enabledFullIndexStoreVisibility;
    int _buildSystemType;
    int _sharedBuildSystemType;
    NSString *_customIndexStorePath;
}

+ (id)keyPathsForValuesAffectingDerivedDataWorkspaceRelativeLocation;
+ (id)keyPathsForValuesAffectingUseCustomLocation;
+ (id)keyPathsForValuesAffectingDerivedDataLocationChoice;
+ (id)keyPathsForValuesAffectingSelectedTabChoices;
+ (void)runSheetForWindow:(id)arg1;
+ (void)beginSheetForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property int sharedBuildSystemType; // @synthesize sharedBuildSystemType=_sharedBuildSystemType;
@property int buildSystemType; // @synthesize buildSystemType=_buildSystemType;
@property int issueFilterStyle; // @synthesize issueFilterStyle=_issueFilterStyle;
@property BOOL liveSourceIssuesEnabled; // @synthesize liveSourceIssuesEnabled=_liveSourceIssuesEnabled;
@property BOOL enabledFullIndexStoreVisibility; // @synthesize enabledFullIndexStoreVisibility=_enabledFullIndexStoreVisibility;
@property(copy) NSString *customIndexStorePath; // @synthesize customIndexStorePath=_customIndexStorePath;
@property(copy) NSString *customBuildIntermediatesPath; // @synthesize customBuildIntermediatesPath=_customBuildIntermediatesPath;
@property(copy) NSString *customBuildProductsPath; // @synthesize customBuildProductsPath=_customBuildProductsPath;
@property int customBuildLocationType; // @synthesize customBuildLocationType=_customBuildLocationType;
@property(copy) NSString *sharedBuildFolderName; // @synthesize sharedBuildFolderName=_sharedBuildFolderName;
@property int buildLocationStyle; // @synthesize buildLocationStyle=_buildLocationStyle;
@property(copy) NSString *derivedDataCustomLocation; // @synthesize derivedDataCustomLocation=_derivedDataCustomLocation;
@property int derivedDataLocationStyle; // @synthesize derivedDataLocationStyle=_derivedDataLocationStyle;
@property(retain) NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
- (void).cxx_destruct;
- (id)currentDerivedDataFolderPath;
- (void)buildFolderLocationSheetDidEndWithBuildLocationStyle:(int)arg1 sharedBuildFolderName:(id)arg2 customBuildLocationType:(int)arg3 customBuildProductsPath:(id)arg4 customBuildIntermediatesPath:(id)arg5 customIndexStorePath:(id)arg6 enabledFullIndexStoreVisibility:(BOOL)arg7;
- (void)showBuildFolderLocationSheet:(id)arg1;
- (id)DVTFilePathFieldCell:(id)arg1 resolvedPathForPath:(id)arg2;
- (void)_updateDerivedDataPathLabelForSelectedLocationStyle;
- (void)_updatePathLabelsForSelectedLocationStyles;
- (BOOL)validateSnapshotCustomLocation:(id *)arg1 error:(id *)arg2;
- (BOOL)validateDerivedDataCustomLocation:(id *)arg1 error:(id *)arg2;
@property(readonly) NSString *derivedDataWorkspaceRelativeLocation;
- (id)snapshotDefaultLocation;
@property(readonly) NSString *derivedDataFolderDefaultLocation;
@property(readonly) BOOL useCustomLocation;
@property int derivedDataLocationChoice;
@property int buildSystemChoice;
@property int sharedBuildSystemChoice;
@property(retain) IDEWorkspace *workspace;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)_updateDerivedDataCustomLocationFieldForPathType;
- (void)_updateCustomLocationFieldsForPathTypes;
- (void)sheetDoneAction:(id)arg1;
- (void)_userSettingsSheetDidEndWithReturnCode:(long long)arg1;
- (void)_saveChangesToUserSettings;
- (void)_beginSheetForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

