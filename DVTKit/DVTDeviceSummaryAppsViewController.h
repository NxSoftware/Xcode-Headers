//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <DVTKit/DVTTableViewDelegate-Protocol.h>
#import <DVTKit/NSOpenSavePanelDelegate-Protocol.h>
#import <DVTKit/NSTableViewDataSource-Protocol.h>

@class DVTBorderedView, DVTDevice, DVTDeviceSummaryAppContainerSheetController, DVTGradientImageButton, DVTGradientImagePopUpButton, DVTObservingToken, DVTTableView, NSArray, NSBox, NSString;
@protocol DVTDeviceApplicationInstaller;

@interface DVTDeviceSummaryAppsViewController : DVTViewController <DVTTableViewDelegate, NSTableViewDataSource, NSOpenSavePanelDelegate>
{
    NSArray *_appInfo;
    DVTObservingToken *_appsObservingToken;
    DVTDeviceSummaryAppContainerSheetController *_appContainerWindowController;
    BOOL _disableDeviceTriggeredUpdates;
    DVTDevice<DVTDeviceApplicationInstaller> *_device;
    DVTTableView *_appsTableView;
    DVTBorderedView *_appsTableFooterView;
    DVTGradientImageButton *_addAppButton;
    DVTGradientImageButton *_deleteAppButton;
    DVTGradientImagePopUpButton *_gearAppButton;
    NSBox *_appsSectionSeparator;
}

@property(retain) NSBox *appsSectionSeparator; // @synthesize appsSectionSeparator=_appsSectionSeparator;
@property(retain) DVTGradientImagePopUpButton *gearAppButton; // @synthesize gearAppButton=_gearAppButton;
@property(retain) DVTGradientImageButton *deleteAppButton; // @synthesize deleteAppButton=_deleteAppButton;
@property(retain) DVTGradientImageButton *addAppButton; // @synthesize addAppButton=_addAppButton;
@property(retain) DVTBorderedView *appsTableFooterView; // @synthesize appsTableFooterView=_appsTableFooterView;
@property(retain) DVTTableView *appsTableView; // @synthesize appsTableView=_appsTableView;
@property(readonly, nonatomic) DVTDevice<DVTDeviceApplicationInstaller> *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)_refreshAppsTable;
- (void)_updateAppsTableFromDevice;
- (void)replaceContainer:(id)arg1;
- (void)downloadContainer:(id)arg1;
- (void)showContainer:(id)arg1;
- (void)deleteApplications:(id)arg1;
- (void)installApplications:(id)arg1;
- (void)addApplication:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)initWithDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

