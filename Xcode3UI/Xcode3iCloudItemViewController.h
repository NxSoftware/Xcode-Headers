//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IDEKit/IDEProjectItemViewController.h>

#import <Xcode3UI/DVTTableViewDelegate-Protocol.h>
#import <Xcode3UI/NSTableViewDataSource-Protocol.h>

@class IDEAppIDItemIdentifiersTableViewController, NSButton, NSMatrix, NSMutableArray, NSString, NSView, Xcode3iCloudItemModel;

@interface Xcode3iCloudItemViewController : IDEProjectItemViewController <DVTTableViewDelegate, NSTableViewDataSource>
{
    NSMutableArray *_cancellationTokens;
    NSView *_servicesSlice;
    NSButton *_cloudKitServiceCheckBox;
    NSView *_cloudDocsSlice;
    NSView *_defaultOrCustomContainerIdentifiersSlice;
    NSMatrix *_defaultOrCustomContainerIdentifiersRadioGroup;
    long long _containerIDsTypeTag;
    NSView *_identifiersSlice;
    IDEAppIDItemIdentifiersTableViewController *_identifiersTableViewController;
    NSButton *_iCloudDashboardButton;
}

+ (id)keyPathsForValuesAffectingUsingCustomContainers;
+ (id)keyPathsForValuesAffectingContainerIdentifiersRadioGroupEnabled;
+ (id)keyPathsForValuesAffectingCloudKitEnabled;
+ (id)keyPathsForValuesAffectingCloudDocumentsEnabled;
+ (id)keyPathsForValuesAffectingKeyValueStoreEnabled;
+ (id)reorderingPasteboardType;
@property(retain) NSButton *iCloudDashboardButton; // @synthesize iCloudDashboardButton=_iCloudDashboardButton;
@property(retain) IDEAppIDItemIdentifiersTableViewController *identifiersTableViewController; // @synthesize identifiersTableViewController=_identifiersTableViewController;
@property(retain) NSView *identifiersSlice; // @synthesize identifiersSlice=_identifiersSlice;
@property(nonatomic) long long containerIDsTypeTag; // @synthesize containerIDsTypeTag=_containerIDsTypeTag;
@property(retain) NSMatrix *defaultOrCustomContainerIdentifiersRadioGroup; // @synthesize defaultOrCustomContainerIdentifiersRadioGroup=_defaultOrCustomContainerIdentifiersRadioGroup;
@property(retain) NSView *defaultOrCustomContainerIdentifiersSlice; // @synthesize defaultOrCustomContainerIdentifiersSlice=_defaultOrCustomContainerIdentifiersSlice;
@property(retain) NSView *cloudDocsSlice; // @synthesize cloudDocsSlice=_cloudDocsSlice;
@property(retain) NSButton *cloudKitServiceCheckBox; // @synthesize cloudKitServiceCheckBox=_cloudKitServiceCheckBox;
@property(retain) NSView *servicesSlice; // @synthesize servicesSlice=_servicesSlice;
- (void).cxx_destruct;
- (void)iCloudDashboardAction:(id)arg1;
@property(readonly, nonatomic, getter=isUsingCustomContainers) BOOL usingCustomContainers;
- (long long)initialValueForDefaultOrCustomContainersRadioGroupSelectedTag;
- (BOOL)isContainerIdentifiersRadioGroupEnabled;
- (void)setCloudKitEnabled:(BOOL)arg1;
- (BOOL)isCloudKitEnabled;
- (void)setCloudDocumentsEnabled:(BOOL)arg1;
- (BOOL)isCloudDocumentsEnabled;
- (void)setKeyValueStoreEnabled:(BOOL)arg1;
- (BOOL)isKeyValueStoreEnabled;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (id)headerColor;
- (id)initWithEditorItemModel:(id)arg1 portalInfoDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) Xcode3iCloudItemModel *model; // @dynamic model;
@property(readonly) Class superclass;

@end

