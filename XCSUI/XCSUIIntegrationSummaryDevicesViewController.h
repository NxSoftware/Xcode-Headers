//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DVTKit/DVTViewController.h>

#import <XCSUI/NSTableViewDataSource-Protocol.h>
#import <XCSUI/NSTableViewDelegate-Protocol.h>

@class DVTLozengeTextField, DVTTableView, NSString, NSTextField, NSView, XCSIntegration, XCSUIInsetHorizontalDividerLine;

@interface XCSUIIntegrationSummaryDevicesViewController : DVTViewController <NSTableViewDataSource, NSTableViewDelegate>
{
    XCSIntegration *_integration;
    DVTTableView *_devicesTableView;
    NSTextField *_devicesTextField;
    NSTextField *_totalTestsTextField;
    NSTextField *_testsPassedTextField;
    NSTextField *_testsFailedTextField;
    DVTLozengeTextField *_noDevicesLozenge;
    NSView *_deviceDetailsView;
    NSView *_deviceBadgesView;
    XCSUIInsetHorizontalDividerLine *_topDividerLine;
}

@property __weak XCSUIInsetHorizontalDividerLine *topDividerLine; // @synthesize topDividerLine=_topDividerLine;
@property __weak NSView *deviceBadgesView; // @synthesize deviceBadgesView=_deviceBadgesView;
@property __weak NSView *deviceDetailsView; // @synthesize deviceDetailsView=_deviceDetailsView;
@property __weak DVTLozengeTextField *noDevicesLozenge; // @synthesize noDevicesLozenge=_noDevicesLozenge;
@property __weak NSTextField *testsFailedTextField; // @synthesize testsFailedTextField=_testsFailedTextField;
@property __weak NSTextField *testsPassedTextField; // @synthesize testsPassedTextField=_testsPassedTextField;
@property __weak NSTextField *totalTestsTextField; // @synthesize totalTestsTextField=_totalTestsTextField;
@property __weak NSTextField *devicesTextField; // @synthesize devicesTextField=_devicesTextField;
@property __weak DVTTableView *devicesTableView; // @synthesize devicesTableView=_devicesTableView;
@property(retain, nonatomic) XCSIntegration *integration; // @synthesize integration=_integration;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (BOOL)selectionShouldChangeInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)refreshUI;
- (void)removeAllTableColumns;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

